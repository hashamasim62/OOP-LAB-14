//#pragma once
//#include<iostream>
//#include<string>
//using namespace std;
//
////Abstract Base Class
//class TransportService
//{
//protected:
//	string ID;
//	string name;
//	int fare;
//public:
//	virtual int calculateFare() = 0;
//	virtual void displayServiceInfo() = 0;
//};
//
////Interface Base Class
//class DiscountPolicy
//{
//public:
//	virtual bool applyDiscount() = 0;
//	virtual void showDiscountInfo() = 0;
//};
//
////Derived Classes
//class MetroService : public TransportService
//{
//	int distance;
//public:
//	MetroService(string id, string name,int distance);
//	int calculateFare();
//	void displayServiceInfo();
//};
//class TaxiService : public TransportService
//{
//	int distance;
//	public:
//	TaxiService(string id, string name, int distance);
//	int calculateFare();
//	void displayServiceInfo();
//};
//class BusService : public TransportService, public DiscountPolicy
//{
//	int distance;
//public:
//	BusService(string id, string name, int distance);
//	int calculateFare();
//	void displayServiceInfo();
//	bool applyDiscount();
//	void showDiscountInfo();
//	operator double();
//};