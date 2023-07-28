#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,*a,count=0,temp;
    printf("Enter how many numbers: ");
    scanf("%d",&n);
    a=(int *)malloc(n * sizeof(int));
    printf("Enter no ascending order:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
       
}