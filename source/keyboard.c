#include <main.h>

//Arreglar punto medio, cierra corchete, libra esterlina, yen, tilde, euro, \
// Testing yen, \, punto medio, cierra corchete, tilde, libra, euro

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
    else if(touchInBox(touch, 64,151, 31,30)){printf_kb("dD\x80\x5d");} //Testing
    else if(touchInBox(touch, 96,151, 31,30)){printf_kb("fF%{");}
    else if(touchInBox(touch, 128,151, 31,30)){printf_kb("gG&}");}
    else if(touchInBox(touch, 160,151, 31,30)){printf_kb("hH*<");}
    else if(touchInBox(touch, 192,151, 31,30)){printf_kb("jJ(>");}
    else if(touchInBox(touch, 224,151, 31,30)){printf_kb("kK)$");}
    else if(touchInBox(touch, 256,151, 31,30)){printf_kb("lL-\x9c");} //Testing
    else if(touchInBox(touch, 288,151, 31,30)){printf_kb("\xa4\xa5\x5c\xbe");} //Testing
    
    else if (touchInBox(touch, 0,182, 31,30)){ shift(); }
    else if (touchInBox(touch, 0,213, 62,30)){ abc(); }
    
    else if(touchInBox(touch, 32,182, 31,30)){printf_kb("zZ!\xfa");} //Testing
    else if(touchInBox(touch, 64,182, 31,30)){printf_kb("xX;-");}
    else if(touchInBox(touch, 96,182, 31,30)){printf_kb("cC:+");}
    else if(touchInBox(touch, 128,182, 31,30)){printf_kb("vV'=");}
    else if(touchInBox(touch, 160,182, 31,30)){printf_kb("bB\"_");}
    else if(touchInBox(touch, 192,182, 31,30)){printf_kb("nN?\x7e");} //Testing
    else if(touchInBox(touch, 224,182, 31,30)){printf_kb("mM/|");}

    else if(touchInBox(touch, 256,182, 62,30)){ backspace(); } //Back

    else if(touchInBox(touch, 64,213, 160,30)){printf(" "); write_kb++;}        //Space
    
    else if(touchInBox(touch, 224,213, 31,30)){printf_kb(",,..");}
    //~ else if(touchInBox(touch, 256,213, 62,30)){ }               //Enter
}
