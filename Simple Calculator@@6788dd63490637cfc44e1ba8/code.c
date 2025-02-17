#include <stdio.h>
int main(){
    int a,b;
    char o;
    scanf("%d %d",&a,&b);
    scanf("%c",&o);
    switch(o){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}