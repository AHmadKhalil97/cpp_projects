#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

#define Up 0
#define Down 1
#define Left 2
#define Right 3
using namespace std;

class snake
{
private:
    int x[50], y[50];
    int tail=8;
    int dir;
    int xF, yF;
    int score=0;
    int lvl=1;
    int gender;
    int lives=3;
    int milisec=0;
    int sec=0;
    int minuts=0;
    int hrs=0;
    COORD coord={0,0};
    char PNme[20];
    char ch;
    bool eat=false;
    bool gameover=false;
    bool welcom=true;
    bool pause=true;
    bool note=true;
public:
    int x1=8;
    int y1=5;
    int x2=70;
    int y2=40;
    void rectangle(int x1,int y1,int x2, int y2);
    void rectangleForLvl3(int x1, int y1, int x2, int y2);
    void color(int x1, int y1, int x2, int y2);
    void color2(int x1, int y1, int x2, int y2);
    void wlcm(void);
    void start(void);
    void logic(void);
    void fruit(void);
    void status(void);
    void instructions(void);
    void live_lost(void);
    void endgame(void);
    void gotoxy(int x, int y);
    //void timer(void);
};





int main()
{
    snake snk;
    snk.wlcm();
    snk.start();
    snk.logic();
    snk.gotoxy(8, snk.y2+1);
    return 0;
}


void snake::wlcm(void)
{
    int x_2;
    system("cls");
    cout<<"Please Open a Full Screen Output Window And Then Press \'F\'";
    error0:
    if(getch()!='f' && getch()!='F')
        goto error0;
    strt:
    x_2=x2+40;
    rectangle(x1-1,y1-1,x_2+1,y2+1);

    gotoxy(((x_2-x1)/2-26+x1),(y2-y1)/2+y1-2);
    cout<<"Use Arrow Keys To Adjust The Rectangle On Your Screen";
    gotoxy(((x_2-x1)/2-22+x1),(y2-y1)/2+y1-1);
    cout<<"And To Get Better Experience Of This Game!!";
    gotoxy(((x_2-x1)/2-23+x1),(y2-y1)/2+y1+1);
    cout<<"Press \'ENTER\' When You Adjust The Rectangle";
    gotoxy(((x_2-x1)/2-19+x1),(y2-y1)/2+y1+2);
    cout<<"According to Your Screen Resolution !";

    error1:
    ch=getch();
    if(ch==72 && y2>40)
    {
        y2=y2-1;
        system("cls");
        cout<<"Please Open a Full Screen Output Window And Then Press \'F\'";
        goto strt;
    }
    else if(ch==80 && y2<52)
    {
        y2=y2+1;
        system("cls");
        cout<<"Please Open a Full Screen Output Window And Then Press \'F\'";
        goto strt;
    }
    else if(ch==75 && x2>70)
    {
        x2=x2-1;
        system("cls");
        cout<<"Please Open a Full Screen Output Window And Then Press \'F\'";
        goto strt;
    }
    else if(ch==77 && x2<120)
    {
        x2=x2+1;
        system("cls");
        cout<<"Please Open a Full Screen Output Window And Then Press \'F\'";
        goto strt;
    }
    else if(ch!=13)
        goto error1;

    system("cls");
    rectangle(x1,y1,x_2,y2);
    color(x1,y1,x_2,y2);
    rectangle(x1-1,y1-1,x_2+1,y2+1);
    gotoxy(((x_2-x1)/2-10+x1),y1+2);
    cout<<" ***  Welcome!!  *** ";
    gotoxy(((x_2-x1)/2-13+x1),y1+9);
    cout<<" ***  The Snake Game!  *** ";
    gotoxy(((x_2-x1)/2-23+x1),y1+16);
    cout<<" ***  Programmed And Designed By \"AHmad\" !  *** ";
    gotoxy(((x_2-x1)/2-22+x1),y1+22);
    cout<<" ***  Submitted To: \"Prof. Ghulam Ali\" !  *** ";
    gotoxy(((x_2-x1)/2-16+x1),y1+28);
    cout<<" ***  BSCS 2nd Semester !  *** ";
    gotoxy(((x_2-x1)/2-25+x1),y1+34);
    cout<<" ***  Government College University Faisalabad  *** ";
    gotoxy(((x_2-x1)/2-39+x1),y2-1);
    cout<<" ***  Press \'I\' For Instructions Or \'ENTER\' Key To Start Your Game...  *** ";

    error2:
    ch=getch();
    if(ch!=13 && ch!='I' && ch!='i')
    {
        goto error2;
    }
    else if(ch=='I' || ch=='i')
    {
        instructions();
    }


    system("cls");
    rectangle(x1,y1,x_2,y2);
    rectangle(x1-1,y1-1,x_2+1,y2+1);
    color(x1, y1, x_2, y2);
    rectangle((x_2-x1)/2-36+x1, (y2-y1)/2-6+y1, (x_2-x1)/2+36+x1, (y2-y1)/2+6+y1);
    rectangle((x_2-x1)/2-35+x1, (y2-y1)/2-5+y1, (x_2-x1)/2+35+x1, (y2-y1)/2+5+y1);
    color2((x_2-x1)/2-35+x1, (y2-y1)/2-5+y1, (x_2-x1)/2+35+x1, (y2-y1)/2+5+y1);

    gotoxy((x_2-x1)/2-33+x1,(y2-y1)/2-3+y1);
    cout<<"Player Name: ";
    gets(PNme);
    gotoxy((x_2-x1)/2-33+x1,(y2-y1)/2-0+y1);
    cout<<"Gender: ";
    gen:
    gender=getch();
    if(gender=='M' || gender=='m')
        cout<<"Male";
    else if(gender=='F' || gender=='f')
        cout<<"Female";
    else
        goto gen;
    gotoxy(((x_2-x1)/2-22+x1), (y2-y1)/2+4+y1);
    cout<<"Press \'ENTER\' Key To Continue To The Game...";

    error4:
    if(getch()!=13)
        goto error4;
}


