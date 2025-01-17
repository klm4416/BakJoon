#include <iostream>
#include <string>

using namespace std;
int palindromeTest(const std::string& word) {
    int half = (word.length()/2);

    for (int i = 0; i<half; i++) {
        if (word[i] != word[word.length()-i-1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    string word;
    cin >> word;

    int result = palindromeTest(word);

    cout << result << endl;
}