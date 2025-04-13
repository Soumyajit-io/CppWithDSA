#include<iostream>
#include<vector>
using namespace std;

void merge(const vector<int>& v1, const vector<int>& v2, vector<int>& v3) {
    int i = 0; // v1
    int j = 0; // v2

    while (i < v1.size() && j < v2.size()) {
        if (v1[i] < v2[j]) {
            v3.push_back(v1[i]);
            i++;
        } else {
            v3.push_back(v2[j]);
            j++;
        }
    }

    // For remaining elements in v1
    while (i < v1.size()) {
        v3.push_back(v1[i]);
        i++;
    }

    // For remaining elements in v2
    while (j < v2.size()) {
        v3.push_back(v2[j]);
        j++;
    }

    // Output the merged array
    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1 = {2, 8, 28, 30, 48, 70, 77, 88, 91, 100};
    vector<int> v2 = {5, 20, 43, 50, 60, 89, 90};
    vector<int> v3;

    cout << "v1: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "v2: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    cout << "Merged: ";
    merge(v1, v2, v3);

    return 0;
}
