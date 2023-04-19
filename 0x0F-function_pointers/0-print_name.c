/**
 * print_name - function that prints name
 * @name: name
 * @f: function pointer
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
