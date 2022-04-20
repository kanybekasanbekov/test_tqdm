// https://github.com/aminnj/cpptqdm
#include <iostream>
#include "tqdm.h"
using namespace std;


int main(){
    int length = 100000;
    int arr[length];

    tqdm bar;
    for(int i=0; i<length; i++){
        bar.progress(i, length);
        for(int j=0; j<length; j++){
            arr[j] = 0;
        }
    }
    bar.finish();

    cout << "Done!" << endl;
}