#include "iostream"

using namespace std;
void functionBasic() // Use this in the start of your section, it asks the same question for each. my example is below. JG
{
    int x;
    cout << "Is the computer's operating system Windows 10?"<< endl; // being asked in each department. JG
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> x;
    if(x == 2) {
        cout  << "Time for an Upgrade!" << endl;
        cout << endl;
    }
}
void functionPrograms() {// Use this in start aswell, example below. JG

    int t;
    cout << "Do you use any programs not listed? (Microsoft Excel, Word, Powerpoint, Access.)" << endl; // Asked in each department. JG
    cout << "1. Yes, I use other programs." << endl;
    cout << "2. No, I only use Microsoft programs." << endl;
    cin >> t;
    if (t==1) {
        cout <<"Please let us know which ones and we will make sure their up to date and working properly for you!" << endl;
        cout << endl;
    }
}





int main() {

 cout << "Welcome to our IT survey! " << endl;
    cout << "================================" << endl;
    cout << endl;
    cout << "Enter a number to select which department you work in:" << endl;
    cout << endl;
    cout << "1: Human Resources" << endl;
    cout << "2: Marketing" << endl;
    cout << "3: Accounting" << endl;

     int selection;
    cin >> selection;

if (cin.fail() || selection < 1 || selection > 3) {
        cout << endl;
        cout << "Have a great day, goodbye!" << endl;
    }


if(selection == 1) { // Output the two functions above, then ask 2 questions( try to word them different from mine.)  then make sure it compiles.
int  c,f;
functionBasic();
functionPrograms();
    // Question 1
    cout << "Would access to your files on the go benefit you?" << endl;
     cout << "1. Yes" << endl;
     cout << "2. No" << endl;
       cin >> c;
        if(c==1) {
         cout << "Consider upgrading to a laptop then!" << endl;
     }
    // Question 2   
    cout << "Are you satisfied with your computer's daily performance?" << endl;
     cout << "1. Yes I run into no issues with my computer." << endl;
     cout << "2. No, I think my computer's perfomance needs to be looked at." << endl;
        cin >> f;
     if (f==1){
        cout << "Good to hear, have a great day!" << endl;
     }
        else {
            cout << "Let us know your problems and we will be happy to help!" << endl;
        }
            






    return 0;
}
}
