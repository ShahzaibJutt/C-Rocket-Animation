#include <stdio.h>
#include <time.h>

void delay(int number_of_seconds);//function for yime delay

int main(int argc, char const *argv[]) {
		int slash,row,space,stars,line,i,cols;
		//bring the cursor to the bottom
		FILE *fp;//for getting terminal windows status
		char var[40];
		fp = popen("mode con /status ", "r");//fp = popen("tput cols", "r");
		//For unix based system use
		//tput cols
		//tput lines
		while (fgets(var, sizeof(var), fp)!= NULL)
		{
				printf("%s",var);
		}
		pclose(fp);
		printf("Enter the no of columns\n");
		scanf("%d",&cols);
		for (i=0; i<50; i++)
				putchar('\n' );

		//for printing the upper part of rocket
		for(row=0; row<5; row++)
		{
				for(i=0; i<(cols/2); i++)
						putchar(' ');
				for(space=0; space<5-row; space++)
						putchar(' ');
				for(slash=0; slash<=row; slash++)
				{
						putchar('/');
				}
				putchar('*');
				for (slash=0; slash<=row; slash++)
				{
						putchar('\\');
				}
				putchar('\n');
		}
		for(i=0; i<(cols/2); i++)
				putchar(' ');
		for(stars=0; stars<=5; stars++)
		{
				putchar('*'); putchar('=');
		}
		putchar('+'); putchar('\n');
		for(i=0; i<(cols/2); i++)
				putchar(' ');
		for(i=0; i<13; i++)
		{
				if(i==0||i==12)
						putchar('|');
				else
						putchar('-');
		}
		putchar('\n');
		//middle rocket
		for(line=0; line<10; line++)
		{
				for(i=0; i<(cols/2); i++)
						putchar(' ');
				putchar('|');
				for(i=0; i<11; i++)
				{
						if(line==4&&i==4)
						{
								putchar('N'); i++;
								putchar('S'); i++;
								putchar('F'); i++;
						}
						putchar(' ');
				}
				putchar('|');
				putchar('\n');
		}
		for(i=0; i<(cols/2); i++)
				putchar(' ');
		for(i=0; i<13; i++)
		{
				if(i==0||i==12)
						putchar('|');
				else
						putchar('_');
		}
		putchar('\n');
		// bottom part
		delay(1);
		for(row=0; row<5; row++)
		{
				for(i=0; i<(cols/2); i++)
						putchar(' ');
				for(space=0; space<5-row; space++)
						putchar(' ');
				for(slash=0; slash<=row; slash++)
				{
						putchar('/');
				}
				putchar('*');
				for (slash=0; slash<=row; slash++)
				{
						putchar('\\');
				}
				putchar('\n');
		}
		//for thrust
		delay(1);
		for(i=0; i<30; i++)
		{
				for(space=0; space<(cols/2); space++)
						putchar(' ');
				if(i<8)
				{
						for(stars=13; stars>0; stars--)
						{
								putchar('*');
						}
				}
				else if(i>8&&i<15)
				{
						for(space=0; space<3; space++)
								putchar(' ');
						for(stars=8; stars>0; stars--)
						{
								putchar('*');
						}
				}
				else if(i>15&&i<25)
				{
						for(space=0; space<5; space++)
								putchar(' ');
						for(stars=4; stars>0; stars--)
						{
								putchar('*');
						}
				}
				else if(i>25)
				{
						for(space=0; space<6; space++)
								putchar(' ');
						for(stars=2; stars>0; stars--)
						{
								putchar('*');
						}
				}
				putchar('\n');
				delay(1);
		}
		for(i=0; i<50; i++)
				putchar('\n');
		return 0;
}
//delay function
void delay(int number_of_seconds)
{
		// Converting time into milli_seconds
		int milli_seconds = 200 * number_of_seconds;

		// Stroing start time
		clock_t start_time = clock();

		// looping till required time is not acheived
		while (clock() < start_time + milli_seconds);
}
