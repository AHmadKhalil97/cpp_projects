#include <iostream.h>
#include <time.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>

int main()
{
    clrscr();
    srand(time(0));
    char hurdle='O'; //219
    char ch;
    int lvl=1;
    int speed=100;
    int score=0;
    int chnc=3;
    int x1,y1,x2,y2;
    x1=55;
    y1=24;
    x2=rand() % 25 +43;
    y2=1;
    for(int i=1; i<26; i++)
    {
	gotoxy(40,i);
	cout<<"|";
    }
    for(int j=1; j<26; j++)
    {
	gotoxy(70,j);
	cout<<"|";
    }
    while(1)
    {
	gotoxy(x1,y1);      cout<<"X";
	gotoxy(x1+1,y1);    cout<<"|";
	gotoxy(x1-1,y1);    cout<<"|";
	gotoxy(x1+1,y1+1);  cout<<"0";
	gotoxy(x1-1,y1+1);  cout<<"0";
	gotoxy(x1+1,y1-1);  cout<<"0";
	gotoxy(x1-1,y1-1);  cout<<"0";


	gotoxy(x2,y2);      cout<<" ";
	gotoxy(x2+1,y2);    cout<<" ";
	gotoxy(x2-1,y2);    cout<<" ";
	gotoxy(x2+1,y2+1);  cout<<" ";
	gotoxy(x2-1,y2+1);  cout<<" ";
	gotoxy(x2+1,y2-1);  cout<<" ";
	gotoxy(x2-1,y2-1);  cout<<" ";

	y2++;

	gotoxy(x2,y2);      cout<<hurdle;
	gotoxy(x2+1,y2);    cout<<hurdle;
	gotoxy(x2-1,y2);    cout<<hurdle;
	gotoxy(x2+1,y2+1);  cout<<hurdle;
	gotoxy(x2-1,y2+1);  cout<<hurdle;
	gotoxy(x2+1,y2-1);  cout<<hurdle;
	gotoxy(x2-1,y2-1);  cout<<hurdle;

	if(y2==22 && (x1-1==x2-1 || x1-1==x2 || x1-1==x2+1 || x1==x2-1 || x1==x2 || x1==x2+1 || x1+1==x2-1 || x1+1==x2 || x1+1==x2+1))
	{
	    gotoxy(5,14);
	    cout<<"You Lost !!";
	    if(chnc==1)
	    {
		delay(1000);
		gotoxy(5,14);
		cout<<"Game Over !!";
		break;
	    }
	    else
	    {
		delay(1000);
		gotoxy(5,14);
		cout<<"           ";
		chnc--;
	    }
	}

	if(y2>24)
	{
	    gotoxy(x2,y2);      cout<<" ";
	    gotoxy(x2+1,y2);    cout<<" ";
	    gotoxy(x2-1,y2);    cout<<" ";
	    gotoxy(x2+1,y2+1);  cout<<" ";
	    gotoxy(x2-1,y2+1);  cout<<" ";
	    gotoxy(x2+1,y2-1);  cout<<" ";
	    gotoxy(x2-1,y2-1);  cout<<" ";
	    y2=1;
	    x2=rand() % 25 +43;
	    score+=10;
	}

	if(kbhit())
	{
	    ch=getch();
	    if(ch=='A' || ch=='a')
	    {
		if(x1-3>41)
		{
		    gotoxy(x1,y1);      cout<<" ";
		    gotoxy(x1+1,y1);    cout<<" ";
		    gotoxy(x1-1,y1);    cout<<" ";
		    gotoxy(x1+1,y1+1);  cout<<" ";
		    gotoxy(x1-1,y1+1);  cout<<" ";
		    gotoxy(x1+1,y1-1);  cout<<" ";
		    gotoxy(x1-1,y1-1);  cout<<" ";
		    x1=x1-3;
		    gotoxy(x1,y1);      cout<<"X";
		    gotoxy(x1+1,y1);    cout<<"|";
		    gotoxy(x1-1,y1);    cout<<"|";
		    gotoxy(x1+1,y1+1);  cout<<"0";
		    gotoxy(x1-1,y1+1);  cout<<"0";
		    gotoxy(x1+1,y1-1);  cout<<"0";
		    gotoxy(x1-1,y1-1);  cout<<"0";
		}
	    }
	    else if(ch=='D' || ch=='d')
	    {
		if(x1+3<69)
		{
		    gotoxy(x1,y1);      cout<<" ";
		    gotoxy(x1+1,y1);    cout<<" ";
		    gotoxy(x1-1,y1);    cout<<" ";
		    gotoxy(x1+1,y1+1);  cout<<" ";
		    gotoxy(x1-1,y1+1);  cout<<" ";
		    gotoxy(x1+1,y1-1);  cout<<" ";
		    gotoxy(x1-1,y1-1);  cout<<" ";
		    x1=x1+3;
		    gotoxy(x1,y1);      cout<<"X";
		    gotoxy(x1+1,y1);    cout<<"|";
		    gotoxy(x1-1,y1);    cout<<"|";
		    gotoxy(x1+1,y1+1);  cout<<"0";
		    gotoxy(x1-1,y1+1);  cout<<"0";
		    gotoxy(x1+1,y1-1);  cout<<"0";
		    gotoxy(x1-1,y1-1);  cout<<"0";
		}
	    }
	    else if(ch==27)
		break;


	}
	gotoxy(5,4);
    cout<<"A simple car game !";
    gotoxy(5,5);
    cout<<"Control your car and save the many";
    gotoxy(5,6);
    cout<<"inoocent lives...!!";
	gotoxy(5,11);
	cout<<"Total score: "<<score;
	if(score==100)
	{
	    lvl=2;
	    speed=120;
	}
	else if(score==200)
	{
	    lvl=3;
	    speed=140;
	}
	else if(score==320)
	{
	    lvl=4;
	    speed=160;
	}
	else if(score==450)
	{
	    lvl=5;
	    speed=180;
	}
	else if(score==600)
	{
	    lvl=6;
	    speed=190;
	}
	else if(score==700)
	{
	    gotoxy(5,14);
	    cout<<"You won !!";
	    break;
	}
	gotoxy(5,12);
	cout<<"Current level: "<<lvl;
	gotoxy(5,13);
	cout<<"Chances remained: "<<chnc;
	gotoxy(5,19);
	cout<<"Controls:";
	gotoxy(5,20);
	cout<<"=> Press \'A\' to move left.";
	gotoxy(5,21);
	cout<<"=> Press \'D\' to move right.";
	gotoxy(5,22);
	cout<<"=> Press ESCAPE key to exit.";
	delay(200-speed);
    }
    gotoxy(5,24);
    cout<<"Press any key to exit the game...";
    getch();
    return 0;
}
