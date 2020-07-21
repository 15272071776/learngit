#include<stdio.h>
int main(void)
{
    int a[10],i,j,s,k;
    for(i=0;i<10;i++)
    {    printf("请输入第%d个数:\n",i);
         scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {    k=i;
        for(j=i+1;j<10;j++)
        {
            if(a[k]<a[j])
            {
                k=j;
            }


        }
        if(k!=i)
        {
             s=a[i];
             a[i]=a[k];
             a[k]=s;
        }
    }

    printf("排序结果是：");
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
        printf("   ");
    }
}//选择排序



/*#include<stdio.h>
int main(void)
{
    int a[10],i,j,s;
    for(i=0;i<10;i++)
    {    printf("请输入第%d个数:\n",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(a[j]>a[j+1])
             {s=a[j];
             a[j]=a[j+1];
             a[j+1]=s;}


        }
    }

    printf("排序结果是：");
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
        printf("   ");
    }
}  冒泡排序*/









