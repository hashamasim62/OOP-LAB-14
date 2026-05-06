//#include"Task 04 Header.h"
//
//// Main
//int main()
//{
//	ScurityModule* arr[3];
//	FirewallModule obj1("FW001", "Firewall Pro", 8.5);
//	IntrusionDetectionModule obj2("ID001", "Intrusion Detector X", 9.0);
//	EncryptionAuditModule obj3("EA001", "Encryption Auditor", 7.5);
//	arr[0] = &obj1;
//	arr[1] = &obj2;
//	arr[2] = &obj3;
//	// Function Implementation
//	// Scan for threats and display module status for all security modules
//	for (int i = 0; i < 3; i++)
//	{
//		arr[i]->scanThreats();
//		cout << "===============================" << endl;
//		arr[i]->displayModuleStatus();
//		cout << endl;
//	}
//	// Send alerts and show alert policies for alertable modules
//	obj1.sendAlert();
//	obj1.showAlertPolicy();
//	cout << endl << "===============================" << endl;
//	obj2.sendAlert();
//	obj2.showAlertPolicy();
//	// Type conversion for EncryptionAuditModule
//	double securityLevel = obj3;
//	cout << endl << "Security Level of Encryption Audit Module: " << securityLevel << endl;
//	return 0;
//}