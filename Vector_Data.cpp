include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string>value;
 for(int i = 0 ; i < 3 ; i++){
   string Name;
  cout<<"Enter a Name: ";
   cin>>Name;
   value.push_back(Name);
 }
  for (int i = 0; i<value.size();++i){
    int size = value[i].size();
    cout<<"size of value is : "<<size<<endl;;
  }
  
     
}
