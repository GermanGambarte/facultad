#include <stdio.h>
const int N = 10;
typedef struct 
{
  char name[256];
  char surname[256];
  int dni;
} students;

void load(students l[N])
{
  printf("----------LOAD----------\n");
  for (int i = 0; i < N; i++)
  {
    printf("Ingrese el nombre del alumno:\n");
    scanf("%s", l[i].name);
    printf("Ingrese el apellido del alumno:\n");
    scanf("%s", l[i].surname);
    printf("Ingrese el dni del alumno:\n");
    scanf("%d", &l[i].dni);
  }
}

void to_list(students l[N])
{
  printf("\n----------LIST----------\n");
  for (int i = 0; i < N; i++)
  {
    printf("alumno: %s %s, DNI: %d\n", l[i].name, l[i].surname, l[i].dni);
  }
}

void dni_checker(students l[N])
{
  int count = 0;
  printf("\n----------CHECKER----------\n");
  for (int i = 0; i < N; i++)
  {
    if(l[i].dni > 40000000)
    count = count + 1;
  }
  if(count == 0)
  {
    printf("No hay alumnos que tengan dni mayor a 40000000");
  }
  else if (count == 1)
  {
    printf("Sólo un alumno tiene dni mayor a 40000000");
  }
  else
  {
    printf("%d alumnos tienen dni mayor a 40000000", count);
  }  
}


int main()
{
  students list[N];
  load(list);
  to_list(list);
  dni_checker(list);
  return 0;
}

