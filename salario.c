#include <stdio.h>
/* Cálculo de Salário */
int main()
{
    float HT, VH, PD, TD, SB, SL;
    printf ("Horas trabalhadas: ");
    scanf ("%f",&HT);
    printf ("Valor da hora: ");
    scanf ("%f",&VH);
    printf ("Percentual de desconto: ");
    scanf ("%f",&PD);
    SB=HT*VH;
    TD=(PD/100)*SB;
    SL=SB-TD;
    printf ("Salário Bruto ......: %f \n", SB);
    printf ("Desconto ...........: %f \n", TD);
    printf ("Salário líquido ....: %f \n", SL);
}