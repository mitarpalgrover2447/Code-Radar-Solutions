#include <stdio.h>
int main(){
    int v;
    scanf("%d",&v);
    if(v<18){
        printf("Not Eligible");
    }
    else{
        printf("Eligible");
    }
    return 0;
}