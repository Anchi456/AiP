#include <stdio.h>

void main(){
int h1,m1,s1,h2,m2,s2,T;

printf("unesi T\n");
printf("unesi h1\n");
printf("unesi m1\n");
printf("unesi s1\n");
printf("unesi m2\n");
printf("unesi s2\n");
printf("unesi h2\n");

scanf("%d %d %d %d %d %d %d",&h1, &m1, &s1, &h2, &m2, &s2, &T);


int vrijemeSec=h2*3600+m2*60+s2 - (h1*3600+m1*60+s1)-T*60;

int h=vrijemeSec/3600;
int m=(vrijemeSec%3600)/60;
int s=vrijemeSec%60;

printf("Film traje %d s\n",vrijemeSec);
printf("sto je %d : %d : %d\n",h,m,s);


}







