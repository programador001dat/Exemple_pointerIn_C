#include <stdio.h>

#define makro "oOo...... Exercícios CLi sobre Matrizes em STR ......oOo"

int m_string()
{
   char m[2][50];

   printf("\n\n");

   printf(" 1º digite uma palavra: ");
   scanf("%49s", m[0]);
   printf("\n");
   printf(" 2º digite uma palavra: ");
   scanf("%49s", m[1]);

   printf("\n\n");

   char *p1 = m[0];
   char *p2 = m[1];

   printf("+ Valor: %s \n", m[0]);
   printf("+ Endereço do valor: %p1 \n", m[0]);
   printf("+ Endereço de ponteiro: %p \n", (void*)p1);
   printf("+ Tamanho de Bytes do ponteiro: %lu \n", sizeof(p1));

   printf("\n\n");

   printf("+ Valor: %s \n", m[1]);
   printf("+ Endereço: %p2 \n", m[1]);
   printf("+ Endereço de ponteiro: %p \n", (void*)p2);
   printf("+ Tamanho de Bytes do ponteiro: %lu \n", sizeof(p2));

   return 0;
}

int main(void)
{

   printf("\n\n %s \n\n", makro);
   m_integer();
//   m_string();

   return 0;
}
