
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>


void main()
{

	int mei=7,mej=1;
	
char maze [9][16] = {
	{'S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S'},
	{'S',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ',' ',' ',' ','S'},
	{'S','X','X',' ','X','X','X',' ','X',' ','X',' ','X','X','X','S'},
	{'S',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ',' ','S'},
	{'S',' ','X','X','X',' ','X',' ','X',' ','X',' ','X','X',' ','S'},
	{'S',' ','X','X','X',' ','X',' ','X',' ','X',' ','X','X',' ','S'},
	{'S',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ','X','X',' ','S'},
	{'S',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ','X','X',' ','S'},
	{'S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S'}};

	char me = 1;
	char lydia= 3;
	
	maze[7][14] = lydia;
	maze[mei][mej] = rat;
	

	while (mei!=7 || mej!=14)
	{
		for (int i=0;i<=8;i++)
		{
			for(int j=0;j<=15;j++)
			{
				printf("%c",maze[i][j]);
			}
		printf("\n");
		}

		char dirhold;
		
		maze[mei][mej] = ' ';

		if (maze[mei-1][mej] == ' ' && dirhold != 'd')
		
		{
			mei--;//Towards Up
			dirhold = 'u';
		}
			
		else if (maze[mei][mej+1]==' ' && dirhold != 'l')
			{
				mej++;//Right
				dirhold='r';
			}
		else if (maze[mei+1][mej] == ' ' && dirhold !='u')
			{
				mei++;//Down
				dirhold = 'd';
			}
		else if (maze[mei][mej-1]==' ' && dirhold != 'r')
			{	
				mej--;//Left
				dirhold = 'l';
			}
		
		/*else if (maze[mei-1][mej] != 'X')
			mei--;
		else if (maze[mei+1][mej] != 'X')
			mei++;
		else if (maze[mei][mej-1]!='X')
			mej--;
		else if (maze[mei][mej+1]!='X')
			mej++;*/
	
		maze[mei][mej] = me;
		
		

		system ("cls");
		Sleep(50);
	}
		

	getch();
	}