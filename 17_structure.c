#include <stdio.h>
struct Student { int roll; char name[20]; };
int main() {
    struct Student s1 = {1, "Ananya"};
    printf("Roll: %d\nName: %s", s1.roll, s1.name);
    return 0;
}