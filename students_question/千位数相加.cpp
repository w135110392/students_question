#include<stdio.h>
#include<stdlib.h>
#include<string>
void getString(char s[]);
int mainqianwei() {
	char first[80], end[80];
	getString(first);
	int i;
	for (i = 0; i < 80; i++) {
		if (first[i] == '\n')	break;

		if (first[i] >= 'A' && first[i] <= 'Z') {
			end[i] =  'A'+'Z'-first[i];
			
		}
		else {
			end[i] = first[i];
		}

	}
	end[i+1] = '\0';
	printf("%s", end);
	
	system("pause");
	return 0;
}


void getString(char s[]) {
	int i = -1;
	do {
		i++;
		s[i] = getchar();
	} while (s[i] != '\n');

}