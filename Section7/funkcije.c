#include <math.h>

typedef int op(int, int);


//int operacija(int(*f)(int, int), int s, int b) {
int operacija(op *f, int a, int b) {

	return f(a, b);

}


int add(int a, int b ) {

	return a+b;


}

int mull(int a, int b ) {

	return a*b;


}

int trig(double (*f) (double), double x ) {

	return f(x);

}

int man(void) {

	int a = 5; int b = 6;

	int c = operacija(add, a, b);
	int d = operacija(mull, a, b);
	printf("%d, %d\n", c, d);

	double y = trig(sin, 0);

	return 0;
}
