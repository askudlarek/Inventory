#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

/* The constructor for inventory */
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}
/* Subtracting stock when an item is sold */
void Inventory::sell()
{
  if (m_in_stock > 0) {
    m_in_stock--;
  } else {
    std::cout << "Sorry there is no item left in stock to sell" << std::endl;
  }
}
/* Printing out the inventory item */
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
