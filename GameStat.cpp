#include <iostream>
using namespace std;

int main()
{
   int score;
   double distance;
   char playagain;
   bool shield;
   double engineTemp;

   short lives, enemyKilled;

   score = 0;
   distance = 100.20;
   playagain = 'y';
   shield = true;
   lives = 3;
   enemyKilled = 10;
    engineTemp = 6572.89;

   cout << "\nscore: "<< score << endl;
   cout << "distance: " << distance << endl;
   cout << "Play Again: " << playagain << endl;
   cout << "lives: " << lives << endl;
   cout << "enemy killed: " << enemyKilled << endl;
   cout << "engineTemp: " << engineTemp << endl;

   int fuel;
   cout << "\nHow much fuel? ";
   cin >> fuel;
   cout<< "fuel: " << fuel << endl; 

   typedef unsigned short int ushort;
   ushort bonus = 10;
   cout << "bonus: "<< bonus << endl;

    return 0;

}
