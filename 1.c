#include<stdio.h>
#define max 5
int  isempty(int tp)
{
    if(tp==-1)
        return 1;
    return 0;
}

int isfull(int tp)
{
    if(tp==max-1)
        return 1;
    return 0;
}

void push(int st[],int*tp)
{
    int e;
    if(isfull(*tp))
        printf("\nThe Stack is full(Overflow)");
    else
    {
        *tp=*tp+1;
        printf("\nEnter the element to push to stack ");
        scanf("%d",&e);
        st[*tp]=e;
    }
}

int pop(int st[],int*tp)
{
    int e;
    if(isempty(*tp)){
        printf("\nThe Stack is Empty(Underflow)");
        return NULL;
    }
    else
    {
       e=st[*tp];
       *tp=*tp-1;
       return e;
    }
}

int peek(int st[],int*tp)
{
    if(*tp==-1)
        printf("\nThe Stack is Empty");
    else
    {
       return st[*tp];
    }

}

void disp(int st[],int*tp)
{
    int i;
    printf("Stack is\n");
    for(i=*tp;i>=0;i--)
    {
        printf("|  %d  |\n",st[i]);
    }

}

int main()
{
    printf("\n***********Stack Operations***************\n ");

    int ch,popped,peeked;
    int top=-1;
    int stack[max];

    while(1){
    printf("\nEnter the operation on stack \n1 :Push\n2 :Pop\n3 :Peek\n4 :Display stack\n5 :Exit program\n By: Prasad Kadam");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:push(&stack,&top);break;
        case 2:
            if(!isempty(&top)){
                popped=pop(&stack,&top);
                printf("Popped value is %d",popped);
            }
            else
                printf("\nStack is empty\n");
                break;
        case 3:peeked=peek(&stack,&top);
                printf("Peeked value is %d",peeked);break;
        case 4:disp(&stack,&top);break;
        case 5:exit(0);
        default:printf("Enter the correct choice\n");
    }
    }
}
