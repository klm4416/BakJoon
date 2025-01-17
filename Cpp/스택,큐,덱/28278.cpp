#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    stack<int> stk;

    for(int i = 0; i < n; i++) {
        int command;
        cin >> command;

        if (command == 1) {
            int num;
            cin >> num;
            stk.push(num);
        }
        else if (command == 2) {
            if(stk.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << stk.top() << "\n";
                stk.pop();
            }
        }
        else if (command == 3) {
            cout << stk.size() << "\n";
        }
        else if (command == 4) {
            if(stk.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
        else if (command == 5) {
            if (stk.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << stk.top() << "\n";
            }
        }
    }

    return 0;
}