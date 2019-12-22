#include <string>
#include <vector>

using namespace std;

class BusStation
{
public:
	BusStation(vector<vector<string>>& values, string CodeOfCity);
	~BusStation();
	void setBusStation(vector<vector<string>>& values, string CodeOfCity);

private:
	vector<string> StationCode;
	vector<string> visitedStation;

};
