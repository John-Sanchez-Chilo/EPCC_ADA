#include <iostream>
#include <vector>
using namespace std;

template<typename T>
T pick_resume(vector<T> resumes){
    string eliminate = "top";
    while(resumes.size()>1){
        if(eliminate=="top"){
            resumes=resumes[resumes.size()/2, resumes.size()-1];
            eliminate="bottom";
        }else if(eliminate=="bottom"){
            resumes=resumes[0,resumes.size()/2];
            eliminate="top";
        }   
    }
    return resumes[0];
}

int main(){
    
    return 0;
}