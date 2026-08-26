#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
// problem
// given two unsorted arrays of distinct elements. Find pairs(two elements) such that their sum equals k

// Using hashing o(m+n)
// arr1 m, arr2 n
void findPairSum(vector<int> arr1, vector<int> arr2, int k) {
    // Put b's elements in a hash set
    unordered_set<int> s;

    for (int i = 0; i < arr2.size(); i++) {
      s.insert(arr2[i]);
    }

    // Traverse a's elements
    for (int i = 0; i < arr1.size(); i++) {
        if (s.find(k-arr1[i]) != s.end()) {
            cout << "(" << arr1[i] << "," << k-arr1[i] << ")" << endl;
        }
    }
}

// Using sorting and two pointer approach o(mlogm + nlogn)
void findPairSum2(vector<int> arr1, vector<int> arr2, int k) {
   int i = 0;
   int j = arr2.size()-1;

   // Sort arr1 and arr2
   sort(arr1.begin(), arr1.end());
   sort(arr2.begin(), arr2.end());

   while (i < arr1.size() && j >= 0) {

    int sum = arr1[i]+arr2[j];

    if (sum < k) {
        i++;
    } else if (sum > k) {
        j--;
    } else {
          cout << "(" << arr1[i] << "," << arr2[j] << ")" << endl;
          i++;
          j++;
    }
   }

}

int main() {
    vector<int> arr1 = {3, 2, 5};
    vector<int> arr2 = {5, 4, 3};
    int k = 6;

    findPairSum2(arr1, arr2, k);
    return 0;
}