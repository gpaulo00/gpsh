#include <main.h>

bool touchInBox(touchPosition touch, int x, int y, int w, int h){
    int tx=touch.px;
    int ty=touch.py;
    u32 kDown = hidKeysDown();
    if (kDown & KEY_TOUCH && tx > x && tx < x+w && ty > y && ty < y+h){
        return true;
    }else{
        return false;
    }
}

void printf_kb(char let[5], int kb) {
    switch(kb){
        case 0 :
            printf("%c", let[0]);
            break;
        case 1 :
            printf("%c", let[1]);
            break;
        case 2 :
            printf("%c", let[2]);
            break;
        case 3 :
            printf("%c", let[3]);
            break;
    }
}

void keyboard(touchPosition touch, int *kb) {
    if (touchInBox(touch, 0,120, 31,30)){printf_kb("qQ11", *kb);} //Letras
    else if(touchInBox(touch, 32,120, 31,30)){printf_kb("wW22", *kb);}
    else if(touchInBox(touch, 64,120, 31,30)){printf_kb("eE33", *kb);}
    else if(touchInBox(touch, 96,120, 31,30)){printf_kb("rR44", *kb);}
    else if(touchInBox(touch, 128,120, 31,30)){printf_kb("tT55", *kb);}
    else if(touchInBox(touch, 160,120, 31,30)){printf_kb("yY66", *kb);}
    else if(touchInBox(touch, 192,120, 31,30)){printf_kb("uU77", *kb);}
    else if(touchInBox(touch, 224,120, 31,30)){printf_kb("iI88", *kb);}
    else if(touchInBox(touch, 256,120, 31,30)){printf_kb("oO99", *kb);}
    else if(touchInBox(touch, 288,120, 31,30)){printf_kb("pP00", *kb);}
    
    else if (touchInBox(touch, 0,151, 31,30)){printf_kb("aA@^", *kb);}
    else if(touchInBox(touch, 32,151, 31,30)){printf_kb("sS#[", *kb);}
    else if(touchInBox(touch, 64,151, 31,30)){printf_kb("dD€]", *kb);}
    else if(touchInBox(touch, 96,151, 31,30)){printf_kb("fF%{", *kb);}
    else if(touchInBox(touch, 128,151, 31,30)){printf_kb("gG&}", *kb);}
    else if(touchInBox(touch, 160,151, 31,30)){printf_kb("hH*<", *kb);}
    else if(touchInBox(touch, 192,151, 31,30)){printf_kb("jJ(>", *kb);}
    else if(touchInBox(touch, 224,151, 31,30)){printf_kb("kK)$", *kb);}
    else if(touchInBox(touch, 256,151, 31,30)){printf_kb("lL-£", *kb);}
    else if(touchInBox(touch, 288,151, 31,30)){printf_kb("ñÑ\\¥", *kb);}
    else if (touchInBox(touch, 0,182, 31,30)){
        switch(*kb){
            case 0 :
                *kb=1;
                break;
            case 1 :
                *kb=0;
                break;
            case 2 :
                *kb=3;
                break;
            case 3 :
                *kb=2;
                break;
        }
    } else if (touchInBox(touch, 0,213, 62,30)){
        if(*kb==2 || *kb==3) { *kb=0; }
        else if(*kb==0 || *kb==1) { *kb=2; }
    } else if(touchInBox(touch, 32,182, 31,30)){printf_kb("zZ!·", *kb);}
    else if(touchInBox(touch, 64,182, 31,30)){printf_kb("xX;-", *kb);}
    else if(touchInBox(touch, 96,182, 31,30)){printf_kb("cC:+", *kb);}
    else if(touchInBox(touch, 128,182, 31,30)){printf_kb("vV'=", *kb);}
    else if(touchInBox(touch, 160,182, 31,30)){printf_kb("bB\"_", *kb);}
    else if(touchInBox(touch, 192,182, 31,30)){printf_kb("nN?~", *kb);}
    else if(touchInBox(touch, 224,182, 31,30)){printf_kb("mM/|", *kb);}

    else if(touchInBox(touch, 256,182, 62,30)){printf("\b \b");}               //Back

    else if(touchInBox(touch, 64,213, 160,30)){printf(" ");}        //Space
    
    else if(touchInBox(touch, 224,151, 31,30)){printf_kb(",,..", *kb);}
    //~ else if(touchInBox(touch, 256,151, 62,30)){ }               //Enter
}