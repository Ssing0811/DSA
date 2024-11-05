//0 1 1 2 3 5 8
#include<stdio.h>
int fib(int n){
    if(n==1)return 1;
    return (n*fact(n-1));
}
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    printf("the fibannico of %d is %d",num,fib(num));
    
}