#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void instructions(void);
void scr_bord(char P1[],char P2[],int scr1,int scr2);
int dice(int scr);

int main()
{
    char P1[25],P2[25],select;
    int scrP1=0,scrP2=0;
    clrscr();
    randomize();
    cout<<"\t\t****** Welcome To The Snake And Ladder Game ******";
    cout<<endl<<"\n\nEnter The Name Of First Player:";
    gets(P1);
    cout<<endl<<"Enter The Name Of Second Player:";
    gets(P2);
    select:
    cout<<endl<<"Now Please Press \'I\' For Instruction OR Press \'S\' To Start Your Game:";
    select=getch();
    if(select=='I' || select=='i')
    {
	instructions();
	goto select;
    }
    else if(select=='S' || select=='s')
    {
	while(1)
	{
	    scr_bord(P1, P2, scrP1, scrP2);
	    cout<<endl<<endl<<" \'"<<P1<<"\' Its Your Turn Press Space Bar To Roll the Dice\n";
	    err1:
	    if(getch()!=32)
	    goto err1;
	    scrP1=dice(scrP1);
	    if(scrP1==100)
	    {
		scr_bord(P1, P2, scrP1, scrP2);
		cout<<endl<<endl<<" Congratulations "<<P1<<" !!\n\r You Won The Game!";
		break;

	    }

	    cout<<endl<<endl<<" \'"<<P2<<"\' Its Your Turn Press Space Bar To Roll the Dice\n";
	    err2:
	    if(getch()!=32)
	    goto err2;
	    scrP2=dice(scrP2);
	    if(scrP2==100)
	    {
		scr_bord(P1, P2, scrP1, scrP2);
		cout<<endl<<endl<<" Congratulations "<<P2<<" !!\n\r You Won The Game!";
		break;
	    }
	    cout<<"\n\n\r Press Any Key To Continue...";
	    getch();
	}
	cout<<"\n\n\r Press ESCAPE To Continue...";
	err3:
	if(getch()!=27)
	goto err3;
    }
    else
    {
	cout<<"\n\n\rPlease Enter a valid Character!!";
	goto select;
    }
    return 0;
}



void instructions(void)
{
    clrscr();
    cout<<"\n\n\t\t\t****** Instructions!! ******";
    {
	cout<<endl<<"\nBla Bla Bla....\n";
	cout<<endl<<endl<<"Press Any Key To Continue...";
	getch();
    }
    clrscr();
    cout<<"\n\n\t\t\t****** Ladders!! ******";
    {
	cout<<"\n\n\t\t\t03 ==========>> 54";
	cout<<"\n\t\t\t19 ==========>> 33";
	cout<<"\n\t\t\t38 ==========>> 61";
	cout<<"\n\t\t\t41 ==========>> 78";
	cout<<"\n\t\t\t63 ==========>> 99";
	cout<<"\n\t\t\t76 ==========>> 85";
	cout<<"\n\t\t\t83 ==========>> 92";
	cout<<endl<<endl<<"Press Any Key To Continue...";
	getch();
    }
    clrscr();
    cout<<"\n\n\t\t\t****** Snakes!! ******";
    {
	cout<<"\n\n\t\t\t98 ==========>> 27";
	cout<<"\n\t\t\t81 ==========>> 56";
	cout<<"\n\t\t\t67 ==========>> 44";
	cout<<"\n\t\t\t49 ==========>> 38";
	cout<<"\n\t\t\t32 ==========>> 11";
	cout<<"\n\t\t\t29 ==========>> 13";
	cout<<"\n\t\t\t17 ==========>> 02";
	cout<<endl<<endl<<"Press Any Key To Continue...";
	getch();
    }
    clrscr();
}

void scr_bord(char P1[],char P2[],int scr1,int scr2)
{
    clrscr();
    for(int i=0; i<40; i++)
	cout<<"*";

    cout<<endl<<endl<<"The Score Of "<<P1<<" Is:"<<scr1;
    cout<<endl<<endl<<"The Score Of "<<P2<<" Is:"<<scr2;
    cout<<endl<<endl;

    for(int j=0; j<40; j++)
	cout<<"*";
}


int dice(int scr)
{
    int dice;
    dice=random(7);
    cout<<"\n You Got "<<dice<<" Numbers!!\n";
    scr=scr+dice;
    if(scr>100)
    {
	scr=scr-dice;
	cout<<"\r Oops! You just Got "<<dice<<" Numbers!\n\r But You Just Need "<<100-scr<<" Numbers to Win!\n";
    }
    switch(scr)
    {
    case 03:
	cout<<" Hurrah!! You Got Ladder! \n\r Now Your Score Is 54.";
	scr=54;
	break;
    case 19:
	cout<<" Hurrah!! You Got Ladder! \n\r Now Your Score Is 33.";
	scr=33;
	break;
    case 38:
	cout<<" Hurrah!! You Got Ladder! \n\r Now Your Score Is 61.";
	scr=61;
	break;
    case 41:
	cout<<" Hurrah!! You Got Ladder! \n\r Now Your Score Is 78.";
	scr=78;
	break;
    case 63:
	cout<<" Hurrah!! You Got Ladder! \n\r Now Your Score Is 99.";
	scr=99;
	break;
    case 76:
	cout<<" Hurrah!! You Got Ladder! \n\r Now Your Score Is 85.";
	scr=85;
	break;
    case 83:
	cout<<" Hurrah!! You Got Ladder! \n\r Now Your Score Is 92.";
	scr=92;
	break;
    case 98:
	cout<<" Oops!! You've Eaten By Snake!\n\r Now Your Score Is 27.";
	scr=27;
	break;
    case 81:
	cout<<" Oops!! You've Eaten By Snake!\n\r Now Your Score Is 56.";
	scr=56;
	break;
    case 67:
	cout<<" Oops!! You've Eaten By Snake!\n\r Now Your Score Is 44.";
	scr=44;
	break;
    case 49:
	cout<<" Oops!! You've Eaten By Snake!\n\r Now Your Score Is 38.";
	scr=38;
	break;
    case 32:
	cout<<" Oops!! You've Eaten By Snake!\n\r Now Your Score Is 11.";
	scr=11;
	break;
    case 29:
	cout<<" Oops!! You've Eaten By Snake!\n\r Now Your Score Is 13.";
	scr=13;
	break;
    case 17:
	cout<<" Oops!! You've Eaten By Snake!\n\r Now Your Score Is 02.";
	scr=02;
	break;
    default:
	cout<<" Your Current Score Is "<<scr<< ".";
    }
    return scr;
}
