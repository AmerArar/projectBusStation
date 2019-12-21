#include <iostream>
#include <string>
#include "BusLines.h"
#include <vector>

using namespace std;



BusLines::BusLines(vector<vector<string> >& values)
{
    int i = 0;
    int m = 0;
    string t = { "LineNum" };
    //LineNum
    ////
    for (i;i < values[0].size();i++)
    {
        if (values[0][i] == t)
            m = i;
    }
    //////////////
   
    i = m;
    int c = 0;

    for (int j = 0; j < values.size(); j++) {
            for (c = 0; c < visited.size(); c++)
                    if(visited[c] == values[j][i])
                        m = 1;
            if (m != 1)
            {
                visited.push_back(values[j][i]);
                cout << values[j][i] << endl;
            }
            m = 0;
    }
    
}

void BusLines::setBusLines(string t)
{
  
}

string BusLines::getBusLines()
{
	return IdBusLines;
}

BusLines::~BusLines(){}
