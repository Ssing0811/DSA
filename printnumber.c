#include<stdio.h>
void number(int n)
{
    if(n==1)
    {
        printf("%d\t",n);
        return;
    }
    number(n-1);
    printf("%d\t",n);

}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    number(n);
    return 0;
    
}