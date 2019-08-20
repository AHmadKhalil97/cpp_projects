#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

class project
{
private:
    char name[12];
    char ch=219;
    int money,bet,n,rslt;
public:
    void intro(void);
    void game(void);
};

int main()
{
    project obj;
    obj.game();
    return 0;
}

void project::intro(void)
{
    cout<<"   ";
    for(int i=0; i<70; i++)
        cout<<"=";
    cout<<endl<<endl;
    cout<<"   Welcome To Casino Bet Challenge !!";
    cout<<endl<<"   Here You Will Tell Us How Many Money You Have To Play This Game.";
    cout<<endl<<"   Than You Will Bet Some Of Your Money On One Specific Number.";
    cout<<endl<<"   Ten Players Will Be Play At One Time And Each Will Have One Number To Bet.";
    cout<<endl<<"   After Rolling The Dice The Winning Number Awarded By All The Money...!";
    cout<<endl<<"   You Can Play Again As Many Time You Want If You Have Money To Bet...!";
    cout<<endl<<"   Minimum Amounts For Your Money And Bet Are 500 And 250 Respectively...";
    cout<<endl<<"   Good Luck !!!";
    cout<<endl<<endl;
    cout<<"   ";
    for(int i=0; i<70; i++)
        cout<<"=";
    cout<<endl<<endl;
}

void project::game(void)
{
    srand(time(0));
    intro();
    cout<<"   Enter Your Name: ";
    gets(name);
    cout<<endl<<"   How Many Money You Have to Join the Bet Challenge: ";
    money:
    cin>>money;
    if(money<500)
    {
        cout<<endl<<"   Your Money Is Not Enough To Join Challenge...!";
        cout<<endl<<"   Enter Again Your Money: ";
        goto money;
    }
    again:
    system("cls");
    intro();
    cout<<"   Your Current Balance: "<<money<< " Rs.";
    cout<<endl<<"   Enter How Many Money You Want To Put On Bet: ";
    bet:
    cin>>bet;
    if(bet>money)
    {
        cout<<endl<<"   You Don't Have Enough Money For This Bet !!";
        cout<<endl<<"   Enter Again Your Bet: ";
        goto bet;
    }
    else if(bet<250)
    {
        cout<<endl<<"   Your Bet Balance Must Be 250 Or More...";
        cout<<endl<<"   Enter Again Your Bet: ";
        goto bet;
    }

    cout<<endl<<"   Now Its Time To Choose a Number 1-10: ";
    n:
    cin>>n;
    if(n<1 || n>10)
    {
        cout<<endl<<"   Chosen Number Must Be Between 1-10...!";
        cout<<endl<<"   Enter Again: ";
        goto n;
    }
    cout<<endl<<"   calculating Results...";
    cout<<endl;
    cout<<"   ";
    ch=219;
    for(int i=0; i<30; i++)
    {
        cout<<ch;
        Sleep(100);
    }

    rslt=rand()%10 +1;

    if(rslt==n)
    {
        cout<<endl<<endl<<"   Congratulations...!!";
        cout<<endl<<"   You Won "<<bet*10<<" Rupees !!";
        money=(money-bet)+bet*10;
        cout<<endl<<"   Your Current Balance Is: "<<money;
    }
    else
    {
        cout<<endl<<endl<<"   Oops...!!";
        cout<<endl<<"   You Lost !!";
        cout<<endl<<"   The Player With The Number \'"<<rslt<<"\' Is Winner...!";
        cout<<endl<<"   You Lost "<<bet<<" Rupees !!";
        cout<<endl<<"   Better Luck Next Time...";
        money=money-bet;
        cout<<endl<<"   Your Current Balance Is: "<<money;
        cout<<endl<<endl;
    }
    if(money>250)
    {
        cout<<endl<<"   Your Money Still Enough To Join Challenge Again...!";
        cout<<endl<<"   Press \'Y\' If You Interested OR \'N\' If You Are Not: ";
        lable:
        ch=getch();
        if(ch=='Y' || ch=='y')
            goto again;
        else if(ch!='N' && ch!='n')
            goto lable;
    }
    else
    cout<<endl<<"   You Don't Have Money To Play Next...";
    cout<<endl<<endl;
    cout<<"   Thanks For Playing...";
    Sleep(2000);
    cout<<endl<<endl;
}
