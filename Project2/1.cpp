#include <stdio.h>
#include <iostream>
using namespace std;

int alien(int n)
{
	int c;
	for (c = 0; n; c++)
		n &= n - 1;
	return c;
}

int main()
{
	printf("%d", alien(1024 * 1024 * 1024 - 1024 * 1024 - 1024 - 1));
	system("pause");

}