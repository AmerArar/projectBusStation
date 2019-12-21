#include <iostream>
#include <algorithm>
#include <fstream>
#include <iterator>
#include <sstream>
#include <string>
#include <windows.h>
#include "stdio.h"
#include <time.h>
#include "BusLines.h"
#include <vector>

using namespace std;

void choiceReservation() {
    cout << "   Welcome to SuperBus  " << endl;
    cout << "---------------------------------------" << endl;
    cout << "Make a choice:" << endl;
    cout << "Press 1 to view the list of all lines:" << endl;
    cout << "Press 2 to view the list of all lines by region:" << endl;
    cout << "Press Another number to cancel:" << endl;
    cout << "---------------------------------------" << endl;
}


int main()
{
    vector<vector<string> > values;
    vector<string> valueline;
    vector<string> visited;

    int x, y;
        ifstream fin("C:\\BootCamp\\busStation\\suprBus.csv");
        string item;
        for (string line; getline(fin, line); )
        {
            istringstream in(line);


            while (getline(in, item, ','))
            {
                valueline.push_back(item.c_str());
            }

            values.push_back(valueline);
            valueline.clear();
        }

        fin.close();
        choiceReservation();

        cin >> x;

        if (x == 1) {
            cout << "list of all lines:" << endl;
            BusLines L1(values);
        }
        
 }
