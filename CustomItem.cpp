//Created by Sachen Sampath, CS32, 5/14/2020

#include <iostream>
#include <sstream>
#include <iomanip>

#include "CustomItem.h"

using namespace std;

CustomItem::CustomItem(string size) : IceCreamItem(size){
    if(size == "small"){
        price = 3.00;
    }
    else if(size == "medium"){
        price = 5.00;
    }
    else if(size == "large"){
        price = 6.50;
    }
}

CustomItem::~CustomItem(){
    
}

void CustomItem::addTopping(std::string topping){
	//check if topping exists
    for(size_t i = 0; i < toppings.size(); i++){
		//if topping exists then increment and increase price
        if(topping == toppings.at(i).first){
			toppings.at(i).second++;
            price+=.40;
            return;
		}
	}
    //topping doesnt exist so create new topping and increase price
    pair<string, int> newTopping(topping, 1);
    toppings.push_back(newTopping);
    price+=.40;
}

string CustomItem::composeItem(){
    string composedItem = "";
    composedItem += string("Custom Size: ") + size + "\n";
    composedItem += string("Toppings:") + "\n";
    for(size_t i = 0; i < toppings.size(); i++){
        composedItem += string(toppings.at(i).first) + ": " + std::to_string(toppings.at(i).second) + " oz" + "\n";
    }
    ostringstream priceStr;
    priceStr << fixed << setprecision(2) << price;
    composedItem += string("Price: $") +  priceStr.str() + "\n";
    return composedItem;
}

double CustomItem::getPrice(){
    return this->price;
}