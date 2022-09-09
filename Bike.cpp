#include <iostream>
#include <string>

#include "Bike.h"

Bike::Bike(){
    bikes = "";
    bikes_code = 0;
}
Bike::Bike(int b_code, std::string b_name){
    bikes_code = b_code;
    bikes = b_name;
}

std::string Bike:: get_brand_name(){
    return bikes;
}

int Bike:: get_brand_code(){
    return bikes_code;
}

Bike::~Bike(){
    
}