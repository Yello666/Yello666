#include<stdio.h>
#include<string.h>
int main(){
   int n;
   scanf("%d",&n);
    int x,y,m,num[10000];
    memset(num,0,sizeof(num));
    for (m=1;m<=n; m++)
    {
       x=y=m;
       while (x>0)
       {
        y=y+x%10;//得到m+m的各个数字之和
        x=x/10;
       }
       if (num[y]==0||m<num[y])
       {
        num[y]=m;//m是y的生成元
       }
    }
    return 0;
}