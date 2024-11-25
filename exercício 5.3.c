#include <stdio.h>

int main(void) {
float c, j;
int p, i;

printf("Quantidade de capital?  ");
scanf("%f", &c);

printf("Juros? ");
scanf("%f", &j);

printf("Periodo? ");
scanf("%d", &p);
for(i=1; i<=p; i++) {
  c= (1+j/100)*c;
  printf("%do.mes: R$ %.2f\n", i, c);
}
}
