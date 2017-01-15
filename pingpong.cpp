#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
#include<time.h>
#include<math.h>

int flag;
struct bat
{
 int length;
 int width;
 int ycoordinate;
 int new_xcoordinate;
 int old_xcoordinate;
}batA; // Create a bat.

struct ball
{
  int radius;
  int speedx;
  int speedy;
  int old_xcenter;
  int old_ycenter;
  int new_xcenter;
  int new_ycenter;
}ball1;

struct score
{
  int score_A;
}score_game;

struct{
int rx1;
int ry1;
int rx2;
int ry2;
}rectA,rectB,rectC,rectD;
/*
struct{
int cx;
int cy;
int rad;
}cir1;

struct{
int tx1;
int ty1;
int tx2;
int ty2;
int tx3;
int ty3;
}tri1;
*/
void multiA()
{

setbkcolor(5);
double s[4][3]={{50,50,1},{50,100,1},{100,100,1},{100,50,1}};
double r[3][3]={{1,0,0},{-0.5,1,0},{0,0,1}};
setcolor(0);
setlinestyle(0,1,3);
rectangle(rectA.rx1,rectA.ry1,rectA.rx2,rectA.ry2);
setcolor(15);
double m[4][3];
double sum=0;
for(int i=0;i<4;i++)
{
for(int j=0;j<3;j++)
{
sum=0;
for(int k=0;k<3;k++)
{
sum+=s[i][k]*r[k][j];
}
m[i][j]=sum;
}
}
line(m[0][0],m[0][1],m[1][0],m[1][1]);
line(m[1][0],m[1][1],m[2][0],m[2][1]);
line(m[3][0],m[3][1],m[0][0],m[0][1]);
line(m[2][0],m[2][1],m[3][0],m[3][1]);
}

void multiB()
{
setbkcolor(1);
double a[4][3]={{rectB.rx1,rectB.ry1,1},{rectB.rx2,rectB.ry1,1},
{rectB.rx2,rectB.ry2,1},{rectB.rx1,rectB.ry2,1}};

double b[3][3]={{cos(15*3.14/180),sin(15*3.14/180),0},
{-sin(15*3.14/180),cos(15*3.14/180),0},{0,0,1}};

setcolor(0);
setlinestyle(0,1,3);
rectangle(rectB.rx1,rectB.ry1,rectB.rx2,rectB.ry2);
setcolor(15);
double m[4][3];
double sum=0;
for(int i=0;i<4;i++)
{
for(int j=0;j<3;j++)
{
sum=0;
for(int k=0;k<3;k++)
{
sum+=a[i][k]*b[k][j];
}
m[i][j]=sum;
}
}
line(m[0][0]+20,m[0][1]-50,m[1][0]+20,m[1][1]-50);
line(m[1][0]+20,m[1][1]-50,m[2][0]+20,m[2][1]-50);
line(m[2][0]+20,m[2][1]-50,m[3][0]+20,m[3][1]-50);
line(m[3][0]+20,m[3][1]-50,m[0][0]+20,m[0][1]-50);
}

void multiC()
{
setbkcolor(4);
setcolor(0);
setlinestyle(0,1,3);
rectangle(rectC.rx1,rectC.ry1,rectC.rx2,rectC.ry2);
setcolor(15);
//circle(cir1.cx,cir1.cy,cir1.rad*2);
double as[4][3]={{rectC.rx1,rectC.ry1,1},{rectC.rx2,rectC.ry1,1},
{rectC.rx2,rectC.ry2,1},{rectC.rx1,rectC.ry2,1}};

double bs[3][3]={{0.8,0,0},
{0,0.8,0},{0,0,1}};

double m[4][3];
double sum=0;
for(int i=0;i<4;i++)
{
for(int j=0;j<3;j++)
{
sum=0;
for(int k=0;k<3;k++)
{
sum+=as[i][k]*bs[k][j];
}
m[i][j]=sum;
}
}
rectC.rx1=m[0][0]+60;
rectC.ry1=m[0][1]+20;
rectC.rx2=m[2][0]+60;
rectC.ry2=m[2][1]+20;
//floodfill(rectC.rx1+20,rectC.ry1+20,1);
rectangle(rectC.rx1,rectC.ry1,rectC.rx2,rectC.ry2);
}

