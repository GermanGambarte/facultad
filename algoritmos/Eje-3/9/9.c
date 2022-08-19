#include <stdio.h>
#include <stdlib.h>

float calcIncremento(float valor){
  float importe = 0;
  if(valor >= 500)
    importe = valor * .2;
  if(valor >= 700)
    importe = valor * .5;
  if(valor >= 900)
    importe = valor * 1;
  return importe;
}

void infoRecarga(char nro[10], float recarga){
  float incremento = calcIncremento(recarga);
  printf("Se realizo una recarga de $%.2f al numero %s",recarga, nro);
  printf("\nEl total a pagar es $%.2f", recarga + incremento);
  return;
}

int main(){
  char nro[10];
  float recarga;
  printf("Ingrese el numero de celular que desea recargar\n");
  fflush(stdin);
  scanf("%s",&nro);
  printf("INgrese el monto de la recarga\n");
  fflush(stdin);
  scanf("%f",&recarga);
  infoRecarga(nro,recarga);
}