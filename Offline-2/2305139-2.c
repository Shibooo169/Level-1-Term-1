#include<stdio.h>
int main()
{
    int i,j,k,l,n,temp,test,move,ind,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }printf("Initial order: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }printf("\n");
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d",&move);
        printf("After instruction %d: ",i);
        if(move>0)
        {
            while(move)
            {
                temp=a[n-1];
                for(j=n-1;j>0;j--)
                {
                    a[j]=a[j-1];
                }a[0]=temp;
                move--;
            }
        }else if(move<0)
        {
            while(move)
            {
                temp=a[0];
                for(j=0;j<n;j++)
                {
                    a[j]=a[j+1];
                }a[n-1]=temp;
                move++;
            }
        }for(k=0;k<n;k++)
        {
            printf("%d ",a[k]);
        }printf("\n");
    }ind=1;max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            ind=i+1;
        }
    
    }printf("Winner: Child %d",ind);
    
}