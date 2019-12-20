#include <string>
using namespace std;

class City
{
public:
	City();
	City(string CityId);
	~City();

	void setCity(string CityId, string AreaCode, string ApartmentNumber, string Province);
	string getCityId();
	string getAreaCode();
	//string getCityName();
	//string getStreet();
	string getApartmentNumber();
	string getProvince();
private:
	string CityId;
	string AreaCode;
	//string CityName;
	//string Street;
	string  ApartmentNumber;
	string Province; //озеж
};




