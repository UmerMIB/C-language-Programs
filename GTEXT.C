#include <conio.h>

           main()
           {
               char buffr[20*10*2];
               int x, y;

               for (y = 0; y < 9; y++) {
                   for (x = 0; x < 19; x++)
                       printf("d");
                   printf("\n");
               }
               gettext(1,1,20,10,buffr);
               getch();
               clrscr();
               puttext(30,12,49,21,buffr);
           }
