#include <stdio.h>
#include <math.h>

int main() {
  int num1, num2;
  float num3, resultado1, resultado2, resultado3;

  printf("Digite dois n�meros inteiros e um n�mero real separados por espa�o: ");
  scanf("%d %d %f", &num1, &num2, &num3);

  resultado1 = (2 * num1) * (num2 / 2.0);
  resultado2 = (3 * num1) + num3;
  resultado3 = pow(num3, 3);

  printf("O produto do dobro do primeiro com metade do segundo �: %.2f\n", resultado1);
  printf("A soma do triplo do primeiro com o terceiro �: %.2f\n", resultado2);
  printf("O terceiro elevado ao cubo �: %.2f\n", resultado3);

  return 0;
}
