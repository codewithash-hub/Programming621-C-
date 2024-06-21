#include <iostream>
#include <string>

using namespace std;

class inventory
{
    public:
        void inventory5(string, int, double, int);
        inventory(); // default constructor
        inventory(string);
        inventory(string, int, double);
        inventory(string, int, double, int);

    private:
        string name;
        int itemNum;
        double price;
        int unitsInStock;
};


int main()
{
    inventory inventory1;
    inventory inventory2("Russians");
    inventory inventory3("Oros", 2, 99.99);
    inventory inventory4("Pasta", 5, 159.99, 2);
    inventory inventory5("x-box", 1, 8599.99, 73);

    return 0;
}

void inventory::inventory5(string name, int iNum, double cost, int inStock)
{
    name = name;
    iNum = itemNum;
    cost = price;
    inStock = unitsInStock;

    cout << "Inventory name: " << name << endl << "Item number: " << itemNum << endl
		<< "Price: " << price << endl << "Units in stock: " << unitsInStock << endl;
    cout << endl;
}

inventory::inventory() // default constructor
{
    name = "";
    itemNum = 0;
    price = 0.0;
    unitsInStock = 0;

    cout << "Inventory name: " << name << endl << "Item number: " << itemNum << endl
		<< "Price: " << price << endl << "Units in stock: " << unitsInStock << endl;
    cout << endl;
}

inventory::inventory(string n)
{
		name = n;
		itemNum = -1;
		price = 0.0;
		unitsInStock = 0;

		cout << "Inventory name: " << name << endl << "Item number: " << itemNum << endl
		<< "Price: " << price << endl << "Units in stock: " << unitsInStock << endl;
		cout << endl;
}

inventory::inventory(string n, int iNum, double cost)
{
		name = n;
		itemNum = iNum;
		price = cost;
		unitsInStock = 0;

		cout << "Inventory name: " << name << endl << "Item number: " << itemNum << endl
		<< "Price: " << price << endl << "Units in stock: " << unitsInStock << endl;
		cout << endl;
}

inventory::inventory(string n, int iNum, double cost, int inStock)
{
		name = n;
		itemNum = iNum;
		price = cost;
		unitsInStock = inStock;

		cout << "Inventory name: " << name << endl << "Item number: " << itemNum << endl
		<< "Price: " << price << endl << "Units in stock: " << unitsInStock << endl;
		cout << endl;
}
