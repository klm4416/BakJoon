#include <iostream>
#include <string>

using namespace std;

int main() {
    string croatia;
    cin >> croatia;

    int cnt = croatia.length();
    
    if (croatia.find('c=')) {cnt--;}
    if (croatia.find('c-')) {cnt--;}
    if (croatia.find('dz=')) {cnt-2;}
    if (croatia.find('d-')) {cnt --;}
    if(croatia.find('lj')) {cnt --;}
    if(croatia.find('nj')) {cnt --;}
    if(croatia.find('s=')) {cnt --;}
    if(croatia.find('z=')) {cnt --;}

    cout << cnt << endl;
}