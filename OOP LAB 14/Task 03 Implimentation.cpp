//#include"Task 03 Header.h"
//// DiagnosticTest class implementation
//DiagnosticTest::DiagnosticTest(string id, string name, int cost) : ID(id), patientName(name), testCost(cost) {}
//
//// BloodTest class implementation
//
//// Constructor
//BloodTest::BloodTest(string id, string name, int cost, string group) : DiagnosticTest(id, name, cost), bloodGroup(group) {}
//// Member functions
//
//// Analyze the blood test
//void BloodTest::analyzeTest()
//{
//	cout << "Analyzing Blood Test for patient: " << patientName << " with ID: " << ID << " and Blood Group: " << bloodGroup << endl;
//}
//
//// Display the blood test report
//void BloodTest::displayReport()
//{
//	cout << "Blood Test Report for patient: " << patientName << " with ID: " << ID << " and Blood Group: " << bloodGroup << endl;
//}
//
//// Generate the bill for the blood test
//void BloodTest::generateBill() 
//{
//	cout << "Generating bill for Blood Test of patient: " << patientName << " with ID: " << ID << endl;
//}
//
//// Display the billing information for the blood test
//void BloodTest::displayBillingInfo() 
//{
//	cout << "Billing Information for Blood Test of patient: " << patientName << " with ID: " << ID << endl;
//}
//
//// Type conversion operator to convert BloodTest object to int (returns the test cost)
//BloodTest::operator int() 
//{
//	return testCost;
//}
//
//// XRayTest class implementation
//
//// Constructor
//XRayTest::XRayTest(string id, string name, int cost, string bodyPart) : DiagnosticTest(id, name, cost), bodyPart(bodyPart) {}
//
//// Member functions
//
//// Analyze the X-Ray test
//void XRayTest::analyzeTest() 
//{
//	cout << "Analyzing X-Ray Test for patient: " << patientName << " with ID: " << ID << " and Body Part: " << bodyPart << endl;
//}
//
//// Display the X-Ray test report
//void XRayTest::displayReport() 
//{
//	cout << "X-Ray Test Report for patient: " << patientName << " with ID: " << ID << " and Body Part: " << bodyPart << endl;
//}
//
//// Generate the bill for the X-Ray test
//void XRayTest::generateBill() 
//{
//	cout << "Generating bill for X-Ray Test of patient: " << patientName << " with ID: " << ID << endl;
//}
//
//// Display the billing information for the X-Ray test
//void XRayTest::displayBillingInfo() 
//{
//	cout << "Billing Information for X-Ray Test of patient: " << patientName << " with ID: " << ID << endl;
//}
//
//// MRITest class implementation
//
//// Constructor
//MRITest::MRITest(string id, string name, int cost, string bodyPart) : DiagnosticTest(id, name, cost), bodyPart(bodyPart) {}
//
//// Member functions
//
//// Analyze the MRI test
//void MRITest::analyzeTest() 
//{
//	cout << "Analyzing MRI Test for patient: " << patientName << " with ID: " << ID << " and Body Part: " << bodyPart << endl;
//}
//
//// Display the MRI test report
//void MRITest::displayReport() 
//{
//	cout << "MRI Test Report for patient: " << patientName << " with ID: " << ID << " and Body Part: " << bodyPart << endl;
//}
