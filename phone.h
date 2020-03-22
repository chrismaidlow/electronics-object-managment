/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   phone.h
 * Author: Chris
 *
 * Created on March 14, 2019, 7:39 PM
 */

#ifndef PHONE_H
#define PHONE_H

#include "Entity.h"
#include <iostream>

class Phone: public Entity{
public:
    Phone(string name, int price, int year = 0):Entity(name, price), m_year(year){}
    virtual void print() const{
        cout<<"(Phone name="<<m_name<<", Phone price=" << m_price<<"); ";
    }
    virtual ~Phone(){}

protected:

    int m_year;
    
};

#endif /* PHONE_H */

