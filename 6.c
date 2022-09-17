//find greater number from  number
#include<stdio.h>
void main(){
int a,b,c;
printf("Enter these different numbers:\n");
scanf("%d %d %d",&a,&b,&c);

if (a>b && a>c){
    printf("A is greatest");
}
else if(b>a && b>c){
    printf("B is greatest");
}
else{
    printf("C is greatest");
}

}