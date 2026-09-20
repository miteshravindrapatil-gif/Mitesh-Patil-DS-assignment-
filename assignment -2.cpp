#include <iostream>
using namespace std;

int main()
{
    int bookID[3];

    cout << "Enter IDs of 3 library books:" << endl;

    for(int i = 0; i < 3; i++)
    {
        cin >> bookID[i];
    }

    cout << "\nBook IDs are:" << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << bookID[i] << endl;
    }

    return 0;
}