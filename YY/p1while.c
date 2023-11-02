#include <stdio.h>
int main()
{
    printf("谁是最可爱的蛋\n请输入(YorOorQ)\n");
    char ch,Y,a,b,Q;
    ch=getchar();
    if (ch=='Y')
    {
        printf("获得一次抽奖机会！\n");
        
    }
    
    while (ch!='Y')
    {
        printf("恭喜你获得一次抽奖机会，小声：你可以重新选择哦=^=但奖励将清零\n");
        a=getchar();
        ch=getchar();
        if (ch=='Y')
    {
        printf("恭喜你获得三次抽奖机会！^^\n");
        
    }
        }
return 0;
}