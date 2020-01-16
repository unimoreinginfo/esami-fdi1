#include <string.h>
#include <stdio.h>
#include <stdbool.h>

bool is_date(const char *s) {
	if (s == 0 || strlen(s) != 10) return false;
	int n[3];
	if (sscanf(s, "%d/%d/%d", n, n + 1, n + 2) != 3) return false;
	if(n[1] > 12) return false;
	if (s[2] != '/' || s[5] != '/') return false;
	return true;
}
