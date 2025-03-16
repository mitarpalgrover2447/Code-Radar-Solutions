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
            printf("%d",c);
            c++;
        }
        int d = c-2;
        for(int k =1; k<=(i-1); k++){
            printf("%d",d);
            d--;
        }
        printf("\n");

    }
    return 0;
}