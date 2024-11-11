#include <iostream>
#include <vector>
using namespace std;

vector<int> findDistinct(vector<int> &arr) {
    vector<int> res;

    for (int i = 0; i < arr.size(); i++) {

        int j;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        if (i == j)
            res.push_back(arr[i]);
    }
    return res;
}

int main() {
    vector<int> arr = {12, 10, 9, 45, 2, 10, 10, 45};
    vector<int> res = findDistinct(arr);

    for (int ele : res)
        cout << ele << " ";
    return 0;
}
