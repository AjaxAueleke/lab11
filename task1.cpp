#include <iostream>
using namespace std;

class Bank
{
	int interest;
	public:
	virtual int setInterest() = 0;
};

class HMB : public Bank
{
	int interest;
	public:
	int setInterest()
	{
		this->interest = 4;
		cout << this->interest << endl;
		return interest;
	}
};

class HBL: public Bank
{
	int interest;
	public:
	int setInterest()
	{
		this->interest = 2;
		cout << this->interest << endl;
		return interest;
	}
};

class MCB: public Bank
{
	int interest;
	public:
	int setInterest()
	{
		this->interest = 3;
		cout << this->interest << endl;
		return interest;
	}
};


int main()
{

	MCB obj;
	HBL obj1;
	HMB obj2;
	obj.setInterest();
	obj1.setInterest();
	obj2.setInterest();
	return 0;

}
