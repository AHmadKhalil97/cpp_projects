#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

class horse
{
    int horses;
    int length;
public:
    void working(void);
    int movement(int n, int dist);
};


int main()
{
    horse obj;
    obj.working();
    return 0;
}

void horse::working(void)
{
    hrs:
    cout << "Enter the number of horses(4-12): ";
    cin >> horses;
    if(horses<4 || horses>12)
    {
        cout << "only 4-12 number of horses can participate the race!!";
        cout << endl << endl;
        goto hrs;
    }

    length:
    cout << "Enter the length of your arena in feet(400-1000): ";
    cin >> length;
    if(length<400 || length>1000)
    {
        cout << "Only 400-1000 feet are available here !!";
        cout << endl << endl;
        goto length;
    }

    length=length/20;

    int *hrs=new int[horses];
    int *pos=new int[horses];

    for(int i=0; i<horses; i++)
    {
        hrs[i]=i;
        pos[i]=0;
    }

    srand(time(0));
    for(int i=0; i<length; i++)
    {
        system("cls");
        cout << endl << endl;
        for(int j=0; j<horses; j++)
            pos[j]=movement(j+1, pos[j]);
        Sleep(250);
    }
    int top=0;
    int winner;
    for(int i=0; i<horses; i++)
    {
        if(top<pos[i])
        {
            top=pos[i];
            winner=i+1;
        }
    }
    cout << endl << endl;
    cout << "Hurrah!! The horse with the tag number \'" << winner << "\' is our winner for today...!";
    cout << endl << endl;
}

int horse::movement(int n, int dist)
{
    cout << " " << n << ".";
    dist=dist + (rand() % 3) + 1;

    for(int i=0; i<dist; i++)
        cout << " ";

    cout << "~n-n^";
    cout << endl << endl;

    return dist;
}
