#include <iostream>
#include <string>

#include "Bike.h"

using namespace std;

int main(){
    Bike B1 = Bike(2022,"Suzuki");
    Bike B2 = Bike(2024,"Lambourghini");

    cout << B1. get_brand_name()<<" "<< B1.get_brand_code()<< endl;
   
    cout << B2. get_brand_name()<<" "<< B2.get_brand_code()<< endl;

    return 0;
}