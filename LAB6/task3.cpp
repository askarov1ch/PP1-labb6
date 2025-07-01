#include <iostream>
using namespace std;

void reverseString(string& str, int i, int j) {
    if (i >= j) return;
    swap(str[i], str[j]);
    reverseString(str, i + 1, j - 1);
}

int main() {
    string str;
    cin >> str;
    reverseString(str, 0, str.size() - 1);
    cout << str << endl;
    return 0;
}

