#include <iostream>
#include <iomanip>
#include <cmath>
#define g 9.80665
#define pi 3.14159
using namespace std;

double senoDe(double angulo)
{
    return (sin((angulo * pi) / 180.0));
}

double cossenoDe(double angulo)
{
    return (cos((angulo * pi) / 180.0));
}

int main(int argc, char *argv[])
{
    double Voy, Vox, v, alcance, altura, h, angulo, h0;
    int n, p1, p2;
    while (cin >> h0) //captura altura inicial do pato
    {
        h = 0.0;
        cin >> p1 >> p2; //ponto inicial e final da cidade nlogonia
        cin >> n; //captura a quantidade de tentativas
        for (int i = 0; i < n; i++)
        {
            cin >> angulo >> v; //captura o ângulo e a velocidade
            altura = ((v * senoDe(angulo)) * (v * senoDe(angulo))) / (2 * g); //altura = ((v*senoDe(angulo))²)/(2*g);
            h = h0 + altura; //somando a altura inicial do pato com a altura encontrada na fórmula anterior
            Voy = v*senoDe(angulo);
            Vox = v*cossenoDe(angulo);
            alcance=((Vox*Voy)/g)+(Vox*(sqrt((2*h)/g))); //alcance=v*(v+(raizQuadradaDe(2*g*h)));
            if (!(alcance >= p1 && alcance <= p2)) cout << fixed << setprecision(5) << alcance  << " -> NUCK" << endl; //exibe o alcance
            else cout << fixed << setprecision(5) << alcance  << " -> DUCK" << endl;
        }
    }
    return 0;
}