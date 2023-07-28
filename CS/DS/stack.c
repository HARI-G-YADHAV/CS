#include<stdio.h>
#include<stdlib.h>
#include "stackds.c"
int main()
{
    int choice,a,d;
    do{
        printf("1 for push\n");
        printf("2 for pop\n");
        printf("3 for display\n");
        printf("4 for exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter element:");
                scanf("%d",&a);
                push(a);
                break;
            case 2:
                d=pop();
                printf("%d",d);
                break;
            case 3:
                display();
                break;
        }
    }while(choice != 4);
}
