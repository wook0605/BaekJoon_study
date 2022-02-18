#include <iostream>
#include <string>

using namespace std;

int main()
{
	string A, B;
	char temp = ' ';
	cin >> A >> B;

	temp = A[0];
	A[0] = A[2];
	A[2] = temp;

	temp = B[0];
	B[0] = B[2];
	B[2] = temp;

	if (stoi(A) > stoi(B)) cout << A;
	else cout << B;
}