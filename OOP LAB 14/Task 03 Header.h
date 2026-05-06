//#pragma once
//#include<iostream>
//using namespace std;
//
////Abstract Base Class
//class DiagnosticTest
//{
//protected:
//	string ID;
//	string patientName;
//	const int testCost;
//public:
//	DiagnosticTest(string id, string name, int cost);
//	virtual void analyzeTest() = 0;
//	virtual void displayReport() = 0;
//};
//
////Interface Class
//
//class Billable
//{
//public:
//	virtual void generateBill() = 0;
//	virtual void displayBillingInfo() = 0;
//
//};
//
////Derived Class
//class BloodTest : public DiagnosticTest, public Billable
//{
//	string bloodGroup;
//public:
//	BloodTest(string id, string name, int cost, string group);
//	void analyzeTest();
//	void displayReport();
//	void generateBill();
//	void displayBillingInfo();
//	operator int();
//};
//class XRayTest : public DiagnosticTest, public Billable
//{
//	string bodyPart;
//public:
//	XRayTest(string id, string name, int cost, string part);
//	void analyzeTest();
//	void displayReport();
//	void generateBill();
//	void displayBillingInfo();
//};
//class MRITest : public DiagnosticTest
//{
//	string bodyPart;
//public:
//	MRITest(string id, string name, int cost, string part);
//	void analyzeTest();
//	void displayReport();
//};