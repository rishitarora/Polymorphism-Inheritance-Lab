#include "IceCreamItem.h"
#include "IceCreamOrder.h"
#include "CustomItem.h"
#include <string>
#include <iostream>
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std; 
  
    std::string CustomItem::composeItem()
    {
      ostringstream str;
      str << "Custom Size: " << size << "\nToppings:\n";
      map<string, int>::iterator it; 
      it = cream.begin();
      while(it != cream.end())
      {
      str << it->first << ": " << it->second << " oz\n";
      it++;
      }
      str << "Price: $" << showpoint << setprecision(3) << price << "\n";
      
      string ord;
      ord = str.str();
      return ord;
      
      /*std::string str;
      str += "Custom Size: ";
      str += size;
      str += "\nToppings: ";
      for(auto i = cream.begin(); i != cream.end(); i++)
      {
        str += i->first;
        str += ":";
        str+= std::to_string(i->second);
        str += " oz\n";
      }
      str += "Price: $";
       str += std::to_string(price);
      */
      
    }