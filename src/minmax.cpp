#include "minmax.hpp"
#include <iostream>
#include <vector>
#include <chrono>
#include <iomanip> //setprecision (4 casas)
#include <algorithm> //sort

using namespace std;
using namespace std::chrono;

double minmax1(const vector<int> vetor)
{
    auto inicio = steady_clock::now();

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

    auto fim = steady_clock::now();

    auto tempo = fim - inicio;

    return duration_cast<duration<double, std::milli>>(tempo).count(); // converte segundo para mili
}

double minmax2(const vector<int> vetor)
{
    auto inicio = steady_clock::now();

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

    auto fim = steady_clock::now();

    auto tempo = fim - inicio;

    return duration_cast<duration<double, std::milli>>(tempo).count(); 
}

double minmax3(const vector<int> vetor)
{
    auto inicio = steady_clock::now();

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
    auto fim = steady_clock::now();

    auto tempo = fim - inicio;

    return duration_cast<duration<double, std::milli>>(tempo).count(); 
}

vector<int> gerarAleatorio(int tamanho)
{
    srand(time(0));
    int valormax = 1000;
    vector<int> vetor(tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % valormax;
    }

    return vetor;
}

void imprimirVetor(vector<int> vetor)
{
    int n = vetor.size();
    for (int i = 0; i < n; i++)
    {
        cout << vetor[i] << "\n";
    }
    cout << endl;
}

vector<int> crescente(vector<int> &vetor)
{
    sort(vetor.begin(), vetor.end());
    return vetor;
}

vector<int> decrescente(vector<int> &vetor)
{
    sort(vetor.begin(), vetor.end(), greater<int>());
    return vetor;
}

double mediaMinMax1(vector<int> &vetor)
{
    double media = 0;
    for (int i = 0; i < 10; i++)
    {
        media += minmax1(vetor);
    }
    return (media / 10);
}

double mediaMinMax2(vector<int> &vetor)
{
    double media = 0;
    for (int i = 0; i < 10; i++)
    {
        media += minmax2(vetor);
    }
    return (media / 10);
}

double mediaMinMax3(vector<int> &vetor)
{
    double media = 0;
    for (int i = 0; i < 10; i++)
    {
        media += minmax3(vetor);
    }
    return (media / 10);
}

