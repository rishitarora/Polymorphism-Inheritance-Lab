
// Written for CS32 S18.
#ifndef PREMADEITEM_H
#define PREMADEITEM_H
#include <string>
#include "IceCreamItem.h"
class PreMadeItem : public IceCreamItem{
public:
	// Constructor for an IceCreamItem. All ice cream items
	// will either be "small", "medium", or "large".
	PreMadeItem(std::string name, std::string size) : IceCreamItem(size){
 this->name = name;
 this->size = size;
  if(size == "small")
    {
    price = 4.00;
    }
    else if(size == "medium")
    {
      price = 6.00;
    }
    else
    {
      price = 7.50;
    }
    }

	// A virtual method that composes a string with the details
	// of an IceCreamItem. See the lab writeup and test files
	// for examples of the format for composeItem.
   virtual ~PreMadeItem(){}
   virtual std::string composeItem();
   virtual double getPrice(){return price;}
    
protected:
	std::string name;
	std::string size;
};

#endif
