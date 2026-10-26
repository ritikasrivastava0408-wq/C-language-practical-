#include <stdio.h>
int main() {
    int a[10], b[10], c[10], i, j;
    printf("Enter elements of first array: ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    printf("\nEnter elements of second array: ");
    for(i=0;i<10;i++)
        scanf("%d",&b[i]);

    for(i=0;i<10;i++)
        c[i]=a[i]+b[i];

    printf("\nSum of first and second array is: ");
    for(i=0;i<10;i++)
        printf("%d ",c[i]);
    return 0;
    
}