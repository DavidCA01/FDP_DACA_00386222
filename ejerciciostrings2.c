#include <stdio.h>
#include <string.h>
#include <conio.h>

char palabra[100];
int longitud;
int inicio = 0, fin;

int main()
{
  printf("David Alejandro Cabezas Ayala, Carnet:00386222\n");

  printf("Ingrese una palabra:          \n");
  gets(palabra);

  longitud = strlen(palabra);

  for (fin = longitud - 1; palabra[fin] == palabra[inicio] && fin >= 0; inicio++, fin--)
    ;

  if (inicio == longitud)
  {
    printf("Es un palindromo    \n");
  }
  else
  {
    printf("No es palindromo    \n");
  }

  printf("David Alejandro Cabezas Ayala, Carnet:00386222\n");
}
