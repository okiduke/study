#include <iostream>
using namespace std;

const int MAX_NAME = 16;

class Student {
public:
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;
};

void Show(const Student& student) {
	cout << "–¼‘O : "   << student.name          << endl
	     << "  ‘Œê : " << student.scoreJapanese << " “_"
		    ", ”Šw : " << student.scoreMath     << " “_"
		    ", ‰pŒê : " << student.scoreEnglish  << " “_" << endl;
}

int main() {
	Student student[] = {
		{ "ÔˆäF", 73, 98, 86, },
		{ "Š}ˆä‘å‰î", 64, 45, 40, },
		{ "‹g“cŠ", 76, 78, 69, },
	};
	int size = sizeof student / sizeof *student;

	for (int i = 0; i < size; ++i) {
		Show(student[i]);
	}
}