#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle *tr, int n)
{
	/**
	 * Sort an array a of the length n
	 */
	int *a1 = malloc(n*sizeof(float *));
	// float total;


	for (int j = 0; j < n; j++)
	{
		float total = (tr[j].a + tr[j].b + tr[j].c) / 2.0;
		a1[j] = (total*(total - tr[j].a) * (total - tr[j].b) * (total - tr[j].c));
		// a1[j] = sqrt(total * temp1);
		// printf("teno %d : %d \n", j, temp1);
		// printf("teno %d : %d \n", j, a1[j]);
	}

	int con = 0;
	for (int m = 0; m < n; m++)
	{
		for (int i = 0; i < n-m-1; i++)
		{
			if(a1[i]>a1[i+1])
			{
				int temp5 = a1[i];
				a1[i] = a1[i+1];
				a1[i+1] = temp5;

				int temp2 = tr[i].a;
                int temp3 = tr[i].b;
                int temp4 = tr[i].c;

                tr[i].a = tr[i + 1].a;
                tr[i].b = tr[i + 1].b;
                tr[i].c = tr[i + 1].c;

                tr[i + 1].a = temp2;
                tr[i + 1].b = temp3;
                tr[i + 1].c = temp4;
			}
		}
		
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	printf("\n\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}