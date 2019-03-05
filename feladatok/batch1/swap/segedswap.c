#include<stdio.h>

int main()
{
int a=7;
int b=9;
int c;


printf("a=%d b=%d\n",a,b);

c = a;
a = b;
b = c;

printf("a=%d b=%d\n",a,b);

}

