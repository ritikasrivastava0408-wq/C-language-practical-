#include <stdio.h>
int main(){
    int num,remindar,binary=0,place=1;
    printf("Enter umber to convert to binary: ");
    scanf("%d",&num);

    while(num>0)
        {remindar= num % 2;
        binary=binary+remindar*place;
        num= num/2;
        place=place*10;
        }
    printf("Binary = %d", binary);
    return 0;
}