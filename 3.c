//wap to print sum of n numbers using while loop
#include<stdio.h>
int sumTillNum(int num){
int i,sum=0;
i=0;
while (i<=num){
    sum+=i;
    i++;
}
return sum;
}
int main(){
printf("Sum till num is %d",sumTillNum(3));
return 0;
}

