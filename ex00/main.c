#include <stdio.h>

/*
* A comment about how my need for newlines makes this project needlessly more complex looking
*/

int	function_without_much_use()
{
	/*
	* Inline comment
	*/
	return (0);
}

int	main()
{
	char	*str =
	"#include <stdio.h>%c%c/*%c* A comment about how my need for newlines makes this project needlessly more complex looking%c*/%c%cint	function_without_much_use()%c{%c	/*%c	* Inline comment%c	*/%c	return (0);%c}%c%cint	main()%c{%c	char	*str =%c	%c%s%c;%c	printf(str, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, str, 34, 10, 10, 10, 10);%c	return (0);%c}%c";
	printf(str, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, str, 34, 10, 10, 10, 10);
	return (0);
}
