#include <iostream>
using namespace std;
using std::cout;
using std::endl;

int main()
{
    int score1;
    int score2;
    int score3;

    cin >> score1;
    cin >> score2;
    cin >> score3;

    int average = score1 + score2 + score3;

    cout << "The Average score is: " << average << endl;
    return 0;
}
