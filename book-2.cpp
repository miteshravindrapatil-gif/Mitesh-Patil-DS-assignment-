#include <iostream>
using namespace std;

class Book
{
public:
    string name;
    string writer;
    int cost;

    void show()
    {
        cout << "Book Name: " << name << endl;
        cout << "Writer: " << writer << endl;
        cout << "Cost: " << cost << endl;
    }
};

int main()
{
    Book b;

    b.name = "Harry Potter";
    b.writer = "J.K. Rowling";
    b.cost = 500;

    b.show();

    return 0;
}