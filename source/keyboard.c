#include <main.h>

void keyboard(touchPosition touch) {
    if (touchInBox(touch, 0,120, 31,30)){printf_kb("qQ11");} //Letras
    else if(touchInBox(touch, 32,120, 31,30)){printf_kb("wW22");}
    else if(touchInBox(touch, 64,120, 31,30)){printf_kb("eE33");}
    else if(touchInBox(touch, 96,120, 31,30)){printf_kb("rR44");}
    else if(touchInBox(touch, 128,120, 31,30)){printf_kb("tT55");}
    else if(touchInBox(touch, 160,120, 31,30)){printf_kb("yY66");}
    else if(touchInBox(touch, 192,120, 31,30)){printf_kb("uU77");}
    else if(touchInBox(touch, 224,120, 31,30)){printf_kb("iI88");}
    else if(touchInBox(touch, 256,120, 31,30)){printf_kb("oO99");}
    else if(touchInBox(touch, 288,120, 31,30)){printf_kb("pP00");}
    
    else if (touchInBox(touch, 0,151, 31,30)){printf_kb("aA@^");}
    else if(touchInBox(touch, 32,151, 31,30)){printf_kb("sS#[");}
    else if(touchInBox(touch, 64,151, 31,30)){printf_kb("dD/\x5d");}
    else if(touchInBox(touch, 96,151, 31,30)){printf_kb("fF%{");}
    else if(touchInBox(touch, 128,151, 31,30)){printf_kb("gG&}");}
    else if(touchInBox(touch, 160,151, 31,30)){printf_kb("hH*<");}
    else if(touchInBox(touch, 192,151, 31,30)){printf_kb("jJ(>");}
    else if(touchInBox(touch, 224,151, 31,30)){printf_kb("kK)$");}
    else if(touchInBox(touch, 256,151, 31,30)){printf_kb("lL-\x9c");}
    else if(touchInBox(touch, 288,151, 31,30)){printf_kb("\xa4\xa5\x5c|");}
        
    else if (touchInBox(touch, 0,182, 31,30)){ shift(); }
    else if (touchInBox(touch, 0,213, 62,30)){ abc(); }
    
    else if(touchInBox(touch, 32,182, 31,30)){printf_kb("zZ!\xfa");}
    else if(touchInBox(touch, 64,182, 31,30)){printf_kb("xX;-");}
    else if(touchInBox(touch, 96,182, 31,30)){printf_kb("cC:+");}
    else if(touchInBox(touch, 128,182, 31,30)){printf_kb("vV'=");}
    else if(touchInBox(touch, 160,182, 31,30)){printf_kb("bB\"_");}
    else if(touchInBox(touch, 192,182, 31,30)){printf_kb("nN?~");}

    else if(touchInBox(touch, 224,182, 31,30)){ // m, M or Backspace
        if(teclado==0||teclado==1){ printf_kb("mM  "); }
        else { backspace(); }
    }

    else if(touchInBox(touch, 256,182, 62,30)){ backspace(); } //Back

    else if(touchInBox(touch, 64,213, 160,30)){ printf_kb("    "); }        //Space
    
    else if(touchInBox(touch, 224,213, 31,30)){printf_kb(",,..");}
    else if(touchInBox(touch, 256,213, 62,30)){ enter(); }               //Enter
}
