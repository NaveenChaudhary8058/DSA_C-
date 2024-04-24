//Encapsulation ---- means binding data and method within a class,providing control over the accessibilty and it prevents external code frome directly modifyying the internal data of an object...

// best example is class 

// private data cant access in int main function directly

// #include <iostream>

// using namespace std;

// class Encap {
//     private:
//     int age;
//     void myFun2(){
//         cout<<"mahi"<<endl;
//     }

//     public:
//     string name;
//     int myFun(int a){
//         age=a;
//         cout<<age<<endl;
//         myFun2();
//     }
// };

// int main(){
//     Encap obj;
//     obj.name="naveen";
//     obj.myFun(21);
//     cout<<obj.name;
// }





// Inheritance ----------


// #include <iostream>
// using namespace std;

// class perent {
//     // private:
//     // int a;
//     protected:
//     int a;
//     public:
//     void input(){
//         cout<<"Enter value of perent class:";
//         cin>>a;
//     }
//     // void show(){
//     //     cout<<"a=:"<<a<<endl;
//     // }
// };
// class child : public perent{
//     // private:
//     // int b;
//     protected:
//     int b;
//     public:
//     void input1(){
//         cout<<"Enter value of child";
//         cin>>b;
//     }
//     // void show1(){
//     //     cout<<"b="<<b<<endl;
//     // }
// };

// class child1 : public child{
//     private:int c;
//     public:
//     void input2(){
//         cout <<"Enter value of child1";
//         cin>>c;
//     }
//     void show2(){
//         cout<<"a="<<a<<endl<<"b="<<b<<"c="<<c<<endl;
//     }
// };

// int main (){
//     // perent obj;
//     // obj.input();
//     // obj.show();

//     // child obj1;
//     // obj1.input1();
//     // obj1.show1();

//     // child1 obj2;
//     // obj2.input2();
//     // obj2.show2();


//     child1 obj;
//     obj.input();
//     // obj.show();

//     obj.input1();
//     // obj.show1();

//     obj.input2();
//     obj.show2();

// }



//mulyiple inheritance-----


#include <iostream>
using namespace std;

class perent1{
    private:
    int a,b,c;
    public:
    void input (){
        cout<<"Enter value : ";
        cin>>a>>b;

    }
    void show (){
        c=a+b;
        cout<<"SUM="<<c<<endl;
    }
};

class perent2{
    private:
    int  a,b,c;
    public:
    void input1 (){
        cout<<"Enter value : ";
        cin>>a>>b;
    }
    void show1(){
        c=a*b;
        cout<<"multiply="<<c<<endl;
    }
};

class child:public perent1,public perent2{
    private:
    int a,b,c;
    public:
    void input2(){
        cout<<"Enter value : ";
        cin>>a>>b;
    }
    void show2(){
        c=a-b;
        cout<<"SUBTRACTION="<<c<<endl;
    }
};


int main(){
    // perent1 obj;
    // obj.input();
    // obj.show();

    // perent2 obj2;
    // obj2.input1();
    // obj2.show1();

    child obj3;
    obj3.input();
    obj3.show();

    obj3.input1();
    obj3.show1();
    
    obj3.input2();
    obj3.show2();
}