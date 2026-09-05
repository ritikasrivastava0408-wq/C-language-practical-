#include <stdio.h>
int main() {
    int y;
    printf("Enter a year:");
    scanf("%d",&y);
    if((y%4)==0)
        printf("The year is leap year");
    else
        printf("The year is not leap year");
    return 0;
}