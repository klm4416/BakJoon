#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

double calculate(vector<double>& v_list) {
    if (v_list.empty()) {
        cerr << "Error: Empty vector" << endl;
        return 0.0;  // 또는 다른 적절한 에러 처리
    }
    
    auto max_score = *max_element(v_list.begin(),v_list.end());
    vector<double> cal_num;
    for (double& num : v_list) {
        num = (num/max_score)*100;
        cal_num.push_back(num);
    }
    double sum = accumulate(cal_num.begin(), cal_num.end(),0.0);
    double average = sum / cal_num.size();

    return average;
}

int main() {
    int n;
    double score;
    cin >> n;
    vector<double> v_list;
    for (int i = 0; i < n; i++) {
        cin >> score;
        v_list.push_back(score);
    }

    double average = calculate(v_list);

    cout << average << endl;

    return 0;
}