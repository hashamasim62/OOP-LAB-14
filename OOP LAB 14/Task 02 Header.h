#pragma once
#include<iostream>
#include<string>
using namespace std;

//Abstract Base Class
class TransportService
{
protected:
	string ID;
	string name;
	int fare;
public:
	virtual int calculateFare() = 0;

};