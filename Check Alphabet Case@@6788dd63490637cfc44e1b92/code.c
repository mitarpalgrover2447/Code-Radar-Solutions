#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    // printf("%d",a);
    if(a>=97 && a<=122){
        printf("Lowercase");
    }
    else if(a>=65 && a<=90){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
}