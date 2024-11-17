#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void reading(const string &fileName, vector<string> &strings)
{

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
