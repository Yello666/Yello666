#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_ID 5
typedef struct Account
{
char date[12];
int kind;
int money;
char id[MAX_ID];
}Account;

typedef struct Node
{
Account *data;//数据域
struct Node* next;//指针域
}Node;


Node* createlist()//创建链表
{
Node* head = (Node*)malloc(sizeof(struct Node));
head->next=NULL;
return head;
}

//创建结点
Node* createNode(Account *data)
{
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = (Account*)malloc(sizeof(Account));
newNode->data=data;
 newNode->next = NULL;
    return newNode;
}
void Accinput(Node *head);
void Show(Node *head);
void PrintKind(Node* move);
void update(Node *head);
void info_init(Node *head);
void flush(Node *head);
int main()
{
    Node *head;
    head=createlist();//head为头结点
    int input=0;
    info_init(head);
    do
    {
        printf("\n1.add 2.show 3.update 0.exit\n");
        scanf("%d",&input);
        switch (input)
        {
            case 1:
            Accinput(head);
            break;
            case 2:
            Show(head);
            break;
            case 3:
            update(head);
            break;
            


        default:
            break;
        }
    } while (input);
    
    return 0;
}
void Accinput(Node *head)
{
    Account* data=(Account*)malloc(sizeof(Account));//为data分配内存
    head->data=data;
        printf(":)Please enter the Serial Number of your account book(such as:1):>");
        scanf("%s",data->id);//存入id
        printf("\n^3^Please enter the Amount of your account(keep interger!):>");
        scanf("%d",&data->money);//存入金额
        printf("\n:)Please enter the Date of your account(such as:2023/01/01):>");
        scanf("%s",data->date);//存入日期
        do{
        printf("\n^3^Please enter a Number to demonstrate where did you spend your money\n1.eat 2.study 3.entertainment 4.daily supplies 5.other things :>\n");
        scanf("%d",&data->kind);//存入金额种类，如果输入不正确会返回重新输入
        if (data->kind<1||data->kind>5)
        {
            printf("\n=_=Please Enter The Right Number!!\n");
        }
        
        }while (data->kind<1||data->kind>5);
        printf("\nAdded successfully!^^\n\n");//提示添加成功
    Node* move=head;
    while (move->next!=NULL)//在尾部插入数据
    {
        move=move->next;
    }
    move->next=createNode(data);
    flush(head);//存入文件
}

void Show(Node *head)
{
    info_init(head);//读入文件数据
    if(head->data==NULL)
    {
        printf("EMPTY ACCOUNT!\n");
    }
    else
    {   
        Node *move=head;//设置move指针指向头节点
        printf("%2s\t%-12s\t%-10s\t%-10s\n","Number","Date","Kind","Amount");
        while (1)
        {
            move=move->next;
            if (move==NULL)
            {
                break;
            }//空指针判定，如果move指针为空则程序运行完毕
            else
            {printf("%s\t",move->data->id);//输出id
            printf("%-12s\t",move->data->date);//输出日期
            PrintKind(move);//调用函数printkind实现打印金额类型
            printf("%-10d",move->data->money);//打印金额大小
            printf("\n");
            }    
        }
    }
    
}

void PrintKind(Node* move)
{switch (move->data->kind)//种类
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

void update(Node *head)//修改记账信息//
{
    printf("input the account ID to be updated(-1:quit):\n");
    char id[MAX_ID];
    scanf("%s",id);
    if(!strcmp(id,"-1"))                                                                                                                                                                                                                                                                   
        return;

    Node *p=head;
    while(p!=NULL &&(strcmp(p->data->id,id)))
        p=p->next;
    if(p==NULL)
        printf("the account not exist\n");
    else
    {
        printf("input new account information\n");
        printf("input new id:\n");
        scanf("%s",p->data->id);
        printf("input new amount:\n");
        scanf("%d",&p->data->money);
        printf("input new money type:\n1.eat 2.study 3.entertainment 4.daily supplies 5.other things \n");
        scanf("%d",&p->data->kind);
        printf("input new 1date:\n");
        scanf("%s",p->data->date);
        printf("update the account successufly!\n");
        //printf_one(p);//
    }
}

void info_init(Node *head)//初始化并读入//
{
    FILE *fp;
    if((fp=fopen("account.txt","r"))==NULL)
    {
            printf("create account information file failed\n");
    }
    else
    {
        Account account;
        Node *h=head;
       /*h->head=NULL;
        h->current_num=0;
        */while(!feof(fp))
        {
            fscanf(fp,"%s",account.id);
            fscanf(fp,"\t%d",&account.money);
            fscanf(fp,"\t%d",&account.kind);
            fscanf(fp,"\t%s\n",&account.date);
           /* node=(Node *)malloc(sizeof(Node));
            node->account=account;
            node->next=h->head;
            h->head=node;
            h->current_num+=1;*/
            h=h->next;
        }
    }
    fclose(fp);/*
    printf("building account information linkedlist finished!\ntotal accounts num:%d\n",h->current_num);*/
}

void flush(Node *head)//存入文件//
{
    FILE *fp;
    Node *h=head;
    int count=0;
    if((fp=fopen("/Users/raphael/desktop/c_algorithms/AccountSystem/account.txt","w"))==NULL)
    {
        printf("failed to open file\n");
        return;
    }
    while(h->next!=NULL)
    {
        fprintf(fp,"%s\t",h->data->id);
        fprintf(fp,"%d\t",h->data->money);
        fprintf(fp,"%d\t",h->data->kind);
        fprintf(fp,"%s\t",h->data->date);
        h=h->next;
        count++;
    }
    fclose(fp);
    //destroy(h);//
    if(count >0)
        printf("write %d account information into the file\n",count);
    else
        printf("no data to write\n");
}