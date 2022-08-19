#include<stdio.h>

float valorComision(float importe){
  return(importe * .05);
}

void importeFinal(float compra, float venta){
  float total, comision;
  total = compra * venta;
  comision = 0;
  if(compra > 5000);
    comision = valorComision(compra);
  printf("Se compraron %.2f dolares \n",compra);
  printf("A un valor de $%.2f por dolar \n",venta);
  printf("El valor de la comision administrativa es de: $%.2f \n", comision);
  printf("El monto total a abonar es de $%.2f \n", total+comision);
  return;
}

int main(){
  float compra, venta;
  printf("Indique la cantidad de dolares que desea comprar \n");
  scanf("%f", &compra);
  printf("Indique el valor de venta del dolar \n");
  scanf("%f", &venta);
  importeFinal(compra, venta);
}