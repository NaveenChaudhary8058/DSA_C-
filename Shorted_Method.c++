// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
 #include <algorithm>
using namespace std;
int main(){
    // int value = 5;
    // int Array []= {5,4,9,11,3};
    // for(int i = 0; i<value;i++){
    //     for(int j = i+1 ; j < value;j++){
    //         if(Array[j] < Array[i]){
    //         int temp = Array[i];
    //       Array[i] = Array[j];
    //       Array[j]=temp;

    //         }
    //     }
    // }
    // for (int i = 0 ; i < value ; i++){
    //     cout<<Array[i]<<" ";
    // }


    vector<int> values ={4,8 6,9,11,2,3};
    sort(values.begin(),values.end());
    for(auto val : values){
        cout<<val<<" ";
    }
}
