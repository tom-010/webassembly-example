#ifndef FIB
#define FIB

class Fib {

public:
	Fib();
	int next();

private:
	int curr = 1;
	int prev = 1;

};

#endif