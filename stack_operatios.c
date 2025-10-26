#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX],item,top=-1,status=0,ch;

void push()
{
    if(top==(MAX-1))
    printf("\nOverflow\n");
    else
    stack[++top]=item;
    status++;
}

int pop()
{
    if(top==-1)
    printf("\nUnderflow\n");
    else
    return stack[top--];
    status--;
}

void pallindrome(int stack[])
{
    int temp,count=0;
    temp=status;
    for(int i=0;i<temp;i++)
    {
        if(stack[i]==pop())
        count++;

    }
    if (count==temp)
    printf("\npallindrome\n");
    else
     printf("\n not a pallindrome\n");

}

void display(int stack[])
{
    if (top==-1)
    printf("stack is empty");
    else
    for(int i=top;i>0;i--)
    {
        printf("|%d|\n",stack[i]);
    }

}

void main()
{
    int ch;
    while(1)
    {
        printf("\n1.push\t2.pop\t3.pallindrome\t4.display\t5.exit\n");
        printf("Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nenter an item\n");
            scanf("%d",&item);
            push(stack,item);
            break;
            case 2:printf("\npopped value= %d",pop());
            break;
            case 3:pallindrome(stack);
            break;
            case 4:display(stack);
            break;
            case 5:exit(0);
            break;
            default:printf("\ninvalid input value\n");
            break;


        }
    }
}


