#include <iostream>
using namespace std;
template<typename T>
bool find_needle(vector<T> needle, vector<T> haystack){
    int needle_index=0;
    int haystack_index=0;
    while(haystack_index<needle_index){
        if(needle[needle_index]==haystack[haystack_index]){
            int found_needle=true;
            while(needle_index<needle.size()){
                if(needle[needle_index]!=haystack[haystack_index+needle_index]){
                    found_needle=false;
                    break;
                }
                needle_index++;
            }
            if(found_needle){
                return true;
            }
            needle_index=0;
        }
        haystack_index++;
    }
    return false;
}
int main(){
    
    return 0;
}