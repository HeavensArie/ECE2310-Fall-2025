/*
    Donna La
    9/16/25
    ECE 2310

    Creates a vector and shows values and memory addresses of elements before and after manipulation. 
*/
#include <iostream>
#include <vector>
using namespace std;


/**
 * @brief - Prints value and memory location of each element
 * 
 * @param v - Vector of values
 * @param size - number of elements in vector 
 */
void printMemVec(vector<int> v, int size) {
    for(int i = 0; i < size; i++){
        printf("Value: %i at Memory Location: %p\n", v[i], &v[i]);
    }
}
/**
 * @brief - Adds ten to each value in the vector
 * 
 * @param v - Vector of values
 * @param size - number of elements in vector
 */
void incVecBy10(vector<int> &v, int size) {
    for(int i = 0; i < size; i++){
        v[i] = v[i] + 10;
    }
}

int main() {
    vector<int> vector1;
    int SIZE = 5;
    for(int i = 0; i < SIZE; i++){
        vector1.push_back(100 + i);
    }

    printf("Before Increment------------------\n");
    printMemVec(vector1, vector1.size());
    incVecBy10(vector1, SIZE);

    printf("After Increment------------------\n");
    printMemVec(vector1, vector1.size());

    vector1.pop_back();
    printf("After Pop ------------------\n");  
    printMemVec(vector1, vector1.size());
    vector1.push_back(101);
    vector1.push_back(102);

    printf("After Push ------------------\n");
    printMemVec(vector1, vector1.size());

    
    return 0;
}