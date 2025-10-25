#include <stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],item,top=-1,status=0,ch;

void push()
{
    if(top==(MAX-1))
    printf("\nOverflow");
    else
    stack[++top]=item;
    status++;
}
int pop()
{
    if(top==-1)
    printf("\nUnderflow");
    else
    return stack[top--];
    status--;
}
void pallindrome(int Stack[])
{
    int temp,count=0;
    temp=status;
    for(int i=0;i<temp;i++)
    {
        if(stack[i]==pop())
        count++;

    }
    if(count==temp)
    printf("pallindome\n");
    else
    printf("not pallidrome\n");
}

void display(int stack[])
{
    if(top==-1)
    printf("\nstack is empty\n");
    else
    for(int i=top;i>=0;i--)
    {
        printf("|%d|\n",stack[i]);
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("\n1.push\t 2.pop\t 3.pallindrome\t 4.display\t 5.exit\n");
        printf("enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the item:");
            scanf("%d",&item);
            push(stack,item);
            break;
            case 2:printf("popped value =%d",pop());
            break;
            case 3:pallindrome(stack);
            break;
            case 4:display(stack);
            break;
            case 5:exit(0);
            default:printf("invalid choice\n");
            break;
        }
       
    }
}