void snake::start(void)
{

    system("cls");
    rectangle(x1,    y1,     x2,     y2);
    rectangle(x2+1,  y1,     x2+40,  (((y2-y1)/3)+y1));
    rectangle(x2+1,  (((y2-y1)/3)+y1+1),  x2+40,  ((((y2-y1)/3)*2)+y1));
    rectangle(x2+1,  ((((y2-y1)/3)*2)+y1+1),  x2+40,  ((y2-y1)+y1));
    if(note==true)
    {
        rectangle((x2-x1)/2-27+x1, (y2-y1)/2-5+y1, (x2-x1)/2+27+x1, (y2-y1)/2+5+y1);
        color((x2-x1)/2-27+x1, (y2-y1)/2-5+y1, (x2-x1)/2+27+x1, (y2-y1)/2+5+y1);
        rectangle((x2-x1)/2-25+x1, (y2-y1)/2-3+y1, (x2-x1)/2+25+x1, (y2-y1)/2+3+y1);
        color2((x2-x1)/2-25+x1, (y2-y1)/2-3+y1, (x2-x1)/2+25+x1, (y2-y1)/2+3+y1);
        gotoxy((x2-x1)/2-23+x1,(y2-y1)/2-2+y1);
        cout<<"Note: It Is Better To Avoid Pressing Any Of Two";
        gotoxy((x2-x1)/2-23+x1,(y2-y1)/2-1+y1);
        cout<<"      Arrow Keys At One Time !!";
        gotoxy((x2-x1)/2-23+x1,(y2-y1)/2+1+y1);
        cout<<"You May Loose One Of Your Lives By Doing It...!";
        gotoxy((x2-x1)/2-23+x1,(y2-y1)/2+2+y1);
        cout<<"Press Space Bar To Continue...";
        err:
        if(getch()!=32)
            goto err;
        note=false;
        start();

    }

}


