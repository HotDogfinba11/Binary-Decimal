#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

    double bin;
    int hex;


int main() {


    vector<int> order;


    cout << "Enter number in decimal format: ";
    cin >> bin;



    for (int x = 0; bin >= 1; x++) {
        order.push_back(abs(remainder(bin, 2)));
        bin = floor(bin / 2);
    }


    cout << "Binary: ";
    int number = order.size();
    while (number > 0) {
        number--;
        cout << order[number];
    } cout << endl;




    return 0;
}

