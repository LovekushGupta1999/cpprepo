#include <iostream>
#include <vector>
using namespace std;

void subset(int arr[], vector<int>& b, int n, int length) {
    if (n == length) {
        cout << "{";
        for (int i = 0; i < b.size(); ++i) {
            cout << b[i];
            if (i < b.size() - 1) cout << ", ";
        }
        cout << "}\n";
        return;
    }

    b.push_back(arr[n]);
    subset(arr, b, n + 1, length);
    
    b.pop_back();
    subset(arr, b, n + 1, length);
}

int main() {
    int arr[] = {1, 2, 3};
    int length = sizeof(arr) / sizeof(arr[0]);
    vector<int> b;
    
    subset(arr, b, 0, length);
    
    return 0;
}
