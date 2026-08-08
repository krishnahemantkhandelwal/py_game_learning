#include <iostream>
using namespace std;

class student{
	public:
		virtual void resuilt() {
			cout << "Student resuilt" << end;
		}
};

class Rahul:public student{
	public:
		void resuilt() {
			
		}
};
