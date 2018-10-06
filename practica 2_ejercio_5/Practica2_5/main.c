#include <stdio.h>
int main()
{
   float area, radio, longitud;

    printf("\n Introduzca el radio: ");

    scanf("%f", &radio);

    area = (3.1416 * radio * radio);
    longitud = (2 * 3.1416 * radio);

    printf("El area es:%f", area);
    printf("La longitud es:%f", longitud);

    return 0;
}
