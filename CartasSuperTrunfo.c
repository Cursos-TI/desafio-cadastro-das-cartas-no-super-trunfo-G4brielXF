#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    /*CARTA1:*/                       /*Não consegui colocar "." nas casas das centenas*/

    printf ("***BEM VINDO AO SISTEMA DE CADASTRO DE CARTAS SUPER TRUNFO*** \n");

    char Estado1 = 'A';
    char Nome1[15] = "minasgerais"; 
    int População1 = 21320000;
    char Código1[15] = "A01";
    float Área1 = 586.520;
    float PIB1 = 10200000000000;
    int Pontos1 = 30; 
    float DensidadePopulacional1 = (float) População1 / Área1;
    float PIBpercapta1 = (float) PIB1 / População1;
    float SuperPoder1 = (float) População1 + Área1 + PIB1 + Pontos1 + PIBpercapta1 + DensidadePopulacional1;

    /*Carta 1: local para cadastrar as informações*/
    
    printf ("** CADASTRE A CIDADE 1 ** \n");

    printf ("Digite a letra do Estado 1: \n");
    scanf (" %c", &Estado1);

    printf ("Digite o nome da cidade 1: \n");
    scanf (" %s", Nome1);

    printf ("Digite quantos habitantes há na cidade 1: \n");
    scanf (" %d", &População1);

    printf ("Digite o código da carta da cidade 1: \n");
    scanf (" %s", Código1);

    printf ("Digite a área da cidade 1 (em km²): \n");
    scanf (" %f", &Área1);

    printf ("Digite o PIB da cidade 1: \n");
    scanf (" %f", &PIB1);

    printf ("Digite quantos pontos turísticos há na cidade 1: \n");
    scanf (" %d", &Pontos1);

    printf ("\n");

    //Calculo para a Densidade Populacional

    printf ("**VAMOS CALCULAR A DENSIDADE POPULACIONAL DA CIDADE 1** \n");

    printf ("Entre com o número da população 1: \n");
    scanf ("%d", &População1);
    printf ("Entre com a área da cidade 1: \n");
    scanf ("%f", &Área1);

    //Calculo para o PIB per capita

    printf ("\n");

    printf ("**VAMOS CALCULAR O PIB PER CAPITA DA CIDADE 1** \n");

    printf ("Entre com PIB da cidade 1: \n");
    scanf ("%d", &PIB1);
    printf ("Entre com o número da população 1: \n");
    scanf ("%f", &População1);



printf ("\n");

    /*Carta 1: Resultados do cadastro*/

    printf ("****RESULTADOS DA CIDADE 1**** \n");

    printf ("Letra da cidade 1:  %c \n", Estado1);
    printf ("Nome da cidade 1:  %s \n", Nome1);
    printf ("Código da carta 1:  %s \n", Código1);
    printf ("População da cidade 1:  %d \n", População1);
    printf ("Área 1:  %f \n", Área1);
    printf ("PIB da cidade 1:  %f \n", PIB1);
    printf ("Pontos turísticos da cidade 1:  %d \n", Pontos1);
    printf ("A Densidade Populacional 1 é: %4.f \n", DensidadePopulacional1);
    printf ("A Renda per capita 1 é: %4.f \n", PIBpercapta1);
    printf ("Super Poder da cidade 1 é: %.5f \n", SuperPoder1);




    /*Carta 2:*/
    char Estado2 = 'B';
    char Nome2 [15] = "Ceará";
    int População2 = 8795000;
    char Código2 [15] = "B02";
    float Área2 = 148.886;
    float PIB2 = 194885;
    int Pontos2 = 19;
    float DensidadePopulacional2 = (float) População2 / Área2;
    float PIBpercapta2 = (float) PIB2 / População2;
    float SuperPoder2 = (float) População2 + Área2 + PIB2 + Pontos2 + PIBpercapta2 + DensidadePopulacional2;


