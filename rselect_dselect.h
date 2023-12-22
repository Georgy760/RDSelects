//
// Created by AxelSingleton on 12/21/2023.
//

#ifndef RSELECT_DSELECT_H
#define RSELECT_DSELECT_H

#include <vector>
#include <chrono>
int64_t partition(std::vector<int64_t>& arr, int low, int high);

int64_t rselect(std::vector<int64_t>& arr, int low, int high, int k);

int64_t dselect(std::vector<int64_t>& arr, int low, int high, int i);

void RSelect_Test(std::vector<int64_t> &data);

void DSelect_Test(std::vector<int64_t> &data);

#endif RSELECT_DSELECT_H
