#include <iostream.h>
#include <conio.h>

int choice;

void menu(){
        cout << "------------------------------------------------------" << endl;
        cout << "|                   ENTER YOUR CHOICE                |" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "|                                                    |" << endl;
        cout << "| 1. PRINT ALL PRIMES.                               |" << endl;
        cout << "|                                                    |" << endl;
        cout << "| 2. PRINT ALL KRISHNAMURTY NUMBERS.                 |" << endl;
        cout << "|                                                    |" << endl;
        cout << "| 3. PRINT ALL ARMSTRONG NUMBERS.                    |" << endl;
        cout << "|                                                    |" << endl;
        cout << "| 4. PRINT ALL PALINDROME NUMBERS.                   |" << endl;
        cout << "|                                                    |" << endl;
        cout << "------------------------------------------------------" << endl;

        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
}


void prime(int low, int high){

    int  i, flag;


    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << low << " ";

        ++low;
    }

    cout << "DO YOU WANT TO CONITNUE(Y/N): ";
    char ch;
    cin >> ch;

    if(ch=='Y' || ch == 'y'){
        goto start;
    }else{
        exit(0);
    }
}

void krishnamurty(int num, int ending){

        int limit,sum=0, fact;
        int temp2 = num;
        int temp;

        while(temp2 <= ending){
        sum=0;
        num = temp2;
        temp = num;

        while(num > 0)
        {
            limit = num%10;

            fact=1;
            for(int i=1; i<=limit; ++i){
                fact *= i;
            }
            sum += fact;

            num /= 10;
        }
        if(sum == temp){
            cout << temp << endl;
        }
    ++temp2;
    }

    cout << "DO YOU WANT TO CONITNUE(Y/N): ";
    char ch;
    cin >> ch;

    if(ch=='Y' || ch == 'y'){
        goto start;;
    }else{
        exit(0);
    }

}

void armstrong(int num, int ending){

        int limit,sum=0, cube;
        int temp2 = num;
        int temp;

        while(temp2 <= ending){
        sum=0;
        num = temp2;
        temp = num;

        while(num > 0)
        {
            limit = num%10;

            cube=1;

            cube = limit*limit*limit;;

            sum += cube;

            num /= 10;
        }
        if(sum == temp){
            cout << temp << endl;
        }
    ++temp2;
    }

    cout << "DO YOU WANT TO CONITNUE(Y/N): ";
    char ch;
    cin >> ch;

    if(ch=='Y' || ch == 'y'){
        goto start;
    }else{
        exit(0);
    }

}

void palindrome(int start, int ending){

    int temp, remainder, rev=0;

    while(start <= ending){
    rev=0;
    temp = start;

    while(temp != 0)
        {
            remainder = temp%10;
            rev = rev*10 + remainder;
            temp /= 10;
        }

        if(rev == start){
            cout << start << endl;
        }

      ++start;

    }

    cout << "DO YOU WANT TO CONITNUE(Y/N): ";
    char ch;
    cin >> ch;

    if(ch=='Y' || ch == 'y'){
        goto start;
    }else{
        exit(0);
    }

}


int main()
{
 clrscr();       
        
  start:
        
    menu();

    int start, ending;

    cout << "ENTER STARTING AND ENDING RANGE: ";
    cin >> start >> ending;

        switch(choice){
            case 1:
                    ///system("clear");
                    clrscr();
                    cout << "All Prime numbers are: " << endl;
                    prime(start, ending);
                    break;
            case 2:
                    ///system("clear");
                    clrscr();
                    cout << "All Krishnamurty numbers are: " << endl;
                    krishnamurty(start, ending);
                    break;
            case 3:
                    ///system("clear");
                    clrscr();
                    cout << "All Aremstrong numbers are: " << endl;
                    armstrong(start, ending);
                    break;
            case 4:
                    ///system("clear");
                    clrscr();
                    cout << "All Palindrome numbers are: " << endl;
                    palindrome(start, ending);
                    break;
            default:
                    cout << "THANKYOU!!!" << endl;
                    exit(0);
        }

    return 0;
        
  getch();
}
