#include <iostream>
using std:: endl;
using namespace std;

int main(){
    int num = 0;

    while(true){
        num += 1; 

        if(num > 10)
        break;

        if(num == 5)
            continue;


            cout << num << endl;
    }
        return 0;
}
