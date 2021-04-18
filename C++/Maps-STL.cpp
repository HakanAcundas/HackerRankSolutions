#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> marks;
    int order, mark, n;
    string name;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>order;
        cin>>name;
        map<string,int>::iterator itr=marks.find(name);
        if(order==1){
            cin>>mark;
            if(itr==marks.end()) marks.insert(make_pair(name,mark));
            else marks[name]+=mark;
        } 
        else if(order==2){
            marks.erase(name);
        } 
        else if(order==3){
            if(itr==marks.end()) cout<<0<<endl;
            else cout<<marks[name]<<endl;
        }
    }
      
    return 0;
}
