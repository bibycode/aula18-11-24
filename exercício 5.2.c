#include <stdio.h>
 
 int main(void) {
    int p, m, c, i;
    printf("Numero de pacientes?  ");
    scanf("%d", &p);
   
    m = -1; 

 for(c=1; c<=p; c++) { 
 printf("%da. idade? ", c); 
 scanf("%d",&i); 
 if( i>m ) m = i; 
 } 
 printf("Maior idade = %d\n", m); 
 
} 