void trabalho()
{
    vector<int> vetor1000 = gerarAleatorio(1000);
    cout << vetor1000.size() << ",Aleatório,minMax1," << fixed << setprecision(4) << mediaMinMax1(vetor1000) << "ms" << endl;
    cout << vetor1000.size() << ",Aleatório,minMax2," << fixed << setprecision(4) << mediaMinMax2(vetor1000) << "ms" << endl;
    cout << vetor1000.size() << ",Aleatório,minMax3," << fixed << setprecision(4) << mediaMinMax3(vetor1000) << "ms" << endl;
    crescente(vetor1000);
    cout << vetor1000.size() << ",Crescente,minMax1," << fixed << setprecision(4) << mediaMinMax1(vetor1000) << "ms" << endl;
    cout << vetor1000.size() << ",Crescente,minMax2," << fixed << setprecision(4) << mediaMinMax2(vetor1000) << "ms" << endl;
    cout << vetor1000.size() << ",Crescente,minMax3," << fixed << setprecision(4) << mediaMinMax3(vetor1000) << "ms" << endl;
    decrescente(vetor1000);
    cout << vetor1000.size() << ",Decrescente,minMax1," << fixed << setprecision(4) << mediaMinMax1(vetor1000) << "ms" << endl;
    cout << vetor1000.size() << ",Decrescente,minMax2," << fixed << setprecision(4) << mediaMinMax2(vetor1000) << "ms" << endl;
    cout << vetor1000.size() << ",Decrescente,minMax3," << fixed << setprecision(4) << mediaMinMax3(vetor1000) << "ms" << endl;

    vector<int> vetor10000 = gerarAleatorio(10000);
    cout << vetor10000.size() << ",Aleatório,minMax1," << fixed << setprecision(4) << mediaMinMax1(vetor10000) << "ms" << endl;
    cout << vetor10000.size() << ",Aleatório,minMax2," << fixed << setprecision(4) << mediaMinMax2(vetor10000) << "ms" << endl;
    cout << vetor10000.size() << ",Aleatório,minMax3," << fixed << setprecision(4) << mediaMinMax3(vetor10000) << "ms" << endl;
    crescente(vetor10000);
    cout << vetor10000.size() << ",Crescente,minMax1," << fixed << setprecision(4) << mediaMinMax1(vetor10000) << "ms" << endl;
    cout << vetor10000.size() << ",Crescente,minMax2," << fixed << setprecision(4) << mediaMinMax2(vetor10000) << "ms" << endl;
    cout << vetor10000.size() << ",Crescente,minMax3," << fixed << setprecision(4) << mediaMinMax3(vetor10000) << "ms" << endl;
    decrescente(vetor10000);
    cout << vetor10000.size() << ",Decrescente,minMax1," << fixed << setprecision(4) << mediaMinMax1(vetor10000) << "ms" << endl;
    cout << vetor10000.size() << ",Decrescente,minMax2," << fixed << setprecision(4) << mediaMinMax2(vetor10000) << "ms" << endl;
    cout << vetor10000.size() << ",Decrescente,minMax3," << fixed << setprecision(4) << mediaMinMax3(vetor10000) << "ms" << endl;

    vector<int> vetor100000 = gerarAleatorio(100000);
    cout << vetor100000.size() << ",Aleatório,minMax1," << fixed << setprecision(4) << mediaMinMax1(vetor100000) << "ms" << endl;
    cout << vetor100000.size() << ",Aleatório,minMax2," << fixed << setprecision(4) << mediaMinMax2(vetor100000) << "ms" << endl;
    cout << vetor100000.size() << ",Aleatório,minMax3," << fixed << setprecision(4) << mediaMinMax3(vetor100000) << "ms" << endl;
    crescente(vetor100000);
    cout << vetor100000.size() << ",Crescente,minMax1," << fixed << setprecision(4) << mediaMinMax1(vetor100000) << "ms" << endl;
    cout << vetor100000.size() << ",Crescente,minMax2," << fixed << setprecision(4) << mediaMinMax2(vetor100000) << "ms" << endl;
    cout << vetor100000.size() << ",Crescente,minMax3," << fixed << setprecision(4) << mediaMinMax3(vetor100000) << "ms" << endl;
    decrescente(vetor100000);
    cout << vetor100000.size() << ",Decrescente,minMax1," << fixed << setprecision(4) << mediaMinMax1(vetor100000) << "ms" << endl;
    cout << vetor100000.size() << ",Decrescente,minMax2," << fixed << setprecision(4) << mediaMinMax2(vetor100000) << "ms" << endl;
    cout << vetor100000.size() << ",Decrescente,minMax3," << fixed << setprecision(4) << mediaMinMax3(vetor100000) << "ms" << endl;

    vector<int> vetor500k = gerarAleatorio(500000);
    cout << vetor500k.size() << ",Aleatório,minMax1," << fixed << setprecision(4) << mediaMinMax1(vetor500k) << "ms" << endl;
    cout << vetor500k.size() << ",Aleatório,minMax2," << fixed << setprecision(4) << mediaMinMax2(vetor500k) << "ms" << endl;
    cout << vetor500k.size() << ",Aleatório,minMax3," << fixed << setprecision(4) << mediaMinMax3(vetor500k) << "ms" << endl;
    crescente(vetor500k);
    cout << vetor500k.size() << ",Crescente,minMax1," << fixed << setprecision(4) << mediaMinMax1(vetor500k) << "ms" << endl;
    cout << vetor500k.size() << ",Crescente,minMax2," << fixed << setprecision(4) << mediaMinMax2(vetor500k) << "ms" << endl;
    cout << vetor500k.size() << ",Crescente,minMax3," << fixed << setprecision(4) << mediaMinMax3(vetor500k) << "ms" << endl;
    decrescente(vetor500k);
    cout << vetor500k.size() << ",Decrescente,minMax1," << fixed << setprecision(4) << mediaMinMax1(vetor500k) << "ms" << endl;
    cout << vetor500k.size() << ",Decrescente,minMax2," << fixed << setprecision(4) << mediaMinMax2(vetor500k) << "ms" << endl;
    cout << vetor500k.size() << ",Decrescente,minMax3," << fixed << setprecision(4) << mediaMinMax3(vetor500k) << "ms" << endl;
}

