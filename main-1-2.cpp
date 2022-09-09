#include <iostream>
#include <string>

#include "Bike.h"
#include "Bike_yard.h"

using namespace std;
int main(){
    Bike B1 = Bike(2022,"Suzuki");
    Bike B2 = Bike(2024,"Lambourghini");

    Bike_yard C1(2);

    C1.add_stock(B1);
    C1.add_stock(B2);

    cout << C1.get_total_stock_count() << endl;

    Bike *pointer;
   pointer = C1.get_current_stock_list();

   for(int i = 0; i< 2; i++){
    cout << pointer[i].get_brand_name() << " "<< pointer[i].get_brand_code()<< endl;
   }

    cout << C1.get_stock_count(2022) << endl;

   return 0;
}