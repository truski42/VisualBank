#pragma once
using namespace System;

public ref class Payments
{
public:
	int id;
	String^ firstName;
	String^ lastName;
	String^ email;
	String^ password;
	String^ address;
	String^ personalID;
	String^ accountNumber;
	Decimal^ availableBalance;
	Decimal^ soldo;
	float^ interlocks;
};