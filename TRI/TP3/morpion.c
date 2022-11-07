#include <stdio.h>
#include <stdlib.h>

void print_grille(int points[3][3]);
int ask_position(int points[3][3], int *current);
int test_position(int points[3][3], int row, int col);
void check_game(int points[3][3], int *winner);

int main(int argc, char const *argv[])
{
	int grille[3][3] = {
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}};

	int current = 0;
	int winner = 0;

	do
	{
		print_grille(grille);
		ask_position(grille, &current);
		check_game(grille, &winner);
	} while (winner == 0 && winner != 10);

	print_grille(grille);

	if (winner < 10)
		printf("Bravo aux %c qui ont gagne !\n", winner == 1 ? 'X' : 'O');
	else
		printf("Egalite !\n");

	return 0;
}

void print_grille(int points[3][3])
{
	printf("     a   b   c  \n");
	for (int i = 0; i < 3; i++)
	{
		printf("   +---+---+---+\n");
		printf(" %d |", i + 1);
		for (int j = 0; j < 3; j++)
		{
			char c = ' ';

			if (points[i][j] == 1)
				c = 'X';
			else if (points[i][j] == -1)
				c = 'O';

			printf(" %c |", c);
		}
		printf("\n");
	}
	printf("   +---+---+---+\n");
}

int ask_position(int points[3][3], int *current)
{
	printf("Placer un pion %c (Exemple: a 2) > ", *current >= 0 ? 'X' : '0');
	char col;
	int row;

	scanf("%c %d", &col, &row);
	while (getchar() != '\n')
		;

	int col_d = col - 97;

	if (col_d < 0 || col_d > 2)
	{
		printf("Colonne invalide !\n");
		return 0;
	}

	if (row < 0 || row > 3)
	{
		printf("Ligne invalide !\n");
		return 0;
	}

	row = row - 1;

	if (!test_position(points, row, col_d))
	{
		printf("Position deja utilise !\n");
		return 0;
	}

	points[row][col_d] = *current >= 0 ? 1 : -1;

	*current = *current >= 0 ? -1 : 1;
	return 1;
}

int test_position(int points[3][3], int row, int col)
{
	return points[row][col] == 0;
}

void check_game(int points[3][3], int *winner)
{
	int win_x = 0;
	int win_o = 0;

	for (int x = 0; x < 3; x++)
	{
		if ((points[x][0] == 1 && points[x][1] == 1 && points[x][2] == 1) || (points[0][x] == 1 && points[1][x] == 1 && points[2][x] == 1))
		{
			win_x = 1;
		}
		if ((points[x][0] == -1 && points[x][1] == -1 && points[x][2] == -1) || (points[0][x] == -1 && points[1][x] == -1 && points[2][x] == -1))
		{
			win_o = 1;
		}
	}

	if ((points[0][0] == 1 && points[1][1] == 1 && points[2][2] == 1) || (points[0][2] == 1 && points[1][1] == 1 && points[2][0] == 1))
		win_x = 1;
	if ((points[0][0] == -1 && points[1][1] == -1 && points[2][2] == -1) || (points[0][2] == -1 && points[1][1] == -1 && points[2][0] == -1))
		win_o = 1;

	int full = 1;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			if (points[x][y] == 0)
			{
				full = 0;
			}
		}
	}
	if (full == 1)
		*winner = 10;

	if (win_x)
		*winner = 1;
	if (win_o)
		*winner = -1;
}
