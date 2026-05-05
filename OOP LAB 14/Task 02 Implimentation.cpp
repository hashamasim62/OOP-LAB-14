//#include"Task 02 Header.h"
//
////Metro Service
//MetroService::MetroService(string id, string name,int distance)
//{
//	ID = id;
//	this->name = name;
//	this->distance = distance;
//	fare = 0;		//fix fare of 50 Rs. for metro service
//}
//int MetroService:: calculateFare()
//{
//	fare = 50;
//	return fare;
//}
//void MetroService::displayServiceInfo()
//{
//	cout << "Metro Service ID: " << ID << endl;
//	cout << "Metro Service Name: " << name << endl;
//	cout << "Metro Service Fare: " << fare << endl;
//}
//
////Taxi Service
//TaxiService ::TaxiService(string id, string name, int distance)
//{
//	ID = id;
//	this->name = name;
//	this->distance = distance;
//	fare = 0;
//}
//int TaxiService::calculateFare()
//{
//	fare = 20 * distance;		//Rs.20 per kilometer
//	return fare;
//}
//void TaxiService::displayServiceInfo()
//{
//	cout << "Taxi Service ID: " << ID << endl;
//	cout << "Taxi Service Name: " << name << endl;
//	cout << "Taxi Service Distance: " << distance << " km" << endl;
//	cout << "Taxi Service Fare: " << fare << endl;
//}
//
////Bus Service
//BusService::BusService(string id, string name, int distance)
//{
//	ID = id;
//	this->name = name;
//	this->distance = distance;
//	fare = 0;
//}
//int BusService::calculateFare()
//{
//	fare = 10 * distance;		//Rs.10 per kilometer
//	return fare;
//}
//void BusService::displayServiceInfo()
//{
//	cout << "Bus Service ID: " << ID << endl;
//	cout << "Bus Service Name: " << name << endl;
//	cout << "Bus Service Distance: " << distance << " km" << endl;
//	cout << "Bus Service Fare: " << fare << endl;
//}
////Discount Policy for Bus Service
//bool BusService::applyDiscount()
//{
//	if (distance > 10)		//10% discount for distance greater than 10 km
//	{
//		fare = fare - (fare * 0.1);
//		return true;
//	}
//	return false;
//}
//void BusService::showDiscountInfo()
//{
//	if (applyDiscount())
//	{
//		cout << "Discount applied! New Fare: " << fare << endl;
//	}
//	else
//	{
//		cout << "No discount applicable. Fare remains: " << fare << endl;
//	}
//}
//
////Type conversion operator for Bus Service after discount
//BusService::operator double()
//{
//	return fare;
//}
