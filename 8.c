#include <stdio.h>
//recursive function to print binary of a given decimal number
int binary(int n){
    if(n==0){
        return;
    }

    binary(n/2);
    printf("%d",n%2);


    }

int main()
{
    int num;;
    printf("Enter number\n");
    scanf("%d", &num);
    printf("Binary of %d is ", num);
   binary(num);
    
    return 0;
}