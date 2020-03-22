/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   laptop.h
 * Author: Chris
 *
 * Created on March 14, 2019, 7:40 PM
 */

#ifndef LAPTOP_H
#define LAPTOP_H

#include "Entity.h"
#include <iostream>

class Laptop: public Entity{
public:
    Laptop(string name, int price, string hertz = ""):Entity(name, price), m_hertz(hertz) {}
    virtual void print() const{
        cout<<"(Laptop name="<<m_name<<", Laptop price=" << m_price <<"); ";
    }
    virtual ~Laptop(){}

protected:
   
    string m_hertz;
    
};

#endif /* LAPTOP_H */

