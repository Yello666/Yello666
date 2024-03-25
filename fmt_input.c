#include<stdio.h>
int main(){
  freopen("C://c/ACM/run/input.txt","r",stdin);
    freopen("C://c/ACM/run/output.txt","w",stdout);
   int a,sum[100]={0},count=0;
   int times,t=0;//t为数据组数，times为每组数据的数据个数
   int max[100],min[100];
   double avg[100];
    int i=0;
   while(scanf("%d",&times)==1&&times){//此处即等效为下面的代码，
   //当一个输入的数为0就退出时，
   //可以采用将数写进while条件里面的方法
    /*scanf("%d",&times);
    if (times==0)
    {
        break;
    }*/
    t++; 
    count=times;
   scanf("%d",&min[i]);
   max[i]=min[i];
   sum[i]=min[i];
   while (times-1>0)
   {
    scanf("%d",&a);
    sum[i]+=a;
    if (a>max[i]){max[i]=a;}
    if (a<min[i]){min[i]=a;}
    times--;
   }
   avg[i]=(double)sum[i]/count;
   //除法最好在前面加上（float），
   //当某一个数为整型时，程序会出错
   i++;
   } 
   for (size_t i = 0; i <t ; i++)
   {
    printf("Case %d: %d %d %.3lf\n",i+1,min[i],max[i],avg[i]);
   }
    return 0;
}