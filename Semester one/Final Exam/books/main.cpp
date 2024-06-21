#include<iostream>
#include<string>

using namespace std;

class Book {
    private:
        string title;
        string author;
        double price;
        int stock;

    public:
        // Constructor
        Book(string title, string author, double price, int stock)
        {
            this->title = title;
            this->author = author;
            this->price = price;
            this->stock = stock;
        }

        string getTitle()
        {
            return title;
        }

        string getAuthor()
        {
            return author;
        }

        double getPrice()
        {
            return price;
        }

        int getStock()
        {
            return stock;
        }

        bool purchase(int num)
        {
            if (stock >= num)
            {
                stock -= num;
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    // Create a book
    Book book("Book Title", "Author Name", 20.99, 10);

    // Customer wants to purchase 5
    int purchaseNum = 5;
    if (book.purchase(purchaseNum))
    {
        cout << "Purchase successful! Total cost: " << book.getPrice() * purchaseNum << endl;
    }
    else
    {
        cout << "Required copies not in stock" << endl;
    }

    return 0;
}
