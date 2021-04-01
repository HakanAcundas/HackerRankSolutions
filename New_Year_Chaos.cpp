#include <bits/stdc++.h>

using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
    int bribes = 0;
    int max = 0;
    bool is = true;
    for (int i = 0; i<q.size(); i++){
        if(q[i] - (i+1)>max){
            max = q[i] - (i+1);
        }
    }
    while(is){
        is = false;
        for (int i = 0; i<q.size()-1; i++){
            if (q[i] > q[i+1]){
                swap(&q[i], &q[i+1]);
                is = true;
                bribes+=1;
            }
        }
    }

    if(max > 2){
        cout<< "Too chaotic"<< endl;
    }
    else{
        cout<<bribes<<endl;
    }
}
