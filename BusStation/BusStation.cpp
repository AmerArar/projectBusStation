#include <iostream>
#include <string>
#include "BusStation.h"
#include <vector>

using namespace std;

BusStation::BusStation(vector<vector<string>>& values, string CodeOfCity)
{
    setBusStation(values, CodeOfCity);
    visitedStation.clear();
}

void BusStation::setBusStation(vector<vector<string>>& values, string CodeOfCity)
{

    string CityCode = CodeOfCity;

    int i = 0;
    int BusCityCode = 0;
    for (i;i < values[0].size();i++)
        if (values[0][i] == "CityCode")
            BusCityCode = i;


    i = 0;
    int StationCode = 0;
    for (i;i < values[0].size();i++)
        if (values[0][i] == "StationCode")//lin
            StationCode = i;

    int c2 = 0;
       cout << endl << " City Code " << CityCode << ": "; 
    cout << endl << "______________________________________________________________________________________________________"<<endl;

    for (int i = 1; i < values.size(); i++) {
        if (values[i][BusCityCode] == CityCode) {
            for (int v = 0; v < visitedStation.size(); v++)
                if (visitedStation[v] == values[i][StationCode])
                    c2 = 1;
            if (c2 != 1)
            {
                visitedStation.push_back(values[i][StationCode]);
            }
            c2 = 0;
        }
    }
    for (int i = 0; i < visitedStation.size(); i++)
        cout << visitedStation[i] << " \t ";
    cout << endl << "______________________________________________________________________________________________________";
    visitedStation.clear();

}


BusStation::~BusStation()
{
    visitedStation.clear();
}