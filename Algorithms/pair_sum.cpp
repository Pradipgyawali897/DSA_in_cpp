#include<iostream>
#include<vector>
using namespace std;
bool test(int *ind_1,int *ind_2,vector <int>& vec,int target){
    while(*ind_1<*ind_2){
        if((vec[*ind_1]+vec[*ind_2])<target){
         (*ind_1)++;
        }
        else if((vec[*ind_1]+vec[*ind_2])>target){
         (*ind_2)--;
        }
        else if((vec[*ind_1]+vec[*ind_2])==target){
         return true;
        }
     }
     return false;
}
int main(){
vector <int> vec={1,2,3,4,5};//Array is already shorted
int target = 7;
int ind_1=0;
int ind_2=vec.size()-1;
if(test(&ind_1,&ind_2,vec,target)){
    cout<<"The target is at the index of";
    printf("(%d,%d)",ind_1,ind_2);
    return 0;
}
cout<<"The target is not possible to be at the given vector";
return 0;
}