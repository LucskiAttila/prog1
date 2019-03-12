%{
	#include <string.h>
	int szamok_szama = 0;
%}
%%

[0-9]+		++szamok_szama;
[a-zA-Z][a-zA-Z0-9]*	;                          
			
%%
int
main()
{
yylex();
printf("%d szam\n", szamok_szama);
return 0;
}
 