void multiD()
{
setbkcolor(2);
floodfill(rectD.rx1+20,rectD.ry1+20,15);
//else
//floodfill(rectD.rx1+20,rectD.ry1+20,1);
}
void first()
{
	int i;
	setcolor(BLACK);
       //	settextstyle(4, HORIZ_DIR,5);
	setcolor(1);
	outtextxy(275,200,"LOADING");
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	setcolor(LIGHTGRAY);
//	rectangle(130,150,450,160);
	line(130,150,450,150);
	line(450,150,450,160);
	line(450,160,130,160);
	line(130,160,130,150);
	setfillstyle(SOLID_FILL,RED);
	  setcolor(RED);
	  for(i=0;i<=310;i+=10)
	  {
		int uu[]={132+i,152,137+i,152,137+i,158,132+i,158};
	    //	bar(80+i,150,140+i,160);
		fillpoly(4,uu);
		delay(320-i);
	  }


      //  setfillstyle(SOLID_FILL,LIGHTGRAY);
	  setcolor(LIGHTGRAY);
	   cleardevice();
}

void car(int i)
{
delay(5);
rectangle(20+i,434,50+i,450);

line(20+i,434,12+i,450);
line(50+i,434,68+i,450);
rectangle(10+i,450,70+i,470);
outtextxy(20+i,453,"AUDI");
setlinestyle(0,1,1);
setfillstyle(SOLID_FILL,14);
fillellipse(25+i,470,5,5);
fillellipse(45+i,470,5,5);
fillellipse(70+i,454,1,4);
}

void girl()
{
int z=120;
setcolor(15);
circle(100,105+z,25);
circle(88,100+z,2);
circle(112,100+z,2);
arc(100,100+z,230,310,20);
//arc(100,100+z,360,180,35);
//line(60,100,70,130);
//neck
line(90,130+z,90,145+z);
line(110,130+z,110,145+z);
line(90,145+z,100,155+z);
line(110,145+z,100,155+z);
//tshirt
line(90,145+z,70,148+z);
line(110,145+z,130,148+z);
line(70,148+z,70,170+z);
line(130,148+z,130,170+z);
line(70,170+z,80,170+z);
line(130,170+z,120,170+z);
line(80,170+z,85,200+z);
line(115,200+z,120,170+z);
line(85,200+z,115,200+z);
//skirt
line(85,200+z,70,250+z);
line(115,200+z,130,250+z);
line(70,250+z,130,250+z);
//legs
line(100,250+z,100,300+z);
line(90,250+z,93,300+z);
line(110,250+z,107,300+z);
//shoes
line(93,300+z,85,310+z);
line(85,310+z,95,310+z);
line(95,310+z,100,300+z);
line(107,300+z,115,310+z);
line(115,310+z,105,310+z);
line(100,300+z,105,310+z);

//left hand
line(70,150+z,55,155+z);
line(70,160+z,50,165+z);

line(55,155+z,55,140+z);
line(50,165+z,51,140+z);
/*
//thumb
line(51,140,46,120);
line(46,120,54,120);
line(54,120,54,133);
line(54,133,60,133);
*/
line(60,133+z,60,140+z);
line(60,140+z,51,140+z);
//right hand
line(130,150+z,145,155+z);
line(130,160+z,150,165+z);
line(145,155+z,145,140+z);
line(150,165+z,149,140+z);
//circle(53,133,7);
line(149,140+z,154,120+z);
line(146,120+z,154,120+z);
line(146,120+z,146,133+z);
line(146,133+z,140,133+z);
line(140,133+z,140,140+z);
line(149,140+z,140,140+z);

//hair
fillellipse(70,100+z,5,5);
fillellipse(75,92+z,5,5);
fillellipse(80,84+z,5,5);
fillellipse(85,78+z,5,5);
fillellipse(90,78+z,5,5);
fillellipse(95,78+z,8,8);
fillellipse(104,78+z,8,8);
fillellipse(115,84+z,5,5);
fillellipse(120,92+z,5,5);
fillellipse(125,100+z,5,5);
fillellipse(130,108+z,5,5);

fillellipse(130,116+z,3,3);
fillellipse(130,122+z,3,3);
fillellipse(130,128+z,3,3);
fillellipse(130,134+z,3,3);

fillellipse(70,108+z,5,5);
fillellipse(70,116+z,3,3);
fillellipse(70,122+z,3,3);
fillellipse(70,128+z,3,3);
fillellipse(70,134+z,3,3);

setfillstyle(SOLID_FILL,3);
floodfill(110,210+z,15);
setfillstyle(SOLID_FILL,12);
floodfill(110,180+z,15);
//line(0,0,110,210+z);
}

