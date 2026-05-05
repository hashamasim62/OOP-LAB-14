//#include"Task 01 Header.h"
////IVrtual Function Implementation
//
////Credit Card Payment
//CreditCarPayment::CreditCarPayment(string id, string name, double amount)
//{
//	ID = id;
//	holderName = name;
//	transaction = amount;
//}
//void CreditCarPayment::processPayment()
//{
//	cout << "Processing credit card payment for " << holderName << " with ID: " << ID << " and amount: " << transaction << endl;
//}
//void CreditCarPayment::displayMethodDetails()
//{
//	cout << "Credit Card Payment Method Details:" << endl;
//	cout << "ID: " << ID << endl;
//	cout << "Holder Name: " << holderName << endl;
//	cout << "Transaction Amount: " << transaction << endl;
//}
//int CreditCarPayment::calculateRewardPoints()
//{
//	int rewardPoints = transaction / 10000;		//1 point for every Rs.10000- spent
//	return rewardPoints;
//}
//void CreditCarPayment::showRewardInfo()
//{
//	int rewardPoints = calculateRewardPoints();
//	cout << "Reward Points Earned: " << rewardPoints << endl;
//}
//
////Digital Wallet Payment
//DigitalWalletPayment::DigitalWalletPayment(string id, string name, double amount)
//{
//	ID = id;
//	holderName = name;
//	transaction = amount;
//}
//void DigitalWalletPayment::processPayment()
//{
//	cout << "Processing digital wallet payment for " << holderName << " with ID: " << ID << " and amount: " << transaction << endl;
//}
//void DigitalWalletPayment::displayMethodDetails()
//{
//	cout << "Digital Wallet Payment Method Details:" << endl;
//	cout << "ID: " << ID << endl;
//	cout << "Holder Name: " << holderName << endl;
//	cout << "Transaction Amount: " << transaction << endl;
//}
////Type conversion operator
//DigitalWalletPayment::operator double()
//{
//	return transaction;
//}
////Bank Transfer Payment
//BankTransfrePayment::BankTransfrePayment(string id, string name, double amount)
//{
//	ID = id;
//	holderName = name;
//	transaction = amount;
//}
//void BankTransfrePayment::processPayment()
//{
//	cout << "Processing bank transfer payment for " << holderName << " with ID: " << ID << " and amount: " << transaction << endl;
//}
//void BankTransfrePayment::displayMethodDetails()
//{
//	cout << "Bank Transfer Payment Method Details:" << endl;
//	cout << "ID: " << ID << endl;
//	cout << "Holder Name: " << holderName << endl;
//	cout << "Transaction Amount: " << transaction << endl;
//}
//
