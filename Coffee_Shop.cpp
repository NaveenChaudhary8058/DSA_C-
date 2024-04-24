
#include <iostream>
using namespace std;
int main()
{

  int a;
  cout<<"Enter Coffee you want to buy: ";
  cin>>a;
   string coffeeName[a];
  int coffeePrice[a];

   int Quantity;
   float totalprice = 0;
   float GST = 0.18;

   for (int i = 0; i < a; i++){
       cout << "Enter the name of the coffee:";
       cin >> coffeeName[i];
       cout << "Enter the price of the coffee:";
       cin >> coffeePrice[i];
   }

     int Choose;
     cout<<"Welcome ! select A Coffee :"<<endl;

      for (int i = 0; i < a; i++){
      cout<<i + 1 <<" . "<< coffeeName[i] <<" = "<< coffeePrice[i] <<endl;
        
       }

       cout<<"Enter your choice :";
       cin>>Choose;

       cout<<"Enter the Quantity :";
       cin>>Quantity;  

    switch (Choose){

        case 1:
        cout<<"your choose :"<<coffeeName[1]<<endl;
        totalprice=coffeePrice[1] * Quantity * (1+GST);
        break;

        case 2:
        cout<<"your choose :"<<coffeeName[2]<<endl;
        totalprice=coffeePrice[2] * Quantity * (1+GST);
        break;

        case 3:
        cout<<"your choose  :"<<coffeeName[3]<<endl;
        totalprice=coffeePrice[3] * Quantity * (1+GST);
        break;

        default:
        cout<<"you choose wronge :"<<endl;

        return 1;
    }

    cout<<"total price with GST :"<<totalprice<<endl;


}
