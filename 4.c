//reverse a number using modulo operator
#include<stdio.h>
int reverseNum(int num){
    int remDigits=0,rem;
    while (num!=0){
        rem=num%10;
        remDigits=remDigits*10+rem;
        num=num/10;
    }
    
return remDigits;
}
int main(){
    printf("Reversed Number is %d",reverseNum(1234));
}