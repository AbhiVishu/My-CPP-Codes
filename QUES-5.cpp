#include <iostream.h>
#include <conio.h>

void ch(int &);

void area(float base, float height){
    cout << 0.5*base*height << endl;
}
void area(size_t length, size_t breadth){
    cout << length*breadth << endl;
}
void area(size_t side){
    cout << side*side << endl;
}
void area(float radius){
    cout << 3.14*radius*radius << endl;
}

void menu(){

    int choice;

    cout << "=============================================" << endl;
    cout << "|              AREA CALCULATOR              |" << endl;
    cout << "=============================================" << endl;
    cout << "|                                           |" << endl;
    cout << "| 1. AREA OF TRIANGLE.                      |" << endl;
    cout << "|                                           |" << endl;
    cout << "| 2. AREA OF RECTANGLE.                     |" << endl;
    cout << "|                                           |" << endl;
    cout << "| 3. AREA OF SQUARE.                        |" << endl;
    cout << "|                                           |" << endl;
    cout << "| 4. AREA OF CIRCLE.                        |" << endl;
    cout << "|                                           |" << endl;
    cout << "|===========================================|" << endl;

    cout << endl;
    cout << "ENTER YOUR CHOICE: " << endl;
    cin >> choice;

    ch(choice);

    ///system("clear");
}

void ch(int &choice){


    float radius, base, height;
    size_t side, length, breadth;

    switch(choice){

        case 1:

            cout << "ENTER VALUE OF BASE: ";
            cin >> base;

            cout << "ENTER VALUE OF HEIGHT: ";
            cin >> height;

            cout << "AREA OF TRIANGLE IS: ";
            area(base, height);

            break;

        case 2:

            cout << "ENTER VALUE OF LENGTH: ";
            cin >> length;

            cout << "ENTER VALUE OF BREADTH: ";
            cin >> breadth;

            cout << "AREA OF RECTANGLE IS: ";
            area(length, breadth);

            break;

        case 3:

            cout << "ENTER VALUE OF SIDE ";
            cin >> side;

            cout << "AREA OF SQUARE IS: ";
            area(side);

            break;

        case 4:

            cout << "ENTER VALUE OF RADIUS ";
            cin >> radius;

            cout << "AREA OF CIRCLE IS: ";
            area(radius);

            break;
    }

    char cont;

    cout << endl << "DO YOU WANT TO CONTINUE (Y/N): ";
    cin >> cont;

    if(cont=='Y' ||  cont=='y'){

        clrscr();

        menu();
    }else{
        cout << "THANK YOU !!! " << endl;
        exit(0);
    }
}

int main()
{
  clrscr();

    menu();

  return 0;
  getch();
}
