//= ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Problema da Mochila utilizando Algoritmos Genéticos
//= O problema da mochila consiste em selecionar um subconjunto de objetos para maximizar o valor total,
//= sem exceder a capacidade de peso da mochila. Neste exemplo, utilizamos a técnica de Algoritmos Genéticos,
//= que busca otimizar a solução através da aplicação de operadores genéticos (cruzamento, mutação) sobre
//= uma população inicial de soluções representadas em binário.
//= 
//= Mochila: Capacidade máxima de 20Kg
//= Objetos: 16 objetos, cada um com peso e valor definidos
//= Objetivo: Encontrar a combinação ótima de objetos que maximize o valor sem exceder o peso.
//=
//= Mais informações: https://en.wikipedia.org/wiki/Knapsack_problem
//=
//==== Resumo ============================================================================================================================
//= A técnica de Algoritmos Genéticos utiliza operações de cruzamento e mutação para explorar o espaço de soluções.
//= Cada solução é representada por uma sequência de 16 bits, onde cada bit indica a inclusão ou exclusão de um objeto.
//= Cruzamento Ponto Único: Combina duas soluções trocando segmentos dos bits.
//= Cruzamento Aritmético (AND): Combina duas soluções utilizando a operação AND.
//= Mutação Simples: Altera um bit da solução atual.
//= Mutação Dupla: Altera dois bits da solução atual.
//========================================================================================================================================
//****************************************************************************************************************************************
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Algoritmos Genéticos: Uma abordagem para o Problema da Mochila                                                                        ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│ A técnica de Algoritmos Genéticos (AG) é baseada na teoria da evolução e seleção natural.                                             │
//│ No contexto do problema da mochila, os AGs representam soluções como sequências binárias de 16 bits.                                  │
//│ Cada bit indica a presença (1) ou ausência (0) de um objeto na mochila.                                                               │
//│ O objetivo é maximizar o valor dos objetos na mochila sem exceder a capacidade de peso definida.                                      │
//│ Os operadores genéticos utilizados são:                                                                                               │
//│ - Cruzamento Ponto Único: Intercala segmentos de duas soluções.                                                                       │
//│ - Cruzamento Aritmético: Realiza a operação lógica AND entre duas soluções.                                                           │
//│ - Mutação Simples: Modifica um único bit da solução.                                                                                  │
//│ - Mutação Dupla: Modifica dois bits da solução.                                                                                       │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘

#include <iostream>
using namespace std;

#define green "\033[32m"
#define red "\033[0;31m"
#define default "\033[m"

int mutacaoDupla(int);
int mutacaoSimples(int);
int cruzamentoAritmetico(int, int);
int cruzamentoPontoUnico(int, int);

void mostrarCabecalho(short, const int*, bool);
bool avaliacao(int, const int*, const int*);

int bitsAltos(int);
int bitsBaixos(int);
int orBinario(int, int);
int andBinario(int, int);
void exibirBinario(unsigned short);
int ligarBit(int, int);
int desligarBit(int, int);
bool testarBit(int, int);
int main() 
{

    const int letra[] = { 65, 66, 67, 68, 69,70, 71,72, 73, 74, 75, 76, 77, 78, 79, 80 };
    const int peso[] = { 12, 3, 5, 4, 9, 1, 2, 3, 4, 1, 2, 4, 5, 2, 4, 1 };
    const int valor[] = { 4, 4, 8, 10, 15, 3, 1, 1, 2, 10, 20, 15, 10, 3, 4, 12 };

    short indice = 0;

    cout << "\tObjeto\t\t";
    mostrarCabecalho(indice, letra, true);
    cout << "\n\tPeso(Kg)\t";
    mostrarCabecalho(indice, peso, false);
    cout << "\n\tValor($)\t";
    mostrarCabecalho(indice, valor, false);

    short mochila = 60504;
    short mochila1 = 25000;
    short mochila2 = 12329;
    short mochila3 = 38054;
    short mochila4 = 1259;
    short mochila5 = 732;

    short mochila6 = cruzamentoPontoUnico(mochila, mochila1); //60584
    short mochila7 = cruzamentoAritmetico(mochila2, mochila3); //4128;
    short mochila8 = mutacaoSimples(mochila4); //1771;
    short mochila9 = mutacaoDupla(mochila5); //4820;

    exibirBinario(mochila);
    exibirBinario(mochila1);
    exibirBinario(mochila2);
    exibirBinario(mochila3);
    exibirBinario(mochila4);
    exibirBinario(mochila5);

    exibirBinario(mochila6);
    exibirBinario(mochila7);
    exibirBinario(mochila8);
    exibirBinario(mochila9);

    cout << "\n\nResultado da avaliacao";
    cout << "\n----------------------\n";
    avaliacao(mochila, peso, valor);
    avaliacao(mochila1, peso, valor);
    avaliacao(mochila2, peso, valor);
    avaliacao(mochila3, peso, valor);
    avaliacao(mochila4, peso, valor);
    avaliacao(mochila5, peso, valor);
    cout << "\n----------------------\n";
    avaliacao(mochila6, peso, valor);
    avaliacao(mochila7, peso, valor);
    avaliacao(mochila8, peso, valor);
    avaliacao(mochila9, peso, valor);
}

