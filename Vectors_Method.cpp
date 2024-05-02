#include <iostream>
#include <vector>

int main(){

      // 1:push_back(): Naye element ko vector ke end mein add karne ke liye istemal hota hai.  

    vector<int> vec;
    vec.push_back(10); // vec mein 10 add karega

    // 2: pop_back(): Vector ke end se ek element ko remove karne ke liye istemal hota hai.

    vector<int> vec = {10, 20, 30};
    vec.pop_back(); // 30 ko remove karega

    // 3: size(): Vector ke size ko determine karne ke liye istemal hota hai.

    vector<int> vec = {10, 20, 30};
    int size = vec.size(); // size = 3


    // 4: at(): Vector ke specific index par ek element ko access karne ke liye istemal hota hai.


    vector<int> vec = {10, 20, 30};
    int element = vec.at(1); // element = 20


    // 5: clear(): Vector ko empty karne ke liye istemal hota hai.


    vector<int> vec = {10, 20, 30};
    vec.clear(); // vec ko empty kar dega

   


    // 6: empty(): Vector empty hai ya nahi check karne ke liye istemal hota hai.


    vector<int> vec = {10, 20, 30};
    bool isEmpty = vec.empty(); // isEmpty = false

    // 7: erase(): Vector se specific index ya range ke elements ko remove karne ke liye istemal hota hai.


    vector<int> vec = {10, 20, 30};
    vec.erase(vec.begin() + 1); // Index 1 par wala element ko remove karega


    // 8: insert(): Vector mein ek element ko specific index par insert karne ke liye istemal hota hai.

    vector<int> vec = {10, 20, 30};
   vec.insert(vec.begin() + 1, 15); // Index 1 par 15 insert karega







}