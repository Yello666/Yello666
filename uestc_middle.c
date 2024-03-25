#include<stdio.h>
#include<string.h>
int main(){
    int a,b,c,T,s;
    int middle[10];
    memset(middle,0,sizeof(middle));
    scanf("%d",&T);
    int j=0;
    s=T;
    while (T>0)
    {
        scanf("%d%d%d",&a,&b,&c);
        T--;
        int t=0;

        if(a!=b&&a!=c&&b!=c){
        if (a<b){
            t=a;
            a=b;
            b=t;//交换后a>=b
        }
        if (a<c)
        {
        t=a;
            a=c;
            c=t;//交换后a>=c
        }
        if (b<c)
        {
        t=b;
            b=c;
            c=t;//交换后b>=c
        }
        middle[j]=b;
        }

        if(a==b||b==c||a==c){
            int max=a;
            if (b>max)
            {
                max=b;
            } else if(c>max){
                max=c;
            }
            middle[j]=max;
        }
        j++;
    }
    for (size_t i = 0; i < s; i++)
    {
        printf("%d ",middle[i]);
    }
    return 0;
}