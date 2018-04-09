/*
	 Rakibuz Sultan Pranto
	 Sadman Shakib Nishat
*/
# include "iGraphics.h"

/* 
	function iDraw() is called again and again by the system.
*/
int x=50;
int y=310;
void iDraw()

{
	//place your drawing codes here	

	iClear();
	 
	 iShowBMP(0,0,"bg.bmp");
	 iLine(30,30,380,30);//last
	 iLine(30,30,30,330);//left last
	 iLine(30,330,380,330);
	 iLine(30,330,380,330);//up 
	 iLine(380,330,380,80);//right
	 iFilledCircle(x,y,5);//circle
	 iSetColor(0,0,255);//colour
	 iLine(50,30,50,80);//1
	 iLine(50,110,80,110);//a
	 iLine(80,110,80,60);//b
	 iLine(80,60,280,60);//c
	 iLine(280,30,280,60);//d
	 iLine(180,60,180,30);//e
	 iLine(330,30,330,130);//f
	 iLine(350,80,350,160);//g
	 iLine(350,160,310,160);//h
	 iLine(310,160,310,60);//i
	 iLine(310,90,280,90);//j
	 iLine(280,90,280,160);//k
	 iLine(260,130,260,200);//l
	 iLine(260,180,230,180);//m
	 iLine(230,180,230,100);//n
	 iLine(340,180,340,200);//o
	 iLine(340,200,290,200);//p
	 iLine(260,200,170,200);//q
	 iLine(200,200,200,130);//r
	 iLine(180,130,180,100);//s
	 iLine(180,130,110,130);//t
	 iLine(130,60,130,100);//u
	 iLine(80,130,50,130);//v
	 iLine(50,130,50,200);//2
	 iLine(50,200,80,200);//3
	 iLine(80,200,80,280);//4
	 iLine(80,280,130,280);//5
	 iLine(130,100,180,100);//w
	 iLine(150,130,150,200);//x
	 iLine(150,160,100,160);//y
	 iLine(100,160,100,180);//z
	 iLine(100,180,130,180);//6
	 iLine(130,180,130,200);//7
	 iLine(130,200,100,200);//8
	 iLine(80,150,80,180);//9
	 iLine(50,230,50,280);//10
	 iLine(50,230,80,230);//11
	 iLine(80,230,130,230);//12
	 iLine(110,250,110,280);//13
	 //iLine(110,50,110,100);
	 iLine(80,300,110,300);//14
	 //iLine(310,130,280,130);
	 iLine(130,310,330,310);//lomba
	 iLine(330,310,330,250);//cc
	 iLine(200,230,380,230);//LL
	 iLine(200,230,200,260);//15
	 iLine(200,260,140,260);//16
	 iLine(170,260,170,200);//17
	 iLine(160,310,160,280);//18
	 iLine(180,280,210,280);//19
	 iLine(230,230,230,310);//20
	 iLine(270,250,330,250);//21
	 iLine(130,280,130,310);//22
	 iLine(270,290,270,270);//23
	 iLine(270,290,300,290);//24
	 iLine(180,80,260,80);//25
	 
	 
	
}

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}


/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	 	
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key==GLUT_KEY_UP)
	{
		
		
		y+=3;
		if(y>=330)
			y=325;
	}
	if(key==GLUT_KEY_DOWN)
	{
		y-=3;
		if(y<=30)
			y=35;
	}
	if(key==GLUT_KEY_RIGHT)
	{
		x+=3;
		if(x>=380)
			x=375;


		//iLine(50,30,50,80);//1
		if(x>=50)
		{
			if(y>=230 && y<=280){
			
				x=45;
			}

			

		}	

		if(x>=50 && y>=230 && y<=280)
			x=45;
		if(x>=50 && y>=30 && y<=80)
			x=45;
		
		






			
		 
	}
	if(key==GLUT_KEY_LEFT)
	{
		x-=3;
		if(x<=30 )
			x=30+5;
		  
	}
	//place your codes for other keys here
 
//place your codes for other keys here

}



int main()
{
	//place your own initialization codes here.

	iSetColor(0, 255, 255);
	iInitialize(400, 400, "Find Your Way");

	
	return 0;
}