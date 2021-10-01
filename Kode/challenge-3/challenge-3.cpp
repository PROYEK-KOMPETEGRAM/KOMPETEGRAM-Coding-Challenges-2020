#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool matcher(string pass1, string pass2) {
    int i = 0;
    while (pass1[i] && pass2[i]) {
        pass1[i] = tolower(pass1[i]);
        pass2[i] = tolower(pass2[i]);
        
        if (pass1[i] < pass2[i]) {
            return true;
        } else if (pass1[i] > pass2[i]) {
            return false;
        }
        
        i++;
    }
    
    return false;
}

int main() {
    int n;
    cin >> n; cin.ignore();
    string passengers[n + 1], passenger_temp;
    
    getline(cin, passenger_temp);
    passengers[0] = passenger_temp;
    cout << 1 << endl;
    
    for(int i = 1; i < n; i++) {
        getline(cin, passenger_temp);
        int j;
        for(j = 0; j < i; j++) {
            if(matcher(passenger_temp, passengers[j])) {
                for(int k = i; k >= j; k--) {
                    passengers[k+1] = passengers[k];
                }
                passengers[j] = passenger_temp;
                break;
            }
        }
        if(j >= i) {
            passengers[i] = passenger_temp;
        }
        cout << j + 1 << endl;
    }
    
    return 0;
}
