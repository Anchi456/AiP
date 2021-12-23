#include <stdio.h>
#include <math.h>
void main(){

int F1, F2;
printf("unesi mi dvije sile\n");

scanf("%d %d",&F1,&F2);

printf("Rez zbrajanja u istom smjeru je %d N\n",F1+F2);
printf("Rez oduzimanja u raz smjeru je %d N\n",F1-F2);
printf("Rez okomite sile u pravokutnom smjeru je %.2f N\n",sqrt(F1*F1+F2*F2));

}


