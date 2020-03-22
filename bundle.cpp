/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "bundle.h"

void Bundle::priceCalc()
{
    int sum = 0;
    m_price = 0;
    for(int i=0; i < items.size(); i++){
        sum += (items[i]->m_price);
    }
    m_price = sum * m_rate;
}

void Bundle::addItem(Entity* item){

    items.push_back(item);
    priceCalc();
        
}

void Bundle::print() const{
    cout<<"Bundle "<<m_name<<" contains: (";
    for(int i=0; i < items.size(); i++){
        items[i]->print();
    }
    cout << "Bundle Price= " << m_price <<"); ";
}