#include <iostream>
#include <vector>
#include <string.h>
#include <iomanip>
using namespace std;
    
int main(int argc, char** argv)
{
    int c, id, idmaior;
    float maior, nota;
    cin >> c;
    cin >> id >> nota;
    maior = nota;
    idmaior = id;
    for (int i = 2; i <= c; i++)
    {
        cin >> id >> nota;
        if (nota >= maior)
        {
            maior = nota;
            idmaior = id;
        }
    }
    if (maior < 8.0) cout << "Minimum note not reached" << endl;
    else cout << idmaior << endl;
    return 0;
}