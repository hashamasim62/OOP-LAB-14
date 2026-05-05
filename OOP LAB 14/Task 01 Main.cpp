//#include"Task 01 Header.h"
//
////Main Function
//
//int main()
//{
//	//Array of Base Class Pointers
//	PaymentMethod* payments[3];
//	CreditCarPayment obj1("P101", "Hasham", 15000);
//	DigitalWalletPayment obj2("P102", "Azeem", 5000);
//	BankTransfrePayment obj3("P103", "Zaryan", 20000);
//	payments[0] = &obj1;
//	payments[1] = &obj2;
//	payments[2] = &obj3;
//
//	//Processing Payments
//	for (int i = 0; i < 3; i++)
//	{
//		payments[i]->processPayment();
//		cout << endl << "=================================" << endl;
//		payments[i]->displayMethodDetails();
//	}
//	//Reward Points for Credit Card Payment
//	//Interface class pointer
//	RewardPolicy* ptr = &obj1;
//	cout << "\n\nReward Information for Credit Card Payment:" << endl;
//	ptr->showRewardInfo();
//
//	//Type conversion for Digital Wallet Payment
//	double amount = obj2;
//	cout << "\n\nType Conversion for Digital Wallet Payment:" << endl;
//	cout << "Amount in double: " << amount << endl;
//
//
//	return 0;
//}