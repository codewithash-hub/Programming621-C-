#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    int id;
    string name;
    double cost;
    double price;
    double vat;

public:
    int getId() const { return id; }
    void setId(int _id) { id = _id; }

    string getName() const { return name; }
    void setName(const string& _name) { name = _name; }

    double getCost() const { return cost; }
    void setCost(double _cost) { cost = _cost; }

    double getPrice() const { return price; }
    void setPrice(double _price) { price = _price; }

    double getVat() const { return vat; }
    void setVat(double _vat) { vat = _vat; }

    double calculateVatAmount() const {
        return vat * cost;
    }

    double calculateProfit() const {
        return price - (cost - calculateVatAmount());
    }

    double calculateMarkup() const {
        return (calculateProfit() / cost) * 100;
    }

    void displayDetails() const {
        cout << "Product Details:" << std::endl;
        cout << "ID: " << id << std::endl;
        cout << "Name: " << name << std::endl;
        cout << "Cost: R" << cost << std::endl;
        cout << "Price: R" << price << std::endl;
        cout << "VAT: " << vat << std::endl;
        cout << "VAT Amount: R" << calculateVatAmount() << std::endl;
        cout << "Profit: R" << calculateProfit() << std::endl;
        cout << "Markup: " << calculateMarkup() << "%" << std::endl;
    }
};

int main() {

    Product product1;


    product1.setId(1);
    product1.setName("Apple");
    product1.setCost(10.0);
    product1.setPrice(15.0);
    product1.setVat(0.15);


    product1.displayDetails();

    return 0;
}
