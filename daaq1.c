//WAP to find the maximum and minimum element from an array.
#include<stdio.h>
#define MAX_SIZE 100

int main()
{
int arr[MAX_SIZE];
int i,max,min,size;

//taking the size of the array
printf("enter the size of the array: ");
scanf("%d",&size);

//entering the elements
printf("enter elements in the array: ");
for(i=0; i<size; i++)
{
    scanf("%d",&arr[i]);
}

arr[max]=0;
arr[min]=0;

for(i=0; i<size; i++)
{
    if (arr[i]>max)
    {
        max=arr[i];
    }
    if (arr[i]<min)
    {
        min=arr[i];
    }
}


printf("the maximum element in an array is:%d\n",max);
printf("the minimum element in an array is %d\n",min);

return 0;
}
