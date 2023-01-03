#include <stdio.h>
//recursive function to print first N odd natural numbers in reverse order
int revodd(int n)
{
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            n = n - 1;
            printf("%d ", n);
            revodd(n - 2);
        }
        else
        {
            printf("%d ", n);
            revodd(n - 2);
        }
    }
}
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    printf("First odd natural numbers till %d in reverse are \n",num);
    revodd(num);
    return 0;
}