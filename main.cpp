#include <iostream>
#include <vector>

using namespace std; 

int minmax1(const vector<int> vetor){
int max, min = 0;
int n = vetor.size();
for (int i=0; i<n;i++){
    if (vetor[i] > max){
        max = vetor[i];
    }
    if (vetor[i]< min){
        min = vetor[i];
    }
}
}

int minmax2(const vector<int> vetor){
int max, min = 0;
int n = vetor.size();
for (int i=0; i<n;i++){
    if (vetor[i] > max){
        max = vetor[i];
    }
    else if (vetor[i]< min){
        min = vetor[i];
    }
}
}

int minmax3(const vector<int> vetor){
int max, min = 0;
int n = vetor.size();
for (int i=0; i<n;i++){
    if (vetor[i] > max){
        max = vetor[i];
    }
    if (vetor[i]< min){
        min = vetor[i];
    }
}
}

int main(){
return 0;
}