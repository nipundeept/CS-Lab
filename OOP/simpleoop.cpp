#include <iostream>
#include <string>
using namespace std;
class Student
{
	const int id;
	string name;
	public:
		Student(int id, string name) {
			this->id = id;
			this->name = name;
		}
		void display() {
			cout << "A student object" << endl;
		}
		int getId() {
			return id;
		}
		void setName(string s) {
			this->name = s;
		}
		void setID(int n) {
			this->id = id;
		}
		string getName() {
			return name;
		}
		
};
int main() {
	Student s(101, "Nipun");
	s.display();
	s.setName("ABC");
	cout << s.getId() << endl;
	cout << s.getName() << endl;
	return 0;
}
