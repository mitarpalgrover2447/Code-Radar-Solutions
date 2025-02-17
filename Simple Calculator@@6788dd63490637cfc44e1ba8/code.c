#include <stdio.h>
int main(){
    float a,b;
    char o;
    scanf("%f %f %c",&a,&b,&o);
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
            printf("%f",a/b);
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}