#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<char> s{ 'a', 'q' };
	cout << "Insert c, s, and p." << endl;
	s.insert('c');
	s.insert('s');
	s.insert('p');

	// Version 01. Iterate through the elements in a set using an iterator
	cout << "Set contents version 01: ";
	set<char>::iterator p;
	for (p = s.begin(); p != s.end(); ++p) {
		cout << *p << " ";
	}
	cout << endl;

	// Version 02. Iterate through the elements in a set using auto with a range-based for loop
	cout << "Set contents version 02: ";
	for (auto item : s) {
		cout << item << " ";
	}
	cout << endl;

	// Version 03. Iterate through the elements using a iterator defined as auto
	cout << "Set contents version 03: ";
	for (auto p = s.begin(); p != s.end(); ++p) {
		cout << *p << " ";
	}


}