void snake::logic(void)
{
    beginning:
    dir=Right;
    for(int i=0; i<=tail; i++)
    {
        x[i]= 50-i;
        y[i]= 28;

    }

    while(1)
    {
        while(!(_kbhit()) && !(gameover))
        {
            gotoxy(x[tail+1],y[tail+1]);
            cout<<" ";
            fruit();
            status();
            for(int i=tail; i>0; i--)
            {
                x[i] = x[i-1];
                y[i] = y[i-1];
            }

            for(int i=2; i<tail; i++)
            {
                gotoxy(x[i],y[i]);
                cout<<"0";
            }
            x[tail+1]=y[tail+1]=0;

            gotoxy(x[0],y[0]);
            cout<<"#";
            gotoxy(x[tail-1],y[tail-1]);
            cout<<" ";
            gotoxy(x[tail+1],y[tail+1]);
            cout<<" ";
            if(lvl==1)
            {
                if(x[0]==x1+1 && dir==Left)         x[0]=x2;
                else if(x[0]==x2-1 && dir==Right)   x[0]=x1;
                else if(y[0]==y1+1 && dir==Up)      y[0]=y2;
                else if(y[0]==y2-1 && dir==Down)    y[0]=y1;

                if(dir==Right || dir==Left)
                    Sleep(60);
                else
                    Sleep(110);
            }
            else if(lvl==2)
            {
                if(x[0]==x1+1 && dir==Left)         x[0]=x2;
                else if(x[0]==x2-1 && dir==Right)   x[0]=x1;
                else if(y[0]==y1+1 && dir==Up)      y[0]=y2;
                else if(y[0]==y2-1 && dir==Down)    y[0]=y1;

                if(dir==Right || dir==Left)
                    Sleep(40);
                else
                    Sleep(90);
            }
            else if(lvl==3)
            {
                if(x[0]<=x1 || x[0]>=x2 || y[0]<=y1 || y[0]>=y2)
                {
                     if(lives==1)
                    {
                        gotoxy((x2-x1)/2-6+x1,y1+23);
                        cout<<"Game Over !!";
                        gotoxy((x2-x1)/2-11+x1,y1+24);
                        cout<<"Thanks For Playing !!";
                        gotoxy((x2-x1)/2-17+x1,y1+25);
                        cout<<"Press Any Key To Exit The Game...";
                        gameover=true;
                        endgame();
                        goto endd;
                    }
                    else
                    {
                        live_lost();
                        goto beginning;
                    }
                }
                if(dir==Right || dir==Left)
                    Sleep(20);
                else
                    Sleep(50);
            }

            for(int i=3; i<tail; i++)
            {
                if(x[0]==x[i] && y[0]==y[i])
                {
                    if(lives==1)
                    {
                        gotoxy((x2-x1)/2-6+x1,y1+23);
                        cout<<"Game Over !!";
                        gotoxy((x2-x1)/2-11+x1,y1+24);
                        cout<<"Thanks For Playing !!";
                        gotoxy((x2-x1)/2-17+x1,y1+25);
                        cout<<"Press Any Key To Exit The Game...";
                        gameover=true;
                        endgame();
                        goto endd;
                    }
                    else
                    {
                        live_lost();
                        goto beginning;
                    }
                }
            }

            if(score==60 && welcom==true)
            {
                lvl=2;
                for(int i=0; i<tail; i++)
                {
                    gotoxy(x[i],y[i]);
                    cout<<" ";
                }
                gotoxy((x2-x1)/2-29+x1,y1+23);
                cout<<"Congratulations!! You Have Passed This Level Successfully!";
                Sleep(2000);
                gotoxy((x2-x1)/2-29+x1,y1+23);
                cout<<"                                                          ";
                gotoxy((x2-x1)/2-5+x1,y1+23);
                cout<<"Loading";
                Sleep(500);
                cout<<".";
                Sleep(500);
                cout<<".";
                Sleep(500);
                cout<<".";
                gotoxy(x2/2-5,y1+23);
                cout<<"          ";
                welcom=false;
                start();
                goto beginning;
            }
            else if(score==130 && welcom==false)
            {
                lvl=3;
                for(int i=0; i<tail; i++)
                {
                    gotoxy(x[i],y[i]);
                    cout<<" ";
                }
                gotoxy((x2-x1)/2-29+x1,y1+23);
                cout<<"Congratulations!! You Have Passed This Level Successfully!";
                Sleep(2000);
                gotoxy((x2-x1)/2-29+x1,y1+23);
                cout<<"                                                          ";
                gotoxy((x2-x1)/2-5+x1,y1+23);
                cout<<"Loading";
                Sleep(500);
                cout<<".";
                Sleep(500);
                cout<<".";
                Sleep(500);
                cout<<".";
                gotoxy(x2/2-5,y1+23);
                cout<<"          ";
                welcom=true;
                start();
                rectangleForLvl3(x1, y1, x2, y2);
                goto beginning;
            }
            else if(score==220)
            {
                for(int i=0; i<tail; i++)
                {
                    gotoxy(x[i],y[i]);
                    cout<<" ";
                }
                gotoxy((x2-x1)/2-27+x1,y1+23);
                cout<<"Congratulations!! \"";
                if(gender=='M' || gender=='m')
                    cout<<"Mr. ";
                if(gender=='F' || gender=='f')
                    cout<<"Miss ";
                cout<<PNme;
                cout<<"\" You Have Won This Game Successfully!";
                gotoxy((x2-x1)/2-22+x1,y1+24);
                cout<<"Now You Are The Expert In Waisting Time...!!";
                gotoxy((x2-x1)/2-15+x1,y1+25);
                cout<<"Press \'ESCAPE\' Key To EXIT...";
                wapis:
                if(getch()!=27)
                    goto wapis;
                endgame();
                goto endd;
            }

            switch(dir)
            {
            case Up:
                y[0]--;
                break;
            case Down:
                y[0]++;
                break;
            case Left:
                x[0]--;
                break;
            case Right:
                x[0]++;
                break;
            }
        }

        ch=getch();
        if(ch==27)
        {
            Sleep(1200);
            gotoxy((x2-x1)/2-6+x1,y1+23);
            cout<<"Game Over !!";
            gotoxy((x2-x1)/2-11+x1,y1+24);
            cout<<"Thanks For Playing !!";
            gotoxy((x2-x1)/2-17+x1,y1+25);
            cout<<"Press Any Key To Exit The Game...";
            gameover=true;
            endgame();
            goto endd;
        }
        else if(ch=='I' || ch=='i')
        {
            instructions();
            start();
        }
        else if(ch=='S' || ch=='s')
        {
            if(lives==1)
            {
                gotoxy((x2-x1)/2-6+x1,y1+23);
                cout<<"Game Over !!";
                gotoxy((x2-x1)/2-11+x1,y1+24);
                cout<<"Thanks For Playing !!";
                gotoxy((x2-x1)/2-17+x1,y1+25);
                cout<<"Press Any Key To Exit The Game...";
                gameover=true;
                endgame();
                goto endd;
            }
            else
            {
                live_lost();
                goto beginning;
            }
        }

        pause:
        if(ch==32)
        {
            if(pause==true)
            {
                gotoxy((x2-x1)/2-7+x1,y1+23);
                cout<<"Game Paused !!";
                pause=false;
            }
            if(!(kbhit()))
                goto pause;
            else if(getch()==32)
                {
                    pause=true;
                    gotoxy((x2-x1)/2-7+x1,y1+23);
                    cout<<"              ";
                    goto run;
                }
            else
                goto pause;
        }
        run:

        if(ch==72 && dir!=Down)         dir=Up;
        else if(ch==80 && dir!=Up)      dir=Down;
        else if(ch==75 && dir!=Right)   dir=Left;
        else if(ch==77 && dir!=Left)    dir=Right;


    }
    endd:;
}


