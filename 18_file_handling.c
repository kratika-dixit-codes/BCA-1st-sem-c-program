#include <stdio.h>
int main() {
    FILE *f = fopen("test.txt", "w");
    fprintf(f, "Hello BCA");
    fclose(f);
    printf("File bana diya!");
    return 0;
}