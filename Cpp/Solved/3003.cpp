#include <iostream>

using namespace std;

int main() {
    int chess[6];
    for (int j = 0; j < 6; j++) {
        cin >> chess[j];
    }

    int corNum[6];
    corNum[0] = 1;
    corNum[1] = 1;
    corNum[2] = 2;
    corNum[3] = 2;
    corNum[4] = 2;
    corNum[5] = 8;

    int reNum[6];

    for (int i = 0; i < 6; i++) {
           reNum[i] = corNum[i] - chess[i];
    }
    cout << reNum[0] << ' ' << reNum[1] << ' ' << reNum[2] << ' ' << reNum[3] << ' ' << reNum[4] << ' ' << reNum[5] <<endl;

    return 0;
}