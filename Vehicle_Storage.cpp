#include <bits/stdc++.h>
#include <fstream>                                          ///To store information

using namespace std;

/**This program is to use structures -> struct...*/

int main(){

    ofstream file;

    file.open("vehInfo.txt");                               ///Making file named as vehInfo.txt

    cout << "Press enter to continue!!!\n";

    getchar();

    system("clear");                                        ///For Linux to clear console screen

    cout << "===============================================================================" << endl;
    cout << "                     PROGRAM TO STORE INFORMATIONS OF CARS" << endl;
    cout << "===============================================================================\n" << endl;

    int storeNo;

    cout << "How many Values do you want to store max(21 info's): ";
    cin >> storeNo;

    struct vehInfo{
        char vehName[21][21];
        float vehPrice[21];
        float vehId[21];
        float vehMil[21];
    } taker;

    cin.tie(NULL);

    int n=0,j;

   /// cout << "Press enter to continue!!!\n";


    while(n<storeNo){

        getchar();

        cout << "-------------------------------------------------------" << endl;
        cout << "       Enter vehicle name: ";
        cin.getline(taker.vehName[n],21);

        cout << "       Enter vehicle ID: ";
        cin >> taker.vehId[n];

        cout << "       Enter vehicle millage: ";
        cin >> taker.vehMil[n];

        cout << "       Enter vehicle price: ";
        cin >> taker.vehPrice[n];
        cout << "-------------------------------------------------------" << endl;
      ++n;
    }

    file << "Your entered Informations about vehicles are: " << endl;
    file << "---------------------------------------------" << endl;

    for(int i=0; i<storeNo; ++i){
        file << "###################################################" << endl;
        for(j=0; taker.vehName[i][j]!='\0'; ++j);
        file << "Vehicle name is: ";
        file.write(taker.vehName[i],j);

        file << "\nVehicle ID is: " << taker.vehId[i] << endl;
        file << "Vehicle Millage is: " << taker.vehMil[i] << endl;
        file << "Vehicle price is: " << taker.vehPrice[i] << endl;

        file << "###################################################" << endl;

    }


    file.close();

    cout << "You can access your file in folder you placed this 'vehicle_storage.cpp' file" << endl;

}

