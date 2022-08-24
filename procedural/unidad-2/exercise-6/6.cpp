#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int SALAS = 6, TURNOS = 4;

void inicializar(int c[SALAS][TURNOS])
{
  for(int i = 0; i < SALAS; i++)
  {
    for (int j = 0; j < TURNOS; j++)
    {
      c[i][j] = 0;
    }
  }
}

void carga(int c[SALAS][TURNOS])
{
  int area, turno;
  // printf("Ingrese el area, para finalizar ingrese 0");
  // scanf("%d",&area);
  // while(area != 0)
  // {
  //   printf("Ingrese el turno al que asistira");
  //   scanf("%d",&turno);
  //   c[area - 1][turno - 1]++;
  // }
  for (int i = 0; i < SALAS; i++)
  {
    for (int j = 0; j < TURNOS; j++)
    {
      c[i][j] = rand() % 20;
    }
  }
}

void mostrar(int c[SALAS][TURNOS])
{
  printf("----------MATRIZ----------\n");
  for (int i = 0; i < SALAS; i++)
  {
    for (int j = 0; j < TURNOS; j++)
    {
      printf(" %d ",c[i][j]);
    }
    printf("\n");
  }
}

void cantidad(int c[SALAS][TURNOS])
{
  int sum = 0;
  printf("----------CANTIDAD----------\n");
  for (int j = 0; j < TURNOS; j++)
  {
    for (int i = 0; i < SALAS; i++)
    {
      sum += c[i][j];
    }
    printf("En el turno %d hay %d inscriptos\n", j + 1, sum);
    sum = 0;
  }
  
}

void promedio(int c[SALAS][TURNOS])
{
  int area,sum = 0;
  float prom;
  printf("----------PROMEDIO----------\n");
  printf("Ingrese un area: ");
  scanf("%d", &area);
  for (int i = 0; i < TURNOS; i++)
  {
    sum += c[area - 1][i];
  }
  prom = sum / TURNOS;
  printf("El promedio de inscriptos del area %d es de %.2f\n", area, prom);
}

int main()
{
  int congreso[6][4];
  inicializar(congreso);
  carga(congreso);
  mostrar(congreso);
  cantidad(congreso);
  promedio(congreso);
  return 0;
}
