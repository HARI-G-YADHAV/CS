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
    for(i=1;i<=n;i++)
    {
      temp=a[i];
      j=i-1;
      while(j>=0 && a[j]>temp)
      {
        a[j+1]=a[j];
        count++;
        j--;
      }
      count++;
      a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}