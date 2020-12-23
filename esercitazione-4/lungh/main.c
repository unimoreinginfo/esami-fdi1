#include<stdint.h>

extern size_t lungh(const char* str);

int main(void) {

    char s[] = "ciao ecco la stringa di prova";
    size_t len;
    len = lungh(s);

    return 0;
}