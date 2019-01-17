#include "fib.h"

Fib::Fib() {}

int Fib::next() {
	int next = curr + prev;
	prev = curr;
	curr = next;
	return next;
}
