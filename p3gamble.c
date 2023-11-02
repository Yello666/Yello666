#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int x;
char ch;
printf("现在是假期特别抽奖plus环节！！\n请按回车开始抽奖\n");
ch=getchar();
srand(time(NULL));
x=rand()%6+1;
printf("%d号\n",x);
switch (x)
{
case 1:
    printf("恭喜你得给小黄一个抱抱");
    break;
case 2:
    printf("恭喜你得给小黄一个亲亲//");
    break;
case 3:
    printf("恭喜你获得三个小黄的亲亲ovo");
    break;
case 4:
    printf("恭喜你获得小蛋的四个pp，并在高铁上见到小蛋！");
    break;
case 5:
    printf("恭喜你获得小蛋的拥抱！！并获得高铁小蛋一日陪伴卡！eggy！");
    break;
case 6:
    printf("恭喜你获得六个零食(⊙o⊙)，/小黄QAQ");
    break;
default:
 ;
    break;
}

    
return 0;
}
