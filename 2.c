//wap to marksheet using if else
#include<stdio.h>
int main(){

//declaration of variables
char name[25];    
float P,C,M,E,H;
float avg,per;
float total;

//taking students name
printf("Enter your name=");
scanf("%s",&name);

//taking input of students marks
printf("Enter all subject marks:-\n");

printf("Physics = ");
scanf("%f",&P);

printf("Chemistry = ");
scanf("%f",&C);

printf("Maths = ");
scanf("%f",&M);

printf("English = ");
scanf("%f",&E);

printf("Hindi = ");
scanf("%f",&H);

//calculating total marks
total= P+C+M+E+H;

//calculationg average
avg = total/5;

//calculating percentage
per = total/5;

//printing result
printf("Name - %s\n",name);
printf("Total Marks out of /500\n%f\n",total);
printf("Your Average is - %f\n",avg);
printf("Your Percentage is - %f\n",per);

if (per>=80 && per<=100){
    printf("Merit");
}
else if(per>=60 && per<=80){
    printf("Ist Division");
}
else if(per>=59 && per<=60){
    printf("IInd division");
}
else if(per>=33 && per<=59){
    printf("IIIrd Division");
}
else if(per<33){
    printf("FAIL");
}

return 0;
}