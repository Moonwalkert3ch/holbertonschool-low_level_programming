#include <unistd.h>
/** 
 * _putchar - writes the chracter c to stdout
 * Return: always 0 success
*/
int _putchar (char c)
{
return (write(1, &c, 1));
}
