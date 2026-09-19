#include <stdio.h>

int main() {
    int n, i , EvenSum=0,OddSum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {if(i%2==0)
            EvenSum= EvenSum+i;
         else
            OddSum= OddSum+i;
            }
    printf("EvenSum %d",EvenSum);
    printf("\nOddSum %d",OddSum);
    return 0;
}