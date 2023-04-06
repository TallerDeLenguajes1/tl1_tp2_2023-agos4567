#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N 20
int main(){




int i=0;

double vt[N];

double *pVt;
pVt=vt;


while ( i < N)
{
   *pVt= 1 + rand() % 10001;
   *pVt = *(pVt)/100;
   printf("%.2f \n", *pVt);

   pVt++;
   i++;
}


    return 0;
}