void snake::fruit(void)
{
    if(eat==false)
    {
        srand(time(0));
        xF=(rand() % (x2-12))+10;
        yF=(rand() % (y2-9))+7;
        eat=true;
    }

    gotoxy(xF,yF);
    if(score==50 || score==120 || score==210)
        cout<<"O";
    else
        cout<<"o";

    if(xF==x[0] && yF==y[0])
    {
        score+=10;
        eat=false;
        tail++;
    }
}


void snake::rectangleForLvl3(int x1,int y1,int x2, int y2)
{
    for(int i=x1+1; i<x2; i=i+7)
    {
        gotoxy(i,y1);
        cout<<"*";
    }
    for(int i=y1+1; i<y2; i=i+4)
    {
        gotoxy(x2,i);
        cout<<"*";
    }
    for(int i=x2-1; i>x1; i=i-7)
    {
        gotoxy(i,y2);
        cout<<"*";
    }
    for(int i=y2-1; i>y1; i=i-4)
    {
        gotoxy(x1,i);
        cout<<"*";
    }
}


void snake::rectangle(int x1,int y1,int x2, int y2)
{
    gotoxy(x1,y1);
    ch=201;
    cout<<ch;
    for(int i=x1+1; i<x2; i++)
    {
        gotoxy(i,y1);
        ch=205;
        cout<<ch;
    }
    ch=187;
    cout<<ch;
    for(int i=y1+1; i<y2; i++)
    {
        gotoxy(x2,i);
        ch=186;
        cout<<ch;
    }
    gotoxy(x2,y2);
    ch=188;
    cout<<ch;
    for(int i=x2-1; i>x1; i--)
    {
        gotoxy(i,y2);
        ch=205;
        cout<<ch;
    }
    gotoxy(x1,y2);
    ch=200;
    cout<<ch;
    for(int i=y2-1; i>y1; i--)
    {
        gotoxy(x1,i);
        ch=186;
        cout<<ch;
    }
}



