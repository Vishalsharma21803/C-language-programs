// Arrays
#include <stdio.h>
int main()
{
	int myarray[5];
	myarray[0] = 1;
	myarray[1] = 2;
	myarray[2] = 3;
	myarray[3] = 4;
	myarray[4] = 5;
	printf("%d %d %d %d %d", myarray[0], myarray[1], myarray[2], myarray[3], myarray[4]);
	return 0;
}

//_________________________________________

// printing array using for loop
#include <stdio.h>
int main()
{
	int array2[5];
	array2[0] = 1;
	array2[1] = 2;
	array2[2] = 3;
	array2[3] = 4;
	array2[4] = 5;
	for (int i = 0; i <= 5; i++)
	{
		printf("%d", array2[i]);
	}
	return 0;
}

//_________________________________________

// taking input of array value through for loop
#include <stdio.h>
int main()
{
	int myarray[5];
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &myarray[i]); // automatic i ki values leta rahega aur array mein input karta rahega
	}
	return 0;
}

//_________________________________________

// array
#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements of array: ");
	scanf("%d", &n);
	int myarray[n];
	for (int i = 0; i <= n; i++)
	{
		printf("Enter %d value: ", i + 1);
		scanf("%d", &myarray[i]);
	}
	for (int j = 0; j <= n; j++)
	{
		printf("%d", myarray[j]);
	}
	return 0;
}

//_________________________________________

#include <stdio.h>
int main()
{
	int n;
	printf("Enter the range of Array : ");
	scanf("%d", &n);
	int a[n];

	for (int i = 0; i < n; i++)
	{
		printf("Enter %d element : ", i + 1);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	printf("Sorted Array is : ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\nmin is: %d", a[0]);
	printf("\nmax is : %d", a[n - 1]);
	return 0;
}

//_________________________________________

#include <stdio.h>
int main()
{
	int i, j, m;
	int a[5] = {5, 1, 15, 20, 25};
	i = ++a[1];
	j = a[1]++;
	m = a[i++];
	printf("%d %d %d", i, j, m);
	return 0;
}

//_________________________________________

#include <stdio.h>
int main()
{
	int a[6] = {1, 5, 4, 6, 9, 7};
	for (int i = 0; i < 6; i++)
	{
		if (a[i] % 2 != 0)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			continue;
		}
	}
	return 0;
}

//_________________________________________

#include <stdio.h>
int main()
{
	int a[5] = {5, 6, 8, 9, 10};
	for (int i = 0; i < 5; i++)
	{
		if (a)
			[i] % 5 == 0
			{
				a[i] = a[i] * (-1);
				printf("%d\n", a[i]);
			}
		else
		{
			continue;
		}
	}
}
