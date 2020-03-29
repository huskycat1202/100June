#include <iostream>
#include <string>
using namespace std;

int main(){
	string x;
	for (int i = 0; i < 100 || !cin.eof(); i++)
	{
		getline(cin, x);
		cout << x << endl;
	}
	return 0;
}