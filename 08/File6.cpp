#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

const int PAGE_WIDTH = 16;
const int PAGE_HEIGHT = 16;
const int PAGE_SIZE = PAGE_WIDTH * PAGE_HEIGHT;

class DumpFile {
public:
    bool Run(); // 一連の処理を実行

private:
    bool Open(); // ファイルを開く
    void Close(); // ファイルを閉じる
    void Dump(); // 1 ページ分をダンプ
    bool Control(); // ページの制御

private:
    fstream m_file; // ファイル
    int m_page; // 現在のページ
};

bool DumpFile::Run() {
    if(! Open()) {
        return false;
    }
    do {
        Dump();
    } while(Control());

    Close();

    return true;
}

bool DumpFile::Open() {
    string filename;

    cout << "ファイル名 > " << flush;
    getline(cin, filename);

    m_file.open(filename.c_str(), ios::in | ios::binary);
    m_page = 0;

    return m_file.is_open();
}

void DumpFile::Close() {
    m_file.close();
}

void DumpFile::Dump() {
    cout << endl;

    m_file.clear();
    m_file.seekg(m_page * PAGE_SIZE);

    for(int h = 0; h < PAGE_HEIGHT; ++h) {
        unsigned char buf[PAGE_WIDTH];

        m_file.read((char*)buf, sizeof buf);

        for(int w = 0, size = m_file.gcount(); w < size; ++w) {
            printf("%02X ", buf[w]);
        }
        cout << endl;
    }
}

bool DumpFile::Control() {
    while(true) {
        string command;

        cout << "コマンド？ (n: 次 / p: 前 / q: 終了) > " << flush;
        getline(cin, command);

        if(command == "n") {
            // 最後のページでなければ次へ
            if(! m_file.eof()) {
                ++m_page;
                return true;
            } else {
                //コマンドを再入力
            }
        } else if(command == "p") {
            // 最初のページでなければ前へ
            if(m_page > 0) {
                --m_page;
                return true;
            } else {
                // コマンドを再入力
            }
        } else if(command == "q") {
            // 終了
            return false;
        }
    }
}

int main() {
    DumpFile dump;

    if(! dump.Run()) {
        return EXIT_FAILURE;
    }
}