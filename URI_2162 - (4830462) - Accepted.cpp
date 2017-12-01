#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

	int H[101], N, pico = 0, vale = 0, valor = 1;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> H[i];
		if (i == 1 && valor == 1)
		{
			//Se é maior que a medida anterior, considera-se pico
			if (H[i] > H[i - 1])
			{
				pico = 1;
				vale = 0;
			}

			//Se é menor que a medida anterior, considera-se vale
			else if (H[i] < H[i - 1])
			{
				vale = 1;
				pico = 0;
			}
			else
			{
				valor = 0;
			}
		}
		else if (i > 1 && valor == 1)
		{
			//Se é maior que a medida anterior, considera-se pico
			if (H[i] > H[i - 1])
			{
				if (pico == 1) valor = 0;
				pico = 1;
				vale = 0;
			}

			//Se é menor que a medida anterior, considera-se vale
			else if (H[i] < H[i - 1])
			{
				if (vale == 1) valor = 0;
				vale = 1;
				pico = 0;
			}
			else
			{
				valor = 0;
			}
		}
	}
	cout << valor << endl;
	return 0;
}