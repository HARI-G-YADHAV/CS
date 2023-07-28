#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,l,u,*a,flag=0,mid,k,c=0;
    printf("Enter how many numbers: ");
    scanf("%d",&n);
    a=(int *)malloc(n * sizeof(int));
    printf("Enter no ascending order:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key: ");
    scanf("%d",&k);
    l=0;
    u=n-1;
    while(flag == 0 && l<=u)
    {
        c++;
        mid=(l+u)/2;
        if(a[mid] == k)
        {
            printf("key is found: at index %d\n",mid);
            flag=1;
        }
        else if(k<a[mid])
        {
            u=mid-1;

        }
        else{
            l=mid;

        }
    }
}