#include <iostream>
using namespace std;

int main()
{
    int w;
    cout<<"Enter w: ";
    cin >> w;
    if (w % 2 == 0 && w > 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
