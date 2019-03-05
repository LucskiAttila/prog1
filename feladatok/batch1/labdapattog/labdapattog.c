/* Készítette: 'Kojak' felhasználó
    Dátum: 2014-02-24 

   A megoldás hibái javítva Józan Csaba splint ellenőrzése alapján.(Sipos Ádám)
    Dátum: 2015-02-08
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>


static void gotoxy(int x, int y)                     //kurzor pozicionálása
{
  int i;
  for(i=0; i<y; i++) printf("\n");             //lefelé tolás
  for(i=0; i<x; i++) printf(" ");              //jobbra tolás
  printf("o\n");    //labda ikonja

}

void usleep(int);
int main(void)
{
  
  int egyx=1;
  int egyy=-1;
  int i;
  int x=10;   //a labda kezdeti pozíciója
  int y=20;
  int ty[23];//magasság     // a pálya mérete
  int tx[80];//szélesség

  //pálya széleinek meghatározás 

  for(i=0; i<23; i++)
       ty[i]=1;

  ty[1]=-1;
  ty[22]=-1;

  for(i=0; i<79; i++)
       tx[i]=1;

  tx[1]=-1;
  tx[79]=-1;



  for(;;)
  {

    //címsor és pozíció kijelzése
    for(i=0; i<36; i++)
       printf("_");

    printf("x=%2d", x);
    printf("y=%2d", y);

    for(i=0; i<=35; i++)
         printf("_");



    (void)gotoxy(x,y);
    //printf("o\n"); Áthelyezve a gotoxy függvényve

    x+=egyx;
    y+=egyy;

    egyx*=tx[x];
    egyy*=ty[y];

    usleep (200000);
    (void)system("clear");
  }

}

