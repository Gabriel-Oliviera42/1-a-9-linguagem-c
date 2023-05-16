#include <stdio.h>

int main(void) {
  system ("clear");
  
  int var;
  
  printf("Coloque um numero de 1 a 9: ");
  scanf("%i",&var);
  switch (var) {
    case 1:
      printf("o valor é 1");
      break;
    case 2:
      printf("o valor é 2");
      break;
    case 3:
      printf("o valor é 3");
      break;
    case 4:
      printf("o valor é 4");
      break;
    case 5:
      printf("o valor é 5");
      break;
    case 6:
      printf("o valor é 6");
      break;
    case 7:
      printf("o valor é 7");
      break;
    case 8:
      printf("o valor é 8");
      break;
    case 9:
      printf("o valor é 9");
      break;
    default:
      printf("coloque um valor entre 1 e 9");
  }
  return 0;
}