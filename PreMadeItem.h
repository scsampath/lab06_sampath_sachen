//Created by Sachen Sampath, CS32, 5/14/2020
#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include <vector>
#include <string>

#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem {
    public:
        PreMadeItem(std::string itemName, std::string size);
        virtual ~PreMadeItem();

        virtual std::string composeItem();
        virtual double getPrice();
    private:
        std::string itemName;
};
#endif