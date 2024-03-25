#include<stdio.h>
int main(){
    freopen("C://c/ACM/run/input.txt","r",stdin);
    freopen("C://c/ACM/run/output.txt","w",stdout);
    int a,b,c;
    int kase=0;
    while (scanf("%d%d%d",&a,&b,&c)==3&&a!=0&&b!=0&&c!=0)
    {
        printf("Case %d:%.*lf\n",++kase,c,(double)a/b);
    }
    
return 0;
}