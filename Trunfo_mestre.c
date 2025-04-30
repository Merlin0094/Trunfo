#include <stdio.h>


int main()
{
    char Estado_1;
    char CEP_1[30];
    char Cidade_1[30];
    unsigned long int  Populacao_1;
    float Area_1;
    float Pib_1;
    int Pon_tur_1;

    char Estado_2;
    char CEP_2[30];
    char Cidade_2[30];
    unsigned long int  Populacao_2;
    float Area_2;
    float Pib_2;
    int Pon_tur_2;




    printf("Carta A01\n \n");
    printf("Digite a inicial do estado: \n");
    scanf(" %s", &Estado_1);

    printf("Digite o cep:\n");
    scanf("%s", CEP_1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", Cidade_1);

    printf("Digite a quantidade da populacao:\n");
    scanf("%lu", &Populacao_1);

    printf("Digite a area da cidade:\n");
    scanf("%f", &Area_1);
    
    printf("Digite o pib\n");
    scanf("%f", &Pib_1);
  
    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &Pon_tur_1);
    
    float densi_1 = Populacao_1 / Area_1;
    float PIB_Perc_1 = Pib_1 / Populacao_1;
    float densi_R1 = Area_1 / Populacao_1;
   float SP_1 = (float) Populacao_1 + Area_1 + Pib_1 + Pon_tur_1 + PIB_Perc_1 +densi_R1;


    

    //-------------------------------------------------
    
     printf("\n Carta A02\n \n");
    printf("Digite a inicial do estado: \n");
    scanf(" %s", &Estado_2);

    printf("Digite o cep:\n");
    scanf("%s", CEP_2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", Cidade_2);

    printf("Digite a quantidade da populacao:\n");
    scanf("%lu", &Populacao_2);

    printf("Digite a area da cidade:\n");
    scanf("%f", &Area_2);
    
    printf("Digite o pib\n");
    scanf("%f", &Pib_2);
  
    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &Pon_tur_2);
    
     float densi_2 = Populacao_2 / Area_2;
    float PIB_Perc_2 = Pib_2 / Populacao_2;
    float densi_R2 = Area_2 / Populacao_2;
    float SP_2= (float) Populacao_2+ Area_2+ Pib_2+ Pon_tur_2+  PIB_Perc_2+densi_R2;


    //---------------------------------------------------------

    printf("\n \nCidade 1\n");
    printf("Estado: %c\n",Estado_1);
    printf("CEP: %s\n", CEP_1);
    printf("Nome da cidade: %s \n", Cidade_1);
    printf("Populacao %lu\n", Populacao_1);
    printf("Area %f\n", Area_1);
    printf("Pib %f\n", Pib_1);
    printf("Pontos_Turisticos %d\n", Pon_tur_1);
    printf("Densidade Populacional %2.f\n",densi_1);
    printf("Pib Percapta : %.2f\n",PIB_Perc_1 );
    printf("Super poder Carta 1 %f\n", SP_1);
//----------------------------------------------------------------
   
    printf("\n \nCidade 2\n");
    printf("Estado: %c\n",Estado_2);
    printf("CEP: %s\n", CEP_2);
    printf("Nome da cidade: %s \n", Cidade_2);
    printf("Populacao %lu\n", Populacao_2);
    printf("Area %f\n", Area_2);
    printf("Pib %f\n", Pib_2);
    printf("Pontos_Turisticos %d\n", Pon_tur_2);
    printf("Densidade Populacional %2.f\n",densi_2);
    printf("Pib Percapta : %.2f\n",PIB_Perc_2 );
    printf("Super poder Carta 2 %f\n", SP_2);
    
  // 
  if (Populacao_1 > Populacao_2)
  {
  printf("\n Populacao Carta 1 venceu\n");
  }
  else if (Populacao_2 > Populacao_1)
  {
  printf("\n Populacao Carta 2 venceu\n");
}

if (Area_1 > Area_2)
{
    printf("Area Carta 1 venceu\n");
}
else if (Area_2 > Area_1)
{
    printf("Area Carta 2 venceu\n");
}

if (Pib_1 > Pib_2)
{
    printf("Pib Carta 1 venceu\n");
}
else if (Pib_2 > Pib_1)
{
    printf("Pib Carta 2 venceu\n");
}
if(Pon_tur_1 > Pon_tur_2)
{
    printf("Pontos turisticos Carta 1 venceu\n");
}
else if(Pon_tur_2 > Pon_tur_1)
{
    printf("Pontos turisticos Carta 2 venceu\n");
}

if (densi_1 > densi_2)
{
    printf("Densidade populacional Carta 1 venceu\n");
}

else if (densi_2 > densi_1)
{
    printf("Densidade populacional Carta 2 venceu\n");
}

if(PIB_Perc_1 > PIB_Perc_2)
{
    printf("PIB Percapita Carta 1 venceu\n");
}

else if(PIB_Perc_2 > PIB_Perc_1)
{
    printf("PIB Percapita Carta 2 venceu\n");
}

if(SP_1 > SP_2)
{
  printf("Super Poder Carta 1 venceu\n");
}
else if(SP_2 > SP_1)
{
    printf("Super Poder Carta 2 venceu\n");
}
















}
