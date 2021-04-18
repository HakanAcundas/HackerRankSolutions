#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int order, value, n;
    cin>>n;
    set<int> s1;
    for(int i = 0; i<n; i++){
        cin>>order;
        cin>>value;
        if(order==1) s1.insert(value);
        else if(order==2) s1.erase(value);
        else if(order==3){
            set<int>::iterator itr=s1.find(value);
            if(itr == s1.end()) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
    return 0;
}
