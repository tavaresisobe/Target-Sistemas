/*Gustavo Henrique Tavares Isobe
  Data: 23/06/2022 - 01:37

5) Escreva um programa que inverta os caracteres de um string.
IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;*/
#include <stdio.h>
#include <string.h>

int main() 
{
  int i, tam ;
  char string [100] ; 
  
  printf ("Digite o conteúdo dessa string:\n\n") ;
  //lendo a string:
  
  fgets (string, 100, stdin) ;
  //variável para guardar tamanho da string e facilitar a inversão:
  tam = strlen(string);
  printf ("\n") ;
  printf ("O inverso da string digitada é:\n") ;
  //laço que irá imprimir os indices inversos dessa string:
   for (i = tam ; i >= 0 ; i--)
     {
       printf ("%c", string[i]) ;
     }
  return 0;
} 