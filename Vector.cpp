#include <vector>
#include <iostream>
using namespace std;
int main (){
//   vector<int>Elements;
//   Elements.push_back(7);
//   Elements.push_back(3);
//   Elements.push_back(4);
//   Elements.pop_back();
//   cout<<Elements.size();
//   for(int i = 0 ; i < Elements.size() ; i++){
//     cout<<Elements[i];
//   }

    // vector<string>Elements;
    // Elements.push_back("Naveen");
    // Elements.push_back("Naveen");
    // cout << Elements.size();
    // Elements.pop_back();
    //  for(int i = 0 ; i<Elements.size() ; i++){
    //      cout << Elements[i];
    // }



    vector<int>value;
    int vsize,item;
    cout<<"enter vector size :";
    cin>>vsize;

    for(int i=0; i<vsize ; i++){
        cout<<"enter vector value :";
        cin>>item;
        value.push_back(item);
    }

    for(int i=0; i<vsize; i++){
        cout<<value[i]<<" ";
    }
}