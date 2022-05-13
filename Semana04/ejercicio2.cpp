#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void every_other(vector<T> array){
    int other_number=0;
    for(int i = 0; i < array.size();i++){
        if(i%2==0){
            other_number=array[i];
            cout<<other_number+array[i]<<endl;
        }
    }
}

int main(){
    
    return 0;
}