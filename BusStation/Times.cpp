#include "Times.h"
using namespace std;

Times::Times()
{
	////
}

void Times::setTimes(string from, string to, string departure, string arrival)
{
	this->from = from;
	this->to = to;
	this->departure = departure;
	this->arrival = arrival;
}

string Times::getfromTime()
{
	return from;
}

string Times::gettoTime()
{
	return to;
}

string Times::getdepartureTime()
{
	return departure;
}
string Times::getarrivalTime()
{
	return arrival;
}

Times::~Times() {}
