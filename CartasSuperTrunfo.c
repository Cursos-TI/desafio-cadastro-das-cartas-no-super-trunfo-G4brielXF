#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    /*CARTA1:*/                       /*Não consegui colocar "." nas casas das centenas*/
    char Estado1 = 'A';
    char Nome1[50] = "minas gerais"; 
    char Código1[20] = "A01";
    int População1 = 21320000;
    float Área1 = 58651398;
    float PIB1 = 10200000000000;
    int Pontos1 = 30; 

    /*Carta 1: local para cadastrar as informações*/
    printf ("Digite a letra do Estado 1: \n");
    scanf (" %c", &Estado1);

    printf ("Digite o nome da cidade 1: \n");
    scanf (" %s", Nome1);

    printf ("Digite o código da carta da cidade 1: \n");
    scanf (" %s", Código1);

    printf ("Digite quantos habitantes há na cidade 1: \n");
    scanf (" %d", &População1);

    printf ("Digite a área da cidade 1 (em km²): \n");
    scanf (" %f", &Área1);

    printf ("Digite o PIB da cidade 1: \n");
    scanf (" %f", &PIB1);

    printf ("Digite quantos pontos turísticos há na cidade 1: \n");
    scanf (" %d", &Pontos1);

    /*Carta 1: Resultados do cadastro*/
    printf ("Letra da cidade 1:  %c \n", Estado1);
    printf ("Nome da cidade 1:  %s \n", Nome1);
    printf ("Código da carta 1:  %s \n", Código1);
    printf ("População da cidade 1:  %d \n", População1);
    printf ("Área 1:  %f \n", Área1);
    printf ("PIB da cidade 1:  %f \n", PIB1);
    printf ("Pontos turísticos da cidade 1:  %d \n", Pontos1);

    /*Carta 2:*/
    char Estado2 = 'B';
    char Nome2 [50] = "Ceará";
    char Código2 [20] = "B02";
    int População2 = 8795000;
    float Área2 = 148886;
    float PIB2 = 194885;
    int Pontos2 = 19;

    /*Carta 2: local para cadastrar as informações*/
    printf ("Digite a letra do Estado 2: \n");
    scanf (" %c", &Estado2);

    printf ("Digite o Nome da cidade 2: \n");
    scanf (" %s", &Nome2);

    printf ("Digite o Código da carta 2: \n");
    scanf (" %s", &Código2);

    printf ("Digite quantos habitantes há na cidade 2: \n");
    scanf (" %d", &População2);

    printf ("Digite qual a área da cidade 2 (em km²): \n");
    scanf (" %f", &Área2);

    printf ("Digite qual o PIB da cidade 2: \n");
    scanf (" %f", &PIB2);

    printf ("Digite quantos pontos turísticos há na cidade 2: \n");
    scanf (" %d", &Pontos2);

    /*Carta 2: Resultados do cadastro*/

    printf ("Letra da cidade 2:  %c \n", Estado2);
    printf ("Nome da cidade 2:  %s \n", Nome2);
    printf ("Código da carta 2:  %s \n", Código2);
    printf ("População da cidade 2:  %d \n", População2);
    printf ("Área da cidade 2:  %f \n", Área2);
    printf ("PIB da cidade 2:  %f \n", PIB2);
    printf ("Pontos turísticos da cidade 2:  %d \n", Pontos2);

    return 0;
}
