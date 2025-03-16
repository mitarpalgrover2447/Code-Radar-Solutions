#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        for(int s = 1; s<=(n-i); s++){
            printf(" ");
        }
        for(int j = 1; j<=(2*(i-1)+1); j++){
            printf("*");
        }
        printf("\n");
    }
    int m = (2*(n-1)+1)-2;
    for(int i = 1; i<=n-1; i++)
    {
        for(int s = 1;s<=i;s++){
            printf(" ");
        }
        
            for(int j = 1; j<=m; j++){
            printf("*");
        }
        
        m=m-2;
        printf("\n");
    }
    return 0;
}