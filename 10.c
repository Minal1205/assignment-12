#include <stdio.h>
//recursive function to print reverse of a given number
int reverse(int n)
{

    if (n == 0)
    {
        return;
    }
    printf("%d", n % 10);

    reverse(n / 10);
}

int main()
{
    int num;
    ;
    printf("Enter number\n");
    scanf("%d", &num);
    printf("Reverse of %d is ", num);
    reverse(num);

    return 0;
}