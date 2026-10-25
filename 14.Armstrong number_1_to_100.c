#include <stdio.h>
int main(){
    int i, temp, sum, digit;
    printf("Armstrong numbers from 1 to 100 are: \n");
    for(i=153;i<=200;i++){
        temp=i;
        sum=0;

        while(temp>0)
            {
                digit= temp%10;
                sum=sum+digit;
                temp=temp/10;
            }
        
        if(sum==i)
        {printf("\n %d ",i);
        }
    }
    return 0;
}