#include<stdio.h>
int main()
{
    int i,j,n;
    printf("How many rows you want to print:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(n%2==0)
               {
                printf("%d",(i+j)%2);
               }
            else
                {
                    printf("%d",(i+j+1)%2);
                }
        }printf("\n");
    }
}
