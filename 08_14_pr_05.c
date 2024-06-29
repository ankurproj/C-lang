//strcpy
//des=destination, src=source
#include <stdio.h>
#include <string.h>

char* myStrcpy(char* dest, const char* src) {
int i;
for (i = 0; src[i] != '\0'; i++) {
dest[i] = src[i];
}
dest[i] = '\0';
return dest;
}

int main() {
char dest[20];
char* src = "Ankur kumar";
myStrcpy(dest, src);
printf("The copied string is: %s\n", dest);
return 0;
}




