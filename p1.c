#include<stdio.h>
#include<string.h>
#include<time.h>
int main(){
    freopen("C://c/ACM/run/input.txt","r",stdin);
    freopen("C://c/ACM/run/output.txt","w",stdout);
    int n,m,t;
    int j=0;
    scanf("%d%d%d",&n,&m,&t);
    int max[t+1],min[t+1];
    int i=0;int minute[n][m];//第m分钟第n台机器正在判定的题目是什么,m=0,n=0表示第一min内第1台机器
    int problem[t+1];
    memset(max,0,sizeof(max));
     for (i = 0; i < t+1; i++)
    {
        min[i]=1;
    }

    int k=0;
    while(i<n)
    {
        for (k = 0; k < m; k++)
        {
            scanf("%d",&minute[i][k]);
        }
        i++;
    }
    for (k = 0; k < m; k++)//对第k分钟内n台机的情况
    {
        memset(problem,0,sizeof(problem));
        for (i = 0; i < n; i++)
        {
           problem[minute[i][k]]++;//proble下标的值即为真实的题目序号，problem的值即为该题在同一时间被计算的数量
        }
          //第kmin全部判定完
        for(j=1;j<=t;j++){//统计第一分钟是否有题目没有被判定
        
           if (problem[j]==0)
           {
            min[j]=0;
            
           } else if (max[j]==0)
            {
                max[j]=problem[j];//给max【j】赋初值
            }
                                  //min[j]为[j]题目被提到的最小值
        //判断大小
        
        if (min[j]&&problem[j]<min[j])
        {
            min[j]=problem[j];
        } else if(problem[j]>max[j]){
            max[j]=problem[j];
        }
        }

    }
    //输出t行
    for (i = 1; i <= t; i++)
    {
       printf("%d %d\n",min[i],max[i]);
    }
 printf("time:%lf\n",(double)clock()/CLOCKS_PER_SEC);
    return 0;
}