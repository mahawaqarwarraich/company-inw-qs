#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// problem
// given two unsorted arrays of distinct elements. Find pairs(two elements) such that their sum equals k

// Using hashing o(m)
// arr1 m, arr2 n
void findPairSum(vector<int> arr1, vector<int> arr2, int k) {
    // Put b's elements in a hash set
    unordered_map<int, int> map;
    for (int i = 0; i < arr2.size(); i++) {
        map.insert({i,  arr2[i]});
    }

    // Traverse a's elements
    for (int i = 0; i < arr1.size(); i++) {
        if (map.find(k-arr1[i]) != map.end()) {
            cout << "(" << arr1[i] << "," << k-arr1[i] << ")" << endl;
        }
    }


}

// Using sorting and two pointer approach

int main() {
    vector<int> arr1 = {3, 2, 5};
    vector<int> arr2 = {5, 4, 3};
    int k = 6;

    findPairSum(arr1, arr2, k);
    return 0;
}