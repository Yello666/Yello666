#include<stdio.h>
//将三个数以从小到大的顺序输出
int main(){
    // int a,b,c;
    // int max;
    // scanf("%d%d%d",&a,&b,&c);
    // if (a<=b)
    // {
    //     if (b<=c)
    //     {
    //         printf("%d %d %d\n",a,b,c);
    //     } else if (c<=a)
    //     {
    //         printf("%d %d %d\n",c,a,b);
    //     } else{
    //         printf("%d %d %d\n",a,c,b);
    //     }
    // }
    // else if (a<=c)
    // {
    //     printf("%d %d %d\n",b,a,c);
    // } else if (c<=b)
    // {
    //     printf("%d %d %d\n",c,b,a);
    // } else{
    //     printf("%d %d %d\n",b,c,a);
    // }
    
    /*---------------better code-----------------*/
    int a,b,c,t;//冒泡排序
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        t=a;
        a=b;
        b=t;//交换后a<=b
    }
    if (a>c)
    {
       t=a;
        a=c;
        c=t;//交换后a<=c
    }
     if (b>c)
    {
       t=b;
        b=c;
        c=t;//交换后b<=c
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}