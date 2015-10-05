#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>

using namespace std;


string numberEnd(int number) {
    switch (number) {
        case 1:
            return "st";
        case 2:
            return "nd";
        case 3:
            return "rd";
        default:
            return "th";
    }
}

int main()
{
	srand (time(NULL));
	string answer;

	int predictionStreak = 0;


	cout << "Hello, do you want to roll the dices ?" << endl << endl;
	cin >> answer;
	cout << endl;



    while (answer == "no") {

       cout << "Why you always have to do this to me ... type yes ... for fucks sake ..." << endl;
        cin >> answer;
    }

    while (answer == "yes") {



            const int dices = 2;
            int roll[dices];

            for (int n = 0; n < dices; n++) {

                int numberHuman = n+1;
                cout << "Perfect, what number do you think you will get on your " << numberHuman << numberEnd(numberHuman) << " dice roll ?" << endl;
                cin >> roll[n];

            }

            int rollsArray[dices];
            for (int i = 0;i<sizeof(rollsArray)/sizeof(rollsArray[0]);i++){

                rollsArray[i] = rand() % 6 + 1;
                cout << "Dices rolled: " << rollsArray[i] << endl << endl;
                roll[i] == rollsArray[i] ? predictionStreak++ : false;

            }

            for (int guess = 0; guess < dices; guess++){

            		if (rollsArray[guess] == roll[guess]){
            			cout << "You got this one right: " << roll[guess] << endl;
            		}            	
            }

            for (int )

            cout << "Do you want to roll the dice again?" << endl;
            cin >> answer;

        }
