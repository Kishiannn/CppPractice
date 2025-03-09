#include <iostream>
using std:: endl;
using namespace std;

int main(){
    int security = 0;
    string username;
    string password;

    cout << "Enter username\n";
    cin >> username;
    cout << "Enter password\n";
    cin >> password;

    if(username == "Kishiannn" && password == "Zzenos"){
        cout << "Welcome " + username;
        security = 5;
    }
    if(username == "Prettykey" && password == "Lablab"){
            cout << "Welcome " + username;
            security = 5;
    }
    if(username == "Guest" || password == "Guest"){
        cout << "Welcome Guest";
        security = 1;
    }
    if(!security)
        cout << "Invalid Login";
    return 0;
}
