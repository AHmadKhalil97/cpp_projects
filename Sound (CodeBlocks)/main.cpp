#include<iostream>
#include<windows.h>
using namespace std;
//staff Meeting Prayer
//My heart is impressed experienced
//broken healed strong
//fused with world
//through the fire of passion
//connected to my mind
//through my dreams

class sound
{
    //char n;
public:
    void play(void);
    void playnote(char g, float l);

};


int main()
{
    sound obj;
    obj.play();
    return 0;
}

void sound::play(void)
{
    cout<<" Staff";
    playnote('C',0.4);
    playnote('C',0.4);
    cout<<" Meeting";
    playnote('G',0.4);
    playnote('G',0.4);
    cout<<" Prayer.";
    playnote('A',0.4);
    playnote('A',0.4);
    Sleep(500);
    cout<<endl;
    cout<<" My";
    playnote('G',0.4);
    cout<<" Heart";
    playnote('F',0.4);
    playnote('F',0.4);
    cout<<" Is";
    playnote('E',0.4);
    cout<<" Impressed";
    playnote('E',0.4);
    cout<<" Experienced.";
    playnote('D',0.4);
    playnote('D',0.4);
    Sleep(500);
    cout<<endl;
    cout<<" Broken";
    playnote('C',0.4);
    cout<<" Healed";
    playnote('G',0.4);
    cout<<" Strong.";
    playnote('G',0.4);
    Sleep(500);
    cout<<endl;
    cout<<" Fused";
    playnote('F',0.4);
    playnote('F',0.4);
    cout<<" With";
    playnote('E',0.4);
    cout<<" World.";
    playnote('D',0.4);
    Sleep(500);
    cout<<endl;
    cout<<" Through";
    playnote('G',0.4);
    playnote('G',0.4);
    cout<<" The";
    playnote('F',0.4);
    cout<<" Fire";
    playnote('F',0.4);
    playnote('E',0.4);
    cout<<" Of";
    playnote('D',0.4);
    cout<<" Passion.";
    playnote('C',0.4);
    playnote('C',0.4);
    Sleep(500);
    cout<<endl;
    cout<<" Connected";
    playnote('G',0.4);
    playnote('G',0.4);
    cout<<" To";
    playnote('A',0.4);
    cout<<" My";
    playnote('A',0.4);
    cout<<" Mind.";
    playnote('G',0.4);
    playnote('F',0.4);
    Sleep(500);
    cout<<endl;
    cout<<" Through";
    playnote('F',0.4);
    playnote('E',0.4);
    cout<<" My";
    playnote('E',0.4);
    playnote('D',0.4);
    cout<<" Dreams.";
    playnote('D',0.4);
    playnote('C',0.4);
    cout<<endl<<endl<<endl;
    cout<<" Thanks For Listening <3 <3";
    cout<<endl<<endl;

}

void sound::playnote(char g, float l)
{
    char n=g;
    if(n=='A'){
    Beep(2750,1*1000);
    }
    else if(n=='B'){
    Beep(3087,1*1000);
    }
    else if(n=='C'){
    Beep(1637,1*1000);
    }
    else if(n=='D'){
    Beep(1835,1*1000);
    }
    else if(n=='E'){
    Beep(2060,1*1000);
    }
    else if(n=='F'){
    Beep(2183,1*1000);
    }
    else if(n=='G'){
    Beep(2450,1*1000);
    }
}