void hand(int i)
{
delay(5);
int h=120;
line(55,155+h,55-i,140+h);
line(50,165+h,51-i,140+h);
//thumb
line(51-i,140+h,46-i,120+h);
line(46-i,120+h,54-i,120+h);
line(54-i,120+h,54-i,133+h);
line(54-i,133+h,60-i,133+h);
line(60-i,133+h,60-i,140+h);
line(60-i,140+h,51-i,140+h);

}
void initialize() // Initialize the game.
{

 int gdriver = DETECT,gmode;
 char tempstring [10]; //This String holds score in char format temporarily
 time_t t;//Used to generate random number from system time.

 closegraph ();
 initgraph(&gdriver,&gmode,"..\\bgi"); // Intializes Graphics
 cleardevice();
/* delay(480);
 outtextxy(230,200,"LOADING..");
 delay(120);
 outtextxy(300,200,"..");
 delay(150);
 outtextxy(304,200,"..");
 delay(150);
 outtextxy(308,200,"..");
 delay(100);
 cleardevice();  */
 first();

 rectangle(0,430,getmaxx(),479);
 floodfill(40,440,0);
 setcolor(15);
 score_game.score_A = 0;// Intialise score
 bar(0,0,getmaxx(),5);
 setlinestyle(0,1,3);
 flag=0;
//initialize rectA and draw
rectA.rx1=40;
rectA.rx2=90;
rectA.ry1=50;
rectA.ry2=100;
rectangle(rectA.rx1,rectA.ry1,rectA.rx2,rectA.ry2);

//initialize and draw rectB
rectB.rx1=110;
rectB.rx2=250;
rectB.ry1=50;
rectB.ry2=100;
rectangle(rectB.rx1,rectB.ry1,rectB.rx2,rectB.ry2);

//initialize and draw rectC
rectC.rx1=300;
rectC.rx2=380;
rectC.ry1=50;
rectC.ry2=100;
rectangle(rectC.rx1,rectC.ry1,rectC.rx2,rectC.ry2);

//initialize and draw rectD
rectD.rx1=450;
rectD.rx2=570;
rectD.ry1=50;
rectD.ry2=100;
rectangle(rectD.rx1,rectD.ry1,rectD.rx2,rectD.ry2);
/*
//initialize and draw circle
cir1.cx=350;
cir1.cy=125;
cir1.rad=30;
circle(cir1.cx,cir1.cy,cir1.rad);

//initialize and draw triangle
tri1.tx1=200;
tri1.ty1=50;
tri1.tx2=150;
tri1.ty2=100;
tri1.tx3=250;
tri1.ty3=100;
line(tri1.tx1,tri1.ty1,tri1.tx2,tri1.ty2);
line(tri1.tx2,tri1.ty2,tri1.tx3,tri1.ty3);
line(tri1.tx3,tri1.ty3,tri1.tx1,tri1.ty1);
*/
setlinestyle(0,1,1);
 //Initialise Bat A
 batA.length = 60;
 batA.width = 2;
 batA.ycoordinate = getmaxy()-55;
 batA.new_xcoordinate = getmaxx()/2-10;
 batA.old_xcoordinate = getmaxx()/2-10;



//initialize ball1
 ball1.radius=3;
 ball1.speedy=2;
 srand((int) time(&t)); // Seed rand a random number
 ball1.speedx = rand()%1;// Sets speed from 0 to 2 depending upon remainder.

 ball1.old_xcenter = getmaxx()/2;
 ball1.old_ycenter = 320;
 ball1.new_xcenter = getmaxx()/2;
 ball1.new_ycenter = 320;

 // Draw Ball at Initial Position
 setfillstyle (1,15);
 fillellipse (ball1.new_xcenter,ball1.new_ycenter,ball1.radius,ball1.radius);

 // Draw Bats at Intial Position
 bar(batA.new_xcoordinate,batA.ycoordinate,batA.new_xcoordinate+batA.length,batA.ycoordinate+batA.width);
}


