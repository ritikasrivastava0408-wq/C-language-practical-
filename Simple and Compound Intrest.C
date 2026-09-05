#include <stdio.h>
#include <math.h>
int main() {
    float P, R, T, SI, CI, Amount;
    printf("Enter principal amount:");
    scanf("%f",&P);
    printf("Enter rate of interest:");
    scanf("%f",&R);
    printf("enter time in years:");
    scanf("%f",&T);
   //calculate simple intrest
    SI=(P*R*T)/100;
    printf("Simple interest is:%f",SI);

   //calculate compound interest
   Amount=P*(pow((1+R/100),T));
   CI=Amount-P;
   printf("\nCompound interest is:%f",CI);
    
    return 0;
}