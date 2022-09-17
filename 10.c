//copy elements of array in another array
#include<stdio.h>
void main(){

int A1[5]={1,2,3,4,5},
    A2[5]={};

//Copying Elements From Array1 to Array2
for(int i=0; i<5; i++){
    A2[i]=A1[i];
}

//Printing Array 2
for (int i = 0; i < 5; i++)
{
    printf("%d ",A2[i]);
}


}