#include <stdio.h>
int main(){
int broj;

printf("Unesi neki broj");
scanf("%d",&broj);

if (broj==1)
    printf("Obje osi su pozitivne");

else if(broj==2)
    printf("X je negativna, Y je pozitivna");

else if(broj==3)
printf("Obje osi su negativne");

else if (broj==4)
    printf("X je pozitivna, Y je negativna");

else
    printf("Nepostojeci kvadrant");






}
