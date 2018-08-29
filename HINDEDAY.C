/*************   This is a simple program made with turboC - wishing You all,
		"Happy Independence Day"    *******************/


#include"graphics.h"
#include"conio.h"
#include"dos.h"

void main()
{
	int gd=DETECT,gm,i;
	int poly1[14];
	int poly2[7];
	int poly3[7];
	int poly4[10];
	int poly5[10];
	int poly6[8];
	int poly7[8];
	int poly8[8];
	initgraph(&gd,&gm,"C:\\TC\\bgi");


	poly2[0]=410;                          //folded_area1
	poly2[1]=50;

	poly2[2]=450;
	poly2[3]=80;

	poly2[4]=400;
	poly2[5]=60;

	poly2[6]=poly2[0];
	poly2[7]=poly2[1];

	setfillstyle(1,15);
	fillpoly(4,poly2);
	drawpoly(4,poly2);

	poly3[0]=400;                            //folded_area2
	poly3[1]=60;

	poly3[2]=450;
	poly3[3]=80;

	poly3[4]=380;
	poly3[5]=100;

	poly3[6]=poly3[0];
	poly3[7]=poly3[1];

	setfillstyle(1,10);
	fillpoly(4,poly3);
	drawpoly(4,poly3);

	poly4[0]=370;                            //folded_area3
	poly4[1]=60;

	poly4[2]=400;
	poly4[3]=80;

	poly4[4]=380;
	poly4[5]=100;

	poly4[6]=330;
	poly4[7]=100;

	poly4[8]=poly4[0];
	poly4[9]=poly4[1];

	setfillstyle(1,6);
	fillpoly(4,poly4);
	drawpoly(4,poly4);


	poly5[0]=330;                            //folded_area4
	poly5[1]=60;

	poly5[2]=370;
	poly5[3]=60;

	poly5[4]=350;
	poly5[5]=80;

	poly5[6]=330;
	poly5[7]=60;

	poly5[8]=poly5[0];
	poly5[9]=poly5[1];

	setfillstyle(1,6);
	fillpoly(4,poly5);
	drawpoly(4,poly5);



	poly6[0]=330;                      //folded_area5
	poly6[1]=80;

	poly6[2]=350;
	poly6[3]=80;

	poly6[4]=330;
	poly6[5]=100;

	poly6[6]=poly6[0];
	poly6[7]=poly6[1];

	setfillstyle(1,10);
	fillpoly(4,poly6);
	drawpoly(4,poly6);



	poly7[0]=370;                      //folded_area6
	poly7[1]=59;

	poly7[2]=400;
	poly7[3]=55;

	poly7[4]=400;
	poly7[5]=80;

	poly7[6]=poly7[0];
	poly7[7]=poly7[1];

	setfillstyle(1,2);
	fillpoly(4,poly7);
	drawpoly(4,poly7);



	poly8[0]=330;                      //folded_area7
	poly8[1]=60;

	poly8[2]=330;
	poly8[3]=80;

	poly8[4]=350;
	poly8[5]=80;

	poly8[6]=poly8[0];
	poly8[7]=poly8[1];

	setfillstyle(1,15);
	fillpoly(4,poly8);
	drawpoly(4,poly8);



	rectangle(320,40,330,360);		    //LONG_STICK
	setfillstyle(1,RED);
	floodfill(325,45,WHITE);

	rectangle(250,420,400,450);                 //LOWER_STEP
	setfillstyle(1,8);
	floodfill(255,425,WHITE);

	rectangle(270,390,380,420);                 //MIDDLE_STEP
	setfillstyle(1,7);
	floodfill(275,395,WHITE);

	rectangle(290,360,360,390);                 //UPPER_STEP
	setfillstyle(1,8);
	floodfill(295,365,WHITE);

	delay(2500);
	cleardevice();


	rectangle(330,40,450,60);                  //UPPER_FLAG_STRIP
	setfillstyle(1,6);
	floodfill(335,45,WHITE);

	rectangle(330,60,450,80);                  //MIDDLE_FLAG_STRIP
	setfillstyle(1,WHITE);
	floodfill(335,65,WHITE);

	rectangle(330,80,450,100);                 //LOWER_FLAG_STRIP
	setfillstyle(1,GREEN);
	floodfill(335,85,WHITE);




	rectangle(320,40,330,360);                 //LONG_STICK
	setfillstyle(1,RED);
	floodfill(325,45,WHITE);




	rectangle(250,420,400,450);                 //LOWER_STEP
	setfillstyle(1,8);
	floodfill(255,425,WHITE);

	rectangle(270,390,380,420);                 //MIDDLE_STEP
	setfillstyle(1,7);
	floodfill(275,395,WHITE);

	rectangle(290,360,360,390);                 //UPPER_STEP
	setfillstyle(1,8);
	floodfill(295,365,WHITE);


	setcolor(BLUE);                             //Lines_Under_Circle
	line(390,60,390,80);
	line(380,70,400,70);
	line(381,76,399,64);
	line(381,64,399,76);
	line(386,60,395,80);
	line(395,60,385,80);



	delay(100);
	setcolor(WHITE);
	setfillstyle(1,BLUE);             //1st Round
	circle(350,105,3);
	circle(360,116,3);
	circle(370,123,3);
	circle(370,105,3);
	circle(380,116,3);
	circle(390,123,3);
	circle(400,105,3);
	circle(410,125,3);
	circle(360,135,3);
	circle(370,143,3);
	circle(380,150,3);
	circle(400,155,3);
	circle(420,165,3);
	circle(430,157,3);
	circle(420,147,3);

	floodfill(350,105,WHITE);
	floodfill(360,116,WHITE);
	floodfill(370,123,WHITE);
	floodfill(370,105,WHITE);
	floodfill(380,116,WHITE);
	floodfill(390,123,WHITE);
	floodfill(400,105,WHITE);
	floodfill(410,125,WHITE);
	floodfill(360,135,WHITE);
	floodfill(370,143,WHITE);
	floodfill(380,150,WHITE);
	floodfill(400,155,WHITE);
	floodfill(420,165,WHITE);
	floodfill(430,157,WHITE);
	floodfill(420,147,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(350,105,3);
	circle(360,116,3);
	circle(370,123,3);
	circle(370,105,3);
	circle(380,116,3);
	circle(390,123,3);
	circle(400,105,3);
	circle(410,125,3);
	circle(360,135,3);
	circle(370,143,3);
	circle(380,150,3);
	circle(400,155,3);
	circle(420,165,3);
	circle(430,157,3);
	circle(420,147,3);



	floodfill(350,105,BLACK);
	floodfill(360,116,BLACK);
	floodfill(370,123,BLACK);
	floodfill(370,105,BLACK);
	floodfill(380,116,BLACK);
	floodfill(390,123,BLACK);
	floodfill(400,105,BLACK);
	floodfill(410,125,BLACK);
	floodfill(360,135,BLACK);
	floodfill(370,143,BLACK);
	floodfill(380,150,BLACK);
	floodfill(400,155,BLACK);
	floodfill(420,165,BLACK);
	floodfill(430,157,BLACK);
	floodfill(420,147,BLACK);



	setfillstyle(1,RED);             //2nd Round
	circle(355,125,3);
	circle(365,136,3);
	circle(375,143,3);
	circle(375,125,3);
	circle(385,136,3);
	circle(395,143,3);
	circle(405,125,3);
	circle(415,145,3);
	circle(365,155,3);
	circle(375,163,3);
	circle(385,170,3);
	circle(405,175,3);
	circle(425,185,3);
	circle(435,177,3);
	circle(425,167,3);

	floodfill(355,125,WHITE);
	floodfill(365,136,WHITE);
	floodfill(375,143,WHITE);
	floodfill(375,125,WHITE);
	floodfill(385,136,WHITE);
	floodfill(395,143,WHITE);
	floodfill(405,125,WHITE);
	floodfill(415,145,WHITE);
	floodfill(365,155,WHITE);
	floodfill(375,163,WHITE);
	floodfill(385,170,WHITE);
	floodfill(405,175,WHITE);
	floodfill(425,185,WHITE);
	floodfill(435,177,WHITE);
	floodfill(425,167,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(355,125,3);
	circle(365,136,3);
	circle(375,143,3);
	circle(375,125,3);
	circle(385,136,3);
	circle(395,143,3);
	circle(405,125,3);
	circle(415,145,3);
	circle(365,155,3);
	circle(375,163,3);
	circle(385,170,3);
	circle(405,175,3);
	circle(425,185,3);
	circle(435,177,3);
	circle(425,167,3);



	floodfill(355,125,BLACK);
	floodfill(365,136,BLACK);
	floodfill(375,143,BLACK);
	floodfill(375,125,BLACK);
	floodfill(385,136,BLACK);
	floodfill(395,143,BLACK);
	floodfill(405,125,BLACK);
	floodfill(415,145,BLACK);
	floodfill(365,155,BLACK);
	floodfill(375,163,BLACK);
	floodfill(385,170,BLACK);
	floodfill(405,175,BLACK);
	floodfill(425,185,BLACK);
	floodfill(435,177,BLACK);
	floodfill(425,167,BLACK);


	setfillstyle(1,GREEN);             //3rd Round
	circle(360,145,3);
	circle(370,156,3);
	circle(380,163,3);
	circle(380,145,3);
	circle(390,156,3);
	circle(400,163,3);
	circle(410,145,3);
	circle(420,165,3);
	circle(370,175,3);
	circle(380,183,3);
	circle(390,190,3);
	circle(410,195,3);
	circle(430,205,3);
	circle(440,197,3);
	circle(430,187,3);

	floodfill(360,145,WHITE);
	floodfill(370,156,WHITE);
	floodfill(380,163,WHITE);
	floodfill(380,145,WHITE);
	floodfill(390,156,WHITE);
	floodfill(400,163,WHITE);
	floodfill(410,145,WHITE);
	floodfill(420,165,WHITE);
	floodfill(370,175,WHITE);
	floodfill(380,183,WHITE);
	floodfill(390,190,WHITE);
	floodfill(410,195,WHITE);
	floodfill(430,205,WHITE);
	floodfill(440,197,WHITE);
	floodfill(430,187,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(360,145,3);
	circle(370,156,3);
	circle(380,163,3);
	circle(380,145,3);
	circle(390,156,3);
	circle(400,163,3);
	circle(410,145,3);
	circle(420,165,3);
	circle(370,175,3);
	circle(380,183,3);
	circle(390,190,3);
	circle(410,195,3);
	circle(430,205,3);
	circle(440,197,3);
	circle(430,187,3);



	floodfill(360,145,BLACK);
	floodfill(370,156,BLACK);
	floodfill(380,163,BLACK);
	floodfill(380,145,BLACK);
	floodfill(390,156,BLACK);
	floodfill(400,163,BLACK);
	floodfill(410,145,BLACK);
	floodfill(420,165,BLACK);
	floodfill(370,175,BLACK);
	floodfill(380,183,BLACK);
	floodfill(390,190,BLACK);
	floodfill(410,195,BLACK);
	floodfill(430,205,BLACK);
	floodfill(440,197,BLACK);
	floodfill(430,187,BLACK);


	setfillstyle(1,CYAN);             //4th Round
	circle(365,165,3);
	circle(375,176,3);
	circle(385,183,3);
	circle(385,165,3);
	circle(395,176,3);
	circle(405,183,3);
	circle(415,165,3);
	circle(425,185,3);
	circle(375,195,3);
	circle(385,203,3);
	circle(395,210,3);
	circle(415,215,3);
	circle(435,225,3);
	circle(445,217,3);
	circle(435,207,3);

	floodfill(365,165,WHITE);
	floodfill(375,176,WHITE);
	floodfill(385,183,WHITE);
	floodfill(385,165,WHITE);
	floodfill(395,176,WHITE);
	floodfill(405,183,WHITE);
	floodfill(415,165,WHITE);
	floodfill(425,185,WHITE);
	floodfill(375,195,WHITE);
	floodfill(385,203,WHITE);
	floodfill(395,210,WHITE);
	floodfill(415,215,WHITE);
	floodfill(435,225,WHITE);
	floodfill(445,217,WHITE);
	floodfill(435,207,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(365,165,3);
	circle(375,176,3);
	circle(385,183,3);
	circle(385,165,3);
	circle(395,176,3);
	circle(405,183,3);
	circle(415,165,3);
	circle(425,185,3);
	circle(375,195,3);
	circle(385,203,3);
	circle(395,210,3);
	circle(415,215,3);
	circle(435,225,3);
	circle(445,217,3);
	circle(435,207,3);



	floodfill(365,165,BLACK);
	floodfill(375,176,BLACK);
	floodfill(385,183,BLACK);
	floodfill(385,165,BLACK);
	floodfill(395,176,BLACK);
	floodfill(405,183,BLACK);
	floodfill(415,165,BLACK);
	floodfill(425,185,BLACK);
	floodfill(375,195,BLACK);
	floodfill(385,203,BLACK);
	floodfill(395,210,BLACK);
	floodfill(415,215,BLACK);
	floodfill(435,225,BLACK);
	floodfill(445,217,BLACK);
	floodfill(435,207,BLACK);


	setfillstyle(1,YELLOW);             //5th Round
	circle(370,185,3);
	circle(380,196,3);
	circle(390,203,3);
	circle(390,185,3);
	circle(400,196,3);
	circle(410,203,3);
	circle(420,185,3);
	circle(430,205,3);
	circle(380,215,3);
	circle(390,223,3);
	circle(400,230,3);
	circle(420,235,3);
	circle(440,245,3);
	circle(450,237,3);
	circle(440,227,3);

	floodfill(370,185,WHITE);
	floodfill(380,196,WHITE);
	floodfill(390,203,WHITE);
	floodfill(390,185,WHITE);
	floodfill(400,196,WHITE);
	floodfill(410,203,WHITE);
	floodfill(420,185,WHITE);
	floodfill(430,205,WHITE);
	floodfill(380,215,WHITE);
	floodfill(390,223,WHITE);
	floodfill(400,230,WHITE);
	floodfill(420,235,WHITE);
	floodfill(440,245,WHITE);
	floodfill(450,237,WHITE);
	floodfill(440,227,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(370,185,3);
	circle(380,196,3);
	circle(390,203,3);
	circle(390,185,3);
	circle(400,196,3);
	circle(410,203,3);
	circle(420,185,3);
	circle(430,205,3);
	circle(380,215,3);
	circle(390,223,3);
	circle(400,230,3);
	circle(420,235,3);
	circle(440,245,3);
	circle(450,237,3);
	circle(440,227,3);



	floodfill(370,185,BLACK);
	floodfill(380,196,BLACK);
	floodfill(390,203,BLACK);
	floodfill(390,185,BLACK);
	floodfill(400,196,BLACK);
	floodfill(410,203,BLACK);
	floodfill(420,185,BLACK);
	floodfill(430,205,BLACK);
	floodfill(380,215,BLACK);
	floodfill(390,223,BLACK);
	floodfill(400,230,BLACK);
	floodfill(420,235,BLACK);
	floodfill(440,245,BLACK);
	floodfill(450,237,BLACK);
	floodfill(440,227,BLACK);


	setfillstyle(1,CYAN);             //6th Round
	circle(380,205,3);
	circle(390,216,3);
	circle(400,223,3);
	circle(400,205,3);
	circle(410,216,3);
	circle(420,223,3);
	circle(430,205,3);
	circle(440,225,3);
	circle(390,235,3);
	circle(400,243,3);
	circle(410,250,3);
	circle(430,255,3);
	circle(450,265,3);
	circle(460,257,3);
	circle(450,247,3);

	floodfill(380,205,WHITE);
	floodfill(390,216,WHITE);
	floodfill(400,223,WHITE);
	floodfill(400,205,WHITE);
	floodfill(410,216,WHITE);
	floodfill(420,223,WHITE);
	floodfill(430,205,WHITE);
	floodfill(440,225,WHITE);
	floodfill(390,235,WHITE);
	floodfill(400,243,WHITE);
	floodfill(410,250,WHITE);
	floodfill(430,255,WHITE);
	floodfill(450,265,WHITE);
	floodfill(460,257,WHITE);
	floodfill(450,247,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(380,205,3);
	circle(390,216,3);
	circle(400,223,3);
	circle(400,205,3);
	circle(410,216,3);
	circle(420,223,3);
	circle(430,205,3);
	circle(440,225,3);
	circle(390,235,3);
	circle(400,243,3);
	circle(410,250,3);
	circle(430,255,3);
	circle(450,265,3);
	circle(460,257,3);
	circle(450,247,3);



	floodfill(380,205,BLACK);
	floodfill(390,216,BLACK);
	floodfill(400,223,BLACK);
	floodfill(400,205,BLACK);
	floodfill(410,216,BLACK);
	floodfill(420,223,BLACK);
	floodfill(430,205,BLACK);
	floodfill(440,225,BLACK);
	floodfill(390,235,BLACK);
	floodfill(400,243,BLACK);
	floodfill(410,250,BLACK);
	floodfill(430,255,BLACK);
	floodfill(450,265,BLACK);
	floodfill(460,257,BLACK);
	floodfill(450,247,BLACK);


	setfillstyle(1,YELLOW);             //7th Round
	circle(390,225,3);
	circle(400,236,3);
	circle(410,243,3);
	circle(410,225,3);
	circle(420,236,3);
	circle(430,243,3);
	circle(440,225,3);
	circle(450,245,3);
	circle(400,255,3);
	circle(410,263,3);
	circle(420,270,3);
	circle(440,275,3);
	circle(460,285,3);
	circle(470,277,3);
	circle(460,267,3);

	floodfill(390,225,WHITE);
	floodfill(400,236,WHITE);
	floodfill(410,243,WHITE);
	floodfill(410,225,WHITE);
	floodfill(420,236,WHITE);
	floodfill(430,243,WHITE);
	floodfill(440,225,WHITE);
	floodfill(450,245,WHITE);
	floodfill(400,255,WHITE);
	floodfill(410,263,WHITE);
	floodfill(420,270,WHITE);
	floodfill(440,275,WHITE);
	floodfill(460,285,WHITE);
	floodfill(470,277,WHITE);
	floodfill(460,267,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(390,225,3);
	circle(400,236,3);
	circle(410,243,3);
	circle(410,225,3);
	circle(420,236,3);
	circle(430,243,3);
	circle(440,225,3);
	circle(450,245,3);
	circle(400,255,3);
	circle(410,263,3);
	circle(420,270,3);
	circle(440,275,3);
	circle(460,285,3);
	circle(470,277,3);
	circle(460,267,3);



	floodfill(390,225,BLACK);
	floodfill(400,236,BLACK);
	floodfill(410,243,BLACK);
	floodfill(410,225,BLACK);
	floodfill(420,236,BLACK);
	floodfill(430,243,BLACK);
	floodfill(440,225,BLACK);
	floodfill(450,245,BLACK);
	floodfill(400,255,BLACK);
	floodfill(410,263,BLACK);
	floodfill(420,270,BLACK);
	floodfill(440,275,BLACK);
	floodfill(460,285,BLACK);
	floodfill(470,277,BLACK);
	floodfill(460,267,BLACK);


	setfillstyle(1,GREEN);             //8th Round
	circle(400,245,3);
	circle(410,256,3);
	circle(420,263,3);
	circle(420,245,3);
	circle(430,256,3);
	circle(440,263,3);
	circle(450,245,3);
	circle(460,265,3);
	circle(410,275,3);
	circle(420,283,3);
	circle(430,290,3);
	circle(450,295,3);
	circle(470,305,3);
	circle(480,297,3);
	circle(470,287,3);

	floodfill(400,245,WHITE);
	floodfill(410,256,WHITE);
	floodfill(420,263,WHITE);
	floodfill(420,245,WHITE);
	floodfill(430,256,WHITE);
	floodfill(440,263,WHITE);
	floodfill(450,245,WHITE);
	floodfill(460,265,WHITE);
	floodfill(410,275,WHITE);
	floodfill(420,283,WHITE);
	floodfill(430,290,WHITE);
	floodfill(450,295,WHITE);
	floodfill(470,305,WHITE);
	floodfill(480,297,WHITE);
	floodfill(470,287,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(400,245,3);
	circle(410,256,3);
	circle(420,263,3);
	circle(420,245,3);
	circle(430,256,3);
	circle(440,263,3);
	circle(450,245,3);
	circle(460,265,3);
	circle(410,275,3);
	circle(420,283,3);
	circle(430,290,3);
	circle(450,295,3);
	circle(470,305,3);
	circle(480,297,3);
	circle(470,287,3);



	floodfill(400,245,BLACK);
	floodfill(410,256,BLACK);
	floodfill(420,263,BLACK);
	floodfill(420,245,BLACK);
	floodfill(430,256,BLACK);
	floodfill(440,263,BLACK);
	floodfill(450,245,BLACK);
	floodfill(460,265,BLACK);
	floodfill(410,275,BLACK);
	floodfill(420,283,BLACK);
	floodfill(430,290,BLACK);
	floodfill(450,295,BLACK);
	floodfill(470,305,BLACK);
	floodfill(480,297,BLACK);
	floodfill(470,287,BLACK);


	setfillstyle(1,BLUE);             //9th Round
	circle(410,265,3);
	circle(420,276,3);
	circle(430,283,3);
	circle(430,265,3);
	circle(440,276,3);
	circle(450,283,3);
	circle(460,265,3);
	circle(470,285,3);
	circle(420,295,3);
	circle(430,303,3);
	circle(440,310,3);
	circle(460,315,3);
	circle(480,325,3);
	circle(490,317,3);
	circle(480,307,3);


	floodfill(410,265,WHITE);
	floodfill(420,276,WHITE);
	floodfill(430,283,WHITE);
	floodfill(430,265,WHITE);
	floodfill(440,276,WHITE);
	floodfill(450,283,WHITE);
	floodfill(460,265,WHITE);
	floodfill(470,285,WHITE);
	floodfill(420,295,WHITE);
	floodfill(430,303,WHITE);
	floodfill(440,310,WHITE);
	floodfill(460,315,WHITE);
	floodfill(480,325,WHITE);
	floodfill(490,317,WHITE);
	floodfill(480,307,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(410,265,3);
	circle(420,276,3);
	circle(430,283,3);
	circle(430,265,3);
	circle(440,276,3);
	circle(450,283,3);
	circle(460,265,3);
	circle(470,285,3);
	circle(420,295,3);
	circle(430,303,3);
	circle(440,310,3);
	circle(460,315,3);
	circle(480,325,3);
	circle(490,317,3);
	circle(480,307,3);





	floodfill(410,265,BLACK);
	floodfill(420,276,BLACK);
	floodfill(430,283,BLACK);
	floodfill(430,265,BLACK);
	floodfill(440,276,BLACK);
	floodfill(450,283,BLACK);
	floodfill(460,265,BLACK);
	floodfill(470,285,BLACK);
	floodfill(420,295,BLACK);
	floodfill(430,303,BLACK);
	floodfill(440,310,BLACK);
	floodfill(460,315,BLACK);
	floodfill(480,325,BLACK);
	floodfill(490,317,BLACK);
	floodfill(480,307,BLACK);


	setfillstyle(1,RED);             //10th Round
	circle(410,285,3);
	circle(420,296,3);
	circle(430,303,3);
	circle(430,285,3);
	circle(440,296,3);
	circle(450,303,3);
	circle(460,285,3);
	circle(470,305,3);
	circle(420,315,3);
	circle(430,323,3);
	circle(440,330,3);
	circle(460,335,3);
	circle(480,345,3);
	circle(490,337,3);
	circle(480,327,3);





	floodfill(410,285,WHITE);
	floodfill(420,296,WHITE);
	floodfill(430,303,WHITE);
	floodfill(430,285,WHITE);
	floodfill(440,296,WHITE);
	floodfill(450,303,WHITE);
	floodfill(460,285,WHITE);
	floodfill(470,305,WHITE);
	floodfill(420,315,WHITE);
	floodfill(430,323,WHITE);
	floodfill(440,330,WHITE);
	floodfill(460,335,WHITE);
	floodfill(480,345,WHITE);
	floodfill(490,337,WHITE);
	floodfill(480,327,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(410,285,3);
	circle(420,296,3);
	circle(430,303,3);
	circle(430,285,3);
	circle(440,296,3);
	circle(450,303,3);
	circle(460,285,3);
	circle(470,305,3);
	circle(420,315,3);
	circle(430,323,3);
	circle(440,330,3);
	circle(460,335,3);
	circle(480,345,3);
	circle(490,337,3);
	circle(480,327,3);





	floodfill(410,285,BLACK);
	floodfill(420,296,BLACK);
	floodfill(430,303,BLACK);
	floodfill(430,285,BLACK);
	floodfill(440,296,BLACK);
	floodfill(450,303,BLACK);
	floodfill(460,285,BLACK);
	floodfill(470,305,BLACK);
	floodfill(420,315,BLACK);
	floodfill(430,323,BLACK);
	floodfill(440,330,BLACK);
	floodfill(460,335,BLACK);
	floodfill(480,345,BLACK);
	floodfill(490,337,BLACK);
	floodfill(480,327,BLACK);



	setfillstyle(1,CYAN);             //11th Round
	circle(450,305,3);
	circle(460,316,3);
	circle(470,323,3);
	circle(470,305,3);
	circle(480,316,3);
	circle(490,323,3);
	circle(500,305,3);
	circle(510,325,3);
	circle(460,335,3);
	circle(470,343,3);
	circle(480,350,3);
	circle(500,355,3);
	circle(520,365,3);
	circle(530,357,3);
	circle(520,347,3);

	floodfill(450,305,WHITE);
	floodfill(460,316,WHITE);
	floodfill(470,323,WHITE);
	floodfill(470,305,WHITE);
	floodfill(480,316,WHITE);
	floodfill(490,323,WHITE);
	floodfill(500,305,WHITE);
	floodfill(510,325,WHITE);
	floodfill(460,335,WHITE);
	floodfill(470,343,WHITE);
	floodfill(480,350,WHITE);
	floodfill(500,355,WHITE);
	floodfill(520,365,WHITE);
	floodfill(530,357,WHITE);
	floodfill(520,347,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(450,305,3);
	circle(460,316,3);
	circle(470,323,3);
	circle(470,305,3);
	circle(480,316,3);
	circle(490,323,3);
	circle(500,305,3);
	circle(510,325,3);
	circle(460,335,3);
	circle(470,343,3);
	circle(480,350,3);
	circle(500,355,3);
	circle(520,365,3);
	circle(530,357,3);
	circle(520,347,3);



	floodfill(450,305,BLACK);
	floodfill(460,316,BLACK);
	floodfill(470,323,BLACK);
	floodfill(470,305,BLACK);
	floodfill(480,316,BLACK);
	floodfill(490,323,BLACK);
	floodfill(500,305,BLACK);
	floodfill(510,325,BLACK);
	floodfill(460,335,BLACK);
	floodfill(470,343,BLACK);
	floodfill(480,350,BLACK);
	floodfill(500,355,BLACK);
	floodfill(520,365,BLACK);
	floodfill(530,357,BLACK);
	floodfill(520,347,BLACK);


	setfillstyle(1,BLUE);             //12th Round
	circle(450,325,3);
	circle(460,336,3);
	circle(470,343,3);
	circle(470,325,3);
	circle(480,336,3);
	circle(490,343,3);
	circle(500,325,3);
	circle(510,345,3);
	circle(460,355,3);
	circle(470,363,3);
	circle(480,370,3);
	circle(500,375,3);
	circle(520,385,3);
	circle(530,377,3);
	circle(520,367,3);

	floodfill(450,325,WHITE);
	floodfill(460,336,WHITE);
	floodfill(470,343,WHITE);
	floodfill(470,325,WHITE);
	floodfill(480,336,WHITE);
	floodfill(490,343,WHITE);
	floodfill(500,325,WHITE);
	floodfill(510,345,WHITE);
	floodfill(460,355,WHITE);
	floodfill(470,363,WHITE);
	floodfill(480,370,WHITE);
	floodfill(500,375,WHITE);
	floodfill(520,385,WHITE);
	floodfill(530,377,WHITE);
	floodfill(520,367,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(450,325,3);
	circle(460,336,3);
	circle(470,343,3);
	circle(470,325,3);
	circle(480,336,3);
	circle(490,343,3);
	circle(500,325,3);
	circle(510,345,3);
	circle(460,355,3);
	circle(470,363,3);
	circle(480,370,3);
	circle(500,375,3);
	circle(520,385,3);
	circle(530,377,3);
	circle(520,367,3);



	floodfill(450,325,BLACK);
	floodfill(460,336,BLACK);
	floodfill(470,343,BLACK);
	floodfill(470,325,BLACK);
	floodfill(480,336,BLACK);
	floodfill(490,343,BLACK);
	floodfill(500,325,BLACK);
	floodfill(510,345,BLACK);
	floodfill(460,355,BLACK);
	floodfill(470,363,BLACK);
	floodfill(480,370,BLACK);
	floodfill(500,375,BLACK);
	floodfill(520,385,BLACK);
	floodfill(530,377,BLACK);
	floodfill(520,367,BLACK);



	setfillstyle(1,CYAN);             //13th Round
	circle(450,345,3);
	circle(460,356,3);
	circle(470,363,3);
	circle(470,345,3);
	circle(480,356,3);
	circle(490,363,3);
	circle(500,345,3);
	circle(510,365,3);
	circle(460,375,3);
	circle(470,383,3);
	circle(480,390,3);
	circle(500,395,3);
	circle(520,405,3);
	circle(530,397,3);
	circle(520,387,3);

	floodfill(450,345,WHITE);
	floodfill(460,356,WHITE);
	floodfill(470,363,WHITE);
	floodfill(470,345,WHITE);
	floodfill(480,356,WHITE);
	floodfill(490,363,WHITE);
	floodfill(500,345,WHITE);
	floodfill(510,365,WHITE);
	floodfill(460,375,WHITE);
	floodfill(470,383,WHITE);
	floodfill(480,390,WHITE);
	floodfill(500,395,WHITE);
	floodfill(520,405,WHITE);
	floodfill(530,397,WHITE);
	floodfill(520,387,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(450,345,3);
	circle(460,356,3);
	circle(470,363,3);
	circle(470,345,3);
	circle(480,356,3);
	circle(490,363,3);
	circle(500,345,3);
	circle(510,365,3);
	circle(460,375,3);
	circle(470,383,3);
	circle(480,390,3);
	circle(500,395,3);
	circle(520,405,3);
	circle(530,397,3);
	circle(520,387,3);



	floodfill(450,345,BLACK);
	floodfill(460,356,BLACK);
	floodfill(470,363,BLACK);
	floodfill(470,345,BLACK);
	floodfill(480,356,BLACK);
	floodfill(490,363,BLACK);
	floodfill(500,345,BLACK);
	floodfill(510,365,BLACK);
	floodfill(460,375,BLACK);
	floodfill(470,383,BLACK);
	floodfill(480,390,BLACK);
	floodfill(500,395,BLACK);
	floodfill(520,405,BLACK);
	floodfill(530,397,BLACK);
	floodfill(520,387,BLACK);



	setfillstyle(1,RED);             //14th Round
	circle(450,365,3);
	circle(460,376,3);
	circle(470,383,3);
	circle(470,365,3);
	circle(480,376,3);
	circle(490,383,3);
	circle(500,365,3);
	circle(510,385,3);
	circle(460,395,3);
	circle(470,403,3);
	circle(480,410,3);
	circle(500,415,3);
	circle(520,425,3);
	circle(530,417,3);
	circle(520,407,3);

	floodfill(450,365,WHITE);
	floodfill(460,376,WHITE);
	floodfill(470,383,WHITE);
	floodfill(470,365,WHITE);
	floodfill(480,376,WHITE);
	floodfill(490,383,WHITE);
	floodfill(500,365,WHITE);
	floodfill(510,385,WHITE);
	floodfill(460,395,WHITE);
	floodfill(470,403,WHITE);
	floodfill(480,410,WHITE);
	floodfill(500,415,WHITE);
	floodfill(520,425,WHITE);
	floodfill(530,417,WHITE);
	floodfill(520,407,WHITE);


	delay(500);

	setfillstyle(1,BLACK);
	circle(450,365,3);
	circle(460,376,3);
	circle(470,383,3);
	circle(470,365,3);
	circle(480,376,3);
	circle(490,383,3);
	circle(500,365,3);
	circle(510,385,3);
	circle(460,395,3);
	circle(470,403,3);
	circle(480,410,3);
	circle(500,415,3);
	circle(520,425,3);
	circle(530,417,3);
	circle(520,407,3);



	floodfill(450,365,BLACK);
	floodfill(460,376,BLACK);
	floodfill(470,383,BLACK);
	floodfill(470,365,BLACK);
	floodfill(480,376,BLACK);
	floodfill(490,383,BLACK);
	floodfill(500,365,BLACK);
	floodfill(510,385,BLACK);
	floodfill(460,395,BLACK);
	floodfill(470,403,BLACK);
	floodfill(480,410,BLACK);
	floodfill(500,415,BLACK);
	floodfill(520,425,BLACK);
	floodfill(530,417,BLACK);
	floodfill(520,407,BLACK);




	setfillstyle(1,CYAN);          //flowers on ground
	circle(450,385,3);
	floodfill(450,385,WHITE);

	setfillstyle(1,RED);
	circle(460,396,3);
	floodfill(460,396,WHITE);

	setfillstyle(1,BLUE);
	circle(470,403,3);
	floodfill(470,403,WHITE);

	setfillstyle(1,GREEN);
	circle(470,385,3);
	floodfill(470,385,WHITE);

	setfillstyle(1,YELLOW);
	circle(480,416,3);
	floodfill(480,416,WHITE);

	setfillstyle(1,RED);
	circle(490,403,3);
	floodfill(490,403,WHITE);

	setfillstyle(1,CYAN);
	circle(500,385,3);
	floodfill(500,385,WHITE);

	setfillstyle(1,BLUE);
	circle(510,405,3);
	floodfill(510,405,WHITE);

	setfillstyle(1,GREEN);
	circle(460,415,3);
	floodfill(460,415,WHITE);

	setfillstyle(1,CYAN);
	circle(470,423,3);
	floodfill(470,423,WHITE);

	setfillstyle(1,RED);
	circle(480,430,3);
	floodfill(480,430,WHITE);

	setfillstyle(1,BLUE);
	circle(500,435,3);
	floodfill(500,435,WHITE);

	setfillstyle(1,CYAN);
	circle(520,445,3);
	floodfill(520,445,WHITE);

	setfillstyle(1,YELLOW);
	circle(530,437,3);
	floodfill(530,437,WHITE);

	setfillstyle(1,RED);
	circle(520,427,3);
	floodfill(520,427,WHITE);



	 delay(4000);
	 cleardevice();

	 setbkcolor(16);
	 setcolor(6);
	 settextstyle(1,0,5);
	 outtextxy(50,210,"HAPPY");
	 setcolor(15);
	 settextstyle(1,0,5);
	 outtextxy(200,210,"INDE");
	 setcolor(1);
	 settextstyle(1,0,5);
	 outtextxy(290,210,"PEND");
	 setcolor(15);
	 settextstyle(1,0,5);
	 outtextxy(390,210,"ENCE");
	 setcolor(2);
	 settextstyle(1,0,5);
	 outtextxy(500,210,"DAY");
	 setcolor(12);
	 settextstyle(1,0,3);
	 outtextxy(300,300,"(72  )");
	 setcolor(12);
	 settextstyle(1,0,1);
	 outtextxy(338,300,"th");


	 for(i=1;i<=70;i++)
	{
		setcolor(rand()%10);
		circle(rand()%600,rand()%500,rand()%2);
		delay(5);
	}


	delay(4500);
	cleardevice();

	setbkcolor(10);
	setcolor(5);
	settextstyle(1,0,8);
	outtextxy(90,180,"THANK");
	setcolor(5);
	settextstyle(1,0,8);
	outtextxy(380,180,"YOU");


	getch();
}