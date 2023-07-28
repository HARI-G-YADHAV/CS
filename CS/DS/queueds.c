#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front= NULL;
struct node *rear  = NULL;
void enqueue(int d)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp ->data = d;
    temp->next=NULL;
    if(rear == NULL && front == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
int dequeue()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    int d;
    if(front == NULL)
    {
        printf("Stack is empty");
        exit(1);
    }
    else
    {
        temp=front;
        front=front->next;
        d=temp->data;
         free(temp);
        return d;
    }
}
void display()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
    {
        printf("Stack is empty");
    }
    else{
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}