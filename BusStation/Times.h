#include <string>
using namespace std;

class Times
{
public:
	Times();
	~Times();
	void setTimes(string from, string to, string departure, string arrival);
	string getfromTime();
	string gettoTime();
	string getdepartureTime();
	string getarrivalTime();
private:
	string from;
	string to;
	string departure;
	string arrival;


};

