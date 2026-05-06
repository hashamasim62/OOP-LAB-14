//#pragma once
//#include<iostream>
//using namespace std;
//
////Abstract Base Class
//class ScurityModule
//{
//protected:
//	string ID;
//	string moduleName;
//	double scurityLevel;
//public:
//	ScurityModule(string id, string name, double level);
//	virtual void scanThreats() = 0;
//	virtual void displayModuleStatus() = 0;
//};
//
////Interface Base Class
//class Alertable
//{
//	public:
//	virtual void sendAlert() = 0;
//	virtual void showAlertPolicy() = 0;
//};
//
////Derived Classes
//class FirewallModule : public ScurityModule, public Alertable
//{
//public:
//	FirewallModule(string id, string name, double level);
//	void scanThreats();
//	void displayModuleStatus();
//	void sendAlert();
//	void showAlertPolicy();
//};
//class IntrusionDetectionModule : public ScurityModule, public Alertable
//{
//public:
//	IntrusionDetectionModule(string id, string name, double level);
//	void scanThreats();
//	void displayModuleStatus();
//	void sendAlert();
//	void showAlertPolicy();
//};
//class EncryptionAuditModule : public ScurityModule
//{
//public:
//	EncryptionAuditModule(string id, string name, double level);
//	void scanThreats();
//	void displayModuleStatus();
//	operator double();
//};