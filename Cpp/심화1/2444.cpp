#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {

    int count;
    cin >> count;
    int div_count = 2*count -1;
    for (int i=1; i <= div_count; i++){
        if (i <= count) { 
            int n = (2*i) - 1;
            int blank_num  = -(2*i) + (2*count);
            int div_blank_num = ceil(blank_num/2);

            for (int j=1; j <= div_blank_num; j++){
                cout << " ";
            }

            for (int j=1; j <= (n); j++) {
                if (j == n) {
                    cout << "*" << endl;
                }
                else {
                    cout << "*";
                }
            }
/*
            for (int j=1; j <= div_blank_num; j++){
                if (j == div_blank_num) {
                    cout << " " << endl;
                }
                else {
                    cout << " ";
                }
            }
            */
        }

        if (count < i && i <= div_count){
            int count2 = i-count;
            int n2 = (-2*count2) + div_count;
            int blank_num2 = 2*count2;
            int div_blank_num2 = ceil(blank_num2/2);
            for (int j=1; j <= div_blank_num2; j++) {
                cout << " " ;
            }

            for (int j=1; j <= (n2); j++) {
                if (j == n2) {
                    cout << "*" << endl;
                }
                else {
                    cout << "*";
                }
            }
/*
            for (int j=1; j <= (div_blank_num2); j++) {
                if (j == div_blank_num2) {
                    cout << " " << endl;
                }
                else {
                    cout << " ";
                }
            }
            */
        }
        
    }
}
