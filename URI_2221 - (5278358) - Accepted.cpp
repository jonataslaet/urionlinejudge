#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
	int b, t, AiD, DiD, LiD, AiG, DiG, LiG, ValGolpeD, ValGolpeG;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &b);
		scanf("%d %d %d", &AiD, &DiD, &LiD);
		scanf("%d %d %d", &AiG, &DiG, &LiG);
		ValGolpeD = ((AiD + DiD)/2);
		if (LiD % 2 == 0) ValGolpeD += b;
		ValGolpeG = ((AiG + DiG)/2);
		if (LiG % 2 == 0) ValGolpeG += b;
		if (ValGolpeD > ValGolpeG) printf("Dabriel\n");
		else if (ValGolpeD == ValGolpeG) printf("Empate\n");
		else printf("Guarte\n");
	}
	return 0;
}