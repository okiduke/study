#include <iostream>
#include <new> // nothrow ���g���ꍇ�͂��ꂪ�K�v
using namespace std;

int main() {
	int* p = new(nothrow) int;

	if (p != NULL) {
		*p = 0;
		cout << *p << endl;

		delete p;
	}
}