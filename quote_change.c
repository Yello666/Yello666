#include<stdio.h>
#include<string.h>
int main(){
    // freopen("C://c/ACM/run/input.txt","r",stdin);
    // freopen("C://c/ACM/run/output.txt","w",stdout);
    FILE *p;
    int c,q=1;
    p=fopen("C://c/ACM/run/input.txt","rb");
    while ((c=fgetc(p))!=EOF)//c是字符的Ascall码
    {
        if (c=='"')
        {
            printf("%s",q?"``":"''");
            q=!q;
        } else{
            printf("%c",c);
        }
    }
        printf("\n" );
        fclose(p);
        return 0;
    }