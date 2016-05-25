#include <main.h>
#include <assert.h>

char *replace_str(char *str, char *orig, char *rep)
{
  static char buffer[4096];
  char *p;

  if(!(p = strstr(str, orig)))  // Is 'orig' even in 'str'?
    return str;

  strncpy(buffer, str, p-str); // Copy characters from 'str' start to 'orig' st$
  buffer[p-str] = '\0';

  sprintf(buffer+(p-str), "%s%s", rep, p+strlen(orig));

  return buffer;
}

char** str_split(char* a_str, const char a_delim) {
    char** result    = 0;
    size_t count     = 0;
    char* tmp        = a_str;
    char* last_comma = 0;
    char delim[2];
    delim[0] = a_delim;
    delim[1] = 0;

    while (*tmp)
    {
        if (a_delim == *tmp)
        {
            count++;
            last_comma = tmp;
        }
        tmp++;
    }
    count += last_comma < (a_str + strlen(a_str) - 1);
    count++;
    result = malloc(sizeof(char*) * count);
    if (result) {
        size_t idx  = 0;
        char* token = strtok(a_str, delim);
        while (token) {
            assert(idx < count);
            *(result + idx++) = strdup(token);
            token = strtok(0, delim);
        }
        assert(idx == count - 1);
        *(result + idx) = 0;
    }
    return result;
}

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
    gfxFlushBuffers();
    printf(GREEN "# ");
    gfxFlushBuffers();
    printf(WHITE);
}

//~ bool prefix(const char *pre, const char *str)
//~ {
    //~ return strncmp(pre, str, strlen(pre)) == 0;
//~ }
