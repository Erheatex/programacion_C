#include <stdio.h>
#include <math.h>

int main()
{
    int num, minutos, horas, segundos;

  printf("Introduce el número de segundos:\n");
  scanf("%i",&num);
  horas=(num/3600);
  minutos=((num-3600*horas)/60);
  segundos=(minutos/1);


  printf("%i segundos equivalen a: " , num);
  printf(":%i horas ", horas);
  printf("%i minutos ", minutos);
  printf("%i segundos", segundos);



    return 0;
}
