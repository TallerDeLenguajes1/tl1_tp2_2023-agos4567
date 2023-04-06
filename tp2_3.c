#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N 5
#define M 7
int main(){


int *matrizDinamica= (int *) malloc(sizeof(int)*M*N);


for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 7; j++)
    {
        

     *((matrizDinamica + i * M) +j ) = 1+rand()%100;
    
      
  ;
     printf("%4d", *((matrizDinamica +i *M)+j));


    }
    printf("\r\n");

 
    
} 


  return 0;


   }