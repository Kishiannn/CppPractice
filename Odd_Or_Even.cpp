#include <iostream>
using namespace std;
using std::cout;
using std::endl;

int main()
{
    int num;

    cin >> num;


    if (num % 2 == 0){
    cout << "The number " << num << " is Even" << endl;
    }
    else{
    cout << "The number " << num << " is Odd" << endl;
    }


    return 0; 
}
