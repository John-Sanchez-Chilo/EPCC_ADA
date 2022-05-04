#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> A){
    for(int i=0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

//orden descendente
void insertionSortd(vector<int> &A){
    int key,i,j;
    for(j=1; j<A.size(); j++){
        key=A[j];
        i=j-1;
        while(i>=0 && A[i]<key){
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }
}

int main(){
    vector<int> A={31,41,59,26,41,58};
    print(A);
    insertionSortd(A);
    print(A);
    return 0;
}
