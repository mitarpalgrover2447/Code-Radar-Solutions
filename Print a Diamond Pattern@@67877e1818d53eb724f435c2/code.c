#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m = n;
    for(int i = 1; i<=n; i++){
        for(int s = 1; s<=(n-i); s++){
            printf(" ");
        }
        for(int j = 1; j<=(2*(i-1)+1); j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1; i<=n-1; i++){
        for(int s = 1;s<=i;s++){
            printf(" ");
        }
        if(n%2 == 0){

        for(int j = 1; j<=m+1; j++){
            printf("*");
        }
        }
        else{
            for(int j = 1; j<=m; j++){
            printf("*");
        }
        }
        m=m-2;
        printf("\n");
    }
    return 0;
}