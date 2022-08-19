#include <stdio.h>
#include <stdlib.h> 

void metodoDePago(float TSC){
  char TP;
  float TCC;
  const float CA = 1.5;
  printf("El monto a abonar es de $%.2f \n", TSC);
  printf("Elija el método de pago: \n");
  printf("E: Pago en efectivo (0%c de recargo)\n",37);
  printf("T: Pago con tarjeta (50%c de recargo)\n",37);
  fflush(stdin);
  scanf("%c", &TP);
  system("cls");
  switch(TP){
    case 'E':
        printf("El monto final es de $%.2f",TSC);
        break;
    case 'T':
        TCC = TSC * CA;
        printf("El monto sin recargo es de $%.2f\n", TSC);
        printf("El monto final, con regargo, es de $%.2f",TCC);
        break;
    default:
        printf("No se reconoce el método de pago seleccionado");
  }
  return;
}

void calcPrecio(char TH, int CH){
  float PH,TSC;
  switch(TH){
    case 'S':
        PH = 400;
        break;
    case 'D':
        PH = 500;
        break;
    case 't':
        PH = 700;
        break;
    default:
        printf("La hamburguesa no se encuentra en el menú\n");
  }
  TSC = CH * PH;
  metodoDePago(TSC);
  return;
}

int main(){
  char TH;
  int CH;
  printf("Indique la hamburguesa que desea adquirir: \n");
  printf("S: Simple $400 \n");
  printf("D: Doble $500 \n");
  printf("T: Triple $700 \n");
  fflush(stdin);
  scanf("%c", &TH);
  system("cls");
  printf("Indique la cantidad de hamburquesas que desea pedir: ");
  fflush(stdin);
  scanf("%d", &CH);
  system("cls");
  calcPrecio(TH,CH);
}