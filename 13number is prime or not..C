#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not a prime number");
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                printf("%d is not a Prime number",n);
                return 0;
            }
        }

        printf("%d is a Prime number",n);
    }

    return 0;
}