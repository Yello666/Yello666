#include<stdio.h>//文件操作---重定向
#define LOCAL
int main(){
    freopen("C://c/ACM/run/input.txt","r",stdin);
    freopen("C://c/ACM/run/output.txt","w",stdout);
   int a,sum=0,count=0;
   int max,min;
   double avg;
   scanf("%d",&min);
   max=min;
   while (scanf("%d",&a)==1)
   {
    sum+=a;
    count++;
    if (a>max)
    {
        max=a;
    }
    if (a<min)
    {
        min=a;
    }
    printf("max=%d min=%d sum=%d\n",max,min,sum);
   }
   printf("%d %d %.3lf\n",max,min,(double)sum/count);//除法最好在前面加上（float），
   //当某一个数为整型时，程序会出错
   
    return 0;
}