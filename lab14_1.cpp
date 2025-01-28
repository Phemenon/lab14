#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    for(int i = 0 ; i<N ; i++){
        int key = d[i];
        int j = i-1;

        if(j >= 0 && key > d[j]){
            for(int n = i ; n>=0 ; n--){
                if(key>d[n]){
                    int temp = d[n];
                    d[n] = key;
                    d[n+1] = temp;
                }
            }
        }
        if(i!=0){
            cout<<"Pass "<<i<<":";
            for(int i = 0; i < 10; i++) cout << d[i] << " ";
            cout<<"\n";
        }
        }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
