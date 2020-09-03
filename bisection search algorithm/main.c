#include<stdio.h>
#include<math.h>
#include<windows.h>

double sroot(int num);
double absol(double num);

int main(void)
{
	int num;
	char ch;
	do {
		printf("\nEnter a number to find its square root: ");
		scanf_s("%d", &num);
		printf("\nAns: %lf", sroot(num));
		printf("\nContinue (y/n ?): \n");
		ch = getche();
	} while (ch == 'y');
}

double sroot(int num)
{
	int count = 0;
	double max = num;
	double min = 0;
	double ans = (max + min) / 2;

	printf("\n\n\nNumber of guesses: %d  |  Max: %lf  |  Min: %lf  |  Ans: %lf", count, max, min, ans);

	while (absol(ans * ans - num) >= 0.000001)
	{
		if (ans * ans > num)
		{
			max = ans;
		}
		else
		{
			min = ans;
		}

		ans = (max + min) / 2;
		count++;

		printf("\n\n\nNumber of guesses: %d  |  Max: %lf  |  Min: %lf  |  Ans: %lf", count, max, min, ans);

	}

	return ans;
}

double absol(double num)
{
	if (num < 0)
		return -num;
	else
		return num;
}