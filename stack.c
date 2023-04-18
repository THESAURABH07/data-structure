#include<stdio.h>
#include<stdlib.h>
 struct stack
 {
    int s[10];
    int top;
 } s1;
 int stackempty()
 {
    if (s1.top== -1) 
    {
        return 1;
    }
    else
    {
 return 0;
    }
 }
 int stackfull()
 {
    if (s1.top==9)
 {
return 1;
 }
 else
 {
    return 0;
 }
 }
 void push()
 {
    int x, i;
    i=stackfull();
    if(i==0)
    {
        s1.top++;
        printf("Enter the data ");
        scanf("%d",&x);
        s1.s[s1.top]=x;

    }
    else
    {
        printf("Stack is full ");
    }
 }
 void pop()
 {
    int x,i;
    i=stackempty();
    if(i==0)
    {
        x=s1.s[s1.top];
        s1.top--;
        printf("Deleted data is %d ",x);
    }
    else
    printf("Stack is empty ");
 }
void display()
{
    int i;
    for(i=s1.top;i>=0;i--)
    printf("%d\t",s1.s[i]);
}
void main()
{
    int ch;
    s1.top=-1;
    while(1)
    {
        printf("Enter your choice\n1.pus\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
                printf("Enter correct choice ");
        }
    }
}
 

 
 