// IceCreamItem.h
// Written for CS32 S18.

#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H
#include "IceCreamItem.h"
#include <string>
#include <utility>
#include <map>

class CustomItem : public IceCreamItem {
public:
	// Constructor for an IceCreamItem. All ice cream items
	// will either be "small", "medium", or "large".
	CustomItem(std::string size) : IceCreamItem(size){};
   virtual ~CustomItem(){} 
   void addTopping(std::string topping) {cream[topping]+= 1; price += .40;}
	// A virtual method that composes a string with the details
	// of an IceCreamItem. See the lab writeup and test files
	// for examples of the format for composeItem.
	   virtual std::string composeItem();
     virtual double getPrice(){return price;}
	// Returns the dollar amount of an ice cream item.
protected:
  std::map<std::string, int> cream;
};

#endif
