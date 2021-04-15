#include <bits/stdc++.h>

using namespace std;
int mostFrequent(int arr[], int n){
    sort(arr, arr + n);
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == 0){
            continue;
        }
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
    if (curr_count > max_count){
        max_count = curr_count;
        res = arr[n - 1];
    }
 
    return res;
}
// Complete the isValid function below.
string isValid(string s) {
    int counter = 0;
    string result = "YES";
    int alp[26] = {0};
    for (char &c : s){
        alp[c-97]++;
    }
    int mod = mostFrequent(alp, 26);
    for (int i = 0; i<26; i++){
        if(alp[i]==0) continue;
  
        if(alp[i]==mod) continue;
            
        else{
            if(alp[i]==1){
                counter++;
                alp[i]--;
            }
            else if(alp[i]>mod){
                counter += alp[i]-mod;
                alp[i]--;
            }
            else{
                counter += mod-alp[i];
                alp[i]--;
            }
        }
    }
    if(counter > 1){
        result = "NO";
    }
    return result;
}
