#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define DEFULT_SZ 1
//初始化时的记账本容纳账目的量；
#define ADD 5
//动态增加时一次内存增加的可容纳账目；
struct MoneyKind
{
    int DailySupplies;//日常
    int study;//学习
    int entertainment;//娱乐
    int eat;//餐饮
    int others;//其他
    int input;
}kind;
typedef struct AccInfo//记账本信息
{
    int money;//每次的记录下的金额
    struct MoneyKind kind[20];//金额的种类
    char date[12];//记录的日期
}AccInfo;
typedef struct Account
{
    struct AccInfo *data;//一个数字存一个记账本信息，动态存放数据
    int size;//当前已有账目个数
    int capacity;//当前记账本最大容量
    
}Account;
//声明函数
void InitAccount(Account *ps);

void AddAccount(Account *ps);

void check_capacity(Account *ps);

void Show(const Account *ps);

void PrintKind(const Account *ps,int i);

void ScanfKind(Account *ps);

int main()
{
    int input=0;
    Account acc;//acc就是记账本，里面包含data指针，目前已有帐本数，和最多可容纳的账本数
    InitAccount(&acc);//初始化记账本，全部为零
    do{
        printf("1.add 2.show 0.exit");
        printf("请输入：\n");//选择功能
    scanf("%d",&input);
        switch (input)
    {
    case 1://输入1为增加记账功能
        AddAccount(&acc);//增加的函数
        
        break;
    case 2:
        Show(&acc);
        break;
    case 0:
       ;
        break;
    default:
        break;
    }}while (input);
    
    return 0;
}

void InitAccount(Account *ps)//用来初始化的函数，原始开辟三个账目的空间，记录0个账目
{
   ps->data=(AccInfo *)malloc(DEFULT_SZ*sizeof(AccInfo));
   if (ps->data==NULL)
   {
    printf("开辟失败");
   }
   ps->capacity=DEFULT_SZ;
   ps->size=0;
}

void check_capacity(Account *ps)
{
    if (ps->size==ps->capacity)
    {
        AccInfo *ptr=(AccInfo *)realloc(ps->data,(ps->capacity+ADD)*sizeof(struct AccInfo));
        if (ptr!=NULL)
        {
            ps->data=ptr;
            ps->capacity+=ADD;
            printf("目前账目已达%d个,坚持记账吧！加油哦！ovo\n",ps->capacity-ADD);//鼓励，动态增加内存
        }
        else
        {
            printf("opps,内存已满,无法增加账目TT");
        }
    }
    
}
void AddAccount(Account *ps)//用来增加账目的函数
{
        check_capacity(ps);//检测当前通讯录的容量，若满了就增加内存，如果不满就增加数据
        printf("请输入金额大小ovo(保留整数）：>");
        scanf("%d",&(ps->data[ps->size].money));
        
        memset(&kind,0,sizeof(kind));//初始化种类次数为0；
        ScanfKind(ps);//录入金额种类
    
        printf("\n请依照格式输入花这笔钱的日期*-*(2023/01/01)：>");
        scanf("%s",ps->data[ps->size].date);
        ps->size++;
        printf("\n添加成功！^^\n");
}
void Show(const Account *ps)//显示已记录的账目
{
    
    if(ps->size==0)
    {
        printf("记账本为空\n");
    }
    else
    {   int i=0;
        printf("%2s\t%12s\t%10s\t%10s\n","序号","日期","种类","金额");
    for ( i = 0; i < ps->size; i++)
    {
        printf("%2d\t",i+1);//序号
        printf("%12s\t",ps->data[i].date);//日期

        PrintKind(ps,i);//种类
        
        printf("%8d元\n",ps->data[i].money);//金额
        printf("\n");
    }
    }
}

void PrintKind(const Account *ps,int i)
{switch (ps->data[i].kind->input)//种类
        {
        case 1:
        printf("%-12s\t","eat");
        break;
        case 2:
        printf("%-12s\t","study");
        break;
        case 3:
        printf("%-12s\t","entertainment");
        break;
        case 4:
        printf("%-12s\t","daily supplies");
        break;
        case 5:
        printf("%-12s\t","other things");
            break;
        
        default:
            break;
        }
}

void ScanfKind(Account *ps)
{
   
        do
        {
            printf("\n请输入序号说明这笔钱花在哪里了^^\n1.eat 2.study 3.entertainment 4.daily supplies 5.other things ：>\n");
        
            scanf("%d",&ps->data[ps->size].kind->input);
        switch (ps->data[ps->size].kind->input)
        {
        case 1:
            (ps->data[ps->size].kind->eat)+=(ps->data[ps->size].money);
            ps->data[ps->size].kind->input=1;
            break;
        case 2:
            (ps->data[ps->size].kind->study)+=(ps->data[ps->size].money);
            ps->data[ps->size].kind->input=2;
            break;
        case 3:
            (ps->data[ps->size].kind->entertainment)+=(ps->data[ps->size].money);
            ps->data[ps->size].kind->input=3;
            break;
        case 4:
            (ps->data[ps->size].kind->DailySupplies)+=(ps->data[ps->size].money);
            ps->data[ps->size].kind->input=4;
            break;
        case 5:
            (ps->data[ps->size].kind->others)+=(ps->data[ps->size].money);
            ps->data[ps->size].kind->input=5;
            break;
        
        default:
            printf("需要输入指定序号哦~");
            break;
        }}while((ps->data[ps->size].kind->input)>5||(ps->data[ps->size].kind->input)<1);
        
}