void snake::color(int x1, int y1, int x2, int y2)
{
    ch=176;
    for(int i=y1+1; i<y2; i++)
    {
    gotoxy(x1+1,i);
        for(int j=x1+1; j<x2; j++)
        {
            cout<<ch;
        }
    }
}

void snake::color2(int x1, int y1, int x2, int y2)
{
    for(int i=y1+1; i<y2; i++)
    {
    gotoxy(x1+1,i);
        for(int j=x1+1; j<x2; j++)
        {
            cout<<" ";
        }
    }
}


void snake::instructions(void)
{
    system("cls");
    rectangle(x1,y1,x2+40,y2);
    color(x1,y1,x2+40,y2);
    rectangle(x1-1,y1-1,x2+41,y2+1);
    gotoxy(((x2+40-x1)/2-13+x1),y1+2);
    cout<<" ***  Instructions!!  *** ";
    ch=62;
    gotoxy(x1+4,y1+8);
    cout<<ch;
    cout<<"  This Is A Simple Snake Game.";
    gotoxy(x1+4,y1+10);
    cout<<ch;
    cout<<"  It Has Three Levels.";
    gotoxy(x1+4,y1+12);
    cout<<ch;
    cout<<"  You Will Be Promoted to Next Level Automatically After Eating";
    gotoxy(x1+4,y1+14);
    cout<<"   Specific Number Of Fruits From The Current Level.";
    gotoxy(x1+4,y1+16);
    cout<<ch;
    cout<<"  Snake's Length Will Be Increased After Eating Every Fruit.";
    gotoxy(x1+4,y1+18);
    cout<<ch;
    cout<<"  Every Fruit Has Equal Points Which Are Exactly Ten(10).";
    gotoxy(x1+4,y1+20);
    cout<<ch;
    cout<<"  If The Snakes Eat Its Own Tale, One Of Your Live Will Be Lost. (Note: Total Lives Are: 3)";
    gotoxy(x1+4,y1+22);
    cout<<ch;
    cout<<"  You Can Easily Control Snake By Using Arrow Keys On The Keyboard.";
    gotoxy(x1+4,y1+24);
    cout<<ch;
    cout<<"  Space Bar Can Pause Or Resume The Game.";
    gotoxy(x1+4,y1+26);
    cout<<ch;
    cout<<"  Escape Key Can End The Game Anywhere Anytime.";
    gotoxy(x1+4,y1+28);
    cout<<ch;
    cout<<"  You Can See This Instruction Box Anytime By Just Pressing I Alphabet.";
    gotoxy(x1+4,y1+30);
    cout<<ch;
    cout<<"  All Your Game Status, Information And Controls Written In Side Boxes.";
    gotoxy(((x2+40-x1)/2-10+x1),y1+33);
    cout<<" ***  GOOD LUCK  *** ";
    gotoxy(((x2+40-x1)/2-22+x1),y2-1);
    cout<<" ***  Press \'ENTER\' Key To Continue...  *** ";
    error3:
    if(getch()!=13)
    {
        goto error3;
    }
}

