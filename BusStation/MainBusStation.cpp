#include <iostream>
#include "String"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <windows.h>
#include "stdio.h"
#include <time.h>
#include <vector>

using namespace std;


int main()
{
    vector<vector<string> > values;
    vector<string> valueline;


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

        int i = 0;

        for (i = 0; i < values.size(); i++) {
            for (int j = 0; j < values[i].size(); j++) {
               cout<< values[i][j]<<endl;

            }
            cout << endl;
        }

 }