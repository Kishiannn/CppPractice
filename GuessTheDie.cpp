#include <iostream>
using std:: endl;
using namespace std;

int main(){
    int guess;
    srand(time(0));

    int randomNum = rand();

    int die = (randomNum % 6) + 1;
    cin >> guess;

    if(guess == die){
        cout << "\n Your Guess is correct. Congratulations." << endl;
    }else{
        cout << "\n Your Guess are wrong. Better Luck Next Time." << endl;
    }
    cout << "\n The Dice are: " << die << endl;



    return 0;
}
