#include "main.h"
/**
* _strcmp - compare string values
* @s1: input value
* @s2: input value
* Return: s1[i] - s2[i] if false and - 0 if true
*/
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] && s2[i])
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
