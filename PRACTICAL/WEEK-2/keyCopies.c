#include<stdio.h>
#define MAX_SIZE 100

int main()
{
int arr[MAX_SIZE];
int i,size,key,count=0;

//taking the size of the array
printf("enter the size of the array: ");
scanf("%d",&size);

//entering the elements
printf("enter elements in the array: ");
for(i=0; i<size; i++)
{
    scanf("%d",&arr[i]);
}
 printf("enter the key: ");
 scanf("%d",&key);

 for(i=0; i<size; i++)
 {
     if(key==arr[i])
     {
         count++;
     }
 }
 printf("number of copies in the array is:%d ",count);

return 0;
}
