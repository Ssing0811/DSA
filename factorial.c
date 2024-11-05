#include<stdio.h>
int fact(int n){
    if(n==1)return 1;
    return (n*fact(n-1));
}
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    printf("the factorial of %d is %d",num,fact(num));
    
}