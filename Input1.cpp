#include <iostream>
using namespace std;

int main() {
    int a;
    
    cout << "何か値を入れてね > " << flush;
    cin >> a;
    
    cout << "その数を3で割った余りは " << a % 3 << " です。" << endl;
}
