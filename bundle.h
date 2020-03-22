/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bundle.h
 * Author: Chris
 *
 * Created on March 14, 2019, 7:39 PM
 */

#ifndef BUNDLE_H
#define BUNDLE_H

#include "entity.h"
#include <vector>
#include <iostream>
#include <algorithm>

class Bundle: public Entity{
protected:
    vector<Entity*> items;
    double m_rate;
    
public:
    Bundle(string name, double rate): Entity(name, 0), m_rate(rate){}
    
    virtual ~Bundle(){for(int i=0; i< items.size(); i++) delete items[i];}

    virtual void priceCalc();

    virtual void addItem(Entity* item);

    virtual void removeItem(Entity* item){remove(items.begin(), items.end(), item);}
    
    virtual void print() const;
};

#endif /* BUNDLE_H */

