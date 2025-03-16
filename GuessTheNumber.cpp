#include <iostream>
using std:: endl;
using namespace std;

int main(){
    int guess;
    int tries;
    srand(time(0));

    int randomNum = rand();
    
    int num = (randomNum % 10) + 1;
    do{
        cout << "Enter Your Guess: " << endl;
        cin >> guess;
        ++tries;

        if(guess > num)
            cout << "Your Guess is too high" << endl;
        if(guess < num)
            cout << " Your Guess is too low"  << endl;
    }
    while(guess != num);
        cout << " Congratulation you Guess it in " << tries << " Tries" << endl;
    return 0;
}
