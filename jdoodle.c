#include <stdio.h>
#include <math.h>

int main() {
    int k, tope;
    float precio, total=0;
    char nombre[10];
    printf("Ingrese el numero de los articulos: ");
    scanf("%d",&tope);
    for (k=1;k<=tope;k++)
    {
        printf("Articulo %d \n",k);
        printf("Descripcion : ");
        scanf("%s",&nombre);
        printf("Precio : ");
        scanf("%f",&precio);
        total+=precio;
    }
    printf("\n================\n");
    printf("Cantidad a pagar $ %0.2f\n",total);
    printf("Gracias por tu compra :)");
}