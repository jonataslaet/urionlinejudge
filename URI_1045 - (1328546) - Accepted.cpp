#include <stdio.h>

int main()
{
	double ax, bx, cx, a, b, c;

//	for (;;)
	//{
	scanf("%lf %lf %lf", &ax, &bx, &cx);
	//ax ? maior
	if (ax >= bx && ax >= cx)
	{
		a = ax;
		b = bx;
		c = cx;
	}
	//bx ? maior
	else if (bx >= ax && bx >= cx)
	{
		a = bx;
		b = ax;
		c = cx;
	}
	//cx ? maior
	else if (cx >= ax && cx >= bx)
	{
		a = cx;
		b = bx;
		c = ax;
	}
	//printf("(A = %.2lf)(B = %.2lf)(B = %.2lf)\n", a, b, c);
	if ((a >= (b + c)) || ((a <= 0) || (b <= 0) || (c <= 0))) printf("NAO FORMA TRIANGULO\n");
	else
	{
		if ((a * a) == ((b * b) + (c * c))) printf("TRIANGULO RETANGULO\n");
		if ((a * a) > ((b * b) + (c * c))) printf("TRIANGULO OBTUSANGULO\n");
		if ((a * a) < ((b * b) + (c * c))) printf("TRIANGULO ACUTANGULO\n");
		if (a == b && a == c) printf("TRIANGULO EQUILATERO\n");
		if ((b == c && c != a) || (b == a && c != a) || (c == a && b != a)) printf("TRIANGULO ISOSCELES\n");
	}
	//}


	return 0;
}