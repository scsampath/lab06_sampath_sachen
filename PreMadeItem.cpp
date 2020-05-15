//Created by Sachen Sampath, CS32, 5/14/2020

#include <iostream>
#include <sstream>
#include <iomanip>

#include "PreMadeItem.h"

using namespace std;

PreMadeItem::PreMadeItem(string itemName, string size) : IceCreamItem(size){
    if(size == "small"){
        price = 4.00;
    }
    else if(size == "medium"){
        price = 6.00;
    }
    else if(size == "large"){
        price = 7.50;
    }
    this->itemName = itemName;
}

PreMadeItem::~PreMadeItem(){
    
}

string PreMadeItem::composeItem(){
    string composedItem = "";
    composedItem += string("Pre-made Size: ") + size + "\n";
    composedItem += string("Pre-made Item: ") + itemName + "\n";
    ostringstream priceStr;
    priceStr << fixed << setprecision(2) << price;
    composedItem += string("Price: $") +  priceStr.str() + "\n";
    return composedItem;
}

double PreMadeItem::getPrice(){
    return this->price;
}