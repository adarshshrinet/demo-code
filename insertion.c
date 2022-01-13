#include<stdio.h>
void main()
{
    int arr[5];
    int i, v, j;
    printf("Enter 5 elements\n");
    for (i = 0; i < 5; i++)
    {
    printf("Enter element: ");    
    scanf("%d",&arr[i]);
    }
    for(i=0; i<5;i++)
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
    for (i = 0; i < 5; i++)
    {
    printf("%d\t",arr[i]);
    }
}