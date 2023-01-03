#include <stdio.h>
//recursive function to print first N natural numbers in reverse order
int reverse(int n)
{
    if (n >0)
    {
        printf("%d ", n);
        reverse(n - 1);
    }
    else
        return;
}
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    printf("First %d natural numbers in reverse are \n",num);
    reverse(num);
    return 0;
}