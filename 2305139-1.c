#include<stdio.h>
main()
{
    int i,n,odd,even,x,max,min;
    float avg,sum;
    even=0;
    odd=0;
    printf("How many numbers you want to print:");
    scanf("%d",&n);
    scanf("%d",&x);
    max=x;
    min=x;
    sum=x;
    if(x%2==0)
        even=even+1;
    else
        odd=odd+1;
    for(i=1;i<=n-1;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
        {
            if(max<x)
                max=x;
                else max=max;
        }
        {
            if(min>x)
                min=x;
                else min=min;
        }
        {
            if(x%2==0)
                even=even+1;
            else
                odd=odd+1;
        }
    }
    avg=sum/n;
    printf("Minimum number=%d\nMaximum number=%d\nThe sum of all numbers=%.02f\nThe average of all numbers=%.02lf\nEven number count=%d\nOdd number count=%d",min,max,sum,avg,even,odd);

    return 0;
}
