#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    switch(a){
        case 'R':
            printf("Red");
            break;
        case 'G':
            printf("Go");
            break;
        case 'Y':
            printf("Slow Down");
            break;
        default:
            printf("Invalid inpur");
    }
    return 0;
}