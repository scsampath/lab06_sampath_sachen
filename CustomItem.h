//Created by Sachen Sampath, CS32, 5/14/2020
#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <vector>
#include <string>

#include "IceCreamItem.h"

class CustomItem : public IceCreamItem {
    public:
        CustomItem(std::string size);
        virtual ~CustomItem();
        void addTopping(std::string topping);

        virtual std::string composeItem();
        virtual double getPrice();
    private:
        std::vector<std::pair<std::string, int>> toppings;
};
#endif