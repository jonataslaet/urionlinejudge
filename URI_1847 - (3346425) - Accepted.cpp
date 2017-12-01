#include <iostream>
#include <vector>
#include <string.h>
#include <iomanip>
using namespace std;
 
int main(int argc, char** argv)
{
    int a, b, c;
    cin >> a >> b >> c;
 
    if (a > b && (b < c || b == c))
    {
        //as pessoas ficam felizes (primeira figura)
        cout << ":)" << endl;
    }
    else if (a < b && (b > c || b == c))
    {
        //as pessoas ficam tristes (segunda figura)
        cout << ":(" << endl;
    }
    else if (a < b && b < c && ((c - b) < (b - a)))
    {
        //as pessoas ficam tristes (terceira figura)
        cout << ":(" << endl;
    }
    else if (a < b && b < c && ((c - b) >= (b - a)))
    {
        //as pessoas ficam felizes (quarta figura)
        cout << ":)" << endl;
    }
    //20 16 4
    else if (a > b && b > c && ((b - c) < (a - b))) //12 < 4
    {
        //as pessoas ficam felizes (quinta figura)
        cout << ":)" << endl;
    }
    else if (a > b && b > c && ((b - c) >= (a - b))) // 12 >= 4
    {
        //as pessoas ficam felizes (sexta figura)
        cout << ":(" << endl;
    }
    else if (a == b && b < c)
    {
        //as pessoas ficam felizes (sétima figura)
        cout << ":)" << endl;
    }
    else
    {
        //as pessoas ficam tristes (oitava
        cout << ":(" << endl;
    }
 
    return 0;
}