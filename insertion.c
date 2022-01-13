#include<stdio.h>
void main()
{
    int arr[7]={5,1,3,1,1,5,1};
    int n=7;

    int i, v, j;
    // printf("Enter 5 elements\n");
    // for (i = 0; i < 5; i++)
    // {
    // printf("Enter element: ");    
    // scanf("%d",&arr[i]);
    // }

    for(i=0; i<n;i++)
    {
        v=arr[i];
        j=i-1;

    while(j>=0 && arr[j]>v)
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=v;
    }
    for (i = 0; i < n; i++)
    {
    printf("%d\t",arr[i]);
    }
}