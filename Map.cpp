//
// Created by hang-tran on 11/12/20.
//
#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;
int Random(){
    return rand() % 2;
}
int main(){
    vector< vector<int> > matrix;
    vector<int> temp;
    int tmp;
    for(int i = 0; i < 16; i++){
        for(int j = 0; i < 32; j++){
            tmp = Random();
            temp.push_back(tmp);
        }
        matrix.push_back(temp);
    }
    for(int i = 0; i < 16; i++){
        for(int j = 0; j < 32; j++){
            if()
        }
    }

}
