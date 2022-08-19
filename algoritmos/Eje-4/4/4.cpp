#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void competidores(){
  char nacionalidad[20];
  int DNI, edad, min, max, M;
  float puntaje;
  bool band = false;
  min = 999;
  max = 0;
  system("clear");
  printf("Ingrese la cantidad de competidores\n");
  scanf("%d",&M);
  for (int i = 0; i < M; i++)
  {
    system("clear");
    printf("Ingrese el DNI del competidor\n");
    scanf("%d",&DNI);
    printf("Ingrese la nacionalidad del competidor\n");
    scanf("%s",&nacionalidad);
    printf("Ingrese la edad del competidor\n");
    scanf("%d",&edad);
    printf("Ingrese el puntaje del competidor\n");
    scanf("%d",&puntaje);
    if (edad<min && puntaje > max)
    {
      min = edad;
      max = puntaje;
      if (strcasecmp(nacionalidad, "Argentino")==0)
      {
        band=true;
      }
    }
  }
  if(band)
  {
    printf("El competidor mas joven y con menor puntaje es argentino");
  }
}

int main(){
  competidores();
}
