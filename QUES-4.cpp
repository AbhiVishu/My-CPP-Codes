#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Emp{
    int empID;
    char name[20];
    float salary;
    char dept[20];
};

void output(Emp [], float , int);

void grossSal(Emp emp[], int i){

    float gSal, HRA, DA, TA;

        if(strcmp(emp[i].dept, "SALES") || strcmp(emp[i].dept, "sales")){

            HRA = 1.2 * emp[i].salary;
            DA = 0.3 * emp[i].salary;
            TA = 0.2 * emp[i].salary;

            gSal = HRA + DA + TA;

           /// output(emp, gSal, i);

           cout << "\nGROSS SALARY of " << emp[i].name << " is: " << gSal << endl << endl;

        }else{
            cout << "SERVER FAILURE" << endl;
        }

}

void input(){
    Emp emp[5];
    char a[5];

    int i=0;

    while(i<5){

        cout << "Enter employee ID: ";
        cin >> emp[i].empID;

        cout << "Enter employee Name: ";
        gets(emp[i].name);

        cout << "Enter employee basic salary: ";
        cin >> emp[i].salary;

        cout << "Enter employee department: ";
        gets(emp[i].dept);

        grossSal(emp, i);

      ++i;
    }

}

/**void output(Emp emp[], float gSal, int i){

    cout << "Employee ID is: " << emp[i].empID << endl;
    cout << "Employee Name is: " << emp[i].name << endl;
    cout << "Employee basic salary is: " << emp[i].salary << endl;
    cout << "Employee Department is: " << emp[i].dept << endl << endl;
    cout << "Employee GROSS SALARY is: " << gSal << endl;

}**/

void decor(){
    cout << "************************************************************************************************" << endl;
    cout << "*                                            COMPANY SERVER                                    *" << endl;
    cout << "************************************************************************************************" << endl;

    cout << endl << "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\ " << endl;
}

int main()
{
    decor();
    input();

    return 0;
}
