#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: param
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j, len;

	len = strlen(*a) / 8;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != ' ')
				printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
