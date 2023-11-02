#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
   
    int i=0;
    for(i=0;i<sz-1;i++)
    {
        int j=0;
        int flag=1;
        for (j= 0; j<sz-1-i; j++)
        {
            int t=0;
            if(arr[j]>arr[j+1])
            {
                t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
                flag=0;
            }

        }
        if(1==flag)
        {break;}
        
    }

   
}
int main()
{
   int arr[]={2,4,7,3,-1,9,20,0};
   
   int sz=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    int i=0;
    for ( i = 0; i < sz; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}