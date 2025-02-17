#include <stdio.h>
int main(){
    float a,b;
    char o;
    scanf("%f %f %c",&a,&b,&o);
    switch(o){
        case '+':
            printf("%.0f",a+b);
            break;
        case '-':
            printf("%.0f",a-b);
            break;
        case '*':
            printf("%.0f",a*b);
            break;
        case '/':
            if(b == 0){
                printf("error");
                break;
            }
            printf("%.0f",a/b);
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}