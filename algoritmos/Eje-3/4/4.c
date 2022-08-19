#include<stdio.h>
void resultado(int n1, int n2){
  if(n1 < n2)
    printf("El menor es el primer numero y su valor es: %d", n1);
  else if(n2 < n1)
        printf("El menor es el segundo numero y su valor es: %d", n2);
      else
        printf("Los numeros son iguales");
  return;
}

int main(){
  int n1,n2;
  printf("Ingrese primer numero \n");
  scanf("%d", &n1);
  printf("Ingrese segundo numero \n");
  scanf("%d", &n2);
  resultado(n1,n2);
}