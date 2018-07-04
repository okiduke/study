#include <iostream>
using namespace std;

const int MAX_NAME = 16;

class Student {
public:
    char name[MAX_NAME + 1];
    int  scoreJapanease;
    int  scoreMath;
    int  scoreEnglish;
};

void Show(const Student& student) {
    cout << "名前 : "    << student.name << endl
         << "   国語 : " << student.scoreJapanease << " 点"
            ",  数学 : " << student.scoreMath      << " 点"
            ",  英語 : " << student.scoreEnglish   << " 点" << endl;
}

int main() {
    Student student[] = {
        { "赤井孝"  , 73, 98, 86, },
        { "笠井大介", 64, 45, 40, },
        { "吉田叶"  , 76, 78, 69, },
    };
    int size = sizeof student / sizeof *student;

    for(int i = 0; i < size; ++i) {
        Show(student[i]);
    }
}