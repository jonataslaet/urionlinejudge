#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n, i, j, aux, x, y; 
	//int p;

	for(;;)
	{
		scanf("%d", &n);
		if (n == 0) break;
		else
		{
			x = 1;
			y = 0;
			//p = 0;
			aux = n - 1;
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					if (n > 2)
					{
						if (i == 0 || i == aux || j == 0 || j == aux)
						{
							x = 1;
							//p++;
						}
						else if (i == 1 || i == (aux-1) || j == 1 || j == (aux-1)) 
						{
							x = 2;
							//p++;
						}
						else if (i == 2 || i == (aux-2) || j == 2 || j == (aux-2)) 
						{
							x = 3;
							//p++;
						}
						else if (i == 3 || i == (aux-3) || j == 3 || j == (aux-3)) 
						{
							x = 4;
							//p++;
						}
						else if (i == 4 || i == (aux-4) || j == 4 || j == (aux-4)) 
						{
							x = 5;
							//p++;
						}
						else if (i == 5 || i == (aux-5) || j == 5 || j == (aux-5)) 
						{
							x = 6;
							//p++;
						}
						else if (i == 6 || i == (aux-6) || j == 6 || j == (aux-6)) 
						{
							x = 7;
							//p++;
						}
						else if (i == 7 || i == (aux-7) || j == 7 || j == (aux-7)) 
						{
							x = 8;
							//p++;
						}
						else if (i == 8 || i == (aux-8) || j == 8 || j == (aux-8)) 
						{
							x = 9;
							//p++;
						}
						else if (i == 9 || i == (aux-9) || j == 9 || j == (aux-9)) 
						{
							x = 10;
							//p++;
						}
						else if (i == 10 || i == (aux-10) || j == 10 || j == (aux-10)) 
						{
							x = 11;
							//p++;
						}
						else if (i == 11 || i == (aux-11) || j == 11 || j == (aux-11)) 
						{
							x = 12;
							//p++;
						}
						else if (i == 12 || i == (aux-12) || j == 12 || j == (aux-12)) 
						{
							x = 13;
							//p++;
						}
						else if (i == 13 || i == (aux-13) || j == 13 || j == (aux-13)) 
						{
							x = 14;
							//p++;
						}
						else if (i == 14 || i == (aux-14) || j == 14 || j == (aux-14)) 
						{
							x = 15;
							//p++;
						}
						else if (i == 15 || i == (aux-15) || j == 15 || j == (aux-15)) 
						{
							x = 16;
							//p++;
						}
						else if (i == 16 || i == (aux-16) || j == 16 || j == (aux-16)) 
						{
							x = 17;
							//p++;
						}
						else if (i == 17 || i == (aux-17) || j == 17 || j == (aux-17)) 
						{
							x = 18;
							//p++;
						}
						else if (i == 18 || i == (aux-18) || j == 18 || j == (aux-18)) 
						{
							x = 19;
							//p++;
						}
						else if (i == 19 || i == (aux-19) || j == 19 || j == (aux-19)) 
						{
							x = 20;
							//p++;
						}
						else if (i == 20 || i == (aux-20) || j == 20 || j == (aux-20)) 
						{
							x = 21;
							//p++;
						}
						else if (i == 21 || i == (aux-21) || j == 21 || j == (aux-21)) 
						{
							x = 22;
							//p++;
						}
						else if (i == 22 || i == (aux-22) || j == 22 || j == (aux-22)) 
						{
							x = 23;
							//p++;
						}
						else if (i == 23 || i == (aux-23) || j == 23 || j == (aux-23)) 
						{
							x = 24;
							//p++;
						}
						else if (i == 24 || i == (aux-24) || j == 24 || j == (aux-24)) 
						{
							x = 25;
							//p++;
						}
						else if (i == 25 || i == (aux-25) || j == 25 || j == (aux-25)) 
						{
							x = 26;
							//p++;
						}
						else if (i == 26 || i == (aux-26) || j == 26 || j == (aux-26)) 
						{
							x = 27;
							//p++;
						}
						else if (i == 27 || i == (aux-27) || j == 27 || j == (aux-27)) 
						{
							x = 28;
							//p++;
						}
						else if (i == 28 || i == (aux-28) || j == 28 || j == (aux-28)) 
						{
							x = 29;
							//p++;
						}
						else if (i == 29 || i == (aux-29) || j == 29 || j == (aux-29)) 
						{
							x = 30;
							//p++;
						}
						else if (i == 30 || i == (aux-30) || j == 30 || j == (aux-30)) 
						{
							x = 31;
							//p++;
						}
						else if (i == 31 || i == (aux-31) || j == 31 || j == (aux-31)) 
						{
							x = 32;
							//p++;
						}
						else if (i == 32 || i == (aux-32) || j == 32 || j == (aux-32)) 
						{
							x = 33;
							//p++;
						}
						else if (i == 33 || i == (aux-33) || j == 33 || j == (aux-33)) 
						{
							x = 34;
							//p++;
						}
						else if (i == 34 || i == (aux-34) || j == 34 || j == (aux-34)) 
						{
							x = 35;
							//p++;
						}
						else if (i == 35 || i == (aux-35) || j == 35 || j == (aux-35)) 
						{
							x = 36;
							//p++;
						}
						else if (i == 36 || i == (aux-36) || j == 36 || j == (aux-36)) 
						{
							x = 37;
							//p++;
						}
						else if (i == 37 || i == (aux-37) || j == 37 || j == (aux-37)) 
						{
							x = 38;
							//p++;
						}
						else if (i == 38 || i == (aux-38) || j == 38 || j == (aux-38)) 
						{
							x = 39;
							//p++;
						}
						else if (i == 39 || i == (aux-39) || j == 39 || j == (aux-39)) 
						{
							x = 40;
							//p++;
						}
						else if (i == 40 || i == (aux-40) || j == 40 || j == (aux-40)) 
						{
							x = 41;
							//p++;
						}
						else if (i == 41 || i == (aux-41) || j == 41 || j == (aux-41)) 
						{
							x = 42;
							//p++;
						}
						else if (i == 42 || i == (aux-42) || j == 42 || j == (aux-42)) 
						{
							x = 43;
							//p++;
						}
						else if (i == 43 || i == (aux-43) || j == 43 || j == (aux-43)) 
						{
							x = 44;
							//p++;
						}
						else if (i == 44 || i == (aux-44) || j == 44 || j == (aux-44)) 
						{
							x = 45;
							//p++;
						}
						else if (i == 45 || i == (aux-45) || j == 45 || j == (aux-45)) 
						{
							x = 46;
							//p++;
						}
						else if (i == 46 || i == (aux-46) || j == 46 || j == (aux-46)) 
						{
							x = 47;
							//p++;
						}
						else if (i == 47 || i == (aux-47) || j == 47 || j == (aux-47)) 
						{
							x = 48;
							//p++;
						}
						else if (i == 48 || i == (aux-48) || j == 48 || j == (aux-48)) 
						{
							x = 49;
							//p++;
						}
						else if (i == 49 || i == (aux-49) || j == 49 || j == (aux-49)) 
						{
							x = 50;
							//p++;
						}
						else if (i == 50 || i == (aux-50) || j == 50 || j == (aux-50)) 
						{
							x = 51;
							//p++;
						}
						else if (i == 51 || i == (aux-51) || j == 51 || j == (aux-51)) 
						{
							x = 52;
							//p++;
						}
						else if (i == 52 || i == (aux-52) || j == 52 || j == (aux-52)) 
						{
							x = 53;
							//p++;
						}
						else if (i == 53 || i == (aux-53) || j == 53 || j == (aux-53)) 
						{
							x = 54;
							//p++;
						}
						else if (i == 54 || i == (aux-54) || j == 54 || j == (aux-54)) 
						{
							x = 55;
							//p++;
						}
						else if (i == 55 || i == (aux-55) || j == 55 || j == (aux-55)) 
						{
							x = 56;
							//p++;
						}
						else if (i == 56 || i == (aux-56) || j == 56 || j == (aux-56)) 
						{
							x = 57;
							//p++;
						}
						else if (i == 57 || i == (aux-57) || j == 57 || j == (aux-57)) 
						{
							x = 58;
							//p++;
						}
						else if (i == 58 || i == (aux-58) || j == 58 || j == (aux-58)) 
						{
							x = 59;
							//p++;
						}
						else if (i == 59 || i == (aux-59) || j == 59 || j == (aux-59)) 
						{
							x = 60;
							//p++;
						}
						else if (i == 60 || i == (aux-60) || j == 60 || j == (aux-60))
						{
							x = 61;
							//p++;
						}
						else if (i == 61 || i == (aux-61) || j == 61 || j == (aux-61)) 
						{
							x = 62;
							//p++;
						}
						else if (i == 62 || i == (aux-62) || j == 62 || j == (aux-62)) 
						{
							x = 63;
							//p++;
						}
						else if (i == 63 || i == (aux-63) || j == 63 || j == (aux-63)) 
						{
							x = 64;
							//p++;
						}
						else if (i == 64 || i == (aux-64) || j == 64 || j == (aux-64)) 
						{
							x = 65;
							//p++;
						}
						else if (i == 65 || i == (aux-65) || j == 65 || j == (aux-65)) 
						{
							x = 66;
							//p++;
						}
						else if (i == 66 || i == (aux-66) || j == 66 || j == (aux-66)) 
						{
							x = 67;
							//p++;
						}
						else if (i == 67 || i == (aux-67) || j == 67 || j == (aux-67)) 
						{
							x = 68;
							//p++;
						}
						else if (i == 68 || i == (aux-68) || j == 68 || j == (aux-68)) 
						{
							x = 69;
							//p++;
						}
						else if (i == 69 || i == (aux-69) || j == 69 || j == (aux-69)) 
						{
							x = 70;
							//p++;
						}
						else if (i == 70 || i == (aux-70) || j == 70 || j == (aux-70)) 
						{
							x = 71;
							//p++;
						}
						else if (i == 71 || i == (aux-71) || j == 71 || j == (aux-71)) 
						{
							x = 72;
							//p++;
						}
						else if (i == 72 || i == (aux-72) || j == 72 || j == (aux-72)) 
						{
							x = 73;
							//p++;
						}
						else if (i == 73 || i == (aux-73) || j == 73 || j == (aux-73)) 
						{
							x = 74;
							//p++;
						}
						else if (i == 74 || i == (aux-74) || j == 74 || j == (aux-74)) 
						{
							x = 75;
							//p++;
						}
						else if (i == 75 || i == (aux-75) || j == 75 || j == (aux-75)) 
						{
							x = 16;
							//p++;
						}
						else if (i == 76 || i == (aux-76) || j == 76 || j == (aux-76)) 
						{
							x = 77;
							//p++;
						}
						else if (i == 77 || i == (aux-77) || j == 77 || j == (aux-77)) 
						{
							x = 78;
							//p++;
						}
						else if (i == 78 || i == (aux-78) || j == 78 || j == (aux-78)) 
						{
							x = 79;
							//p++;
						}
						else if (i == 79 || i == (aux-79) || j == 79 || j == (aux-79)) 
						{
							x = 80;
							//p++;
						}
						else if (i == 80 || i == (aux-80) || j == 80 || j == (aux-80)) 
						{
							x = 81;
							//p++;
						}
						else if (i == 81 || i == (aux-81) || j == 81 || j == (aux-81)) 
						{
							x = 82;
							//p++;
						}
						else if (i == 82 || i == (aux-82) || j == 82 || j == (aux-82)) 
						{
							x = 83;
							//p++;
						}
						else if (i == 83 || i == (aux-83) || j == 83 || j == (aux-83)) 
						{
							x = 84;
							//p++;
						}
						else if (i == 84 || i == (aux-84) || j == 84 || j == (aux-84)) 
						{
							x = 85;
							//p++;
						}
						else if (i == 85 || i == (aux-85) || j == 85 || j == (aux-85)) 
						{
							x = 86;
							//p++;
						}
						else if (i == 86 || i == (aux-86) || j == 86 || j == (aux-86)) 
						{
							x = 87;
							//p++;
						}
						else if (i == 87 || i == (aux-87) || j == 87 || j == (aux-87)) 
						{
							x = 88;
							//p++;
						}
						else if (i == 88 || i == (aux-88) || j == 88 || j == (aux-88)) 
						{
							x = 89;
							//p++;
						}
						else if (i == 89 || i == (aux-89) || j == 89 || j == (aux-89)) 
						{
							x = 90;
							//p++;
						}
						else if (i == 90 || i == (aux-90) || j == 90 || j == (aux-90)) 
						{
							x = 91;
							//p++;
						}
						else if (i == 91 || i == (aux-91) || j == 91 || j == (aux-91)) 
						{
							x = 92;
							//p++;
						}
						else if (i == 92 || i == (aux-92) || j == 92 || j == (aux-92)) 
						{
							x = 93;
							//p++;
						}
						else if (i == 93 || i == (aux-93) || j == 93 || j == (aux-93)) 
						{
							x = 94;
							//p++;
						}
						else if (i == 94 || i == (aux-94) || j == 94 || j == (aux-94)) 
						{
							x = 95;
							//p++;
						}
						else if (i == 95 || i == (aux-95) || j == 95 || j == (aux-95)) 
						{
							x = 96;
							//p++;
						}
						else if (i == 96 || i == (aux-96) || j == 96 || j == (aux-96)) 
						{
							x = 97;
							//p++;
						}
						else if (i == 97 || i == (aux-97) || j == 97 || j == (aux-97)) 
						{
							x = 98;
							//p++;
						}
						else if (i == 98 || i == (aux-98) || j == 98 || j == (aux-98)) 
						{
							x = 99;
							//p++;
						}
						else if (i == 99 || i == (aux-99) || j == 99 || j == (aux-99)) 
						{
							x = 100;
							//p++;
						}
						else
						{
							x++;
						}
						//p++;
					}
					//p++;
					//MOSTRA A 
					if (j < aux) printf("%3d ", x);
					else printf("%3d", x);
					//p++;
				}
				//p++;
				printf("\n");
			}
			printf("\n");
		}
	}

	return 0;
}