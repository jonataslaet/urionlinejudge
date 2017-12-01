#include <string>
#include <iostream>
using namespace std;
 
int main(int argc, char** argv)
{
    int n;
    string s1;
    string s2;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s1 >> s2;
        if (s1 == s2)
        {
            cout << "Caso #" << i << ": De novo!" << endl;
        }
        else if (s1 == "tesoura")
        {
            if (s2 == "papel" || s2 == "lagarto")
            {
                //sheldon ganha
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else
            {
                //Raj ganha
                cout << "Caso #" << i << ": Raj trapaceou!" << endl;
            }
        }
        else if (s1 == "papel")
        {
            if (s2 == "Spock" || s2 == "pedra"){
                //sheldon ganha
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else
            {
                //Raj ganha
                cout << "Caso #" << i << ": Raj trapaceou!" << endl;
            }
        }
        else if (s1 == "pedra")
        {
            if (s2 == "lagarto" || s2 == "tesoura"){
                //sheldon ganha
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else
            {
                //Raj ganha
                cout << "Caso #" << i << ": Raj trapaceou!" << endl;
            }
        }
        else if (s1 == "lagarto")
        {
            if (s2 == "Spock" || s2 == "papel"){
                //sheldon ganha
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else
            {
                //Raj ganha
                cout << "Caso #" << i << ": Raj trapaceou!" << endl;
            }
        }
        else if (s1 == "Spock")
        {
            if (s2 == "tesoura" || s2 == "pedra"){
                //sheldon ganha
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else
            {
                //Raj ganha
                cout << "Caso #" << i << ": Raj trapaceou!" << endl;
            }
        }
    }
    return 0;
}