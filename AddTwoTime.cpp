#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

class AddTime
{
    string time1, time2;

public:
    void getTime()
    {
        cout << "FORMAT SHOULD BE HH:MM" << endl << endl;

        cout << "Enter time 1: ";
        cin >> time1;

        cout << "Enter time 2: ";
        cin >> time2;
    }

    friend void addTime(AddTime obj);
};

void addTime(AddTime obj)
{

    string hr1, hr2, sec1, sec2;
    int counter = 0;

    for(int i=0; i<5; ++i)
    {
        if(obj.time1[i] == ':')
        {
            counter++;
            continue;
        }

        if(counter==0)
        {
            hr1 = hr1 + obj.time1[i];
            hr2 = hr2 + obj.time2[i];
        }
        if(counter == 1)
        {
            sec1 = sec1 + obj.time1[i];
            sec2 = sec2 + obj.time2[i];
        }

    }

    stringstream hour1(hr1);
    stringstream hour2(hr2);
    stringstream second1(sec1);
    stringstream second2(sec2);

    int iHr1, iHr2, iSec1, iSec2;

    hour1 >> iHr1;
    hour2 >> iHr2;
    second1 >> iSec1;
    second2 >> iSec2;

    int finalHr, finalSec;

    finalHr = iHr1 + iHr2;
    finalSec = iSec1 + iSec2;

    if(finalSec >= 60)
    {
        finalHr = finalHr + 1;
        finalSec = finalSec - 60;
    }



    if(finalHr > 24)
    {
        finalHr = 1;
    }

    if(finalSec < 10)
    {
        cout << finalHr << ":" << '0' << finalSec << endl;
    }
    else
    {
        cout << finalHr << ":" << finalSec << endl;
    }

}

int main()
{
    AddTime obj;
    obj.getTime();
    addTime(obj);
    return 0;
}
