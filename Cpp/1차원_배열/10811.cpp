#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseBaskets(vector<int>& baskets, int start, int end) {
    while (start < end) {
        swap(baskets[start - 1], baskets[end - 1]);
        start++;
        end--;
    }
}

int main() {
    int n,m;
    cin >> n >> m;

    vector<int> baskets(n);
    for (int i=0; i < n; i++) {
        baskets[i] = i+1;
    }

    for (int M=0; M < m; M++) {
        int i, j;
        cin >> i >> j;
        reverseBaskets(baskets, i, j);
    }

    for (int basket : baskets) {
        cout << basket << " ";
    }
    cout << endl;

    return 0;
}