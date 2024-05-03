#include <iostream>
#include <vector>
using namespace std;
int findUniqueVal(vector<int>values){
    int num = 0;
    for(int i = 0 ; i < values.size() ; i++){
        num = num ^ values[i] ; 
    }
    return num ;
}
int main(){
    vector <int> values = {1,1,2,5,5};
    int uniqueVal = findUniqueVal(values);

    cout << "Unique Value : "<<uniqueVal<<endl;
    return 0 ;
}
