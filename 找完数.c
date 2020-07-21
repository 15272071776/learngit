#include<stdio.h>
int main(void)
{
    int m,n,i,j,sum,cnt=0,k=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<n;i++)
    {    sum=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;


            }
        }

      if(sum==i)
        {   cnt++;
            printf("%d = 1",sum);
            for(k=2;k<sum;k++)
            {
                if(sum%k==0)
                {
                    printf(" + %d",k);
                }
            }
            printf("\n");
        }



    }
    if(cnt==0)
    {
        printf("NONE");
    }


}
