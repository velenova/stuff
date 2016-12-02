#include<iostream>
#include<string>

//#include "dispense.h"
//#include "register.h"

using namespace std;

int main(char **argv) {
while(1) {
    //intial welcome
    cout << "You've come to the organic vending machine. Here are your selections: \n << printProductsWithPricesAndNumbersAndQuantity();
    cout << "You have this much to spend: $" << money;
    cout << "type in numbers separated by a space\n";

    //select products
    cin >> productSelections;
    cout << "Total cost will be: $" << priceOfProducts(productSelections) << "How much money will you be putting in? ";
    cin >> spending;
    if (spending > money) {
        cout << Sorry, you broke\n";
        break;
}
    if (money < priceOfProducts(productSelections)) {
        cout << "Sorry, you broke\n";
        break;
}
    checkQuantityOfProducts(productSelections);
    money -= priceOfProducts(productSelections);
    cout << "Here are your items: \n" << dispenseItems(productSelections);

return 0;

}
}
