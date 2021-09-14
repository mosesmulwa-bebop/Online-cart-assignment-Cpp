
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
   string GetName(){
     return itemName;
   };
   int GetPrice(){
      return itemPrice;
   };
   int GetQuantity(){
       return itemQuantity;
   };

   void SetName(string name){
       itemName = name;
   };

   void SetPrice(int price){
       itemPrice = price;
   };
   void SetQuantity(int quantity){
       itemQuantity = quantity;
   };

   //Default Constructor
   item()
   {
   itemName = "None";
   itemPrice = 0;
   itemQuantity = 0;
   }

};
