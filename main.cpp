#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include "rselect_dselect.h"

using namespace std;

int main() {
    {
        ifstream input("../problem6.5test1.txt");
        if (!input.is_open()) {
            cout << "\nError opening file {../problem6.5test1.txt}\n";
            return 1;
        }

        vector<int64_t> test;
        int64_t num;
        while (input >> num) {
            test.push_back(num);
        }
        input.close();

        cout << "\nRSelect & DSelect Test1:\n";
        RSelect_Test(test);

        DSelect_Test(test);
    }

    {
        ifstream input("../problem6.5test2.txt");
        if (!input.is_open()) {
            cout << "\nError opening file {../problem6.5test2.txt}\n";
            return 1;
        }

        vector<int64_t> test;
        int64_t num;
        while (input >> num) {
            test.push_back(num);
        }
        input.close();

        cout << "\nRSelect & DSelect Test2:\n";
        RSelect_Test(test);

        DSelect_Test(test);
    }

    {
        ifstream input("../pi_array.txt");
        if (!input.is_open()) {
            cout << "\nError opening file {../pi_array.txt}\n";
            return 1;
        }

        vector<int64_t> pi_array;
        int64_t num;
        while (input >> num) {
            pi_array.push_back(num);
        }
        input.close();

        cout << "\nRSelect & DSelect Test_PI: \n";
        RSelect_Test(pi_array);

        DSelect_Test(pi_array);
    }


    return 0;
}
