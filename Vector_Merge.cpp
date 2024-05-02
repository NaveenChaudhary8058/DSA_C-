#include <iostream>
#include <vector>
using namespace std;
int main(){
    int vec1,vec2 ;
    cout<<"Enter vec1 size :";
    cin>>vec1;
    cout<<"Enter vec2 size :";
    cin>>vec2;
    
    vector<int>value1(vec1);
    vector<int>value2(vec2);
    vector<int>merge;

    for(int i = 0 ; i < value1.size() ; i++){
        cout<<"Enter value1 : ";
        cin>>value1[i];
        merge.push_back(value1[i]);

    }

    for(int i = 0 ; i < value2.size() ; i++){
         cout<<"Enter value2 : ";
         cin>>value2[i];
         merge.push_back(value2[i]);
    }
        cout<<"Merged Value : "<<" ";
    for(int i = 0 ; i < merge.size() ; i++){
        cout<<merge[i];
    }


}