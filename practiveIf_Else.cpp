#include <iostream>
using namespace std;
using std::cout;
using std::endl;

int main()
{
  int score;
  cin >> score;


  if(score > 500){
    cout << "Your score is: " << score << " Good Job!" << endl;
  }else{
    cout << "Your score is: " << score << " Better Luck Next Time!" << endl;
  }
}
