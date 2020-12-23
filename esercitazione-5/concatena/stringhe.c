#include<string.h>
#include<stdlib.h>

char* concatena(const char* prima, const char* seconda) {

    size_t len1 = strlen(prima);
    size_t len2 = strlen(seconda);
    if(prima == NULL || strcmp(prima, "") == 0) {
        len1 = 0;
    }
    if (seconda == NULL || strcmp(seconda, "") == 0) {
        len2 = 0;
    }
    size_t totleng = len1 + len2;
    char *s = malloc(totleng + 1);
    strcpy(s, prima);
    strcat(s, seconda);
    return s;
}

int main(void) {
    char s1[] = "La seconda e' NULL";
    char s2[] = { NULL };
    char* s;
    s = concatena(s1, s2);
    free(s);
}