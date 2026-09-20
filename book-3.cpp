#include <iostream>
using namespace std;

int main()
{
    int books[5], searchID;
    
    cout << "Enter 5 Book IDs: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> books[i];
    }

    cout << "Enter Book ID to search: ";
    cin >> searchID;

    bool found = false;

    for(int i = 0; i < 5; i++)
    {
        if(books[i] == searchID)
        {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Book Found";
    else
        cout << "Book Not Found";

    return 0;
}