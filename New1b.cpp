#include <iostream>
#include <new> // nothrow を使う場合はこれが必要
using namespace std;

int main() {
	int* p = new(nothrow) int;

	if (p != NULL) {
		*p = 0;
		cout << *p << endl;

		delete p;
	}
}