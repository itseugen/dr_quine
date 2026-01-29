#include <stdio.h>

int	main()
{
	char	*str =
	"#include <stdio.h>%c%cint	main()%c{%c	char	*str =%c	%c%s%c;%c	printf(str, 10, 10, 10, 10, 10, 34, str, 34, 10, 10, 10, 10);%c	return (0);%c}%c";
	printf(str, 10, 10, 10, 10, 10, 34, str, 34, 10, 10, 10, 10);
	return (0);
}
