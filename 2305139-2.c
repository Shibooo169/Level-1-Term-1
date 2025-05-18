#include<stdio.h>
#include<stdlib.h>

void max(int *p,int n)
{
    int max=0,num;
    int *p1=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        int cnt=1;
        for(int j=i+1;j<n;j++)
        {
            if((p+i)==(p+j))
                cnt++;
        }
        *(p1+i)=cnt;
        if(cnt>max)
        {
            max=cnt;
            num=*(p+i);
        }
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(*(p1+i)==max)
        {
            printf("%d  ",*(p+i));
            for(int j=i;j<n;j++)
            {
                if((p+i)==(p+j))
                    break;
            }
        }
    }

    //printf("%d\n",num);
    free(*p1);

}

int main()
{
    int i,n,j;
    scanf("%d",&n);
    int *p;
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    max(p,n);
    free(p);
}