#include <iostream>
#include <stdlib.h>
/*Create a program that calculates the total price of a product. The user is supposed to enter quantity and price
per unit of the product. If the total exceeds 500:- you will get 10 % discount, otherwise 0 %    */
using namespace std;
int main()
{
    double price, total, subtotal, discount = 0.0;
    int qty;
    cout << "Enter price and quantity: " << endl;
    // cin >> price >> qty;
    if (cin >> price && cin >> qty)
    {
        switch(qty){
            
        }
        // subtotal = price * qty;
        // if (qty > 100)
        // {
        //     discount = 0.2;
        // }
        // else if (qty > 50)
        // {
        //     discount = 0.1;
        // }
        // total = (1 - discount) * subtotal;
        // cout << "You're total is: " << total << endl;
    }
    else
    {
        cout << "Input error ";
        system("clear");
        cin.get();
    }
}