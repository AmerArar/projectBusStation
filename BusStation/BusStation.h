
#include <string>
#include <vector>

using namespace std;

class BusStation
{
public:
	BusStation(vector<vector<string>>& values, string CodeOfCity);
	BusStation(vector<vector<string>>& values, string ParticularStationCode, string s);
	~BusStation();
	void setBusStation(vector<vector<string>>& values, string CodeOfCity);
	void setBusDirectStation(vector<vector<string>>& values, string ParticularStationCode);

private:
	vector<string> StationCode;
	vector<string> vCityCode;
	vector<string> vLineNumStation;
	vector<string> visitedStation;

};