void snake::status(void)
{
    int chck, spcs, dstns=2;
    if(y2>50)
        chck=4;
    else if(y2>47)
        chck=3;
    else if(y2>44)
        chck=2;
    else if(y2>41)
        chck=1;
    else
        {
            chck=3;
            dstns=1;
        }


    spcs=y1+1;
    gotoxy(x2+13,spcs);
    cout<<"Game Status!!";

    spcs+=chck;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Player Name: ";
    if(gender=='M' || gender=='m')
        cout<<"Mr. ";
    if(gender=='F' || gender=='f')
        cout<<"Miss ";
    cout<<PNme;

    spcs+=dstns;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Total Time Consumed: ";
    //timer();

    spcs+=dstns;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Current Level: "<<lvl;

    spcs+=dstns;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Lives Remained: "<<lives;

    spcs+=dstns;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Total Points: "<<score;

    spcs=(((y2-y1)/3)+y1+1)+1;
    gotoxy(x2+13,spcs);
    cout<<"Level Information!!";

    spcs+=chck;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Difficulty: ";
    if(lvl==1)
        cout<<"Easy";
    else if(lvl==2)
        cout<<"Medium";
    else
    {
        cout<<"      ";
        gotoxy(x2+18,spcs);
        cout<<"Hard";
    }

    spcs+=dstns;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Moving Speed: ";
    if(lvl==1)
        cout<<"Normal";
    else if(lvl==2)
    {
        cout<<"      ";
        gotoxy(x2+20,spcs);
        cout<<"Fast";
    }
    else
        cout<<"Very Fast";

    spcs+=dstns;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Skill Requirements: ";
    if(lvl==1)
        cout<<"Beginner";
    else if(lvl==2)
    {
        cout<<"            ";
        gotoxy(x2+26,spcs);
        cout<<"Professional";
    }
    else
    {
        cout<<"            ";
        gotoxy(x2+26,spcs);
        cout<<"Master";
    }

    spcs+=dstns;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Boundary Walls: ";
    if(lvl==1 || lvl==2)
        cout<<"Breakable";
    else
    {
        cout<<"          ";
        gotoxy(x2+22,spcs);
        cout<<"Hard";
    }

    spcs+=dstns;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Tail: "<<tail-3<<" Boxes";

    spcs=((((y2-y1)/3)*2)+y1+1)+1;
    gotoxy(x2+15,spcs);
    cout<<"Controls!!";

    spcs+=chck;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Arrow Keys: To Control The Snake";

    spcs+=dstns;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Alphabet \'I\': For Instructions";

    spcs+=dstns;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Alphabet \'S\': To Do Suicide";

    spcs+=dstns;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Space Bar: To Pause The Progress";

    spcs+=dstns;
    gotoxy(x2+2,spcs);
    ch=61;
    cout<<ch;
    ch=62;
    cout<<ch;
    cout<<"  Escape Key: To End The Game";
}


