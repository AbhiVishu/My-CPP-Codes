#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Emp{
    int empID;
    char name[20];
    float salary;
    char dept[20];
};

void output(Emp [], float , int);

void grossSal(Emp emp[]){

    float gSal, HRA, DA, TA;
    int i=0;
      while(i<5){

	if(strcmpi(emp[i].dept, "SALES")==0){

	    HRA = 1.2 * emp[i].salary;
	    DA = 0.3 * emp[i].salary;
	    TA = 0.2 * emp[i].salary;

	    gSal = HRA + DA + TA;

	   /// output(emp, gSal, i);

	   cout << "\nGROSS SALARY of " << emp[i].name << " is: " << gSal << endl << endl;

	}else{
	    cout << "SERVER FAILURE" << endl;
	}
      ++i;
    }

}

void input(){
    Emp emp[5];
    char a[5];
    int i=0;

    while(i<5){

	cout << "ENTER THE SALARY OF EMPLOYEE " << i+1 << endl << endl;

	cout << "Enter employee ID: ";
	cin >> emp[i].empID;

	cout << "Enter employee Name: ";
	gets(emp[i].name);

	cout << "Enter employee basic salary: ";
	cin >> emp[i].salary;

	cout << "Enter employee department: ";
	gets(emp[i].dept);

	clrscr();

      ++i;
    }

    grossSal(emp);
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
  clrscr();

    decor();
    input();

  getch();
  return 0;
}
