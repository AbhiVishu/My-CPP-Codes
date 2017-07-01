#include <iostream>
//#include <conio>

using namespace std;

int choice;

class bank{

    int accNo;
    char name[20];
    char accType;
    float bal;

  public:

     bank(){

        accNo = 11101;
        //name = "X";
        accType = 'S';
        bal = 1000;

     }

     void deposit(int);        ///to add amount to current balance
     void withdrawal(int);    ///to deduct amount from current balance
     void balance();         ///to display Acctype & only current balance amount
     void display();        ///to display all details of account holder;
     void input();         ///to take input of all necessary details
};

void menu();
void WhatToDo();
int amt;
bank mem1;

void bank::input(){

    cout << "------------------------------------------------------" << endl;
    cout << "|                ENTER YOUR LOGIN DETAILS            |" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "|                                                    |" << endl;
    cout << "| Enter your Name: ";cin >> name;    ///change to gets(name)
    cout << "|                                                    |" << endl;
    cout << "| Enter your account number: ";cin >> accNo;
    cout << "|                                                    |" << endl;
    cout << "| Enter your account type (S for saving/C for current): ";cin >> accType;
    cout << "|                                                    |" << endl;
    cout << "| Enter total balance of your account: ";cin >> bal;
    cout << "|                                                    |" << endl;
    cout << "------------------------------------------------------" << endl;

    menu();
}

void bank::deposit (int amt){
    bal = amt;

    cout << "Want to go back or leave (Y/N): ";
    char ch;
    cin >> ch;

    if(ch=='Y'||ch=='y'){
        menu();

    }else{
        exit(0);
    }
}

void bank::withdrawal(int amt){
    bal -= amt;

    cout << "Want to go back or leave (Y/N): ";
    char ch;
    cin >> ch;

    if(ch=='Y'||ch=='y'){
        menu();

    }else{
        exit(0);
    }
}

void bank::balance(){
    if(accType == 'S' || accType == 's')
        cout << "BALANCE available in your SAVING account is " << bal << endl;
    else
        cout << "BALANCE available in your CURRENT account is " << bal << endl;

    cout << "Want to go back or leave (Y/N): ";
    char ch;
    cin >> ch;

    if(ch=='Y'||ch=='y'){
        menu();

    }else{
        exit(0);
    }
}

void bank::display(){
    cout << "------------------------------------------------------" << endl;
    cout << "|                  ACCOUNT INFORMATION               |" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "|                                                    |" << endl;
    cout << "| Name of account holder: " << name << endl;
    cout << "|                                                    |" << endl;
    cout << "| Account no: " << accNo << endl;
    cout << "|                                                    |" << endl;
    cout << "| Account Type: " << accType << endl;
    cout << "|                                                    |" << endl;
    cout << "| Available Balance in account: " << bal << endl;
    cout << "|                                                    |" << endl;
    cout << "------------------------------------------------------" << endl;

    cout << "want to go back or leave (Y/N): ";
    char ch;
    cin >> ch;

    if(ch=='Y'||ch=='y'){

        menu();

    }else{
        exit(0);
    }
}
void menu(){

        system("clear");
///    clrscr();

        cout << "------------------------------------------------------" << endl;
        cout << "|               WELCOME TO GENERAL BANK              |" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "|                                                    |" << endl;
        cout << "| 1. DEPOSIT MONEY IN YOUR ACCOUNT.                  |" << endl;
        cout << "|                                                    |" << endl;
        cout << "| 2. WITHDRAW MONEY IN YOUR ACCOUNT.                 |" << endl;
        cout << "|                                                    |" << endl;
        cout << "| 3. CHECK YOUR AVAILABLE BALANCE.                   |" << endl;
        cout << "|                                                    |" << endl;
        cout << "| 4. DISPLAY YOUR ACCOUNT INFO.                      |" << endl;
        cout << "|                                                    |" << endl;
        cout << "| 5. CHANGE ACCOUNT INFORMATION.                     |" << endl;
        cout << "|                                                    |" << endl;
        cout << "| 6. BACK.                                           |" << endl;
        cout << "|                                                    |" << endl;
        cout << "------------------------------------------------------" << endl;

        cout << endl << "ENTER YOUR CHOICE: ";
        cin >> choice;

        WhatToDo();


}

void WhatToDo(){

        switch(choice){
        case 1:
                cout << "\nEnter Amount to be Deposited: ";
                cin >> amt;
                mem1.deposit(amt);
                break;
        case 2:
                cout << "\nEnter Amount to be Withdraw: ";
                cin >> amt;
                mem1.withdrawal(amt);
                break;
        case 3:
                mem1.balance();
                break;
        case 4:
                system("clear");
                mem1.display();
                break;
        case 5:
                system("clear");    ///clrscr();
                mem1.input();
                break;
        case 6:
                system("clear");    ///clrscr();
                mem1.input();
                break;
        default:
                system("clear");   ///clrscr();
                mem1.input();
    }

}

int main()
{
    menu();

    return 0;
}
