#include <string>
#include <vector>

using namespace std;

class BusLines
{
public:

	BusLines(vector<vector<string>>& values);
	BusLines(vector<vector<string> >& values, string AreaCode);
	~BusLines();
	void setBusLines(vector<vector<string>>& values);
	void setRegions(vector<vector<string>>& values, string AreaCode);
	void printLineNum();

private:
	vector<string> visited;
	vector<string> vLineNum;
	vector<string> vAreaCode;
};
