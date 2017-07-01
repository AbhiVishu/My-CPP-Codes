#include <iostream>
///#include <conio.h>
#define NULL 0

using namespace std;

class Tour{
    int noA, noK, km;
    float TFare;

    public:
        Tour(){
            TFare = NULL;
            noA = noK = km = 0;
        }

        void assignFair();
        void input();
        void output();
};

void Tour::assignFair(){
    if(km >= 1000){
        TFare = noA*500 + noK*250;
    }else if(km < 1000 && km >= 500){
        TFare = noA*300 + noK*150;
    }else{
        TFare = noA*200 + noK*100;
    }
    output();
}

void Tour::input(){

    cout << "------------------------------------------------------------" << endl;
    cout << "************************************************************" << endl;
    cout << "|                         TRAVEL FORM                      |" << endl;
    cout << "************************************************************" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "|                                                          |" << endl;
    cout << "| NUMBER OF ADULTS TRAVELLING: "; cin >> noA;
    cout << "|                                                          |" << endl;
    cout << "| NUMBER OF KIDS TRAVELLING: "; cin >> noK;
    cout << "|                                                          |" << endl;
    cout << "| TOTAL KILOMETER YOU TO TRAVEL: "; cin >> km;
    cout << "|                                                          |" << endl;
    cout << "------------------------------------------------------------" << endl;

    assignFair();

}

void Tour::output(){

    system("clear");

    cout << "------------------------------------------------------------" << endl;
    cout << "|**********************************************************|" << endl;
    cout << "|                           TICKET                         |" << endl;
    cout << "|**********************************************************|" << endl;
    cout << "|----------------------------------------------------------|" << endl;
    cout << "|                                                          |" << endl;
    cout << " NUMBER OF ADULTS TRAVELLING: " << noA << endl;
    cout << "                                                          " << endl;
    cout << " NUMBER OF KIDS TRAVELLING: " << noK << endl;
    cout << "                                                          " << endl;
    cout << " TOTAL KILOMETER YOU ARE TRAVELLING IS: " << km << endl;
    cout << "                                                          " << endl;
    cout << " TOTAL AMOUNT OF MONEY YOU HAVE TO PAY: " << TFare << " RS" << endl;
    cout << "------------------------------------------------------------" << endl;

}

int main()
{
    Tour Ticket;
    Ticket.input();
}
