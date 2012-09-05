#include <iostream>
using namespace std;

int main ()
{
	cout << "Hello, World!" << endl;

	//adds all multiples of 3 and 5 below 1000
	int result = 0;
	for(int i = 0; i < 1000; i++){
		if(i % 3 == 0 && i % 5 == 0 ) {
			result = result + i;
		}
		else if(i % 5 == 0 ) {
			result = result + i;
		}
		else if(i % 3 == 0 ) {
			result = result + i;
		}
	}
	cout << result << endl;
}
