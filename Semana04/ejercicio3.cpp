#include <iostream>
#include <vector>
using namespace std;

template<typename T>
bool twoSum(vector<T> array){
    for(int i = 0; i < array.size();i++){
        for(int j = 0; j < array.size();j++){
            if(i!=j && array[i]+array[j]==10){
                return true;
            }
        }
    }
    return false;
}

int main(){
    
    return 0;
}