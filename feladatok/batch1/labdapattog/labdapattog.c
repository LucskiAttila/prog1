#include<stdio.h>
#include<stdlib.h>
#include<time.h>


static void gotoxy(int x, int y)                    
{
  int i;
  for(i=0; i<y; i++) printf("\n");             
  for(i=0; i<x; i++) printf(" ");              
  printf("o\n");    

}

void usleep(int);
int main(void)
{
  
  int egyx=1;
  int egyy=-1;
  int i;
  int x=10;   
  int y=20;
  int ty[23];
  int tx[80];

  

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

    
    for(i=0; i<36; i++)
       printf("_");

    printf("x=%2d", x);
    printf("y=%2d", y);

    for(i=0; i<=35; i++)
         printf("_");



    (void)gotoxy(x,y);
    

    x+=egyx;
    y+=egyy;

    egyx*=tx[x];
    egyy*=ty[y];

    usleep (200000);
    clear();
  }

}

