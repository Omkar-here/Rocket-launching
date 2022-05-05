#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <stdio.h>

char *fname[] = { "GO !!!", // DEFAULT_FONT
		  "MISSION ACCOMPLISHED!",  // TRIPLEX_FONT
		  "SMALL font", // SMALL_FONT
		  "SANS SERIF font",  // SANS_SERIF_FONT
		  "Gothic!" // GOTHIC_FONT
		};

 void main()
{
     int i,w,v,k,style,midx,midy;
   int gdriver = DETECT, gmode;
   initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");


   midx = getmaxx() / 2;   //TO PLACE ROCKET IN THE MIDDLE OF SCREEN
   midy = getmaxy() / 2;

   printf("\n\n\n\n\n");

   printf("W"); delay(50);
   printf("E"); delay(50);
   printf("L"); delay(50);
   printf("C"); delay(50);
   printf("O"); delay(50);
   printf("M"); delay(50);
   printf("E"); delay(50);

   printf(" T"); delay(50);
   printf("O"); delay(50);

   printf(" A"); delay(50);
   printf("G"); delay(50);
   printf("N"); delay(50);
   printf("E"); delay(50);
   printf("L"); delay(50);

   printf(" I"); delay(50);
   printf("N"); delay(50);
   printf("T"); delay(50);
   printf("E"); delay(50);
   printf("R"); delay(50);
   printf("N"); delay(50);
   printf("A"); delay(50);
   printf("T"); delay(50);
   printf("I"); delay(50);
   printf("O"); delay(50);
   printf("N"); delay(50);
   printf("A"); delay(50);
   printf("L"); delay(50);

   printf(" S"); delay(50);
   printf("P"); delay(50);
   printf("A"); delay(50);
   printf("C"); delay(50);
   printf("E"); delay(50);

   printf(" S"); delay(50);
   printf("T"); delay(50);
   printf("A"); delay(50);
   printf("T"); delay(50);
   printf("I"); delay(50);
   printf("O"); delay(50);
   printf("N"); delay(50);
   printf("."); delay(50);
   printf("\n\n");

   delay(2000);

   printf("T"); delay(50);
   printf("H"); delay(50);
   printf("I"); delay(50);
   printf("S"); delay(50);

   printf(" I"); delay(50);
   printf("S"); delay(50);

   printf(" S"); delay(50);
   printf("E "); delay(50);
   printf("A"); delay(50);
   printf("I"); delay(50);
   printf("-"); delay(50);
   printf("D"); delay(50);
   printf("S"); delay(50);
   printf("\n")

   printf("G"); delay(50);
   printf("R"); delay(50);
   printf("O"); delay(50);
   printf("U"); delay(50);
   printf("P "); delay(50);
   printf("8"); delay(50);
 

   printf(" R"); delay(50);
   printf("E"); delay(50);
   printf("P"); delay(50);
   printf("O"); delay(50);
   printf("R"); delay(50);
   printf("T"); delay(50);
   printf("I"); delay(50);
   printf("N"); delay(50);
   printf("G"); delay(50);
   printf("."); delay(50);
   printf("\n\n");

   delay(2000);

   printf(" R"); delay(50);
   printf("E"); delay(50);
   printf("A"); delay(50);
   printf("D"); delay(50);
   printf("Y"); delay(50);

   printf(" T"); delay(50);
   printf("O"); delay(50);

   printf(" T"); delay(50);
   printf("A"); delay(50);
   printf("K"); delay(50);
   printf("E"); delay(50);

   printf(" O"); delay(50);
   printf("F"); delay(50);
   printf("F"); delay(50);

   printf(" A"); delay(50);
   printf("G"); delay(50);
   printf("N"); delay(50);
   printf("E"); delay(50);
   printf("L"); delay(50);

   printf(" 2"); delay(50);
   printf("0"); delay(50);
   printf("2"); delay(50);
   printf("1"); delay(50);

   printf(" I"); delay(50);
   printf("N"); delay(50);

   printf(" A"); delay(50);

   printf(" F"); delay(50);
   printf("E"); delay(50);
   printf("W"); delay(50);

   printf(" S"); delay(50);
   printf("E"); delay(50);
   printf("C"); delay(50);
   printf("O"); delay(50);
   printf("N"); delay(50);
   printf("D"); delay(50);
   printf("S"); delay(50);
   printf("."); delay(50);

   printf("\n\n");

   delay(2000);

   printf("P"); delay(50);
   printf("L"); delay(50);
   printf("E"); delay(50);
   printf("A"); delay(50);
   printf("S"); delay(50);
   printf("E"); delay(50);

   printf(" T"); delay(50);
   printf("I"); delay(50);
   printf("G"); delay(50);
   printf("H"); delay(50);
   printf("T"); delay(50);
   printf("E"); delay(50);
   printf("N"); delay(50);

   printf(" Y"); delay(50);
   printf("O"); delay(50);
   printf("U"); delay(50);
   printf("R");

   printf(" S"); delay(50);
   printf("E"); delay(50);
   printf("A"); delay(50);
   printf("T"); delay(50);

   printf(" B"); delay(50);
   printf("E"); delay(50);
   printf("L"); delay(50);
   printf("T"); delay(50);
   printf("S"); delay(50);

   printf("!"); delay(50);
   printf("\n\n");

   delay(2000);

   printf("O"); delay(50);
   printf("V"); delay(50);
   printf("E"); delay(50);
   printf("R"); delay(50);
   printf("."); delay(50);

   printf("\n\n");

   delay(2000);

   printf("L"); delay(50);
   printf("A"); delay(50);
   printf("U"); delay(50);
   printf("N"); delay(50);
   printf("C"); delay(50);
   printf("H"); delay(50);
   printf("I"); delay(50);
   printf("N"); delay(50);
   printf("G"); delay(50);
   printf("."); delay(50);
   printf("."); delay(50);
   printf("."); delay(50);
   delay(1000);

   printf("  [3]  "); delay(1000);
   printf("  [2]  "); delay(1000);
   printf("  [1]  "); delay(1000);

   cleardevice();

      setcolor(LIGHTGREEN);
      settextjustify(CENTER_TEXT, CENTER_TEXT);

      style = DEFAULT_FONT;   //STORES VALUE 0 IN STYLE

      settextstyle(style, HORIZ_DIR, 8);
      outtextxy(midx, midy, fname[style]);
      delay(1800);

     cleardevice();

   for (i=0; i<400; i++)
  {
    setcolor(WHITE);

   line(300,300-i,350,300-i);  // upper horizon
   line(300,300-i,300,400-i);  // left vertical

   line(270,400-i,380,400-i);  // bottom horizon
   line(350,300-i,350,400-i);  // right vertical

   line(300,350-i,270,400-i);  // left slant
   line(350,350-i,380,400-i);  // right slant

   line(300,300-i,325,260-i);  // top left slant
   line(325,260-i,350,300-i);  // top right slant

     // LAUNCHING SMOKE
   if (i==0)
   {
     delay(1400);
    for ( k=0; k<70; k++)
    {
     delay(100);
     setcolor(DARKGRAY);
     circle(250,400,k);
     circle(270,400,k);
     setcolor(LIGHTGRAY);
     circle(285,400,k+10);
     circle(318,400,k+30);
     circle(335,400,k+30);
     circle(370,400,k+10);
     setcolor(DARKGRAY);
     circle(390,400,k);
     circle(410,400,k);
    }
   }

   //line (250,200+i,250,280+i);
   setcolor(BLUE);

  circle(250,300+i,400-i);
  circle(250,300+i,399-i);
  circle(250,300+i,398-i);
  circle(250,300+i,397-i);
  circle(250,300+i,396-i);
  circle(250,300+i,395-i);
  circle(250,300+i,394-i);
  circle(250,300+i,393-i);
  circle(250,300+i,392-i);
  circle(250,300+i,391-i);
  circle(250,300+i,390-i);
  circle(250,300+i,389-i);
  circle(250,300+i,388-i);

   if (i%2==0)
   {

     for ( v=10; v>=0; v--)
    {
     setcolor(YELLOW);
     circle(318,400-i,v);
     circle(335,400-i,v);
    }

    setcolor(RED);
     circle(325,260-i,5);
     circle(325,260-i,4);
     circle(325,260-i,3);
     circle(325,260-i,2);
     circle(325,260-i,1);

   }

   else
   {
     setcolor(YELLOW);
     for ( w=10; w>=0; w--)
    {
     circle(300,400-i,w);
     circle(325,400-i,w);
     circle(350,400-i,w);
    }
   }

   delay(5);
   cleardevice();
  }

  cleardevice();

     setcolor(LIGHTGREEN);
     settextjustify(CENTER_TEXT, CENTER_TEXT);

      style = TRIPLEX_FONT;
      cleardevice();

      settextstyle(style, HORIZ_DIR, 6);
      outtextxy(midx, midy, fname[style]);
      getch();

   /* clean up */
   closegraph();
}
