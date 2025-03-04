#include<iostream>
#include<vector>
using namespace std;
int main(){
int temp=0;
vector<int> vec={1,2,3,4,4,3,2};//The vector has only one element unique but other are in the pair only
for(int val: vec){
    temp^=val;
}
cout<<"The unique element is :-"<<temp<<endl;
}