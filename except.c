#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
/*g is a global variable*/
int g = 10;
struct var_state {
	unsigned char *address;
	unsigned int size;
	int data;
	struct var_state *var_state_next;
}
struct var_state *var_state_head;

/*TODO: implement save_state()*/
void save_state(void *addr, unsigned int size) {
	struct var
}

void restore_state() ;
	
void signal_handler() {
	for (int i = 1; i < 32; i++) {
		signal(i, signal_handler);
	}
}

void f() {
	int x;
	char *p;
	x = 11;
	p = (char *) malloc (ARRAY_SIZE);
	p[0] = p[1] = 'x';
	/*TODO: Register signal handler for all the signals*/

	/*TODO: save x, g, and p by invoking save_state() on each of them*/

	/*NOTE: you must save not only p, but also the memory p points to!*/
	jmp_buf env;
	if(!setjmp(env)) {
		g = 30;
		x = 100;
		p = 0;
		p[0] = p[1] = p[2] = 'x';
	} else {
		restore_state();
		printf("%d, %d, %c, %c\n", g, x, p[0], p[1]); /*expected 10, 11, x, x */
	}
}
