#include <iostream>
using namespace std;

class student{
	public:
		int id;
		string name;
};

int main() {
	student s;
	s.id= 101;
	s.name= "Krishna";
	cout << "name is: " << s.name << endl;
	cout << "id is: " << s.id <<  endl;
}
