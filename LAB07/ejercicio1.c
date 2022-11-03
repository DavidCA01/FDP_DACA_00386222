#include <stdio.h>

int main()
{
    FILE *a = fopen("numerospositivo.txt", "a");
    FILE *b = fopen("numerosnegativos.txt", "a");
    int num1;

    if (a == NULL || b == NULL)
    {
        printf("ERROR!");
        return 1;
    }

    do
    {
        printf("Ingrese un numero:    ", num1);
        scanf("%d", &num1);
        if (num1 > 0)
        {
            fprintf(a, "%d", num1);
            fprintf(a, "\n");
        }
        if (num1 < 0)
        {
            fprintf(b, "%d", num1);
            fprintf(b, "\n");
        }

    } while (num1 != 0);
    fclose(a);
    fclose(b);
    return 0;
}