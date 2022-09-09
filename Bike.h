
#include <iostream>
#include <string>

#include "Bike.h"

Bike::Bike(){
    bikes = "";
    bikes_code = 0;
}
Bike::Bike(int b_code, std::string b_bikes){
    bikes = b_bikes;
    bikes_code = b_bikes code;
}

std::string Bike:: get_brand_name(){
    return bikes;
}

int Bike:: get_brand_code(){
    return bikes_code;
}

Bike::~Bike(){
    
}