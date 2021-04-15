#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    int a = 0;
    int b = 0;
    int result = 0;
    for(int i = 0; i < s.length()-1; i++){
        if(s[i] == s[i+1]){
            result++;
        }
    }
    return result;
}
