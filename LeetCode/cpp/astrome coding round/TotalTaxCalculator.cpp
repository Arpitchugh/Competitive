/*
You may know that income tax calculations in most parts of the world is based on slab model. Let's take a simple case of a two slab model with transition from base slab to top slab defined by slab amount (S). Let the base tax for gross income amount (G) equal to (S), be defined as (BT). If income exceed S, then the total tax would be
*/
#include <iostream>
using namespace std;

int main(){
    double tax;
    double N,r,S,BT;
    cin>>N>>r>>S>>BT;
    double BaseTax =  (tax*tax)/G;
    if(N<=S){
        tax = BT;
    }
    else{
       tax = BT + (-S)*r/100;
    }
}
