#include<stdio.h>
int main(){
    freopen("C://c/ACM/run/input.txt","r",stdin);
    freopen("C://c/ACM/run/output.txt","w",stdout);
    int T,n,i=0,j=0;
    float score[100];
    float avg[100],sum=0.00;
    char ch;
    scanf("%d",&T);
    int t=T;
    ch=getchar();//回车后还要输入scanf可以用getchar()来清除缓冲区

    while (T>0)//输入数据
    {
        sum=0.00;i=0;
        scanf("%d",&n);
        int N=n;
        while (n>0)
        {
            scanf("%f",&score[i]);
            sum+=score[i];
            i++;
            n--;
        }
        ch=getchar();//回车后在输入scanf可以用来清除缓冲区

        //处理数据
        float max,min;
        max=score[0];
        min=score[0];
    for (int i = 0; i < N; i++)//得出最大值与最小值
    {
       if (score[i]>max)
       {
        max=score[i];
       }
       if(score[i]<min){
        min=score[i];
       } 
       
       
    }
    
    avg[j]=(float)(sum-max-min)/(float)(N-2.0);//要用保存的原始数据，不能用n
    j++;

        T--;//处理下一组数据
    }
    
    //输出数据
    for (int i = 0; i < t; i++)//要用保存的原始数据，不能用T！！
    {
        printf("%.2f\n",avg[i]);
    }
    return 0;
}