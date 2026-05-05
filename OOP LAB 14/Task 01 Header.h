//#pragma once
//#include<iostream>
//using namespace std;
//
////Abstract Base Class
//class PaymentMethod
//{
//protected:
//	string ID;
//	string holderName;
//	double transaction;
//public:
//	virtual void processPayment() = 0;
//	virtual void displayMethodDetails() = 0;
//};
////Interface base class
//class RewardPolicy
//{
//public:
//	virtual int calculateRewardPoints() = 0;
//	virtual void showRewardInfo() = 0;
//};
////drived classes
//class CreditCarPayment:public PaymentMethod,public RewardPolicy
//{
//public:
//	CreditCarPayment(string id, string name, double amount);
//	void processPayment();
//	void displayMethodDetails();
//	int calculateRewardPoints();
//	void showRewardInfo();
//};
//class DigitalWalletPayment:public PaymentMethod
//{
//public:
//	DigitalWalletPayment(string id, string name, double amount);
//	void processPayment();
//	void displayMethodDetails();
//	//type conversion
//	operator double();
//};
//class BankTransfrePayment:public PaymentMethod
//{
//public:
//	BankTransfrePayment(string id, string name, double amount);
//	void processPayment();
//	void displayMethodDetails();
//};
