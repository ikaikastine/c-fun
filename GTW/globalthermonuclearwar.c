#include <stdio.h>
#include <stdlib.h>

int main () {
	char *play = "SHALL WE PLAY A GAME?\n TIC-TAC-TOE";

	int i = 0;

	while(play[i] != '\0') {
		putchar(play[i]);
		fflush(stdout);
		usleep(100000);
		i++;
	}

	return 0;
}
