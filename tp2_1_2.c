#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){



int filas=5;
int columnas=7;

int *matrizDinamica= (int *) malloc(sizeof(int)*columnas*filas);


for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 7; j++)
    {
        

   
     *((matrizDinamica + i * columnas) +j ) = 1+rand()%100;
    
      
   
     printf("%4d", *((matrizDinamica +i *columnas)+j));


    }
    printf("\r\n");
    
}

return 0;
 }