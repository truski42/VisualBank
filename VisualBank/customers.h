#pragma once

using namespace System;

public ref class Customers
{
public:
	int id;
	String^	firstName;
	String^ lastName;
	String^ email;
	String^ password;
	String^ address;
	String^ personalID;
	String^ accountNumber;
	Decimal^ availableBalance;
	Decimal^ soldo;
	Decimal^ interlocks;
};