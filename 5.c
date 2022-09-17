//factorial of a number
#include<stdio.h>
void main(){
int fact=1, number;
number = 5;
for (int i = 1; i <= number; i++){
    fact=fact*i;
}
printf("Factorial is %d ",fact);
}