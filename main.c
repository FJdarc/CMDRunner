#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buffer[256];
    FILE *fp;
    fp = fopen("cmd.list", "r");
    while (1) {
        fgets(buffer, 255, (FILE*)fp);
        printf("%s", buffer);
        system(buffer);
        printf("\n");
        if (feof(fp)) break;
    }
    fclose(fp);
    return 0;
}