#include <iostream>
using namespace std;

class Store
{
	public:
		virtual double discount() = 0;

};

class Imtiaz : public Store
{
	private : 
		double bill;
	public:
		Imtiaz(double bill)
		{
			this->bill = bill;
		}
		double discount()
		{
			return this->bill * 0.93;
		}

};

	
class BinHashim : public Store
{
	private : 
		double bill;
	public:
BinHashim(double bill)
		{
			this->bill = bill;
		}
		double discount()
		{
			return this->bill * 0.95;
		}

};
int main()
{
	BinHashim obj(3000);
	Imtiaz obj1(3000);
	cout << obj.discount() << endl;
	cout << obj1.discount() << endl;
	return 0;
}
