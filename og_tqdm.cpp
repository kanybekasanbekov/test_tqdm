// https://github.com/tqdm/tqdm.cpp
#include <iostream>
#include "tqdm/tqdm.h"
using namespace std;


int main(){
    int length = 100000;
    int arr[length];

    for(int i : tqdm::range(length)){
        for(int j=0; j<length; j++){
            arr[j] = 0;
        }
    }

    cout << "Done!" << endl;
}