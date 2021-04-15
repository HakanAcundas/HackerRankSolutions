#include <bits/stdc++.h>

using namespace std;

// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) {
    int swaps = 0;
    for(int i = 0; i < arr.size(); ++i) {
        if (arr[i] == (i+1)) continue;
        for(int j = i + 1; j < arr.size(); ++j) {
            if (arr[j] == (i + 1)){
                swap(arr[i], arr[j]);
                swaps++;
                break;
            }
        }
    }
    return swaps;
}   
