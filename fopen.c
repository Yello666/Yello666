#include<stdio.h>//文件操作,打开与关闭文件
int main(){
    FILE *fin,*fout;
    fin=fopen("C://c/ACM/run/data.in","rb");//
    fout=fopen("C://c/ACM/run/data.out","wb");//
   int a,sum=0,count=0;
   int max,min;
   double avg;
   fscanf(fin,"%d",&min);//
   max=min;
   while (fscanf(fin,"%d",&a)==1)//
   {
    sum+=a;
    count++;
    if (a>max)
    {
        max=a;
    }
    if (a<min)
    {
        min=a;
    }
   }
   fprintf(fout,"%d %d %.3lf\n",max,min,(double)sum/count);//除法最好在前面加上（float），
   //当某一个数为整型时，程序会出错
   fclose(fin);
   fclose(fout);

   //若要改成标准输入输出
   /*
   fin=stdin;
   fout=stdout;
   并且要把fclose与fopen删掉
   */
    return 0;
}