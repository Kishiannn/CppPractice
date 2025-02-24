#include <iostream>
using namespace std;
using std::cout;
using std::endl;

int main()
{
  int difficulty;

  cout << "Choose 3 Game mode\n 1 Easy Mode \n 2 Medium Mode \n 3 Hard Mode"  << endl;
  cin >> difficulty;
  if(difficulty < 4){
    switch(difficulty){
      case 1:  cout << "Easy Mode" << endl;
      break;
      case 2: cout << "Medium Mode" << endl;
      break;
      case 3: cout << "Hard Mode" << endl;
      break;
    }
  }else{
    cout << "The Game mode is not available" << endl;
  }
}
