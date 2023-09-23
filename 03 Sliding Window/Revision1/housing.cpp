#include<iostream>
#include<vector>

using namespace std;

void find_segments(int * plots, int size, int target, vector<vector<int>> *result){
    int l=0, r=1;
    int sum = plots[l]+plots[r];
    while(r<size && l<r){

        while(sum<target){
            r++;
            sum+=plots[r];
        }
        if(sum==target){
            result->push_back({l,r});
        }
        sum-=plots[l];
        l++;
        
    }
}

int main(){
    int plots[] = { 1 ,3 ,2 ,1 ,4 ,1 ,3 ,2 ,1 ,1};
    int size = sizeof(plots)/sizeof(int);
    int k=8;

    vector<vector<int>> result;

    find_segments(plots, size, k, &result);

    for(auto res : result){
        cout<<res[0]<<","<<res[1]<<endl;
    }

    return 0;
}