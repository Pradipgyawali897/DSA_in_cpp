#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={1,2,2,2,2,4,5,3};//Only works if the majority element has the frequency greater than n/2
    int freq=0,ans;
    for(int i=0;i<vec.size();i++){
        if(freq==0){
            ans=vec[i];
        }
        if(ans==vec[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<ans;
}