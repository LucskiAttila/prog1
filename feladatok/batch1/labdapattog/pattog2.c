#include <stdio.h>
#include <curses.h>
#include <unistd.h>
#include <stdlib.h>



int
main ( void )
{
    WINDOW *ablak;
    ablak = initscr ();

    int x = 0;
    int y = 0; //ez a labdánk kiinduló poziciója

    int deltax = 0; 
    int deltay = 0; 
    

    int mx; //oszlopok száma (az ablakunk szélessége)
    int my; //sorok száma (az ablakunk hossza)
    noecho ();
    cbreak ();
    nodelay (ablak, true);


    for ( ;; ) {

	getmaxyx(ablak, my, mx);
        x = (x - 1) % mx;
        y = (y + 1) % mx;

        deltay = (deltay - 1) % my;
        deltax = (deltax + 1) % my;

        //clear ();

        mvprintw (abs (deltay + (my - deltax)),
                  abs (x + (mx - y)), "O");

        refresh ();
	clear();
        usleep (200000);

    }
    return 0;
}



