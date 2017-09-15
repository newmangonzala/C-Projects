// Anthony Newman
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalize (char *);
void censor(char *, const char *);

int main(void) {
	char str[1000];
	const char x[1000];
	printf("string? ");
	fgets(str, 1000+1, stdin);
	capitalize(str);
	printf("pattern? ");
	scanf("%s", x);
	censor(str, x);
	return 0;
}

void capitalize (char *string) {
	int i = 0;
	while (string[i]) {
		putchar(toupper(string[i]));
		++i;
	}
}

void censor(char *string, const char *pattern) {
	int i = 0, p = 0, k, c;
	char comp[1000];
	
	for(i = 0;string[i] != '\n'; ++i, ++p){
		if(string[i] != ' '){
			comp[p] = string[i];
			comp[p+1] = '\0';
		}
		else {
			p = -1;
			comp[0] = '\0';
		}
		
		k = strcmp(comp,pattern);
		if (k == 0) {
			
			for( c = i - p; c <= i; ++c)
				string[c] = 'X';
		}
	}
	printf("%s", string);
	
	return;
}