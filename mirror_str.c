#include<stdio.h>
#include<string.h>
#include<ctype.h>

char mir(char ch){
    int num;
    char mirror[]="A   3  HIL JM O   2YUVWXY51SE Z  8 ";
        if (isalpha(ch))
        {
            num=ch-'A';//返回该字母在字母表中的序号
            return mirror[num];//则可以返回该字母在转换表中对应的值
        } else{
            num=ch-'0'+25;//返回该数字的值加上25，作为下标时则可以返回数字对应的镜像值
            return mirror[num];
        }
}
int if_mirror(char s[]){
    char mirror[]="A   3  HIL JM O   2YUVWXY51SE Z  8 ";
    int len=strlen(s);
    for (size_t i = 0; i <len/2; i++)
    {
        if (mir(s[i])==s[len-1-i])
        {
            return 1;
        } else return 0;
    }
}
int main(){
    freopen("C://c/ACM/run/input.txt","r",stdin);
    freopen("C://c/ACM/run/output.txt","w",stdout);
    char s[50];
    char s2[50];
    while(scanf("%s",s)==1){
    strcpy(s2,s);
    strrev(s);//对指针操作，可以直接修改值
    if (strcmp(s2,s)==0)
    {
        if (if_mirror(s2)==1)
        {
            printf("%s -- is a mirrored palindrome.\n",s2);
        }
        else {printf("%s -- is a regular palindromes.\n",s2);}
    } else if(if_mirror(s2)==1){
        printf("%s -- is a mirrored string.\n",s2);
    } else{
        printf("%s -- is not a palindrome.\n",s2);
    }
    }
    return 0;
}