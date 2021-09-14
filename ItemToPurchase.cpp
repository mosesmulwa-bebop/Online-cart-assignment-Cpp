

#include<iostream>
using namespace std;
#include "itemToPurchase.h"

   string item::GetName(){
     return itemName;
   };
   int item::GetPrice(){
      return itemPrice;
   };
   int item::GetQuantity(){
       return itemQuantity;
   };

   void item::SetName(string name){
       itemName = name;
   };

   void item::SetPrice(int price){
       itemPrice = price;
   };
   void item::SetQuantity(int quantity){
       itemQuantity = quantity;
   };




