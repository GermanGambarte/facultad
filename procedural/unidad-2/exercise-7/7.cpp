#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int FARMACIAS = 3;
const int MEDICAMENTOS = 6;

void inicializar(int l[FARMACIAS][MEDICAMENTOS])
{
  for (int i = 0; i < FARMACIAS; i++)
  {
    for (int j = 0; j < MEDICAMENTOS; j++)
    {
      l[i][j] = 0;
    }
  }
}

void carga(int l[FARMACIAS][MEDICAMENTOS])
{
  int med,cant;
  for (int i = 0; i < FARMACIAS; i++)
  {
    printf("Indicar el codigo del medicamento: ");
    scanf("%d", &med);
    while (med != 0)
    {
      printf("Ingrese la cantidad de unidades: ");
      scanf("%d", &cant);
      l[i][med - 100] += cant;
      printf("Indicar el codigo del medicamento: ");
      scanf("%d", &med);
    }
  }
}
void aleatoria(int l[FARMACIAS][MEDICAMENTOS])
{
  srand(time(NULL));
  for (int i = 0; i < FARMACIAS; i++)
  {
    for (int j = 0; j < MEDICAMENTOS; j++)
    {
      l[i][j] = rand() % 20;
    }
  }
}

void mostrar(int c[FARMACIAS][MEDICAMENTOS])
{
  printf("----------MATRIZ----------\n");
  for (int i = 0; i < FARMACIAS; i++)
  {
    for (int j = 0; j < MEDICAMENTOS; j++)
    {
      printf(" %d ",c[i][j]);
    }
    printf("\n");
  }
}

void calcular(int l[FARMACIAS][MEDICAMENTOS])
{
  int sum = 0;
  printf("----------CALCULAR----------\n");
  for (int j = 0; j < MEDICAMENTOS; j++)
  {
    for (int i = 0; i < FARMACIAS; i++)
    {
      sum += l[i][j];
    }
    printf("%d: %d\n", j + 100, sum);
    sum = 0;
  }
  
}

void mas_vendido(int l[FARMACIAS][MEDICAMENTOS])
{
  int farm = 0, med, max = -1;
  printf("----------MAS VENDIDO----------\n");
  printf("Ingrese el codigo de una farmacia: ");
  scanf("%d", &farm);
  for (int i = 0; i < MEDICAMENTOS; i++)
  {
    if (l[farm - 1][i] > l[farm - 1][i])
    {
      max = l[farm][i];
      med = i + 100;
    }
  }
  printf("el medicamento mas vendido de la farmacia %d es el %d\n", farm, med);
}

int main()
{
  int laboratiorio[FARMACIAS][MEDICAMENTOS];
  inicializar(laboratiorio);
  // carga(laboratiorio);
  aleatoria(laboratiorio);
  mostrar(laboratiorio);
  calcular(laboratiorio);
  mas_vendido(laboratiorio);
  return 0;
}
