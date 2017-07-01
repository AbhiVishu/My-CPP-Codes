#include <iostream.h>
#include <conio.h>      ///for turboc++. That's for MY Friends lol

void algo(int &start, int &ending){

    int flag, temp=0, rev=0, remainder, flag2=0;

    cout << "Prime numbers between " << start << " and " << ending << " are: ";

    while (start < ending)
    {
        flag = 0;

        for(int i = 2; i <= start/2; ++i)
        {
            if(start % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0){
            ///cout << start << " ";
            temp = start;
            if(temp >= 10){
                flag2 = 0;
                while(temp != 0)
                {
                    remainder = temp%10;
                    rev = rev*10 + remainder;
                    temp /= 10;
                }
                for(int i=2; i<=rev/2; ++i){
                    if(rev%i == 0){
                        flag2++; break;
                    }
                }
                if(flag2==0){
                    cout << start << endl;
                }
            }else{
                cout << start << endl;
            }
        }

        ++start;
    }
}

int main()
{
  clrscr();  
    
    int start, ending;

    cout << "################################################################" << endl;
    cout << "#                    SPECIAL PRIME CALCULATOR                  #" << endl;
    cout << "################################################################" << endl;

    cout << "Enter two numbers(intervals): ";
    cin >> start >> ending;

    algo(start, ending);

    return 0;
    
  getch();
}
