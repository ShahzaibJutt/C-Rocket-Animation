#include <stdio.h>
#include <time.h>

void delay(int number_of_seconds);//function for yime delay

int main(int argc, char const *argv[]) {
		int slash,row,space,stars,line,i;
		//bring the cursor to the bottom
		for (i=0; i<100; i++)
				printf("\n" );

		//for printing the upper part of rocket
		for(row=0; row<5; row++)
		{

				printf("\t\t\t\t\t\t");//bring the cursor at the center of screen
				/*I know its not the best way to move the cusor suggest any alternative function*/
				for(space=0; space<5-row; space++)
						printf(" ");
				for(slash=0; slash<=row; slash++)
				{
						printf("/");
				}
				printf("*");
				for (slash=0; slash<=row; slash++)
				{
						printf("\\");
				}
				printf("\n");
		}
		printf("\t\t\t\t\t\t");
		for(stars=0; stars<=5; stars++)
		{
				printf("*=");
		}
		printf("+\n");
		printf("\t\t\t\t\t\t|-----------|\n");
		//middle rocket
		for(line=0; line<10; line++)
		{
				if (line==5)
				{
						printf("\t\t\t\t\t\t|_._. N ._._|\n"); line++;
						printf("\t\t\t\t\t\t|_._. A ._._|\n"); line++;
						printf("\t\t\t\t\t\t|_._. S ._._|\n"); line++;
						printf("\t\t\t\t\t\t|_._. A ._._|\n"); line++;
				}
				printf("\t\t\t\t\t\t|_._._._._._|");
				printf("\n" );
		}

		printf("\t\t\t\t\t\t|___________|\n");


		printf("\t\t\t\t\t\t");
		for(stars=0; stars<=5; stars++)
		{
				printf("*=");
		}
		printf("+\n");
		//end part of the rocket
		for(row=0; row<5; row++)
		{

				printf("\t\t\t\t\t\t");//bring the cursor at the center of screen
				/*I know its not the best way to move the cusor suggest any alternative function*/
				for(space=0; space<5-row; space++)
						printf(" ");
				for(slash=0; slash<=row; slash++)
				{
						printf("/");
				}
				printf("*");
				for (slash=0; slash<=row; slash++)
				{
						printf("\\");
				}
				delay(1);
				printf("\n");
		}
		delay(1);
		//for thrust
		for (stars=0; stars<10; stars++)
		{
				printf("\t\t\t\t\t\t ************\n" );
				delay(1);
		}
		for (stars=0; stars<8; stars++)
		{
				printf("\t\t\t\t\t\t   ********\n");
		}
		for (stars=0; stars<7; stars++)
		{
				printf("\t\t\t\t\t\t     ****\n");
				delay(1);
		}
		for(stars=0; stars<4; stars++)
		{
				printf("\t\t\t\t\t\t      **\n");
		}
		delay(1);
		//removing the thrust
		for(line=0; line<30; line++)
		{
			if(line==15)
			{
				printf("\t\t\t\t\t\tRocket has Gone!\n");
			}
				printf("\n");
		}
		return 0;
}

//delay function
void delay(int number_of_seconds)
{
		// Converting time into milli_seconds
		int milli_seconds = 400 * number_of_seconds;

		// Stroing start time
		clock_t start_time = clock();

		// looping till required time is not acheived
		while (clock() < start_time + milli_seconds);
}
