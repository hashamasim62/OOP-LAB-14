//#include"Task 02 Header.h"
//
////Main Function
//
//int main()
//{
//	//Array of Base Class Pointers
//	TransportService* services[3];
//	MetroService obj1("S101", "City Metro", 0);
//	TaxiService obj2("S102", "City Taxi", 15);
//	BusService obj3("S103", "City Bus", 20);
//	services[0] = &obj1;
//	services[1] = &obj2;
//	services[2] = &obj3;
//	//Calculating Fare and Displaying Service Information
//	for (int i = 0; i < 3; i++)
//	{
//		services[i]->calculateFare();
//		cout << endl << "=================================" << endl;
//		services[i]->displayServiceInfo();
//	}
//	//Discount Information for Bus Service
//	//Interface class pointer
//	DiscountPolicy* ptr = &obj3;
//	cout << "\n\nDiscount Information for Bus Service:" << endl;
//	ptr->showDiscountInfo();
//	//Type conversion for Bus Service
//	double fareAmount = obj3;
//	cout << "\n\nType Conversion for Bus Service:" << endl;
//	cout << "Fare Amount in double: " << fareAmount << endl;
//	return 0;
//}