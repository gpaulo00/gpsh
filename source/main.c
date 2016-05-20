#include <main.h>

// TOP      420x240 50x30
// BOTTOM   320x240 40x30

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
    
    consoleSelect(&top);
    printf(BLUE "GP Shell v" VERSION "\n");
    printf(CYAN "Gustavo Paulo ");
    printf(YELLOW "<gustavo.paulo.segura@gmail.com>\n"); // \x1b[y;xH
    printf(GREEN "# ");
    printf(WHITE);
    
    // Main loop
    int teclado=0;
    touchPosition touch;
    
    while (aptMainLoop()) {
        //Scan all the inputs. This should be done once for each frame
        hidScanInput();
        u32 kDown = hidKeysDown();
        if (kDown & KEY_START) {break;}
        else if(kDown & KEY_B) {printf("\b \b");}
        else if(kDown & KEY_Y) { // Key Y = ABC/123
            abc(&teclado);
        } else if(kDown & KEY_X) { //Key X = Shift
            shift(&teclado);
        }
        hidTouchRead(&touch);

        keyboard(touch, &teclado);

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
