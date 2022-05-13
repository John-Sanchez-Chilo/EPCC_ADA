#include <iostream>
#include <vector>
using namespace std;

template<typename T>
int greatestNumber(vector<T> array){
    for(int i=0; i<array.size();i++){
        bool isValTheGreatest=true;
        for(int j=0; j<array.size();j++){
            if(j>i){
                isValTheGreatest=false;
            }
        }
        if(isValTheGreatest){
            return i;
        }
    }
}

int main(){
    
    return 0;
}
