#include <stdio.h>
#include <math.h>

void raices(float a,float b,float c)
{
    float x1,x2;
    if (b*b-4*a*b <0)
    printf("no hay solucion ");
    else
    {
        x1=(-b+sqrt(b*b-4*a*c))/(a*2);
        x2=(-b-sqrt(b*b-4*a*c))/(a*2);
        printf("%f",x1);
        printf("\n%f",x2);
    }
}

int main() {
    float a,b,c;
    printf("Ingresa los 3 coeficientes a b y c: ");
    scanf("%0.2f %0.2f %0.2f",&a,&b,&c);
    raices(a,b,c);


}