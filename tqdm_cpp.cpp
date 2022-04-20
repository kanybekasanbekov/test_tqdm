// https://gitlab.com/miguelraggi/tqdm-cpp
#include <iostream>
#include "tqdm.hpp"
using namespace std;


int main(){
    int length = 100000;
    int arr[length];

    for(int i : tq::trange(length)){
        for(int j=0; j<length; j++){
            arr[j] = 0;
        }
    }

    cout << "Done!" << endl;
}