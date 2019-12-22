#include <iostream>
#include <string>
#include "BusLines.h"
#include <vector>

using namespace std;

BusLines::BusLines(vector<vector<string>>& values)
{

    setBusLines(values);
    visited.clear();
    printLineNum();

}


BusLines::BusLines(vector<vector<string>>& values, string AreaCode)
{

    setBusLines(values);
    visited.clear();

    setRegions(values, AreaCode);
    visited.clear();

    int i = 0;
    int Areaid = 0;
    for (i;i < values[0].size();i++)
        if (values[0][i] == AreaCode)
            Areaid = i;

    i = 0;
    int BLines = 0;
    for (i;i < values[0].size();i++)
        if (values[0][i] == "LineNum")
            BLines = i;

    int c2 = 0;
    for (int j = 0; j < vAreaCode.size(); j++) {
        cout << endl << "______________________________________________________________________________________________________";
        cout << endl << "Region Code  " << vAreaCode[j] << ":" << endl;
        for (int i = 1; i < values.size(); i++) {
            if (values[i][Areaid] == vAreaCode[j]) {
                for (int L = 0;L < vLineNum.size();L++)
                    if (values[i][BLines] == vLineNum[L]) {
                        for (int v = 0; v < visited.size(); v++)
                            if (visited[v] == vLineNum[L])
                                c2 = 1;
                        if (c2 != 1)
                        {
                            visited.push_back(vLineNum[L]);
                        }
                        c2 = 0;
                    }
            }
        }
        for (int i = 0; i < visited.size(); i++)
            cout << visited[i] << " \t ";
        visited.clear();
    }

}




void BusLines::setBusLines(vector<vector<string> >& values)
{
    string LineNum = { "LineNum" };
    int i = 0;
    int BLines = 0;
    int c = 0;

    for (i;i < values[0].size();i++)
        if (values[0][i] == "LineNum")
            BLines = i;

    for (int j = 1; j < values.size(); j++) {
        for (i = 0; i < visited.size(); i++)
            if (visited[i] == values[j][BLines])
                c = 1;
        if (c != 1)
        {
            visited.push_back(values[j][BLines]);
            vLineNum.push_back(values[j][BLines]);
        }
        c = 0;
    }


}



void BusLines::setRegions(vector<vector<string> >& values, string AreaCode)
{
    int i = 0;
    int Areaid = 0;
    int c = 0;

    for (i;i < values[0].size();i++)
        if (values[0][i] == AreaCode)
            Areaid = i;

    for (int j = 1; j < values.size(); j++) {
        for (i = 0; i < visited.size(); i++)
            if (visited[i] == values[j][Areaid])
                c = 1;
        if (c != 1)
        {
            visited.push_back(values[j][Areaid]);
            vAreaCode.push_back(values[j][Areaid]);
        }
        c = 0;
    }
    visited.clear();

}

void BusLines::printLineNum()
{

    for (int i = 0; i < vLineNum.size(); i++)
        cout << vLineNum[i] << endl;
}

BusLines::~BusLines() {
    visited.clear();
    vLineNum.clear();
    vAreaCode.clear();
}