void movebat (char input)
{
 switch (input)
 {
    case 'A':
	if (batA.new_xcoordinate > 0) // Move only when bat is not touching the top so it doesnt jump out of screen.
	  {
	    batA.old_xcoordinate = batA.new_xcoordinate;
	    batA.new_xcoordinate --;
	    setfillstyle (1,0); // Remove last postion.
	    bar (batA.old_xcoordinate,batA.ycoordinate,batA.old_xcoordinate+batA.length,batA.ycoordinate+batA.width);
	    setfillstyle (1,15); // Display New postion.
	    bar (batA.new_xcoordinate,batA.ycoordinate,batA.new_xcoordinate+batA.length,batA.ycoordinate+batA.width);
	    break;
	  }
     case 'Z':
	if (batA.new_xcoordinate+batA.length < getmaxx()) // Make sure bat doesnot go below the screen.
	  {
	    batA.old_xcoordinate = batA.new_xcoordinate;
	    batA.new_xcoordinate ++;
	    setfillstyle (1,0); // Remove last postion.
	    bar (batA.old_xcoordinate,batA.ycoordinate,batA.old_xcoordinate+batA.length,batA.ycoordinate+batA.width);
	    setfillstyle (1,15); // Display New postion.
	    bar (batA.new_xcoordinate,batA.ycoordinate,batA.new_xcoordinate+batA.length,batA.ycoordinate+batA.width);
	    break;
	  }
	  break;
   }

}


void moveball()
{
  setlinestyle(0,1,1);
  ball1.old_ycenter = ball1.new_ycenter;
  ball1.old_xcenter = ball1.new_xcenter;
  ball1.new_xcenter = ball1.new_xcenter+ball1.speedx;
  ball1.new_ycenter = ball1.new_ycenter+ball1.speedy;
  setcolor (0);
  setfillstyle(1,0);// Remove last position.
  fillellipse(ball1.old_xcenter,ball1.old_ycenter,ball1.radius,ball1.radius);
  setfillstyle(1,15); // Display New postion.
  fillellipse(ball1.new_xcenter,ball1.new_ycenter,ball1.radius,ball1.radius);

  if(ball1.new_xcenter - ball1.radius<0)
	ball1.speedx = -ball1.speedx; // Reflect From left

  if(ball1.new_xcenter+ball1.radius>getmaxx()-5)
	ball1.speedx = -ball1.speedx; // Reflect From right

}

