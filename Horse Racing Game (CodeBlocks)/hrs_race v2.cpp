#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

// Function For Controlling Movement Of Horses...
int movement (int n, int dist);

int main(){

	int horses; // Number Of Horses...
    int length; // Length Of Arena...
    int top = 0; // For Checking The
    int winner; //For Storing The Index Of Winner Horse...

    hrs: // Label

    // Getting Number Of Horses...
    cout << " Enter the number of horses(4-12): ";
    cin >> horses;

    // Checking If Input Is Grater Than 12 Or Less Than 4...
    if(horses < 4 || horses > 12){

        cout << " Only 4-12 number of horses can participate the race!!";
        cout << endl << endl;

        // Sending Back To The Label...
        goto hrs;
    }

    length: // Label...

    // Getting Arena Length...
    cout << " Enter the length of your arena in feet(400-1000): ";
    cin >> length;

    // Checking The Validity Of Input Arena Length...
    if(length < 400 || length > 1000){

        cout << " Only 400-1000 feet are available here !!";
        cout << endl << endl;

        // Sending Back To The Label...
        goto length;
    }

    // Making Length Smaller In Size For Easy Calculation...
    length = length / 20;

    // Dynamic Array Of The Length Of Variable Horses...
    // To Store Current position_of_horseition Of The Horse...
    int *position_of_horse = new int[horses];

    // Storing Values Into Dynamic Arrays...
    for(int i = 0; i < horses; i++){
        position_of_horse[i] = 0;  // Storing Initial Distance 0 For All Horses...
    }

    srand(time(0)); // Function For Generating Random Number...

    // Moving All The Horses One By One...
    for(int i = 0; i < length; i++){

        // Clearing Screen...
        system("cls");
        cout << endl << endl;

        // Calling Movement Function For Ever Horse To Move It Forward With Random Distance...
        for(int horse_number = 0; horse_number < horses; horse_number++) {

            position_of_horse[horse_number] = movement(horse_number + 1, position_of_horse[horse_number]);
        }

        // Making Some Slow Motion...
        Sleep(250);
    }

    // Checking For Winner...
    for(int i = 0; i < horses; i++){

        // Storing The Top Distance Covered Horse's Index Into The 'top' Variable...
        if(top < position_of_horse[i]){

            top = position_of_horse[i];
            winner = i + 1;
        }
    }

    // Printing The Winner...
    cout << endl << endl;
    cout << " Hurrah!! The horse with the tag number \'" << winner << "\' is our winner for today...!";
    cout << endl << endl;

    return 0;
}

int movement(int horse_number, int dist){

    // Printing The Horse Number...
    cout << " " << horse_number << ".";

    // Incrementing The Previous Distance With a Random Number...
    dist = dist + (rand() % 3) + 1;

    // Note:
    // rand() Function Gives Us The Random Number i.e 1234, 98723, 234 etc...
    // "rand() % 3" Gives Us The Random Number Less Than '3'...
    // i.e "rand() % 100" Will Give Us The Random Number Less Than '100'...
    // Finally We Are Adding 1 Into "rand() % 3" To Prevent The Occurrence Of '0'...
    // i.e If Random Number Is 0 Than It Will Become 1...


    // Printing Spaces To Show The Distance...
    for(int i = 0; i < dist; i++) {
        cout << " ";
    }

    // Printing Horse...
    cout << "~n-n^";
    cout << endl << endl;

    return dist;
}
