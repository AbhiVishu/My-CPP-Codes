#include <iostream>
#include <stdlib.h>

using namespace std;

int choice;             ///Global Variable...cause i'm very Lazy :p
int siz;

void whatToDoSelector(int arr[]);
void menu(int arr[]);

void binarySearch(int arr[], int num){

    system("clear");

    int first=0;
    int last=siz-1;

    int middle = (last + first)/2;
    int temp=0;

    while(first <= last){
        if(arr[middle] < num){
            first = middle-1;
        }else if(arr[middle] == num){
            temp++;
            cout << "Yes this element is in this array at position: " << middle << endl;
            break;
        }else{
            last = middle-1;
        }

        middle = (first + last)/2;
    }
    if(temp==0){
        cout << "No element found!!!" << endl;
    }

    cout << endl << endl;

    cout << "Press any key to go back...";
    //int tp;
    //cin >> tp;
    menu(arr);


}

void larEle(int arr[]){

}

void sortArr(int arr[]){

}

void sqCu(int arr[]){

}

void takeInput(int arr[]){

    cout << "Please Enter the size of the array: ";
    cin >> siz;
    cout << "Please enter the values in the array: " << endl;

    for(int i=0; i<siz; ++i){
        cout << "Value of Element " << i+1 << " : ";
        cin >> arr[i];
    }
}

void menu(int arr[]){

    system("clear");

    cout << "#####################################################################" << endl;
    cout << "               **PLEASE SELECT ANY ONE OF THE FOLLOWING: **" << endl;
    cout << "--1-> FIND POSITION OF THE ELEMENT IN ARRAY." << endl;
    cout << "--2-> PRINT LARGEST ELEMENT OF ARRAY." << endl;
    cout << "--3-> SORT THE ARRAY." << endl;
    cout << "--4-> PRINT SQUARE OF EVEN ELEMENT AND CUBE OF ODD ELEMENT." << endl;
    cout << "--5-> QUIT." << endl;
    cout << "#####################################################################" << endl;
    cout << endl << endl << endl;


    cout << "Please enter your choice: ";
    cin >> choice;

    whatToDoSelector(arr);

}

void whatToDoSelector(int arr[]){
    if(choice==1){
        int num;
        cout << "Please enter the number: ";
        cin >> num;
        binarySearch(arr, num);
    }else if(choice==2){
        larEle(arr);
    }else if(choice==3){
        sortArr(arr);
    }else if(choice==4){
        sqCu(arr);
    }else
        exit(0);
}

int main()
{
    int arr[50];
    takeInput(arr);
    menu(arr);

}
