#include <iostream>
#include <string>

#include "Bike_yard.h"
#include "Bike.h"
using namespace std;

Bike_yard::Bike_yard(){
    maximum_cap = 0;
    list_of_Bikes = 0;
};

Bike_yard::Bike_yard(int capacity){
     maximum_cap = capacity;
    list_of_Bikes = 0;
    B = new Bike[maximum_cap];
};

int Bike_yard::get_total_stock_count(){
     return list_of_Bikes;
};

int Bike_yard::get_stock_count(int code){
     int count = 0;
    for(int i = 0; i < list_of_Bikes; i++){
         if(T[i].get_brand_code() == code ){
          count++;
         }
    }
      return count;
};

Bike* Bike_yard::get_current_stock_list(){
      return B;
};

bool Bike_yard::add_stock(Bike c){
    if (list_of_Bike < maximum_cap){
        B[list_of_Bikes ] = c;
        list_of_Bikes++;
        return true;
     }
    return false;
};

Bike_yard::~Bike_yard(){

};
