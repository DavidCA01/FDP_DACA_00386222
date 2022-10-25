#include <stdio.h>

int main()
{
    int i = 0, n, h = 0, m = 0, sexo, A, B;
    printf("Ingrese la cantidad del grupo:  \n");
    scanf("La cantidad de personas en el grupo son:   %d\n", &n);
    A = h;
    B = m;
    printf("Ingrese el sexo de la persona:    \n", i);
    printf("A = HOMBRE:    \n", A);
    printf("B = MUJER:    \n", B);
    for (int i = 0; i < +n; i++)
    {
    }
    if (sexo == A)
    {
        A = h + 1;
        printf("Ingrese hombre   \n", A);
        scanf("A = HOMBRE:    \n", &A);
    }
    else if (sexo == B)
    {
        B = m + 1;
        printf("Ingrese hombre   \n", B);
        scanf("A = HOMBRE:    \n", &B);
    }
    printf("La cantidad de hombres es:    \n", A);
    printf("La cantidad de mujeres es:    \n", B);
    return 0;
}