void working()
{
  char tempstring [10];

      if(ball1.new_ycenter+ball1.radius<15)
      {
	 if (ball1.new_xcenter>0&&ball1.new_xcenter<getmaxx())
	   {
	    ball1.speedy = -ball1.speedy;
	    ball1.speedx = rand()%4;
	    if (rand()%2==0) //set speed depending on remainder
	    ball1.speedx = -ball1.speedx; // Generate Random x direction.
	   }
      }

     else if(ball1.new_ycenter-ball1.radius>getmaxy()-65)
     {
	 if((ball1.new_xcenter>batA.new_xcoordinate)&&
	 (ball1.new_xcenter<batA.new_xcoordinate+batA.length))
	    {
	       ball1.speedy = -ball1.speedy;
	       ball1.speedx=rand()%4;
	       if (rand()%2==0)      //set speed depending on the remainder
	       ball1.speedx = -ball1.speedx; // Generate Random x direction.

	       score_game.score_A++;
	    }
	  else
	  {
	   setcolor(15);
	   sprintf (tempstring,"SCORE - %d",score_game.score_A);
	   outtextxy(100,150,tempstring);
	   outtextxy(100,200,"GAME OVER!!");
	   outtextxy(100,250,"PRESS (R) FOR RESTART");
	   outtextxy(100,300,"PRESS (Q) FOR QUIT");
	   //printf("%d"+score_game.score_A);
	   flag=1;
	  }
     }

     if(ball1.new_xcenter-ball1.radius>(rectA.rx1-7)&&
     ball1.new_xcenter-ball1.radius<(rectA.rx2+7)&&
     (ball1.new_ycenter-ball1.radius<(rectA.ry2+7))&&
     (ball1.new_ycenter-ball1.radius>(rectA.ry1-7)))
     {
      multiA();
      ball1.speedy=-ball1.speedy;
      ball1.speedx=-ball1.speedx;
     }

     if(ball1.new_xcenter-ball1.radius>(rectD.rx1-7)&&
     ball1.new_xcenter-ball1.radius<(rectD.rx2+7)&&
     (ball1.new_ycenter-ball1.radius<(rectD.ry2+7)&&
     ball1.new_ycenter-ball1.radius>(rectD.ry1-7)))
     {
      multiD();
      ball1.speedx=-ball1.speedx;
      ball1.speedy=-ball1.speedy;
     }


     if(ball1.new_xcenter-ball1.radius>(rectB.rx1-7)&&
     ball1.new_xcenter-ball1.radius<(rectB.rx2+7)&&
     (ball1.new_ycenter-ball1.radius<(rectB.ry2+7))&&
     (ball1.new_ycenter-ball1.radius>(rectB.ry1-7)))
     {
      multiB();
      ball1.speedy=-ball1.speedy;
      ball1.speedx=-ball1.speedx;
     }

     if(ball1.new_xcenter-ball1.radius>(rectC.rx1-7)&&
     ball1.new_xcenter-ball1.radius<(rectC.rx2+7)&&
     ball1.new_ycenter-ball1.radius<(rectC.ry2+7)&&
     ball1.new_ycenter-ball1.radius>(rectC.ry1-7))
     {
      multiC();
      ball1.speedy=-ball1.speedy;
      ball1.speedx=-ball1.speedx;
     }
}


void play ()//the game
{
  while (inportb (0X60)!=16) // Checks wether key press is Q for quit
     {
       delay (10); // Reduce game speed
       if(flag==0)
       {
       if (inportb (0X60)==75)
       movebat('A');
       if (inportb (0X60)==77)
       movebat('Z');
       moveball();
       working();
       }
       if(inportb(0X60)==19)//checks for R to restart.
       initialize();
       if(inportb(0X60)==20)
       {
	car(0);
	for(int i=0;i<getmaxx()-5;i++)
	{
	setcolor(0);
	car(i);
	setcolor(14);
	car(i+1);
	setfillstyle(SOLID_FILL,14);
	floodfill(47+i,447,14);
	//setfillstyle(SOLID_FILL,1);
	//floodfill(40+i,40,1);
	}
       }
       if(inportb(0X60)==21)
       {
       girl();
 hand(0);
 int count=0;
 for(int i=0;i<7;i++)
 {
 delay(50);
 count++;
 setcolor(0);
 hand(i);
 setcolor(15);
 hand(i+1);

 if(i==6)
 {
 i=0;
 }
 if(count==50)
 break;
 }
       initialize();
       }
       if(inportb(0X60)==16)
       {
       cleardevice();
       outtextxy(230,200,"PROJECT MADE BY:");
       outtextxy(230,220,"\n SHEFALI AGARWAL");
       outtextxy(230,240,"\n SANIKA ATHAVALE");
       delay(90);
       }
      }
}





void main()
{
  initialize();
  setbkcolor(9);
  play();

  getch();
  closegraph();
}
