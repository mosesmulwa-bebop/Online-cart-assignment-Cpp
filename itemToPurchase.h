

#include<iostream>
using namespace std;

class item
{
   //private
private:
    string itemName;
    int itemPrice;
    int itemQuantity;
   //public member functions
public:
   string GetName();
   int GetPrice();
   int GetQuantity();

   void SetName(string name);
   void SetPrice(int price);
   void SetQuantity(int quantity);

   //Default Constructor
   item()
   {
   itemName = "None";
   itemPrice = 0;
   itemQuantity = 0;
   }

};
