#include<stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main(){
    printf("Enter the size of the stack:");
    scanf("%d",&n);
    printf("*Stack operations using array");
    printf("\n ----------------------------------------------\n");
    while(choice != 4){
        printf("Chose one from the below options...\n");
        printf("\n 1.PUSH \n 2.POP \n 3.SHOW \n 4.EXIT\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4:
            {
                printf("Exit");
                break;
            }
            default :
            {
                printf("Please enter a valid choice");
            }
        }
    }
}
void push(){
    if(top==n){
        printf("Overflow------------------------------\n");
    }
    else{
        int val;
        printf("Enter the input:");
        scanf("%d",&val);
        top=top+1;
        stack[top] = val;
    }
    show();
}
void pop(){
    if(top==-1){
        printf("Underflow-----------------------------\n");
    }
    else{
        top=top-1;
    }
    show();
}
void show(){
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top==-1)
    {
        printf("Stack is empty");
    }
}