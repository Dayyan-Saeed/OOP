#include <iostream> 
using namespace std;

const int DEEPDISH = 1;
const int HANDTOSSED = 2;
const int PAN = 3;
const int SMALL = 1;
const int MEDIUM = 2;
const int LARGE = 3;

class Pizza
{
private:
	int type;
	int size;
	bool cheeseTopping;
	bool pepperoniTopping;

public:
	Pizza();
	int getType();
	int getSize();
	bool getCheeze();
	bool getPepperoni();
	void setType(int t);
	void setSize(int s);
	void setCheese(bool choice);
	void setPepperoni(bool choice);

	void outputDescription();
	double computePrice();
};

Pizza::Pizza()
{
	type = DEEPDISH;
	size = SMALL;
	cheeseTopping = pepperoniTopping = false;
}

int Pizza::getType()
{
	return type;
}

int Pizza::getSize()
{
	return size;
}

bool Pizza::getCheeze()
{
	return cheeseTopping;
}

bool Pizza::getPepperoni()
{
	return pepperoniTopping;
}

void Pizza::setType(int t)
{
	type = t;
}

void Pizza::setSize(int s)
{
	size = s;
}

void Pizza::setCheese(bool choice)
{
	cheeseTopping = choice;
}

void Pizza::setPepperoni(bool choice)
{
	pepperoniTopping = choice;
}

void Pizza::outputDescription()
{
	switch (size)
	{
	case SMALL:
		cout << "Small "; break;
	case MEDIUM:
		cout << "Medium "; break;
	case LARGE:
		cout << "Large "; break;
	default:
		cout << "Unknown sized ";
	}

	switch (type)
	{
	case DEEPDISH:
		cout << "deepdish "; break;
	case HANDTOSSED:
		cout << "hand tossed "; break;
	case PAN:
		cout << "pan "; break;
	default:
		cout << "unknown type ";
	}

	cout << "pizza";
}

double Pizza::computePrice()
{
	double cost = 0.0;
	switch (size)
	{
	case SMALL:
		cost += 10; break;
	case MEDIUM:
		cost += 14; break;
	case LARGE:
		cost += 17; break;
	}

	if (cheeseTopping)
		cost += 2.0;
	if (pepperoniTopping)
		cost += 2.0;

	return cost;
}

int main()
{

	char pType, pSize, topping;
	int type = 0, size = 0;

	cout << "What size pizza would you like (S/M/L): ";
	cin >> pSize;
	cin.clear();

	switch (pSize)
	{
	case 'S': case 's':
		size = SMALL; break;
	case 'M': case 'm':
		size = MEDIUM; break;
	case 'L': case 'l':
		size = LARGE; break;
	}

	cout << "What type pizza would you like ((D)eepdish/(H)and-tossed/(P)an): ";
	cin >> pType;
	cin.clear();

	switch (pType)
	{
	case 'D': case 'd':
		type = DEEPDISH; break;
	case 'H': case 'h':
		type = HANDTOSSED; break;
	case 'P': case 'p':
		type = PAN; break;
	}

	Pizza myPizza;
	myPizza.setSize(size);
	myPizza.setType(type);

	cout << "Would you like cheese topping (y/n)? ";
	cin >> topping;
	cin.clear();

	if (topping == 'Y' || topping == 'y')
		myPizza.setCheese(true);

	cout << "Would you like pepperoni topping (y/n)? ";
	cin >> topping;
	cin.clear();

	if (topping == 'Y' || topping == 'y')
		myPizza.setPepperoni(true);

	cout << endl
		<< "Your order: ";
	myPizza.outputDescription();
	cout << endl;

	cout << "Price: $" << myPizza.computePrice() << endl;

	system("pause");
	return 0;
}