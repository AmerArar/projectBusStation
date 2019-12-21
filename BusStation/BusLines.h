#include <string>
#include <vector>

using namespace std;

class BusLines
{
public:

	BusLines(vector<vector<string> >& values);
	~BusLines();
	void setBusLines(string t);
	string getBusLines();


private:
	string IdBusLines;
	vector<string> visited;

	
};

