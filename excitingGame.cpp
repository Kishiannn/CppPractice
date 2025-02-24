#include <iostream>
using namespace std;
using std::cout;
using std::endl;

int main()
{
  string answer;
  cin >> answer;

  if(answer == "y" || answer == "Y"){
    while(answer == "y" || answer == "Y"){
      cout << "Played an Exciting Game" << endl;
      cout << "Do you want to play again? (y/n)" << endl;

      cin >> answer;
    }
  }else if(answer == "n" || answer == "N"){
    cout << "Okay, Bye!" << endl;
  }else{
    cout << answer << " is not on the option!" << endl;
  }
}
