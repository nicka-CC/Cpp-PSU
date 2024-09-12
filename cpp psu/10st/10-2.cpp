//Описать структуру PRICE, содержащую следующие поля:а)название товара;
//б)название магазина, в котором продаётся товар;в)стоимость товара.
//Написать программу, выполняющую следующие действия: а)чтение информации о
//10товарах из текстового файла;б)вывод полной информации об имеющихся товарах на экран,
//записи должны быть упорядоченны в алфавитном порядке по названию товара;
//в)вывод на экран информации о товарах, стоимость которых превышает заданную(или сообщение об их отсутствии).

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


struct PRICE {
    string productName;
    string shopName;
    double price;
};


void readProductsFromFile(const string& filename, vector<PRICE>& products) {
    ifstream inputFile(filename);


    PRICE product;
    while (inputFile >> product.productName >> product.shopName >> product.price) {
        products.push_back(product);
    }

    inputFile.close();
}

void printAllProducts(const vector<PRICE>& products) {
    for (const auto& product : products) {
        cout << "Name: " << product.productName
             << ", Shop: " << product.shopName
             << ", Price: " << product.price << endl;
    }
}


void sortProductsByName(vector<PRICE>& products) {
    sort(products.begin(), products.end(), [](const PRICE& a, const PRICE& b) {
        return a.productName < b.productName;
    });
}

void printProductsAbovePrice(const vector<PRICE>& products, double threshold) {
    bool found = false;
    for (const auto& product : products) {
        if (product.price > threshold) {
            cout << "Name: " << product.productName
                 << ", Shop: " << product.shopName
                 << ", Price: " << product.price << endl;
            found = true;
        }
    }

}

int main() {
    vector<PRICE> products;
    string filename = "test.txt";
    readProductsFromFile(filename, products);

    sortProductsByName(products);


    printAllProducts(products);

    double priceThreshold;
    cin >> priceThreshold;

    printProductsAbovePrice(products, priceThreshold);

    return 0;
}
