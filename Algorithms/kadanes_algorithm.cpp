#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, -5};
    int max_sum=__WINT_MIN__;
    int current_sum=0;
    for(int val:vec){
        current_sum+=val;
        max_sum=max(max_sum,current_sum);
        if(current_sum<0){
            current_sum=0;
        }
    }
    cout<<max_sum;
    return 0;
}
