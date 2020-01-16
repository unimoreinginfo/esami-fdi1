#include <stdlib.h>
char* serpentino_encode(const char* s) {

    if (!s)
        return NULL;
    if (s == "")
        return 0;

    int v = 0, len = strlen(s);

    for (int i = 0; i < len; i++) {

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            v++;

    }

    int bytes = len + v * 2, k = 0;
    char* ns = malloc(bytes + 1);
    for (int i = 0; i < len; i++) {
        
        ns[k] = s[i];
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            ns[++k] = 's';
            ns[++k] = s[i];
        }
        k++;
       
    }
    ns[k] = 0;

    return ns;

}