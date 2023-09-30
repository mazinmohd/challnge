#include <stdio.h>


int main(void)
{
	int hi = 100;
	int low = 0;
	int answer = 50;
	char guess;

	printf("think in number between 0 and 100\n");

	while (((low + hi) / 2) <= 100)
	{
		printf("is your guess is %d\n", answer);
		printf("enter h if the guess is high and l if it low and c if it right\n");
		scanf("%c", &guess);

		if (guess == 'h')
		{
			hi = answer;
			answer = (hi + low) / 2;
		}
		else if (guess == 'l')
		{
			low = answer;
			answer = (hi + low) / 2;
		}
		else if (guess == 'c')
		{
			printf("the game is done your answer is %d \n", answer);
			break;
		}
		else
			printf("wrong input\n");
	}
	return 0;
}
