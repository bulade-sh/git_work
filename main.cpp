#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void reading(const string &fileName, vector<string> &strings)
{
    ifstream file(fileName);
    if (!file.is_open()) {
        wcout << L"Файл не открывается!" << endl;
        return;
    }
    string line;
    while (getline(file, line)) {
        strings.push_back(line);
    }
    file.close();
}
void out(const vector<string> &strings)
{

}
void writing(const string &fileName, vector<string> &strings)
{

}
int main() {
    setlocale(LC_ALL, "Russian");
    vector<string> strings;

    reading("input.txt", strings);
    out(strings);
    writing("output.txt", strings);

    return 0;
}
