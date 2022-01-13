#include <stdio.h>

void main () {
 float C,F,K;
printf("unesi broj fahrenheita \n");
scanf("%f",&F);
C=(F-32)*9/5;
K=C+273.15;
printf("temperatura  u celzijevim stupnjevima je %.2f %f\n",C);
printf("temperatura u kelvinima je %.2f K\n",K);



}
