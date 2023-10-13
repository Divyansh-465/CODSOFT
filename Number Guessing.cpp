#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

srand((unsigned)time(NULL));
int random = 1+(rand()%100);
int userChoice;

cout << "Guess an integer number from 1 to 100:";
while(1){
    cin >> userChoice;
    if(userChoice==random){
        cout << "You guessed correct.";
        break;
    }
    else if(userChoice<random){
        cout << "Your guess is too low, try again. ";
    }
    else{
        cout << "Your guess is too high, try again. ";
    }
}
return 0;
}
