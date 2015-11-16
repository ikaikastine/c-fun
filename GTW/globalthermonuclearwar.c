#include <stdio.h>
#include <stdlib.h>

int main () {
	char *play = "SHALL WE PLAY A GAME?\n TIC-TAC-TOE\n BLACK JACK\n HEARTS\n BRIDGE\n CHECKERS\n CHESS\n POKER\n GLOBAL THERMONUCLEAR WAR\n";

	int i = 0;

	while(play[i] != '\0') {
		putchar(play[i]);
		fflush(stdout);
		usleep(100000);
		i++;
	}

	return 0;
}
