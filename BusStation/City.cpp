#include "City.h"
using namespace std;

City::City()
{
	//to do
}
City::City(string CityId)
{
//to do
}
void City::setCity(string CityId, string AreaCode, string ApartmentNumber, string Province)
{
	this->CityId = CityId;
	this->AreaCode=AreaCode;
	this->ApartmentNumber = ApartmentNumber;
	this->Province = Province;
}

string City::getCityId()
{
	return CityId;
}
string City::getAreaCode()
{
	return AreaCode;
}

/*
string City::getCityName()
{
	return CityName;
}

string City::getStreet()
{
	return Street;
}
*/
string City::getApartmentNumber()
{
	return ApartmentNumber;
 }


string City::getProvince()
{
	return Province;
}

City::~City()
{
	///to do
}


/*
	City();
	City(string CityName);
	~City();
private:
	string Id;
	string CityName;
	string Street;
	int  ApartmentNumber;*/