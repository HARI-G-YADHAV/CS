#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push(int a)
{
    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));
    new->data=a;
    new->next=top;
    top=new;
}
int pop()
{
    int d;
    struct node *temp;
    temp=top;
    if(top == NULL)
    {
        printf("stack is empty");
    }
    d=temp->data;
    top=top->next;
    free(temp);
    return d;
}
void display()
{
    struct node *temp;
    temp=top;
    while(temp != NULL)
    {
        printf("\n%d\n",temp->data);
        temp=temp->next;
    }
}