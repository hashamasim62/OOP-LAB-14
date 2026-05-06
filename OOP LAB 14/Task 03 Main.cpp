//#include"Task 03 Header.h"
//
////Main
//int main()
//{
//	DiagnosticTest* arr[3];
//	BloodTest obj1("BT001", "John Doe", 500, "A+");
//	XRayTest obj2("XR001", "Jane Doe", 1000, "Chest");
//	MRITest obj3("MRI001", "Alice Smith", 2000, "Brain");
//	arr[0] = &obj1;
//	arr[1] = &obj2;
//	arr[2] = &obj3;
//
//	//Function Implimentation
//
//	// Analyze and display reports for all tests
//	for (int i = 0; i < 3; i++)
//	{
//		arr[i]->analyzeTest();
//		cout << "===============================" << endl;
//		arr[i]->displayReport();
//		cout << endl;
//	}
//	// Generate bills and display billing information for billable tests
//	obj1.generateBill();
//	obj1.displayBillingInfo();
//	cout << endl << "===============================" << endl;
//	obj2.generateBill();
//	obj2.displayBillingInfo();
//
//	// Type conversion
//	int bloodTestCost = obj1;
//	cout << endl << "Cost of Blood Test: " << bloodTestCost << endl;
//
//	return 0;
//}