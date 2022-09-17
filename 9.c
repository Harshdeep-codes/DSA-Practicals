//Printing array in reverseorder, sum of its element and maximum and mnimum element
#include<stdio.h>
void main(){
int arr[5] = {1,1,3,1,2};

int sum=0,
maxi = 0,
mini = arr[0];

for (int i = 0; i < 5; i++){
    sum = sum+arr[i];
}

//printing array in reverse order
printf("Elements of Array in reverse order-\n");
for (int i = 4; i >= 0; i--){
    printf("%d \n",arr[i]);
}

//printing sum of array
printf("The sum of elements of array is %d",sum);

//finding maximum element
for (int i = 0; i < 5; i++)
{
    if(arr[i]>maxi){
        maxi = arr[i];
    }
}
printf("\nMaximum Element is - %d",maxi);

//finding minimum element
for (int i = 0; i < 5; i++)
{
    if(arr[i]<mini){
        mini = arr[i];
    }
}
printf("\nMinimum Element is - %d",mini);
}