#include <iostream>
#include <stdio.h>
using namespace std;

long long int merge_count(int A[], int B[], int p, int q, int r)
{
	int i, j, k;

	long long int c;

	for(i = p; i <= q; i++)
		B[i] = A[i];

	for(j = q + 1; j <= r; j++)
		B[r + q + 1 - j] = A[j];

	i = p;
	j = r;
	c = 0;

	for(k = p; k <= r; k++)
	{
		if(B[i] <= B[j])
		{
			A[k] = B[i];
			i = i + 1;
		}
		else
		{
			A[k] = B[j];
			j = j - 1;
			c = c + (q - i + 1);
		}
	}

	return c;

}



long long int sort_count(int A[], int B[], int i, int j)
{
	int q;
	if(i >= j ) return 0;
	else
	{
		q = (i + j) / 2;
		return sort_count(A, B, i, q) +
			   sort_count(A, B, q + 1, j) +
			   merge_count(A, B, i, q, j);
	}

}

int main(int argc, char *argv[])
{
	int v1[100001], i, n, c;
	int v2[100001];
	while(1)
	{
		scanf("%d", &n);
		if (n == 0) break;
		else
		{
			c = 0;
			for(i = 0; i < n; i++)
			{
				scanf("%d", &v1[i]);
				v2[i] = v1[i];
			}
			//int v1[] = {1, 5, 3, 4, 2}; //1,3,2,5 //1,2,3,5
			//int v2[5];
			c = sort_count(v1, v2, 0, i-1);
			if (c % 2 != 0) printf("Marcelo\n");
			else printf("Carlos\n");
		}

	}

	return 0;
}