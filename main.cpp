#include <iostream>
#include <vector>
#include <fstream>
#include "rselect_dselect.h"

using namespace std;

static vector<int64_t > piArray = {1415926535, 8979323846, 2643383279, 5028841971, 6939937510,
                            5820974944, 5923078164, 4628620899, 8628034825, 3421170679};

int main() {
    {
        ifstream input1("../problem6.5test1.txt");
        if (!input1.is_open()) {
            cout << "Error opening file {../problem6.5test1.txt}" << endl;
            return 1;
        }

        vector<int64_t> test1;
        int64_t num1;
        while (input1 >> num1) {
            test1.push_back(num1);
        }
        input1.close();

        cout << "RSelect & DSelect Test1: " << std::endl;
        RSelect_Test(test1);

        DSelect_Test(test1);
    }

    {
        ifstream input2("../problem6.5test2.txt");
        if (!input2.is_open()) {
            cout << "Error opening file {../problem6.5test2.txt}" << endl;
            return 1;
        }

        vector<int64_t> test2;
        int64_t num2;
        while (input2 >> num2) {
            test2.push_back(num2);
        }
        input2.close();

        cout << "RSelect & DSelect Test2: " << std::endl;
        RSelect_Test(test2);

        DSelect_Test(test2);
    }

    cout << "RSelect & DSelect Test_PI: " << std::endl;
    RSelect_Test(piArray);
    DSelect_Test(piArray);

    return 0;
}


