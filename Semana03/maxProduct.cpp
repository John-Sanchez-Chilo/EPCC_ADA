#include <iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> numbers){
    int max1,max2;
    if(numbers[0]>numbers[1]){
        max1=numbers[0];
        max2=numbers[1];
    }else{
        max1=numbers[1];
        max2=numbers[0];
    }
    for(int i=2; i<numbers.size();i++){
        if(numbers[i]>max1){
            max2=max1;
            max1=numbers[i];
        }else if(numbers[i]>max2){
            max2=numbers[i];
        }
    }
    return max1*max2;
}

int main(){
    int p;
    cin>>p;
    vector<int> numbers(p);
    for(int i=0;i<p;i++){
        cin>>numbers[i];
    }
    cout<<maxProduct(numbers);
    return 0;
}
