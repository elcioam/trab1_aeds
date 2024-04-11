#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

double minmax1(const vector<int> vetor)
{
    int max = vetor[0];
    int min = vetor[0];
    int n = vetor.size();
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > max)
        {
            max = vetor[i];
        }
        if (vetor[i] < min)
        {
            min = vetor[i];
        }
    }
    cout << min << endl;
    cout << max <<endl;
    return 0;
}

double minmax2(const vector<int> vetor)
{
    int max = vetor[0];
    int min = vetor[0];
    int n = vetor.size();
    if (vetor[0] > vetor[1])
    {
        max = vetor[0];
        min = vetor[1];
    }
    else
    {
        max = vetor[1];
        min = vetor[0];
    }
    for (int i = 0; i < n; i += 2)
    {
        if (vetor[i >= vetor[i + 1]])
        {
            if (vetor[i] >= max)
            {
                max = vetor[i];
            }
            if (vetor[i + 1] >= max)
            {
                min = vetor[i + 1];
            }
        }
        else
        {
            if (vetor[i + 1] >= max)
            {
                max = vetor[i + 1];
            }
            if (vetor[i] <= min)
            {
                min = vetor[i];
            }
        }
    }
    return 0;
}

double minmax3(const vector<int> vetor)
{
    int max = vetor[0];
    int min = vetor[0];
    int n = vetor.size();
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > max)
        {
            max = vetor[i];
        }
        if (vetor[i] < min)
        {
            min = vetor[i];
        }
    }

    cout << min << endl;
    cout << max <<endl;
    return 0;
}

vector<int> gerarAleatorio(int tamanho){
    srand(time(0));
    int valormax = 1000;
    vector<int> vetor(tamanho);
    for (int i=0;i<tamanho;i++){
        vetor[i] = rand()%valormax;
        cout << vetor[i] << "\n";
    }

    return vetor;
}

void imprimirVetor(vector<int> vetor){
    int n = vetor.size();
    for (int i=0;i<n;i++){
        cout << vetor[i] << "\n";
    }
}

vector<int> crescente(vector<int>& vetor){
    int n = vetor.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    return vetor;
}

vector<int> decrescente(vector<int> vetor){
    int n = vetor.size();
    //implementar
}

double mediaMinMax1(vector<int>& vetor){
    double media;
    for (int i =0;i<10;i++){
         media += minmax1(vetor);
    }
    return (media/10);
}

double mediaMinMax2(vector<int>& vetor){
    double media;
    for (int i =0;i<10;i++){
         media += minmax2(vetor);
    }
    return (media/10);
}

double mediaMinMax3(vector<int>& vetor){
    double media;
    for (int i =0;i<10;i++){
         media += minmax3(vetor);
    }
    return (media/10);
}



int main()
{
    vector<int> gerar = gerarAleatorio(10);
    cout << endl;
    crescente(gerar);
    imprimirVetor(gerar);
    return 0; 
}