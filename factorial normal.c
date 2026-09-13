#include <stdio.h>

int main(){
  //normal
    
    int n,i,f=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
            }
    printf("factorial: %d",f);
    return 0;
    
}