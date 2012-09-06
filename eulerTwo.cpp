#include <iostream>
#include <string>
using namespace std;

int fib(int);

int fib(int in) {
	int out;
	if(in == 0 || in == 1)
		out = in;
	else
		out = (fib(in-2) + fib(in-1));
	return out;
}

int main() {
	int c = 0;
	int number;
	int sum = 0;

	while (true) {
		number = fib(c);
		if (number >= 4000000)
			break;
		if(number % 2 == 0)
			sum += number;
		c++;
	}

	cout << sum << endl;
}
