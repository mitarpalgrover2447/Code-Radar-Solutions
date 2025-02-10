#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int msb = 1<<31 & a;
    printf("%d",msb);
    return 0;
}