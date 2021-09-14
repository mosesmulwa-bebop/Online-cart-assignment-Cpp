#include <iostream>

using namespace std;
#include "itemToPurchase.h"
int main()
{
 //item item1;
 //string thename = "";
//string thename = item1.GetName();
 //cout << "Item Name is: " << thename <<"\n";
 //item1.SetName("Stuff");
 //thename = item1.GetName();
 //cout << "Item Name is: " << thename << "\n";

 item item1,item2;
 string enteredname1,enteredname2;
 int enteredprice1, enteredquantity1,enteredprice2, enteredquantity2;
 int quantity1,price1,quantity2,price2, total1,total2,fulltotal;
 string name1,name2;

 //Ask for input
 cout<< "Item 1 "<< "\n";
 cout<< "Enter the item name: "<< "\n";
 cin >> enteredname1;
 item1.SetName(enteredname1);
 cout<< "Enter the item price: "<< "\n";
 cin >> enteredprice1;
 item1.SetPrice(enteredprice1);
 cout<< "Enter the item quantity: "<< "\n";
 cin >> enteredquantity1;
 item1.SetQuantity(enteredquantity1);

 cout<<"\n";
 //ITEM 2
 cout<< "Item 2 "<< "\n";
 cout<< "Enter the item name: "<< "\n";
 cin >> enteredname2;
 item2.SetName(enteredname2);
 cout<< "Enter the item price: "<< "\n";
 cin >> enteredprice2;
 item2.SetPrice(enteredprice2);
 cout<< "Enter the item quantity: "<< "\n";
 cin >> enteredquantity2;
 item2.SetQuantity(enteredquantity2);

cout<<"\n";
 //TOTAL COST
 name1 = item1.GetName();
 price1 = item1.GetPrice();
 quantity1 = item1.GetQuantity();
 name2 = item2.GetName();
 price2 = item2.GetPrice();
 quantity2 = item2.GetQuantity();

 total1 = price1 * quantity1;
 total2 = price2 * quantity2;
 fulltotal = total1 + total2;

 cout<< "TOTAL COST"<<"\n";
 cout<<name1<<" "<<quantity1<<" @ $"<<price1<<" = $"<<total1<<"\n";
 cout<<name2<<" "<<quantity2<<" @ $"<<price2<<" = $"<<total2<<"\n";

 cout<<"Total: $"<<fulltotal<<"\n";

}
