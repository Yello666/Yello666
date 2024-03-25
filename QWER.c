#include<stdio.h>
#include<string.h>

    // freopen("C://c/ACM/run/input.txt","r",stdin);
    //  freopen("C://c/ACM/run/output.txt","w",stdout);
//     char s[]=" QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
//     char input[51];
//     int i=0,j=0;
   
//     while((input[i]=getchar())!='\n')
// {    for ( ; i < strlen(input);)
//     {
//         j=0;
//         for (; j<strlen(s); j++)
//         {
//             if (input[i]==s[j]&&j!=0)
//             {
//                 printf("%c",s[j-1]);
                
//                 break;
//             }
//             if (input[i]==' ')
//             {
//                 printf("%c",' ');
//                 break;
//             }
            
            
//         }
//         i++;
//     }
    
// }


int main()
{
int i,c;
char s[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
while((c=getchar())!=EOF)
{
for(i=1;s[i]&&s[i]!=c;i++);//找错位之后的字符在常量表中的位置
if(s[i])putchar(s[i-1]);//如果找到，则输出它的前一个字符
else putchar(c);
}
printf("\n");
    
    return 0;
}
