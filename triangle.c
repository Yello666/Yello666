#include<stdio.h>
int main(){
    freopen("C://c/ACM/run/input.txt","r",stdin);
    freopen("C://c/ACM/run/output.txt","w",stdout);
    int n,c;
    scanf("%d",&n);
    for (size_t i = 1; i <=n; i++)
    {
        c=1;
        for (size_t j = 1; j <=2*n-1; j++)
        {

            if(i>1&&(c<i||c>2*n-i)){printf(" ");}
            else{printf("#");}
            c++;
        }
        printf("\n");
    } 
    return 0;
}