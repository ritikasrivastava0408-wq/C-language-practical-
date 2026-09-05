#include <stdio.h>

int main(){
    float a,b,r;
    char o;
    printf("Enter two numbers for operation: ");
    scanf("%f %f",&a,&b);
    printf("Enter operation [+,-,*,/]: ");
    scanf(" %c",&o);
    switch(o)
    {case'+':
        printf("result = %f",r=a+b);
        break;
     case'-':
        printf("result = %f",r=a-b);
        break;
     case'*':
        printf("result = %f",r=a*b);
        break;
     case'/':
        if(b!=0)
            printf("result = %f",r=a/b);
        else
            printf("Division by 0 is not possible");
        break;
     default:
        printf("Invalid operation");
        
        }
    return 0;
}