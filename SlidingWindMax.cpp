#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int> findMax(vector<int> arr, int k) {
    vector<int> res = {}; 
    deque<int> dec = {};

    
    
    for (int i = 0; i < arr.size(); i++) { // n
        // Remove small elements from dec list to maintain decreasing order
        while (!dec.empty() && arr[dec.back()] < arr[i]) {
            dec.pop_back();
        }

        dec.push_back(i);

        // pop indices that are out of the sliding window (move out)
        while (!dec.empty() && dec.front() <= i-k) {
            dec.pop_front();
        }

        // If window is reached extract the max
        if (i >= k-1) {
            // put max into the res list
            int j = dec.front();
            res.push_back(arr[j]);

        }
    }

    return res;
    
}

int main() {

    vector<int> arr = {1, 6, 5, 1, 3, 7, 8};
    int k = 3;

    vector<int> res = findMax(arr, k);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";   
    }
    return 0;
}