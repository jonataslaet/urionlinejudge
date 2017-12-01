#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int p1, p2;
	cin >> p1 >> p2;
	//Se a porção visível da lua no momento estiver entre 0 e 2%
	if (p2 >= 0 && p2 <= 2)
	{
		// é lua nova
		cout << "nova" << endl;
	}
	//se for entre 3 e 96% é lua crescente
	else if (p2 >= 3 && p2 <= 96 && p1 <= p2)
	{
		cout << "crescente" << endl;
	}
	//se for entre 97 e 100% é lua cheia 
	else if (p2 >= 97 && p2 <= 100){
		cout << "cheia" << endl;
	}
	//e se for entre 96 e 3% (diminuindo) é lua minguante.
	else if (p2 >= 3 && p2 <= 96 && p1 > p2)
	{
		cout << "minguante" << endl;
	}

	return 0;
}
