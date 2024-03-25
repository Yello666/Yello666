#include<stdio.h>//light issue
#include<string.h>
int main(){
    freopen("C://c/ACM/run/input.txt","r",stdin);
    freopen("C://c/ACM/run/output.txt","w",stdout);
    int n,k;
   scanf("%d%d",&n,&k);
   int lights[n+1];
   memset(lights,0,sizeof(lights));
   for (int i = 1; i <=k; i++)
   {
     for (int j = 1; j <= n; j++)
     {
        if (j%i==0)
        {
            lights[j]=!lights[j];
        }
        
     }
     
   }
   int l[n+1],j=0;
   memset(l,0,sizeof(l));//将数组置零
   for (size_t i = 1; i < n+1; i++)
   {
    if (lights[i])
    {
        l[j]=i;
       j++;
    }
   }
   for (size_t i = 0; i <j-1; i++)
   {
    printf("%d ",l[i]);
   }
   printf("%d",l[j-1]);
   printf("\n");
   
   
   
   printf("\n");
   
   
return 0;
}