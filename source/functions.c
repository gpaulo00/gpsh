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

void keyboard(touchPosition touch, int *kb) {
    if (touchInBox(touch, 0,120, 31,30)){printf("q");} //Letras
    else if(touchInBox(touch, 32,120, 31,30)){printf("w");}
    else if(touchInBox(touch, 64,120, 31,30)){printf("e");}
    else if(touchInBox(touch, 96,120, 31,30)){printf("r");}
    else if(touchInBox(touch, 128,120, 31,30)){printf("t");}
    else if(touchInBox(touch, 160,120, 31,30)){printf("y");}
    else if(touchInBox(touch, 192,120, 31,30)){printf("u");}
    else if(touchInBox(touch, 224,120, 31,30)){printf("i");}
    else if(touchInBox(touch, 256,120, 31,30)){printf("o");}
    else if(touchInBox(touch, 288,120, 31,30)){printf("p");}
    
    else if (touchInBox(touch, 0,151, 31,30)){printf("a");}
    else if(touchInBox(touch, 32,151, 31,30)){printf("s");}
    else if(touchInBox(touch, 64,151, 31,30)){printf("d");}
    else if(touchInBox(touch, 96,151, 31,30)){printf("f");}
    else if(touchInBox(touch, 128,151, 31,30)){printf("g");}
    else if(touchInBox(touch, 160,151, 31,30)){printf("h");}
    else if(touchInBox(touch, 192,151, 31,30)){printf("j");}
    else if(touchInBox(touch, 224,151, 31,30)){printf("k");}
    else if(touchInBox(touch, 256,151, 31,30)){printf("l");}
    else if(touchInBox(touch, 288,151, 31,30)){printf("ñ");}
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
    } else if(touchInBox(touch, 32,182, 31,30)){printf("z");}
    else if(touchInBox(touch, 64,182, 31,30)){printf("x");}
    else if(touchInBox(touch, 96,182, 31,30)){printf("c");}
    else if(touchInBox(touch, 128,182, 31,30)){printf("v");}
    else if(touchInBox(touch, 160,182, 31,30)){printf("b");}
    else if(touchInBox(touch, 192,182, 31,30)){printf("n");}
    else if(touchInBox(touch, 224,182, 31,30)){printf("m");}

    else if(touchInBox(touch, 256,182, 62,30)){printf("\b \b");}               //Back

    else if(touchInBox(touch, 64,213, 160,30)){printf(" ");}        //Space
    
    else if(touchInBox(touch, 224,151, 31,30)){printf(",");}
    //~ else if(touchInBox(touch, 256,151, 62,30)){ }               //Enter
}
