#include <stdio.h>

double calcularfactorial(int n)
{
    double producto = 1;
    for (int i=1; i<=n;i++)
    {
        producto *=i;
    }
    return producto;
}

int main() {
    double combinaciones, prob;
    int n,r;
    printf("Calculo de probabilidad de ganarse el melate\n");
    scanf("%i",&r);
    printf("Cuantos eliges (r): ");
    scanf("%i",&r);
    combinaciones = calcularfactorail(n)/(calcularfactorial(r)*calcularfactorial(n-r));
    prob= 2.0/combinaciones;
    printf("Las combinaciones son %0.01f \n",combinaciones);
    printf("Las probabilidades de ganar es %0.121f \n",prob);
}