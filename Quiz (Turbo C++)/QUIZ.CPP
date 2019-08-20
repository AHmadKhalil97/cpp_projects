#include<iostream.h>
#include<conio.h>

class quiz
{
private:
    int score;
    char name[20],ch;
public:
    quiz():score(0){}
    void wlcm();
    void test();
    void result();
};

void main()
{
	quiz obj;
	obj.wlcm();
	obj.test();
	obj.result();
}

void quiz::wlcm()
{
    clrscr();
    cout<<"\t\t\t\tWelcome!";
    cout<<"\n Enter Your Name: ";
    cin>>name;
    clrscr();
    cout<<"\n Hello "<<name<<"!";
    cout<<"\n\n It is a simple quiz based on general knowledge.";
    cout<<"\n You have to give the answers of some multiple choice questions here.";
    cout<<"\n You can easily submit your answer by pressing \'A\',\'B\' or \'C\' !!";
    cout<<"\n\n Press any key to start your QUIZ...";
    getch();
}

void quiz::test()
{
    clrscr();
    cout<<"\n Question No.1";
    cout<<"\n\n What is called as the HolyLand ?";
    cout<<"\n A. Jerusalem \n B. Mathura \n C. Mecca";
    mcq1:
    cout<<"\n\n Press Your Selection:";
    ch=getche();
    if(ch=='a')
    {
	score+=10;
	cout<<"\n\n Very good !!";
    }
    else if(ch=='b' || ch=='c')
	cout<<"\n\n Wrong answer...";
    else
    {
	cout<<"\n\n Invalid selection!!";
	goto mcq1;
    }
    cout<<"\n\n Press any key to continue...";
    getch();

    clrscr();
    cout<<"\n Question No. 2";
	cout<<"\n\n What is called as The Roof of The World ?";
	cout<<"\n A. Nepal \n B. Rome \n C. Tibet";
	mcq2:
    cout<<"\n\n Press Your Selection:";
    ch=getche();
    if(ch=='c')
    {
	score+=10;
	cout<<"\n\n Very good !!";
    }
    else if(ch=='a' || ch=='b')
	cout<<"\n\n Wrong answer...";
    else
    {
	cout<<"\n\n Invalid Selection!!";
	goto mcq2;
    }
    cout<<"\n\n Press any key to continue...";
	getch();

	clrscr();
	cout<<"\n Question No. 3";
	cout<<"\n\n What is called as The Land of Rising Sun ?";
	cout<<"\n A. Chicago \n B. Japan \n C. Tibet";

	mcq3:
    cout<<"\n\n Press Your selection:";
    ch=getche();
    if(ch=='b')
    {
	score+=10;
	cout<<"\n\n Very good !!";
    }
    else if(ch=='a' || ch=='c')
	cout<<"\n\n Wrong answer...";
    else
    {
	cout<<"\n\n Invalid selection!!";
	goto mcq3;
    }
    cout<<"\n\n Press any key to continue...";
	getch();

	clrscr();
	cout<<"\n Question No. 4";
	cout<<"\n\n What is called as The Gift of Nile ?";
	cout<<"\n A. Chicago \n B. Egypt \n C. Africa";

	mcq4:
    cout<<"\n\n Press Your Selection:";
    ch=getche();
    if(ch=='b')
    {
	score+=10;
	cout<<"\n\n Very good !!";
    }
    else if(ch=='a' || ch=='c')
	cout<<"\n\n Wrong answer....";
    else
    {
	cout<<"\n\n Invalid selection!!";
	goto mcq4;
    }
	cout<<"\n\n Press any key to continue...";
	getch();

	clrscr();
	cout<<"\n Question No. 5";
	cout<<"\n\n What is called as The Land of Mid Night Sun ?";
	cout<<"\n A. Norway \n B. Japan \n C. Australia";
	mcq5:
    cout<<"\n\n Press Your Selection:";
    ch=getche();
    if(ch=='a')
    {
	score+=10;
	cout<<"\n\n Very good !!";
    }
    else if(ch=='b' || ch=='c')
	cout<<"\n\n Wrong answer...";
    else
    {
	cout<<"\n\n Invalid selection!!";
	goto mcq5;
    }
    cout<<"\n\n Press any key to continue...";
	getch();

	clrscr();
	cout<<"\n Question No. 6";
	cout<<"\n\n What is called as The Land of ThunderBolt ?";
	cout<<"\n A. Bhutan \n B. Canada \n C. Arab";
	mcq6:
    cout<<"\n\n Press Your Selection:";
    ch=getche();
    if(ch=='a')
    {
	score+=10;
	cout<<"\n\n Very good !!";
    }
    else if(ch=='b' || ch=='c')
	cout<<"\n\n Wrong answer...";
    else
    {
	cout<<"\n\n Invalid selection!!";
	goto mcq6;
    }
    cout<<"\n\n Press any key to continue...";
	getch();

	clrscr();
	cout<<"\n Question No. 7";
	cout<<"\n\n What is called as The Windy City ?";
	cout<<"\n A. Jerusalem \n B. Japan \n C. Chicago";
	mcq7:
    cout<<"\n\n Press Your Selection:";
    ch=getche();
    if(ch=='c')
    {
	score+=10;
	cout<<"\n\n Very good !!";
    }
    else if(ch=='a' || ch=='b')
	cout<<"\n\n Wrong answer...";
    else
    {
	cout<<"\n\n Invalid selection!!";
	goto mcq7;
    }
    cout<<"\n\n Press any key to continue...";
	getch();

	clrscr();
	cout<<"\n Question No. 8";
	cout<<"\n\n What is called as The Land of White Elephants ?";
	cout<<"\n A. Bangladesh \n B. Thailand \n C. India";
	mcq8:
    cout<<"\n\n Press Your Selection:";
    ch=getche();
    if(ch=='b')
    {
	score+=10;
	cout<<"\n\n Very good !!";
    }
    else if(ch=='a' || ch=='c')
	cout<<"\n\n Wrong answer...";
    else
    {
	cout<<"\n\n Invalid selection!!";
	goto mcq8;
    }
    cout<<"\n\n Press any key to continue...";
	getch();

	clrscr();
	cout<<"\n Question No. 9";
	cout<<"\n\n What is called as The City of Seven Hills ?";
	cout<<"\n A. Rome \n B. Nilgiri Hills \n C. Tibet";
	mcq9:
    cout<<"\n\n Press Your Selection:";
    ch=getche();
    if(ch=='a')
    {
	score+=10;
	cout<<"\n\n Very good !!";
    }
    else if(ch=='b' || ch=='c')
	cout<<"\n\n Wrong answer...";
    else
    {
	cout<<"\n\n Invalid selection!!";
	goto mcq9;
    }
    cout<<"\n\n Press any key to continue...";
	getch();

	clrscr();
	cout<<"\n Question No. 10";
	cout<<"\n\n What is called as The Dark Continent ?";
	cout<<"\n A. Asia \n B. Australia \n C. Africa";
	mcq10:
    cout<<"\n\n Press Your Selection:";
    ch=getche();
    if(ch=='c')
    {
	score+=10;
	cout<<"\n\n Very good !!";
    }
    else if(ch=='a' || ch=='b')
	cout<<"\n\n Wrong answer...";
    else
    {
	cout<<"\n\n Invalid selection!!";
	goto mcq10;
    }
    cout<<"\n\n Press any key to continue...";
	getch();
}

void quiz::result()
{
    clrscr();
	if(score >= 80)
	{
	    cout<<"\n Congratulations !!";
	    cout<<"\n\n You got "<<score<<"% marks !!";
	    cout<<"\n You are a GENIUS !";
	    cout<<"\n\n Thanks To Join Us...!";
	}
	else if(score >= 60)
	{
	    cout<<"\n Not Bad !";
	    cout<<"\n\n You got "<<score<<"% marks !!";
	    cout<<"\n you are an intelligent person !";
	    cout<<"\n\n Thanks To Join Us...!";
	}
	else if(score >= 50)
	{
	    cout<<"\n Oops !!";
	    cout<<"\n\n You got "<<score<<"% marks !!";
	    cout<<"\n You've passed it BUT you should get more...";
	    cout<<"\n\n Thanks To Join Us...!";
	}
	else
	{
	    cout<<"\n Hey Dumb...!";
	    cout<<"\n\n You got "<<score<<"% marks !!";
	    cout<<"\n You Failed...!";
	    cout<<"\n\n Close It Please...";
	}
	cout<<"\n\n\n Press any key to continue...";
	getch();
}
