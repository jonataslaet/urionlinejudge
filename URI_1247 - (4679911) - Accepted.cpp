#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

//VG > ((VF/12)*(sqrt(144+(D*D))))
//Vg > ((Vf/12)*(144+D²)^¹/²)
int main(int argc, char *argv[])
{
	int D, VF, VG;
	while (cin >> D >> VF >> VG)
	{
		//tg = (sqrt((D*D) + 144))/VG;
		//tf = 12/VF;
		if (((sqrt((D*D) + 144))/((double)VG)) <= (12.0/((double)VF))) printf ("S\n");
		else printf ("N\n");
	}
	return 0;
}