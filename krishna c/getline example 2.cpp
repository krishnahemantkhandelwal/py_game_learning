#include <iostream>
#include <string>
using namespace std;

int main()  {
	string data;
	cout << "enter fruits separeted by comma: ";
	getline(cin, data, ',');
	cout << "data before first comma: " << data << endl;
}
