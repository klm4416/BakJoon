#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int num[26] = {0};
string str;

int main() {
    cin >> str;
    int max = 0;
    int index = -1;
    int cnt = 0;

    for (int i=0; i<str.length(); i++) {
        str[i] = toupper(str[i]);
        num[str[i] - 65]++;
    }

    for (int i=0; i<26; i++) {
        if (max < num[i]) {
            max = num[i];
            index = i;
        }
    }

    for (int i=0; i<26; i++) {
        if (max == num[i]) cnt++;
    }

    if (cnt>1) cout << "?";
    else cout << (char)(index+65);
}

