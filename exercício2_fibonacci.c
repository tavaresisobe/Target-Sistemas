#include<stdio.h>

int main()
{
  long unsigned int n, vetor[100] ;
  int i, count = 0 ;  //variaveis auxiliares
  printf ("Digite um número e descubra se ele pertence à sequência de fibonacci !!\n") ;
  scanf("%lu", &n) ;
  printf("\n") ;
  vetor[0] = 0 ;
  vetor[1] = 1 ;
    for (i = 2; i < 100 ; i++)
    {
      vetor[i] = vetor[i-1] + vetor[i-2] ;  //atribuindo ao vetor a sequencia de fibonacci
      
      if (n == vetor[i])  //verificando se o número digitado pertence à sequência de fibonacci
      {
        printf ("O número %d pertence à sequência de fibonacci.\n", n) ;
        count = 1 ;  
        break ;
      }
    }
  if (count == 0)  //caso count não receba o valor 1, o número não pertencerá a sequencia de fibonacci
  {
    printf ("O número %d não pertence à sequência de fibonacci.\n", n) ;
  }
  return 0 ;
}