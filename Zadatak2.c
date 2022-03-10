#include <stdio.h>
int main(){
 int prvi;
 int drugi;


 printf("Unesi prvi broj");
 scanf("%d",&prvi);
 printf("Unesi drugi broj");
 scanf("%d", &drugi);
    if(prvi>drugi)
        printf("%d je veci od %d", prvi,drugi);
    else
        printf("%d je veci od %d", drugi, prvi);




}