printf ("\n");

    /*Carta 2: local para cadastrar as informações*/

    printf ("** CADASTRE A CIDADE 2 ** \n");

    printf ("Digite a letra do Estado 2: \n");
    scanf (" %c", &Estado2);

    printf ("Digite o Nome da cidade 2: \n");
    scanf (" %s", &Nome2);

    printf ("Digite quantos habitantes há na cidade 2: \n");
    scanf (" %d", &População2);

    printf ("Digite o Código da carta 2: \n");
    scanf (" %s", &Código2);

    printf ("Digite qual a área da cidade 2 (em km²): \n");
    scanf (" %f", &Área2);

    printf ("Digite qual o PIB da cidade 2: \n");
    scanf (" %f", &PIB2);

    printf ("Digite quantos pontos turísticos há na cidade 2: \n");
    scanf (" %d", &Pontos2);

    //Calculo para a Densidade Populacional

    printf ("\n");

    printf ("**VAMOS CALCULAR A DENSIDADE POPULACIONAL DA CIDADE 2** \n");

    printf ("Entre com o número da população 2: \n");
    scanf ("%d", &População2);
    printf ("Entre com a área da cidade 2: \n");
    scanf ("%f", &Área2);

    printf ("\n");

    //Calculo para o PIB per capita

    printf ("**VAMOS CALCULAR O PIB PER CAPITA DA CIDADE 2** \n");

    printf ("Entre com PIB da cidade 2: \n");
    scanf ("%d", &PIB2);
    printf ("Entre com o número da população 2: \n");
    scanf ("%f", &População2);

    /*Carta 2: Resultados do cadastro*/

    printf ("\n");

    printf ("****RESULTADOS DA CIDADE 2**** \n");

    printf ("Letra da cidade 2:  %c \n", Estado2);
    printf ("Nome da cidade 2:  %s \n", Nome2);
    printf ("Código da carta 2:  %s \n", Código2);
    printf ("População da cidade 2:  %d \n", População2);
    printf ("Área da cidade 2:  %f \n", Área2);
    printf ("PIB da cidade 2:  %f \n", PIB2);
    printf ("Pontos turísticos da cidade 2:  %d \n", Pontos2);
    printf ("A Densidade Populacional 2 é: %4.f \n", DensidadePopulacional2);
    printf ("A Renda per capita 2 é: %4.f \n", PIBpercapta2);
    printf ("Super Poder da cidade 2 é: %.5f \n", SuperPoder2);

    //Local para a comparação das cartas do jogo

    printf ("\n");
    printf ("\n");

    printf ("*** HORA DO DUELO ***\n");
    printf ("****VALOR 1 = Cidade1 Ganhou!!  VALOR 0 = Cidade2 Ganhou!!**** \n");

    printf("Qual cidade tem maior número de População? \n População1 >  População2: !!%d!! \n", 
          (unsigned) População1 > População2);
    printf("Qual cidade tem maior Área (em km²)? \n Área1 > Área2 = !!%d!! \n",
          (unsigned) Área1 > Área2);
    printf("Qual cidade tem maior PIB (produto interno bruto)? \n PIB1 > PIB2  = !!%d!! \n",
          (unsigned) PIB1 > PIB2);
    printf("Qual cidade tem mais Pontos Turísticos? \n Pontos1 > Pontos2 = !!%d!! \n",
          (unsigned) Pontos1 > Pontos2);
    printf("Qual cidade tem menor Densidade Populacional? \n Densidade P.1 < Densidade P.2 = !!%d!! \n",
          (unsigned) DensidadePopulacional1 > DensidadePopulacional2);
    printf("Qual cidade tem maior Renda Per Capita? \n PIBpercapta1 > PIBpercapta2  = !!%d!! \n",
          (unsigned) PIBpercapta1 > PIBpercapta2);   
    printf("Qual cidade tem o maior Super Poder? \n Super Poder1 > Super Poder2  = !!%d!! \n",
          (unsigned) SuperPoder1 > SuperPoder2);



    return 0;
}
