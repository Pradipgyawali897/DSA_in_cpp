#include<iostream>
#include<vector>
using namespace std;
//solved using the two pointer approch
//Sifting the small cointainer to the left or right 

int main(){
    vector <int> vec={1,4,9,3,9,1,6};
   int mxwater=0;
   int lp=0,rp=vec.size()-1;
   while(lp<rp){
        int w=rp-lp;
        int height=min(vec[lp],vec[rp]);
        int currntwater=w*height;
        mxwater=max(currntwater,mxwater);
        vec[lp]<vec[rp]?lp++:rp--;
    }
    cout<<"The max water that can be filled is "<<mxwater<<endl;
    return 0;
}