#include<stdio.h>
int main()
{
    printf("欢迎进入YQ抽奖系统，请输入密码：\n");
    int a;
    scanf("%d",&a);
    if(a==520||a==20041103||a==20050226||a==1314||5201314||1314520)
    {
        printf("密码正确，可参与抽奖！\n");
    }
    char b;
    b=getchar();
    if(b=='Y')
    {
        printf("correct,congratulations to your opportunity of drawing a prize!");
        printf("获得终极大奖！");
    }
    return 0;
}