/* Gustavo Henrique Tavares Isobe
   Data: 22/06/2022 - 23:56 h
3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
• O menor valor de faturamento ocorrido em um dia do mês;
• O maior valor de faturamento ocorrido em um dia do mês;
• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.*/

#include <stdio.h>
 
int main() 
{
  int mes ;
  printf ("Digite quantos dia(s) haverá no mês: (recomendo 10)\n") ;
  scanf("%d", &mes) ;
  double faturamento[mes] ;
  double menor ;
  double maior ;
  double media = 0, aux = 0, guardavalores ;
  int diamaior, diamenor, i, count = 0 ;
    for (i = 0 ; i < mes ; i++)  //lendo elementos do vetor
    {
      printf("Digite o faturamento do dia: %d\n", i + 1) ;
      scanf ("%lf", &faturamento[i]) ;
      printf("\n") ;
    }
  //verificando o menor faturamento da semana:
    menor = faturamento [0] ;  //iniciando a variável
    for (i = 0 ; i < mes ; i++)
    {
      if (menor > faturamento[i])
      {
        menor = faturamento[i] ;
        diamenor = i + 1 ;
      }
    }
  //verificando o maior faturamento da semana:
    maior = faturamento [0] ;  //iniciando a variável
    for (i = 0 ; i < mes ; i++)
    {
      if (maior < faturamento [i])
      {
        maior = faturamento[i] ;
        diamaior = i + 1 ;
      }
    }
  //verificando a média do faturamento dos dias úteis:
    guardavalores = 0 ;  //iniciando a variável
    for (i = 0 ; i < mes ; i++)
    {
      if (faturamento[i] > 0.0)  //condição irá ignorar os dias em que os rendimentos = 0
      {
        guardavalores += faturamento[i] ;  //variável irá receber os valores
        aux += 1 ;  //variável auxiliar para a divisão
      }
    }
    media = guardavalores / aux ;
  //verificando quantas vezes o faturamento diário foi maior que a média:
    for (i = 0 ; i < mes ; i++)
      {
        if (faturamento[i] > media)  //comparando a média com os elementos do vetor
        {
          count += 1 ;  //se o elemento for maior que a média, count incrementa
        }
      }
  printf ("A média mensal foi de: R$ %.2lf\n\n", media) ;
  printf ("O maior valor arrecadado foi: R$ %.2lf, no dia %d.\n\n", maior,diamaior) ;
  printf ("O menor valor arrecadado foi: R$ %.2lf, no dia %d.\n\n", menor, diamenor) ;
  printf ("Em %d dia(s) do mês o faturamento diário foi maior que a média mensal.\n", count) ;
    
  return 0;
}
