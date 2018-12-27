#include <string>
#include <iostream>
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

#include "IceCreamItem.h"
#include "PreMadeItem.h"

using namespace std;
std::string PreMadeItem::composeItem(){
  ostringstream str;
  str << "Pre-made Size: " << size <<"\nPre-made Item: " << name << "\n" <<           "Price: $" << showpoint << setprecision(3) << price << "\n";
  string ord;
  ord = str.str();
    /*std::string text;
    text += "Pre-made Size: ";
    text += size;
    text += "\nPre-made Item: ";
    text += name;
    text += "\nPrice: $";
    text+= std::to_string(price);
    text += "\n-----";
    */
    return ord;
  
  }
