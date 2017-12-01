#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	unsigned int qtdCarry, carry, num1, num2, maior, menor, digitoMenor, digitoMaior;
	while(1)
	{
		//01. Capturo os dois números
		cin >> num1 >> num2;

		//02. Se ambos forem 0, eu termino o programa
		if (num1 == 0 && num2 == 0) break;

		else
		{
			//03.Capturo o menor e o maior número
			if (num1 < num2)
			{
				menor = num1;
				maior = num2;
			}
			else
			{
				menor = num2;
				maior = num1;
			}
			//04. Inicio o carry, qtdCarry e os dígitos como 0 (zero)
			carry = 0;
			digitoMenor = 0;
			digitoMaior = 0;
			qtdCarry = 0;


			//05.Percorro os dígitos de mesma unidade dos dois (de i=digitoMenosSignificativo até i=oMais; do maior)
			while (maior > 0)
			{
				//06. Capturo o dígito menos significativo de cada um
				digitoMenor = menor % 10;
				digitoMaior = maior % 10;

				//07. Verifico se a soma dos dois é maior que 9; se for, carry=1 e qtdCarry++;
				if (digitoMenor + digitoMaior + carry > 9)
				{
					carry = 1;
					qtdCarry++;
				}
				else 
				{
					carry = 0;
				}

				//08. Atualizo o menor e o maior, dividindo cada um por 10
				menor = menor / 10;
				maior = maior / 10;
			}
			/*
			No carry operation.
			3 carry operations.
			1 carry operation.
			*/
			if (qtdCarry == 0) cout << "No carry operation." << endl;
			else if (qtdCarry == 1) cout << "1 carry operation." << endl;
			else cout << qtdCarry << " carry operations." << endl;
		}
	}
	return 0;
}