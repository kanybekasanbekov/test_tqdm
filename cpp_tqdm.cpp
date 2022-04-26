// https://github.com/aminnj/cpptqdm
#include <iostream>
#include "tqdm.h"
using namespace std;


int main(){
    int length = 100000;
    int arr[length];

    tqdm bar;
    bar.set_description("TRAINING:");
    for(int i=0; i<length; i++){
        float top1 = (float) (i % 17) / 20;
        string top1_log = "TOP1: " + to_string(top1);
        bar.progress(i, length, top1_log);
        for(int j=0; j<length; j++){
            arr[j] = 0;
        }
    }
    bar.finish();

    cout << "Done!" << endl;
}