//sum of even numbers in the Fibonacci sequence under 4000000

#include <iostream>

using namespace std;

//fibonacci sequence code(int fib) by Jonathan Landrum

int fib(int num) {
	int result;
	if(num == 0 || num == 1)
		result = num;
	else
		result = (fib(num-2) + fib(num-1));
	return result;
}

int main() {
	int sum = 0;
	int i=0;
	while (fib(i) < 4000000) {
		if(fib(i) % 2 == 0)
			sum = sum + fib(i);
		i++;
	}

	cout << sum << endl;
}
