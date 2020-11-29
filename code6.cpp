#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstOne;
    string lastOne;
    string firstTwo;
    string lastTwo;
    int productsOne;
    int productsTwo;

    cout << "Enter first name: ";
    cin >> firstOne;
    cout << "Enter last name: ";
    cin >> lastOne;
    cout << "Amount of products purchased? ";
    cin >> productsOne;

    cout << "\nClient: " << firstOne << " " << lastOne << " has bought " << productsOne << " products from TRONIX!" << endl;

    cout << "\nEnter first name: ";
    cin >> firstTwo;
    cout << "Enter last name: ";
    cin >> lastTwo;
    cout << "Amount of products purchased? ";
    cin >> productsTwo;

    cout << "\nClient: " << firstTwo << " " << lastTwo << " has bought " << productsTwo << " products from TRONIX!" << endl;



    string firstThree;
    string lastThree;
    string firstFour;
    string lastFour;
    int salesOne;
    int salesTwo;

    cout << "\nSalesperson, enter first name: ";
    cin >> firstThree;
    cout << "Enter last name: ";
    cin >> lastThree;
    cout << "Amount of sales made? ";
    cin >> salesOne;

    cout << "\nSalesperson " << firstThree << " " << lastThree << " has made " << salesOne << " sale(s)." << endl;

    cout << "\nSalesperson, enter first name: ";
    cin >> firstFour;
    cout << "Enter last name: ";
    cin >> lastFour;
    cout << "Amount of sales made? ";
    cin >> salesTwo;

    cout << "\nSalesperson " << firstFour << " " << lastFour << " has made " << salesTwo << " sale(s)" << endl;



    int phoneSales;
    int tvSales;
    int laptopSales;

    cout << "\nTotal number of phones sold? ";
    cin >> phoneSales;

    cout << "Total number of TV's sold? ";
    cin >> tvSales;

    cout << "Total number of laptops sold? ";
    cin >> laptopSales;

    cout << "\nProducts:" << endl;
    cout << "TRONIX Smartphone's sold: " << phoneSales << endl;
    cout << "TRONIX Smart TV's sold: " << tvSales << endl;
    cout << "TRONIX Laptop's sold: " << laptopSales << endl;

    cout << "\nClient Purchase History:" << endl;
    cout << "Client: " << firstOne << " " << lastOne << " - " << productsOne << " products." << endl;
    cout << "Client: " << firstTwo << " " << lastTwo << " - " << productsTwo << " products." << endl;

    cout << "\nSales person information:" << endl;
    cout << "Salesperson: " << firstThree << " " << lastThree << " - " << salesOne << " sales." << endl;
    cout << "Salesperson: " << firstFour << " " << lastFour << " - " << salesTwo << " sales." << endl;






    return 0;
}
