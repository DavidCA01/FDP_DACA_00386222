#include <stdio.h>
#include <string.h>

int main()
{
    // abriendo archivo
    FILE *Vocales = fopen("Vocales.txt", "w");
    char palabra[1000];
    int contador_a = 0, contador_e = 0, contador_i = 0, contador_o = 0, contador_u = 0, largo;
    // Confirmar que esta cerrado
    if (Vocales == NULL)
    {
        printf("ERROR!");
        return 1;
    }
    // ingresando la palabra
    printf("Ingrese una palabra: \n", palabra);
    scanf("%s", &palabra);
    largo = strlen(palabra); // encontrando largo de la palabra
    size_t strlen(const char *palabra);
    for (int i = 0; i < largo; i++)
    {
        // contador de vocales
        if (palabra[i] == 'a')
        {
            contador_a++;
        }
        else if (palabra[i] == 'e')
        {
            contador_e++;
        }
        else if (palabra[i] == 'i')
        {
            contador_i++;
        }
        else if (palabra[i] == 'o')
        {
            contador_o++;
        }
        else if (palabra[i] == 'u')
        {
            contador_u++;
        }
    }
    // lo que saldra en el archivo
    fprintf(Vocales, "Contador de a: ");
    fprintf(Vocales, "%d", contador_a);
    fprintf(Vocales, "\n");
    fprintf(Vocales, "Contador de e: ");
    fprintf(Vocales, "%d", contador_e);
    fprintf(Vocales, "\n");
    fprintf(Vocales, "Contador de i: ");
    fprintf(Vocales, "%d", contador_i);
    fprintf(Vocales, "\n");
    fprintf(Vocales, "Contador de o: ");
    fprintf(Vocales, "%d", contador_o);
    fprintf(Vocales, "\n");
    fprintf(Vocales, "Contador de u: ");
    fprintf(Vocales, "%d", contador_u);
    fprintf(Vocales, "\n");

    fclose(Vocales);
    return 0;

    return 0;
}