void snake::live_lost(void)
{
    lives--;
    Sleep(2000);
    for(int i=0; i<tail; i++)
    {
        gotoxy(x[i],y[i]);
        cout<<" ";
    }
    gotoxy((x2-x1)/2-3+x1,y1+23);
    cout<<"Oops !!";
    Sleep(600);
    gotoxy((x2-x1)/2-17+x1,y1+24);
    cout<<"You Just Lost One Of Your Lives !!";
    gotoxy((x2-x1)/2-19+x1,y1+25);
    cout<<"Press Any Key To Continue The Game...";
    getch();
    gotoxy((x2-x1)/2-3+x1,y1+23);
    cout<<"        ";
    gotoxy((x2-x1)/2-17+x1,y1+24);
    cout<<"                                  ";
    gotoxy((x2-x1)/2-19+x1,y1+25);
    cout<<"                                     ";
    gotoxy((x2-x1)/2-5+x1,y1+23);
    cout<<"Loading";
    Sleep(500);
    cout<<".";
    Sleep(500);
    cout<<".";
    Sleep(500);
    cout<<".";
    gotoxy((x2-x1)/2-5+x1,y1+23);
    cout<<"          ";
    start();
    if(lvl==3)
        rectangleForLvl3(x1, y1, x2, y2);
}

/*void snake::timer(void)
{
        if(milisec==1000)
        {
            sec++;
            milisec=0;
        }
        if(sec==60)
        {
            minuts++;
            sec=0;
        }
        if(minuts==60)
        {
            hrs++;
            minuts=0;
        }
        cout<<hrs<<":"<<minuts<<":"<<sec;
        Sleep(1);
        milisec++;
}*/

void snake::endgame(void)
{
    getch();
    system("cls");
    rectangle(x1,y1,x2+40,y2);
    color(x1,y1,x2+40,y2);
    rectangle(x1+6,y1+3,x2+34,y2-3);
    color2(x1+6,y1+3,x2+34,y2-3);
    rectangle(x1+16,y1+8,x2+24,y2-8);
    color(x1+16,y1+8,x2+24,y2-8);
    rectangle(x1+22,y1+11,x2+18,y2-11);
    color2(x1+22,y1+11,x2+18,y2-11);

    gotoxy(((x2-x1-4)/2+x1+17),y1+12);
    cout<<"GAME STATUS";

    int chck, spcs, dstns=2;
    if(y2>50)
        chck=5;
    else if(y2>45)
        chck=3;
    else if(y2>43)
        chck=2;
    else if(y2>42)
        chck=1;
    else
    {
        chck=2;
        dstns=1;
    }

    ch=62;

    spcs=y1+12+chck;
    gotoxy(x1+26,spcs);
    cout<<ch;
    cout<<"  Player Name: ";
    if(gender=='M' || gender=='m')
        cout<<"Mr. ";
    if(gender=='F' || gender=='f')
        cout<<"Miss ";
    cout<<PNme;

    spcs+=dstns;
    gotoxy(x1+26,spcs);
    cout<<ch;
    cout<<"  Total Time Consumed: ";


    spcs+=dstns;
    gotoxy(x1+26,spcs);
    cout<<ch;
    cout<<"  Total Levels Completed: ";
    if(score==220)
        cout<<"3";
    else
        cout<<lvl-1;

    spcs+=dstns;
    gotoxy(x1+26,spcs);
    cout<<ch;
    cout<<"  Total Score: "<<score;

    spcs+=dstns;
    gotoxy(x1+26,spcs);
    cout<<ch;
    cout<<"  Total Fruits Eaten: "<<score/10;

    spcs+=dstns;
    gotoxy(x1+26,spcs);
    cout<<ch;
    cout<<"  Total Lives Lost: "<<3-lives;


    spcs+=dstns;
    gotoxy(x1+26,spcs);
    cout<<ch;
    cout<<"  Length Of Snake Reached: "<<tail-3;

    gotoxy(((x2-x1-4)/2+x1+7),y2-12);
    cout<<"Thanks For Playing This Game!!";
}

void snake::gotoxy(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
