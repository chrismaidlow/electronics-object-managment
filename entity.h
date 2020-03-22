/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   entity.h
 * Author: Chris
 *
 * Created on March 14, 2019, 8:35 PM
 */

#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include<string>

using namespace std;

class Entity{
protected:
    string m_name;
    Entity(string name, int price): m_name(name), m_price(price){}
public:
    virtual string getName() const{
        return m_name;
    }
    virtual void print() const=0;
    virtual ~Entity(){};
    
    int m_price;
};

#endif /* ENTITY_H */

