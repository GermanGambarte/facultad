#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void promedio(int cantidad, float total)
{
  printf("El promedio del importe de gas pagado por los contribuyentes de Rawson es: $%.2f",total / cantidad);
}

void contribuyentes()
{
  char departamento[20], servicio[20];
  float importe, total;
  int cantidad;
  cantidad = 0;
  total = 0;
  system("clear");
  printf("Ingrese el importe a cobrar. (0 para finalizar)\n");
  fflush(stdin);
  scanf("%f", &importe);
  while (importe > 0)
  {
    printf("Ingrese el servicio a abonar\n");
    fflush(stdin);
    scanf("%s",&servicio);
    printf("Ingrese el departamento del contribuyente\n");
    fflush(stdin);
    scanf("%s",&departamento);
    if (strcasecmp(servicio,"gas")==0 && strcasecmp(departamento,"Rawson")==0)
    {
      cantidad = cantidad + 1;
      total = total + importe;
    }
    system("clear");
    printf("Ingrese el importe a cobrar. (0 para finalizar)\n");
    fflush(stdin);
    scanf("%f", &importe);
  }
  promedio(cantidad,total);
}

int main()
{
  contribuyentes();
}