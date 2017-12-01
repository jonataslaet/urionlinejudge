#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int N;
    while (cin >> N)
    {
        if (N % 6 == 0)
        {
            cout << "Y\n";
        }    
        else
        {
            cout << "N\n";
        }    
    }    
    return 0;
}