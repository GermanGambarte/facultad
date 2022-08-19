#include <stdio.h>
const int N = 5;

void cargar(int n[N]){
  for(int i = 0; i < N;i++){
    printf("Ingrese un numero:\n");
    scanf("%d", &n[i]);
  }
}

int hallar(int n[N], int v){
  for(int i = 0; i < N;i++){
    if(n[i] ==v){
      return i;
    }
  }
  return -1;
}


int cargaMayores(int n[N], int sub[N]){
  int j = 0;
  for (int i = 0; i < N; i++){
    if(n[i] > 1000){
      sub[j] = n[i];
      j = j + 1;
    }
  }
  return j;
}

void mostrarMayores(int s[N], int c){
  printf("----MAYORES A 1000----\n");
  for (int i = 0; i < c; i++)
  {
    printf("Posicion %d: %d\n",i, s[i]);
  }
  printf("----------------------\n");
}

int main(){
  int numeros[N],sub[N];
  int indice,valor, cantidad;
  cargar(numeros);
  printf("Ingrese el numero que desea encontrar\n");
  scanf("%d", &valor);
  indice = hallar(numeros, valor);
  printf("-------BUSQUEDA-------\n"); 
  if(indice != -1){
    printf("El numero %d se encuentra en el indice %d\n", valor, indice);
  } else {
    printf("%d no se encuentra en el arreglo\n",valor);
  }
  printf("----------------------\n");
  cantidad = cargaMayores(numeros, sub);
  mostrarMayores(sub, cantidad);
}