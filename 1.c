#include <stdio.h>
// a recursive function to print first N natural numbers
int number(int n)
{
    if (n)
    {
        number(n - 1);
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
    printf("First %d natural numbers are \n",num);
    number(num);
    
    return 0;
}