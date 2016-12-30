#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

char canvas[6][12] = {

    "#         #",
    "#         #",
    "###########",
    "#         #",
    "#         #",


};
char canvas2[6][12] = {

    "#         #",
    "# #       #",
    "#   #     #",
    "#     #   #",
    "#       # #",


};
char canvas3[6][12] = {

    "#        # ",
    "  #     #  ",
    "    #  #   ",
    "      #    ",
    "      #",


};

bool game_running = true;

int main()
{
    while(game_running==true){
        system("clear");
        for(int display=0; display<6; ++display){
            usleep(300000);
            cout << canvas[display] << "  " << canvas2[display] <<  "  " << canvas3[display] << endl;
        }
        cin.get();

    }
}
