#include <stdio.h>
// recursive function to print first N even natural numbers in reverse order
int reveve(int n)
{
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            printf("%d ", n);
            reveve(n - 2);
        }
        else
        {
            n = n - 1;
            printf("%d ", n);
            reveve(n - 2);
        }
    }
}
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    printf("First even natural numbers till %d in reverse are \n", num);
    reveve(num);
    return 0;
}