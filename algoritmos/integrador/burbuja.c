#include <stdio.h>
#include <stdbool.h>
const int N=20;

void burbuja( char* a[6]){
  int k,i,cota;
  char* aux;
  cota = N-1;
  k = 1;
  while(k != -1){
    k = -1;
    for(int i =0; i <= cota - 1; i++){
      if(a[i]<a[i+1]){
        aux = a[i];
        a[i] = a[i+1];
        a[i+1] = aux;
        k=i;
      }
    }
    cota = k;
  }
}

void mostrar(char* a[6]){
  for(int i = 0; i <= N - 1; i++){
    printf(" %d |", a[i]);
  }
}

int main(){
  // int a[20] = {1,9,2,8,3,7,4,6,5,10,19,12,18,13,17,14,16,15,20,11};
  char* a[6] = {"Arsenal", "Bautizo", "Comadreja", "Consulta", "Dinosaurio","Zapato"};
  burbuja(a);
  mostrar(a);
}