#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAMA

struct compu
{
    int velocidad; // valores aleatorios entre 1 y 3
    int anio;  // valores aleatorios entre 2015 y 2023
    int cantidad; //valores aleatorios entre 1 y 8
    char *tipos_cpu; // valores de arreglo tipo
}typedef compu;

void cargar(compu *punt, char tipos[6][10]);
void mostrarLista(compu *punt);
void pcMasAntigua(compu *punt);

void pcMasveloz(compu *punt, int auxiliarV);





int main(){

  srand(time(NULL));
char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};
compu *punt;



 punt= malloc(5*sizeof(compu));

 cargar(punt, tipos);

 printf("------Mostrar lista:------\n"); 
 mostrarLista(punt);
 pcMasAntigua(punt);
  int auxiliarV=0;
 pcMasveloz(punt, auxiliarV);




    return 0;
}

void cargar(compu *punt, char tipos[6][10]){
    
int indice;
  for (int i = 0; i < 5; i++)
  {
    punt->velocidad=rand()%3 + 1;
    punt->cantidad=rand()% 9 + 1;
    punt->anio=rand()%9 + 2015;
    indice=rand()%6;
    punt->tipos_cpu=tipos[indice];


   punt++;

  }
  
}

void mostrarLista(compu *punt){
int indice;
 int z=0;
for (int i = 0; i < 5; i++)
{
   
    z++;
  printf("vuelta:[%d]\n",z);   
  printf("velocidad %d\n", punt->velocidad);
   printf("anio %d\n", punt->anio);
   printf("cantidad: %d\n",punt->cantidad);
   printf("tipo de cpu:");
   puts(punt->tipos_cpu);
   printf("---------------\n");
  punt++;

}





}

void pcMasAntigua(compu *punt){
int aux=2023;

 
  for (int i = 0; i < 5; i++)
  {
    if (punt[i].anio< aux)
    {
       aux=punt[i].anio;

    }

  }
     

     for (int i = 0; i < 5; i++)
     {
        if ( punt[i].anio == aux)
        {
           

        printf("- - - - Pc mas antigua/as - - - - \n");
        printf("tipo de procesador:%s \n", punt[i].tipos_cpu);
        printf("velocidad:%d\n",punt[i].velocidad);
        printf("cantidad:%d\n",punt[i].cantidad);
        printf("anio:%d\n",aux);

}

   }
        
        
  
     
    
}    
   





void pcMasveloz(compu *punt,int auxiliarV){


 for (int i = 0; i < 5; i++)
 {
    if (punt[i].velocidad >= auxiliarV)
    {
       auxiliarV=punt[i].velocidad;
       

   
   }
    

  }
        
for (int i = 0; i < 5; i++)
{
    if (punt[i].velocidad == auxiliarV)
    {
      
      
   printf("/ / / / /Pc mas veloz / / / / / \n");     
   printf("Procesador: %s \n",punt[i].tipos_cpu);
   printf("Cantidad: %d \n",punt[i].cantidad);
   printf("Velocidad: %d\n", auxiliarV);
   printf("Anio: %d\n", punt[i].anio);



    }
    
}


 }



 
     
    


 


