#include <stdio.h>
int main() {
    float F,C;
    printf("Enter Centigrade temperature:");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("\nTemp in Fahrenheit is:%.2f",F);

    return 0;
}