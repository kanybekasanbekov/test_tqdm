// https://gitlab.com/miguelraggi/tqdm-cpp
#include <iostream>
#include "tqdm.hpp"
using namespace std;


int main(){
    int length = 100000;
    int arr[length];

    auto A = tq::trange(length);
    A.set_prefix("IMAGENET EVALUATION:");
    for(int i : A){
        float top1 = (float) (i % 17) / 20;
        A << "TOP1=" << top1;
        for(int j=0; j<length; j++){
            arr[j] = 0;
        }
    }

    cout << "Done!" << endl;
}