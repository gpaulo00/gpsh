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

void prompt(){
    printf(GREEN "# ");
    gfxFlushBuffers();
    printf(WHITE);
}

bool prefix(const char *pre, const char *str)
{
    return strncmp(pre, str, strlen(pre)) == 0;
}

//~ char * getargs(char string[47], int lcom){
    //~ char *res;
    //~ strncpy(res,string+lcom,47-lcom);
//~ }
