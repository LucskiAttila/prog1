#include <stdio.h>
#include <stdlib.h>

int main(){

//egész bevezetése
int a = 18;
printf("a=%d\n",a);
//egészre mutató mutató
int *b=&a;
printf("*b=%d\n",*b);
//egész referenciája
int &r =a;
r=10;
printf("a=%d\n",a);
//egészek tömbje
int c[5]={1,2,3,4,5};
for (int i=0;i<5;i++){
printf("%d ",c[i]);
}
printf("\n");
//egészek tömbjének referenciája
int (&tr)[5]=c;
for (int j=0;j<5;j++){
printf("%d ",tr[j]);
}
printf("\n");
//egészre mutató mutatók tömbje
int *d[5];
for (int k=0;k<5;k++){
printf("%p ",d[k]);
}
printf("\n");

//egészre mutató mutatót visszaadó függvény
int *h();

//egészre mutató mutatót visszaadó függvényre mutató mutató
int *(*l)();

//egészet visszaadó és két egészet kapó függvényre mutató mutatót visszaadó, egészet kapó függvény
int (*v(int c))(int a, int b);

//függvénymutató egy egészet visszaadó és két egészet kapó függvényre mutató mutatót visszaadó, egészet kapó függvényre
int (*(*z)(int)) (int, int)





}
