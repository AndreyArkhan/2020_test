#include <stdio.h>
 
char *month_name (int n);
 
main () {
	int m, i;
	char *ch;
	char str[20];
// 1 ---------------------------------------------
	scanf("%d", &m);
	ch = month_name(m);
	i = 0;
	while (*ch != '\0') {
		str[i] = *ch;
		ch++;
		i++;
	}
	str[i] = '\0';
	printf("%s\n", str);
// 2 ---------------------------------------------
	scanf ("%d", &m);
	ch = month_name(m);
	while (*ch != '\0')
		printf("%c", *ch++);
	printf("\n");
// 3 --------------------------------------------
	scanf ("%d", &m);
	ch = month_name(m);
	printf ("%s\n", ch);
}
 
char *month_name (int n) {
	static char *months[] = {
		"Illegal month",
		"January", "February", "March",
		"April", "May", "June",
		"July", "August", "September",
		"October", "November", "December"
	};
 
	return (n < 1 || n > 12) ? months[0] : months[n];
}