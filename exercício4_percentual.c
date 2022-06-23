/*4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

SP – R$67.836,43
RJ – R$36.678,66
MG – R$29.229,88
ES – R$27.165,48
Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.*/
#include <stdio.h>

//funções para calcular e retornar os percentuais:

double saopaulo(double sp, double distribuidora)
{
  double var_sp ;
  var_sp = ((sp / distribuidora) * 100) ;
  return (var_sp) ;
}
double riodejaneiro(long double rj, long double distribuidora)
{
  double var_rj ;
  var_rj = ((rj/distribuidora)*100) ;
  return (var_rj) ;
}
double minasgerais(double mg, double distribuidora)
{
  double var_mg ;
  var_mg = ((mg / distribuidora) * 100) ;
  return (var_mg) ;
}
double espiritosanto(double es, double distribuidora)
{
  double var_es ;
  var_es = ((es / distribuidora) * 100) ;
  return (var_es) ;
}
double outros_estados(double outros, double distribuidora)
{
  double var_outros ;
  var_outros = ((outros / distribuidora) * 100) ;
  return (var_outros) ;
}

int main() 
{
  double sp = 67.83643, rj = 36.67966, mg = 29.29988 ;
  double es = 27.16548, outros = 19.84953, distribuidora ;
  
  distribuidora = sp + rj + mg + es + outros ;

  //chamando as funções e imprimindo os percentuais de contribuição de cada UF:
  printf ("O percentual de contribuição em que SP teve na arrecadação mensal foi de: %.2lf %\n", saopaulo(sp,distribuidora)) ;
  printf ("O percentual de contribuição em que RJ teve na arrecadação mensal foi de: %.2lf %\n", riodejaneiro(rj,distribuidora)) ;
  printf ("O percentual de contribuição em que MG teve na arrecadação mensal foi de: %.2lf %\n", minasgerais(mg,distribuidora)) ;
  printf ("O percentual de contribuição em que ES teve na arrecadação mensal foi de: %.2lf %\n", espiritosanto(es,distribuidora)) ;
  printf ("O percentual de contribuição em que OUTROS ESTADOS teve na arrecadação mensal foi de: %.2lf %\n", outros_estados(outros,distribuidora)) ;
  
  return 0;
}