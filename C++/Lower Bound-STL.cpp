#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, nq, temp;
    cin>>n;
    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin>>temp;
        vec[i] = temp;
    }
    cin>>nq;
    for (int i = 0; i < nq; i++){
       cin >> temp;
       vector <int>::iterator low = lower_bound(vec.begin(), vec.end(), temp);
       if (vec[low - vec.begin()] == temp){
           cout << "Yes " << (low - vec.begin() + 1) << endl;
       }
       else
           cout << "No " << (low - vec.begin() + 1) << endl;
   }
    return 0;
}
