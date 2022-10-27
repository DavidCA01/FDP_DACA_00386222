#include <stdio.h>
#include <string.h>

int main()
{
    char texto[100], combinacion[100];

    printf("David Alejandro Cabezas Ayala, Carnet:00386222\n");

    printf("Ingrese su frase favorita:  \n");
    fgets(texto, sizeof(texto), stdin);
    puts(texto);
    printf("Ingrese su frase favorita:  \n");
    fgets(combinacion, sizeof(combinacion), stdin);
    if (strstr(texto, combinacion))
        puts("Si se encuentra la palabra");
    else
        puts("No se encuentra en la frase");
    puts(combinacion);
    return 0;

    printf("David Alejandro Cabezas Ayala, Carnet:00386222\n");

}