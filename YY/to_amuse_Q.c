#include<stdio.h>
int main()
{
    printf("请输入你的蛋龄：");
    int a;
    scanf("%d",&a);
    if(a<18&&a>9)
        printf("你是未成年蛋！！:O");
    else if (18==a)
    {
        printf("恭喜你成为一个成熟的蛋仔！！");
    }
    else if (a<=9&&a>0)
    {
        printf("你是一个tiny egg！");
    }
    
    else
        printf("你是一头老蛋！");
    return 0;
}