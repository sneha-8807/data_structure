#include<stdio.h>
#include<stdlib.h>
int push();
int pop();
int display();
#define size 10
int stack[size],top=-1;
int main()
{
    int choice;
    while(1)
    {
        printf("1 for push\n2 for pop\n3 for display\n4 for exit.");
        printf("\nenter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit(1);
            default : printf(" you entered wrong choice.Try again.\n");
        }
    }
    return 0;
}
int push()
{
    int item;
    if(top==size-1)
    {
        printf("Stack is Overflow.\n");
    }
    else
    {
        top++;
        printf("Enter the element: ");
        scanf("%d",&item);
        stack[top]=item;
    }
    return 0;
}
int pop()
{
    int ele;
    if(top==-1)
    {
         printf("Stack is Underflow\n.");
    }
    else
    {
        ele=stack[top];
        top--;
        printf("The deleted element id %d",ele);
    }
    return 0;
}
int display()
{
    int i=top;
    if(top==-1)
    {
         printf("Stack is empty.\n");
    }
    else
    {
        printf("The elements are : ");
        while(i>=0)
        {
            printf("%d",stack[i]);
            i--;
        }    
    }
    return 0;
}
