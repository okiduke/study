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
	cout << "���O : "   << student.name          << endl
	     << "  ���� : " << student.scoreJapanese << " �_"
		    ", ���w : " << student.scoreMath     << " �_"
		    ", �p�� : " << student.scoreEnglish  << " �_" << endl;
}

int main() {
	Student student[] = {
		{ "�Ԉ�F", 73, 98, 86, },
		{ "�}����", 64, 45, 40, },
		{ "�g�c��", 76, 78, 69, },
	};
	int size = sizeof student / sizeof *student;

	for (int i = 0; i < size; ++i) {
		Show(student[i]);
	}
}