#include<stdio.h>
#include<time.h>
int main(){
    freopen("C://c/ACM/run/input.txt","r",stdin);
    freopen("C://c/ACM/run/output.txt","w",stdout);
    int a,b,c,total=0,kcase=0;
    int a3,b5,c7,flag=0;
    while (scanf("%d%d%d",&a,&b,&c)==3)
    {
        flag=0;//在循环中使用flag应该每次都要重新初始化它的值！！
        for (size_t i = 10; i <= 100; i++)
        {
            a3=i%3;
            if (a3!=a){continue;}
            b5=i%5;
            if (b5!=b){continue;;}
            c7=i%7;
            if (c7!=c){continue;}
            flag=1;
            total=i;
            break;
        }
        if (flag==1)
        {
            printf("Case %d: %d\n",++kcase,total);
        } else{printf("Case %d: No answer\n",++kcase);}
    }
    printf("time:%.2f\n",(double)clock()/CLOCKS_PER_SEC);
    return 0;
}