#include<stdio.h>
int main()
{
   printf("Enter an expression:");
   char ch;
   int i=0;
   float a,b,c,result;
   for (ch=getchar(); ch!='\n'; ch=getchar())
   {
    i++;
    if (i==1||i==2)
    {
       
     switch(ch)
    {   case '+':
        scanf("%f",&b);
        result=a+b;
        break;
    case '-':
        scanf("%f",&b);
        result=a-b;
        break;
    case '*':
        scanf("%f",&b);
        result=a*b;
        break;
    case '/':
        scanf("%f",&b);
        result=a/b;
        break;
    default:a=ch;
        break;
    }
    }
   if(i>2) 
   {switch(ch)
    {   case '+':
        scanf("%f",&b);
        result=result+b;
        break;
    case '-':
        scanf("%f",&b);
        result=result-b;
        break;
    case '*':
        scanf("%f",&b);
        result=result*b;
        break;
    case '/':
        scanf("%f",&b);
        result=result/b;
        break;
    default:a=ch;
        break;
    }}
   }
   printf("Value of expression:%.2f",result);
  return 0;
}