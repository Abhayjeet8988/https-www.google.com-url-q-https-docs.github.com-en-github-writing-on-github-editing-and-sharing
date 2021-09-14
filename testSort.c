
#include<stdio.h>
#include<stdlib.h>
void algorithm(int arr[])
{
    int i,j,min,temp;
    for(i=0;i<=11;i++)
    {
        min=i;
        for(j=i+1;j<11;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    printf("\nAfter Sort Array \n");
    for(i=0;i<=11;i++)
        printf("data = %d \n",arr[i]);
}
int main(){
    int arr[]={83,1,45,95,45,52,11,47,0,45,67,82};
    algorithm(arr);
    return 0;

}