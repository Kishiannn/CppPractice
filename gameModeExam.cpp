#include <iostream>
using namespace std;
using std::cout;
using std::endl;

main(){
    int mode;

    cout << "Choose a Number for Mode \n" <<
    "1 = Easy\n" <<
    "2 = Medium\n" <<
    "3 = Hard\n" <<
    "Input Number: " << endl;
    cin >> mode;

    switch (mode)
    {
    case(1):
        cout << "You Choose the Easy Level" << endl;
        break;
    case(2):
        cout << "You Choose the Medium Level" << endl;
        break;
    case(3):
        cout << "You Choose the Hard Level" << endl;
        break;
    }
return 0;
}
