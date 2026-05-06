//#include"Task 04 Header.h"
//
//// Abstract Base Class Implementation
//ScurityModule::ScurityModule(string id, string name, double level) : ID(id), moduleName(name), scurityLevel(level) {}
//
//// FirewallModule Implementation
//
//// Constructor
//FirewallModule::FirewallModule(string id, string name, double level) : ScurityModule(id, name, level) {}
//
//// Scan for threats
//void FirewallModule::scanThreats() 
//{
//	cout << "Scanning for threats using Firewall Module: " << moduleName << " with ID: " << ID << endl;
//}
//
//// Display the status of the firewall module
//void FirewallModule::displayModuleStatus() 
//{
//	cout << "Firewall Module Status: " << moduleName << " with ID: " << ID << " and Security Level: " << scurityLevel << endl;
//}
//
//// Send an alert for the firewall module
//void FirewallModule::sendAlert() 
//{
//	cout << "Sending alert from Firewall Module: " << moduleName << " with ID: " << ID << endl;
//}
//
//// Show the alert policy for the firewall module
//void FirewallModule::showAlertPolicy() 
//{
//	cout << "Alert Policy for Firewall Module: " << moduleName << " with ID: " << ID << endl;
//}
//
//// IntrusionDetectionModule Implementation
//
//// Constructor
//IntrusionDetectionModule::IntrusionDetectionModule(string id, string name, double level) : ScurityModule(id, name, level) {}
//
//// Scan for threats
//void IntrusionDetectionModule::scanThreats() 
//{
//	cout << "Scanning for threats using Intrusion Detection Module: " << moduleName << " with ID: " << ID << endl;
//}
//
//// Display the status of the intrusion detection module
//void IntrusionDetectionModule::displayModuleStatus() 
//{
//	cout << "Intrusion Detection Module Status: " << moduleName << " with ID: " << ID << " and Security Level: " << scurityLevel << endl;
//}
//
//// Send an alert for the intrusion detection module
//void IntrusionDetectionModule::sendAlert() 
//{
//	cout << "Sending alert from Intrusion Detection Module: " << moduleName << " with ID: " << ID << endl;
//}
//
//// Show the alert policy for the intrusion detection module
//void IntrusionDetectionModule::showAlertPolicy() 
//{
//	cout << "Alert Policy for Intrusion Detection Module: " << moduleName << " with ID: " << ID << endl;
//}
//
//// EncryptionAuditModule Implementation
//
//// Constructor
//EncryptionAuditModule::EncryptionAuditModule(string id, string name, double level) : ScurityModule(id, name, level) {}
//
//// Scan for threats
//void EncryptionAuditModule::scanThreats() 
//{
//	cout << "Scanning for threats using Encryption Audit Module: " << moduleName << " with ID: " << ID << endl;
//}
//
//// Display the status of the encryption audit module
//void EncryptionAuditModule::displayModuleStatus() 
//{
//	cout << "Encryption Audit Module Status: " << moduleName << " with ID: " << ID << " and Security Level: " << scurityLevel << endl;
//}
//
//// Type conversion operator
//EncryptionAuditModule::operator double() 
//{
//	return scurityLevel;
//}