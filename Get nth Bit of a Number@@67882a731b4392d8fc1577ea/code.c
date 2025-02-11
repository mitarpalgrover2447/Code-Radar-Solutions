#include <stdio.h>
int main() { 
    int a,b;
    scanf("%d %d", &a,&b);
    int nbit = a & 1<<(b-1);
    printf("%d",nbit);
    return 0;
}