#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        int c = 1;
        for(int s = 1; s<=(n-i); s++){
            printf(" ");
        }
        for(int j = 1; j<=i; j++){
            pritnf("%d",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}