#include <stdio.h>
//recursive function to print octal of a given decimal number
int octal(int n)
{
    if (n == 0)
    {
        return;
    }

    octal(n / 8);
    printf("%d", n % 8);
}

int main()
{
    int num;
    ;
    printf("Enter number\n");
    scanf("%d", &num);
    printf("Octal of %d is ", num);
    octal(num);

    return 0;
}