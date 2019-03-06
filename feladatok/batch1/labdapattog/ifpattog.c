#include <stdio.h>
#include <curses.h>
#include <unistd.h>

int
main ( void )
{
    WINDOW *ablak;
    ablak = initscr ();

    int x = 0;
    int y = 0; //ez a labdánk kiinduló poziciója

    int deltax = 1; //ennyivel lépünk az x tengelyen
    int deltay = 1; //ezzel pedig az y tengelyen
    //mindkét értéket lehet tetszés szerint változtatni 

    int mx; //oszlopok száma
    int my; //sorok száma

    for ( ;; ) {

        getmaxyx ( ablak, my , mx );

        mvprintw ( y, x, "O" );

        refresh ();
        usleep ( 100000 ); //adott mikroszekundumig altatja, azaz felfüggeszti a program futását
        clear() //opcionális, eltünteti az előző labdát, igy az nem huz csikot

        x = x + deltax;
        y = y + deltay;

        if ( x>=mx-1 ) { // elerte-e a jobb oldalt?
            deltax = deltax * -1; //akkor induljon balra
        }
        if ( x<=0 ) { // elerte-e a bal oldalt?
            deltax = deltax * -1; //akkor induljon ismét jobbra
        }
        if ( y<=0 ) { // elerte-e a tetejet?
            ynov = ynov * -1; //akkor menjen le
        }
        if ( y>=my-1 ) { // elerte-e a aljat?
            ynov = ynov * -1; //akkor mehet fel
        }

    }

    return 0;
}
