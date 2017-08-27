#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
        int edad;
        float altura;
}persona;
persona* crear(int, float);

main()
{
      int num,edad;
      float altura;
      printf("***INICIO***");
      printf("\n\nIngrese la cantidad de personas que ingresara:");
      scanf("%i",&num);
      persona* ptrarreglo[num];
      printf("\n");
      for(int i=0;i<num;i++)
      {
                  printf("\nIngrese la edad y la altura de la persona #%i:",i+1);
                  scanf("%i",&edad);scanf("%f",&altura);
                  ptrarreglo[i]=crear(edad,altura);
      }
      for(int i=0;i<num;i++)
      {
                  printf("\nLa edad de la persona #%i es %i",i+1,ptrarreglo[i]->edad);
                  printf("\nLa altura de la persona #%i es %.2f",i+1,ptrarreglo[i]->altura);
                  
      }
      
      getch();
      return 0;
}
persona* crear(int e, float a )
{
         persona *per;
         per=(persona*)malloc(sizeof(persona));
         per->edad=e;
         per->altura=a;
         return per;
         
}
