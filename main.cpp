#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void reading(const string &fileName, vector<string> &strings)
{

}
// так как мы вручную добавляем в вектор строки,
// то нужно, чтобы вектор strings был не const.
// То есть при проверке мы его убираем.
void out(const vector<string> &strings)
{
    /*
    strings.push_back("name - Bulat");
    strings.push_back("surname - Shafikov");
    strings.push_back("age - 19");
    */
    for (const string &line : strings) {
        cout << line << endl;
    }
}
void writing(const string &fileName, vector<string> &strings)
{
    ofstream fileOut(fileName);
    //Для проверки добавляю в вектор строки, предварительно стерев const
    strings.push_back("blalala cxcx");
    strings.push_back("lylylyly");

    if (!fileOut.is_open()) {
        cout << "Не удалось открыть файл для записи" << endl;
        return;
    }
    for (const string &line : strings) {
        fileOut << line << endl;
    }
    fileOut.close();
}
int main() {
    setlocale(LC_ALL, "Russian");
    vector<string> strings;

    reading("input.txt", strings);
    out(strings);
    writing("output.txt", strings);

    return 0;
}
