	#include "IceCreamItem.h"
  IceCreamItem::IceCreamItem(std::string size)
  {
  this->size = size;
    if(size == "small")
    {
      price = 3.00;
    }
    else if (size == "medium")
    {
      price = 5.00;
    }
    else
    {
    price = 6.50;
    }
    
  }