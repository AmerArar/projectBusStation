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
#include "BusStation.h"
#include "Times.h"
#include "City.h"
#include <vector>

using namespace std;

void choiceReservation() {
    cout << "   Welcome to SuperBus  " << endl;
    cout << "---------------------------------------" << endl;
    cout << "Make a choice:" << endl;
    cout << "Press 1 to view the list of all lines:" << endl;
    cout << "Press 2 to view the list of all lines by region:" << endl;
    cout << "Press 3 to view the list of all stations in a particular city:" << endl;
    cout << "Press Another number to cancel:" << endl;
    cout << "---------------------------------------" << endl;
}


int main()
{
    vector<vector<string> > values;
    vector<string> valueline;

    int x;
    try {
        ifstream fin("C:\\BootCamp\\busStation\\suprBus.csv");
        if (!fin)
            throw FALSE;
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
        string LineNum = { "LineNum" };
        string AreaCode = { "AreaCode" };
        string CityCode = { "240" };

        if (x == 1) {
            cout << "list of all lines:" << endl;
            BusLines L1(values);
        }
        else
        {
            if (x == 2) {
                cout << "list of all lines by region:" << endl;
                BusLines L2(values, AreaCode);
            }
            else
                if (x == 3) {
                    cout << " list of all stations in a particular city:";
                    BusStation S2(values, CityCode);
                }


        }

    }
    catch (...)
    {
        cout << "\n can't open file!!!.";
    }
}
