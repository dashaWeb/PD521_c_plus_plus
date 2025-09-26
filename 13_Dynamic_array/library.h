#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::endl;



//Функція розподілу динамічної пам'яті (створення дин. мас). + 
//Функція ініціалізації динамічного масиву. + 
//Функція друку динамічного масиву. + 
//Функція видалення динамічного масиву. + 
//Функція додавання елемента в кінець масиву. +
//Функція видалення елемента в кінці масиву.  - 
//Функція додавання елемента на початок масиву. - 
//Функція видалення елемента на початку масиву. +
//Функція вставки елемента за вказаним індексом. + 
//Функція видалення елемента за вказаним індексом.

int* createArray(size_t size);
void fillArray(int* arr, size_t size, int min = 1, int max = 10);
void printArray(int* arr, size_t size, string prompt = "");
void deleteArray(int* &arr);


void pushBack(int*& arr, int& size, int value);


//Функція видалення елемента на початку масиву.
void popFront(int*& arr, int& size);


//Функція вставки елемента за вказаним індексом.
void insert(int*& arr, int& size, int value, int index);