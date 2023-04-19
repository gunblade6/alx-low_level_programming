
/**
 *	print_name - print a name
 *	@name: name to print
 *	@f: function
 *	Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
