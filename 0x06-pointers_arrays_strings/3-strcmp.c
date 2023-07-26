#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: frist string
 * @s2: seconde string
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int i, len, len1, len2, val;

	val = 0;
	len1 = strlen(s1); 
	len2 = strlen(s2);
	len = (len1 > len2) ? len2 : len1;
	for (i = 0; i < len ; i++)
	{
		if (s1[i] > s2[i])
		{
			val = 15;
			break;
		}
		else if (s2[i] > s1[i])
                {
                        val = -15;
                        break;
                }
	}
	if (val == 0 && len1 > len)
	{
		val = 15;
	}
	else if (val == 0 && len2 > len)
        {
                val = -15;
        }

	return (val);	
}
