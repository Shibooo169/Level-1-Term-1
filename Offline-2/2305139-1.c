#include<stdio.h>
main()
{
    int i,j,k,l,m,n,x;
    int count=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(l=0;l<n;l++)
    {
        scanf("%d",&a[l]);
    }printf("\n");
    for(m=0;m<n;m++)
    {
        scanf("%d",&b[m]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                for(k=i+1;k<n;k++)
                {
                    for(x=j+1;x<n;x++)
                    {
                        if(a[k]==b[x])
                        count++;
                    }
                        //printf("%d %d",a[k],b[x]);
                }
            }
        }
    }printf("%d",count);
}
