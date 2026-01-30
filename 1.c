#include<stdio.h>
void display(int arr[],int n)
{
   for(int  i=0;i<n;i++)
   {
    printf("%d",arr[i]);
   }
   printf("\n");
}
int search(int arr,int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if (arr[i] == x)
        {
            return -1;
        }
    }
    return -1;
}
int insert(int arr[],int n,int x,int pos)
{
    if(pos<0 || pos>= n)
    {
        printf("not valid");
    }
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos]=x;
    return n + 1;
}
int delete(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n)
    {
        if (arr[i] == x)
           break;
    }
    if (i == n)
    {
        printf("not valid");
        return n;
    }
    for (int j= i; j <= n - 2; j++)
    {
        arr[j]=arr[j+1];    
    }

{
    int arr[]= {70,60,50,40,30,20,10};
    //int n = sizeof(arr) / sizeof(arr[0]);
    int n=7;
    display(arr,n);
    printf("%d\n",search(arr,n,48));
    // insert(arr,n,55,2);
    // delete(arr, n,58)
    //display(arr')
}
    



