#include <iostream>
#include<limits.h>
using namespace std;
int reverse(int x) {
	//int sign = x > 0 ? 1 : -1;
	int result = 0,pop = 0;
	while (x) {
		pop = x % 10;
		
		if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && pop > 7)) {
			return 0;
		}
		if (result < (INT_MIN / 10) || (result == (INT_MIN / 10) && pop < -8)) {
			return 0;
		}
		result = result * 10 + pop;
		x /= 10;
	}
	return result;
}

int main()
{
	cout << (-18 % 10);
}

