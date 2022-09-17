//check whether a number is armstrong or not
#include<stdio.h>
int main(){

int num,originalNum,digit,newNum=0;
printf("Enter a 3 digit number = ");
scanf("%d",&num);
originalNum = num;
while(num>0){
    digit = num%10;
    //new number after adding squares of each digits
    newNum = newNum+digit*digit*digit;
    num = num/10;
}
if(newNum == originalNum){
    printf("Number is Armstrong");
}
else{
    printf("Number is Not Armstrong");
}
return 0;
}