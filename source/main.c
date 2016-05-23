#include <main.h>

// TOP      420x240 50x30
// BOTTOM   320x240 40x30

// Fixed backspace bugs:
//   - The B button delete de prompt (fixed)
//   - Backspace dont delete chars   (fixed)

int main(int argc, char **argv)
{
    //gfxInitDefault();
    sf2d_init();
    
    //Set the background color
    //sf2d_set_clear_color(RGBA8(0xFF, 0xff, 0xFF, 0xFF));
 
    //sf2d_texture *dark = sf2d_create_texture_mem_RGBA8(darkrai.pixel_data, darkrai.width, darkrai.height, TEXFMT_RGBA8, SF2D_PLACE_RAM);
    sf2d_texture *min = sf2d_create_texture_mem_RGBA8(minus.pixel_data, minus.width, minus.height, TEXFMT_RGBA8, SF2D_PLACE_RAM);
    sf2d_texture *may = sf2d_create_texture_mem_RGBA8(mayus.pixel_data, mayus.width, mayus.height, TEXFMT_RGBA8, SF2D_PLACE_RAM);
    sf2d_texture *sim1 = sf2d_create_texture_mem_RGBA8(simbolos1.pixel_data, simbolos1.width, simbolos1.height, TEXFMT_RGBA8, SF2D_PLACE_RAM);
    sf2d_texture *sim2 = sf2d_create_texture_mem_RGBA8(simbolos2.pixel_data, simbolos2.width, simbolos2.height, TEXFMT_RGBA8, SF2D_PLACE_RAM);
    
    PrintConsole top;
    consoleInit(GFX_TOP, &top);
    
    //Debug mode
    #if DEBUG_MODE == 1
        PrintConsole top2, top3;
        consoleInit(GFX_TOP, &top2);
        consoleInit(GFX_TOP, &top3);
        consoleSetWindow(&top2,2,25,50,3);
        consoleSetWindow(&top3,40,0,10,5);
    #endif
    
    consoleSelect(&top);
    printf(CYAN "GP Shell v" VERSION "\n");
    printf(CYAN "Gustavo Paulo ");
    printf(YELLOW "<gustavo.paulo.segura@gmail.com>\n"); // \x1b[y;xH
    printf(WHITE);
    prompt();
    
    // Inicializar Variables
    teclado = 0;
    result = 0;
    closeApp = false;
    touchPosition touch;
    srand(time(NULL));

    write_kb = 0;
    c_size = 1;
    //~ can_delete = false;
    command = calloc(1,sizeof(char));
    if(command == NULL){
        printf(RED "Error allocating dynamic memory\n");
        closeApp=true;
    }
    while (aptMainLoop() && !closeApp) {
        //Scan all the inputs. This should be done once for each frame
        hidScanInput();
        u32 kDown = hidKeysDown();
        if (kDown & KEY_START) {break;}
        else if(kDown & KEY_B) { backspace();}       // Key B = Backspace
        else if(kDown & KEY_Y) { abc(&teclado); }       // Key Y = ABC/123
        else if(kDown & KEY_X) { shift(&teclado); }     // Key X = Shift
        else if(kDown & KEY_A) { enter(); }             // Key A = Enter
        hidTouchRead(&touch);

        keyboard(touch);

        sf2d_start_frame(GFX_BOTTOM, GFX_LEFT);
        switch(teclado){
            case 0:
                sf2d_draw_texture(min,0,120);
                break;
            case 1:
                sf2d_draw_texture(may,0,120);
                break;
            case 2:
                sf2d_draw_texture(sim1,0,120);
                break;
            case 3:
                sf2d_draw_texture(sim2,0,120);
                break;
        }
        sf2d_end_frame();
        
        #if DEBUG_MODE == 1
            consoleSelect(&top2);
            printf("\r%s;%i",command,strlen(command));
            consoleSelect(&top3);
            printf("\r%i;%i",write_kb,c_size);//,can_delete ? "true" : "false");
        #endif
        
        consoleSelect(&top);
        sf2d_swapbuffers();
    }
    //~ sf2d_free_texture(dark);
    sf2d_free_texture(min);
    sf2d_free_texture(may);
    sf2d_free_texture(sim1);
    sf2d_free_texture(sim2);
    
    sf2d_fini();
    return 0;
}
