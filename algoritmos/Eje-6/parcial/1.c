#include <stdio.h>
#include <stdbool.h>

const int N = 8;

bool binaria(int a[N], int el){
  int inf = 0, sup = N - 1, medio =(inf + sup) /2; 
  while (inf <= sup && el != a[medio])
  {
    if(el < a[medio]){
      sup = medio - 1;
    } else {
      inf = medio + 1;
    }
    medio = (inf + sup) /2;
  }
  if(inf < sup){
    return true;
  } else {
    return false;
  }
}

int main(){
  int arr[8]= {60,53,49,45,40,37,32,20};
  int elem;
  bool b;
  printf("Ingrese un numero \n");
  scanf("%d", &elem);
  b = binaria(arr,elem);
  if (b)
  {
    printf("El numero se encontro");
  } else {
    printf("El numero no se encontró");
  }
 return 0; 
}