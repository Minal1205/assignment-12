#include <stdio.h>
// a recursive function to print first N odd natural numbers
int number(int n)
{
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            n = n - 1;
            number(n - 2);
        }
        else
            number(n - 2);
    }
    else
        return;

    printf("%d ", n);
}
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    printf("First %d odd natural numbers are \n",num);
    number(num);
    return 0;
}