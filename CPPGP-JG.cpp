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

 //questions for human resources.
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
        }// ending of human resource questions
}
// Question 1 Accounting Section
        if(selection == 2){
            int j,k,l;
        functionBasic();
        functionPrograms();
         cout << "Has your computer been upgraded before?" << endl;                                 //Umar Muhammad
         cout << "1. Yes, it has" << endl;                                                          //wrote the code
         cout << "2. No, it hasn't" << endl;                                                        //for the entire accounting questions.
         cin >> j;
         if(j==1){
             cout << "what has been upgraded? " << endl;
             cout << "1. windows" << endl;
             cout << "2. Programs" << endl;
             cin >> k;
             if(k==2){
                 cout << "Thank you for the information, and let us know if you run into any issues." << endl;
             }
         }
          }
          // Question 2
          cout << " Are you happy with the programs performance on your computer" << endl;
          cout << "Yes Iam happy with my programs performances" << endl;
          cout << "No i am not happy with my programs performances" <<endl;
          cin >> l;
          if (l==1)[
              cout << "That sounds great, and let us know how we can improve our services " << endl;
          ]
          else{
              cout << "We are sorry to hear that, and we will do everything we can to make sure, issues like these never happen" << endl;
          } //ending of accounting questions.


else (selection == 3){  //Questions for Marketing Department

int a,b,c; 
functionBasic();
functionPrograms();
    //First question to be asked.
    cout << "Would you be needing constant access to your files for projects in order to edit them on the go?" << endl; 
     cout << "1. Yes" << endl;
     cout << "2. No." << endl;
     cin >> a; 

    if (a == 1){
        
        cout << "A laptop maybe better suited for you and your position." << endl;
        cout << "Please come see us in order for us to make the correct recommanded laptop for you.";         
    }
    //Question two
    else {
        cout << "Is your current computer slow at handling your daily tasks?" << endl;
         cout << "1. Yes";
         cout << "2. No";
         cin >> b;
            if (b == 2){
                cout << "When your computer is responding slowly is doing the following operations:" << endl;
                cout << "1.First starting your computer";
                cout << "2.Trying to open or close a document";
                cout << "3.Accessing the internet";

                if (c <= 2){
                    cout << "Sorry for to you are having issues please contact us so we can resolve the issues your are experiencing" << endl;
                }
                else{
                    cout << "Please contact us so we can inform the network tech of your issues.";
                }
            }
            else{
                cout << "Thank you for you answering our questions, if you run into any issues please inform the IT department." << endl;
            }
        }


}


    return 0;
}
}
