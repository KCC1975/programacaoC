#include <stdio.h>
#include <string.h>
//Desafio Super Trunfo - Países
//Tema 1  - Cadastro de Cartas
//Objetivo : No nivel novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir informações.

//Definição da estrutura da carta
typedef struct {
  char Estado [10];
  char CodigoCarta [4];
  char NomedaCidade [50];
  int População;
  float ÁreaKm2; 
  float PIB;
  int PontosTurísticos;

} Carta;



int main() {
// Área para identificação das variaveis para amarzenar as propriedades das cidades
// Área para entrada de dados 
// Área para exibição dos dados da cidade.

Carta Carta1, Carta2;

//Cadastro da Carta 1

printf ("Cadastro da carta %d \n,num");
printf ("Estado \n");
scanf ("%c, %c= Estado");
printf ("Codigo da Carta \n ");
scanf ("%s, %s= Codigo da Carta");
printf ("Nome da Cidade \n");
scanf  ("%c, %c= Nome da Cidade \n");
printf ("População \n");
scanf  ("%d, %d= População\n");
printf ("Área Km2 \n");
scanf  ("%f, %f= Área Km2 \n");=
printf ("PIB \n");
scanf  ("%f, %f= PIB \n");
printf ("Pontos Turísticos \n");
scanf  ("%d, %d= Pontos Turísticos \n ");


//Cadastro da Carta 2

printf ("Cadastro da carta %d \n,num");
printf ("Estado \n");
scanf ("%c, %c= Estado");
printf ("Codigo da Carta \n ");
scanf ("%s, %s= Codigo da Carta");
printf ("Nome da Cidade \n");
scanf  ("%c, %c= Nome da Cidade \n");
printf ("População \n");
scanf  ("%d, %d= População\n");
printf ("Área Km2 \n");
scanf  ("%f, %f= Área Km2 \n");=
printf ("PIB \n");
scanf  ("%f, %f= PIB \n");
printf ("Pontos Turísticos \n");
scanf  ("%d, %d= Pontos Turísticos \n ");

  return 0;

}

