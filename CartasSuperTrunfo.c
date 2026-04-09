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
printf ("Estado \n");
printf ("Codigo da Carta \n ");
printf ("Nome da Cidade \n");
printf ("População \n");
printf ("Área Km2 \n");
printf ("PIB \n");
printf ("Pontos Turísticos \n");


//Cadastro da Carta 2

printf ("Estado \n");
printf ("Codigo da Carta \n ");
printf ("Nome da Cidade \n");
printf ("População \n");
printf ("Área Km2 \n");
printf ("PIB \n");
printf ("Pontos Turísticos \n");


  return 0;

}

