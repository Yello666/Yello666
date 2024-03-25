#include<stdio.h>
//这台机器不支持long double,用double即可
int main(){
    freopen("C://c/ACM/run/input.txt","r",stdin);
    freopen("C://c/ACM/run/output.txt","w",stdout);
    int m,n,kcase=0;
   double result=0.0;
double t=0.0;
    while(scanf("%d%d",&n,&m)==2&&m!=0&&n!=0){
        result=0.0;
        for (unsigned i = n; i <=m; i++)
        {
            t=1.0/i/(double)i;
            result+=t;
        }
        
        printf("~Case %d: %.5lf\n",++kcase,result);
    }
    
    return 0;
}