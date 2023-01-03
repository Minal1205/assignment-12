#include<stdio.h>
//a recursive function to print first N even natural numbers
int evenum(int n){
    if(n>0){
        if(n%2==0){
            evenum(n-2);
        }
        else
        {
            n=n-1;
            evenum(n-2);
        }
    }
    printf("%d ",n);
}
int main(){
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);
    printf("First %d even natural numbers are \n",num);

    evenum(num);
    return 0;
}