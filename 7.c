#include<stdio.h>
#include<math.h>
//recursive function to print squares of first N natural numbers
int square(int n){
    if(n>0){
        square(n-1);
    }
    else
    return;

    printf("square of %d is %d \n",n,n*n);
   
}
int main(){
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);
    square(num);
    
    return 0;
}