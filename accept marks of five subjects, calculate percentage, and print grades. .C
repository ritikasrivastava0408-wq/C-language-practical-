#include <stdio.h>
int main() {
    float a,b,c,d,e,total,p;
    printf("Enter marks of all the subject:");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    p=(total/500)*100;
    printf("Your percentage is: %.2f",p);
    if(p>=90)
        printf("\nGrade A");
    else if(p>=80)
        printf("\nGrade B");
    else if(p>=50)
        printf("\nGrade C");
    else if(p>=30)
        printf("\nGrade D");
    else
        printf("\nFail");
        return 0;
}