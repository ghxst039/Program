#include <stdio.h>

void pendiente(float x1, float y1, float x2, float y2)
{
    float m;
    if (x1==x2)
    {
        printf("Pendiente indefinida")
    }
}

int main() {
    int x1,y1,x2,y2;
    printf("Da los valores del punto 1: ");
    scanf("%f %f",&x1,&y1);
    printf("Da los valores del punto 2: ");
    scanf("%f %f",&x2,&y2);
    pendiente(x1,y1,x2,y2);
}