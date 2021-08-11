#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	char book;
	int cif;
	scanf("%c%d", &book, &cif);
	if ((((book == 'A') || (book == 'C') || (book == 'E') || (book == 'G')) && (cif % 2 != 0)) || 
		(((book == 'B') || (book == 'D') || (book == 'F') || (book == 'H')) && (cif % 2 == 0))) cout << "BLACK";
	else
		cout << "WHITE";
	return 0;
}