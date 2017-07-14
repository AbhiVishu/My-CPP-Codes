#include <iostream>
#include <string.h>
#include <time.h>
#include <ncurses.h>
#include <unistd.h>

using namespace std;

class CARRENTAL{

    int CarId;
    char CarName[20];
    char CarType[20];
    float Rent;

    void Assign_Rent(){
        if(strcmp(CarType, "SUV")==false){
            Rent = 2500;
        }else if(strcmp(CarType, "Van")==false){
            Rent = 800;
        }else{
            Rent = 1000;
        }
    }

  public:

      CARRENTAL(){
        strcpy(CarType, "Small");
        CarId = 101;
        strcpy(CarName, "Maruti");
        Rent = 800;
      }

      void GetCar();
      void ShowCar();
};

void CARRENTAL::GetCar(){

    int choice;

    cout << "Please enter CAR ID: ";
    cin >> CarId;

    cout << "Please enter Name of CAR: ";
    cin.getline(CarName, 20);
    cin.getline(CarName, 20);

    cout << "Please enter Type of CAR do you want -> " << endl;
    cout << "  1. Small" << endl;
    cout << "  2. Van" << endl;
    cout << "  3. SUV" << endl;
    cout << "Please enter your choice: ";

    cin >> choice;

    if(choice == 1){
        strcpy(CarType, "Small");
    }else if(choice == 2){
        strcpy(CarType, "Van");
    }else{
        strcpy(CarType, "SUV");
    }

    Assign_Rent();
}

void CARRENTAL::ShowCar(){
     system("clear");
     usleep(300000);

     cout << "-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-" << endl;
     cout << "|-----------------CAR DETAILS AND BILL------------------|" << endl;
     cout << "-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-" << endl;

     cout << endl;

     cout << "CAR ID you have chosen is: " << CarId << endl;
     cout << "Car you are going to take for rent is: " << CarName << endl;
     cout << "Car type you have chosen is: " << CarType << endl;

     cout << endl;

     cout << "TOTAL RENT IS: " << Rent << endl;

     cout << endl;

     cout << "----------------------------------------------------------" << endl;
}

int main()
{
    cout << "-------------------INDIAN CAR RENTAL SERVICES-----------------------" << endl;

    CARRENTAL car;

    car.GetCar();
    car.ShowCar();

    return 0;
}