void exibirBinario(unsigned short bits)
{
    cout << endl << "\t" << (int)bits << "\t\t\t";
    for (int i = 15; i >= 0; i--) 
    {
        if (bits & (1 << i))
            cout << green <<"1 \t" << default;
        else
            cout << red <<"0 \t" << default;
    }
    //cout << endl;
}

int ligarBit(int _mochila, int item) 
{
    unsigned short mascara = 1 << item;
    _mochila = _mochila | mascara;
    return (short)_mochila;
}

int desligarBit(int _mochila, int item) 
{
    unsigned short mascara = ~(1 << item);
    _mochila = _mochila & mascara;
    return (short)_mochila;
}

bool testarBit(int _mochila, int item) 
{
    unsigned short mascara = 1 << item;
    return (short)_mochila & mascara;
}

int andBinario(int solucao1, int solucao2)
{
    return solucao1 & solucao2;
}

int orBinario(int solucao1, int solucao2)
{
    return solucao1 | solucao2;
}

int bitsBaixos(int _mochila)
{
    int mascara = 0xFF; // 0xFF em hexadecimal tem os 8 bits mais baixos definidos como 1.
    return _mochila & mascara;
}

int bitsAltos(int _mochila) 
{
    int mascara = 0xFF00; // 0xFF00 em hexadecimal tem 
    return _mochila & mascara;
}

void mostrarCabecalho(short indice, const int* medida, bool charIsTrueInterrogation)
{      
    if (indice < 16)
    {
        if (charIsTrueInterrogation)
            cout << "\t" << (char)medida[indice] << " ";
        else   
            cout << "\t" << medida[indice] << " ";        
        mostrarCabecalho(indice + 1, medida, charIsTrueInterrogation);
    }
}

bool avaliacao(int _mochila, const int* peso, const int * valor)
{
    
    cout << (unsigned short)_mochila << "\t- ";

    short pesoTotalMochila = 0, valorTotalItens = 0;

    for (short i = 15; i >= 0; i--)
    {
        if (testarBit(_mochila, i))
        {            
            pesoTotalMochila = pesoTotalMochila + peso[15-i];
            valorTotalItens = valorTotalItens + valor[15-i];
        }
    }
    
    cout << "$" << valorTotalItens << " - " << pesoTotalMochila << "Kg -\t";

    if (pesoTotalMochila <= 20)
    {
        cout << green <<  "OK" << default << endl;
        return true;
    }                  
    else
    {
        cout << red << "X" << default << endl;
        return false;
    }

          
}

int cruzamentoPontoUnico(int solucao1, int solucao2) 
{
    return bitsAltos(solucao1) | bitsBaixos(solucao2);
}

int cruzamentoAritmetico(int solucao1, int solucao2) 
{
    return andBinario(solucao1, solucao2);
}

int mutacaoSimples(int _mochila) 
{
    if (testarBit(_mochila, 9))
        return desligarBit(_mochila, 9);
    else
        return ligarBit(_mochila, 9);
}

int mutacaoDupla(int _mochila) {
    if (testarBit(_mochila, 3))
        _mochila = desligarBit(_mochila, 3);
    else
        _mochila = ligarBit(_mochila, 3);

    if (testarBit(_mochila, 12))
        _mochila = desligarBit(_mochila, 12);
    else
        _mochila = ligarBit(_mochila, 12);

    return _mochila;
}


