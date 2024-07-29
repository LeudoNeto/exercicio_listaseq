#include <iostream>

using namespace std;

class ListaSeq {
    private:
        int *dados;
        int tamAtual;
        int tamMax;

    public:

        ListaSeq(int tamMax) : tamMax(tamMax) {
            tamAtual = 0;
            dados = new int[tamMax];
        }

        void printarLista() {
            cout << "[ ";
            for (int i = 0; i < tamAtual; i++) {
                cout << dados[i] << ", ";
            }
            cout << "]" << endl;
        }

        bool estaVazia() {
            return tamAtual == 0;
        }

        bool estaCheia() {
            return tamAtual == tamMax;
        }

        int obterTamanho() {
            return tamAtual;
        }

        int recuperarValor(int pos) {
            if (pos > tamMax || pos > tamAtual+1 || pos <= 0) {
                cerr << "Tentativa de leitura de fora do array." << endl;
                return 0;
            }
            return dados[pos-1];
        }

        void modificarValor(int valor, int pos) {
            if (pos > tamMax || pos > tamAtual+1 || pos <= 0) {
                cerr << "Tentativa de modificação de fora do array." << endl;
                return;
            }
            else {
                dados[pos-1] = valor;
                if (pos > tamAtual) {
                    tamAtual = pos;
                }
            }
        }

        void inserirValor(int valor, int pos) {
            if (pos > tamMax || pos > tamAtual+1 || pos <= 0) {
                cerr << "Tentativa de inserção para fora do array." << endl;
                return;
            }
            int i;
            for (i = tamAtual; i >= pos; i--) {
                dados[i] = dados[i-1];
            }
            dados[i] = valor;
            if (tamAtual < tamMax) {
                tamAtual++;
            }
        }

        void removerElemento(int pos) {
            if (pos > tamMax || pos > tamAtual+1 || pos <= 0) {
                cerr << "Tentativa de remoção de fora do array." << endl;
                return;
            }
            for (int i = pos-1; i < tamAtual; i++) {
                dados[i] = dados[i+1];
            }
            tamAtual--;
        }
        
};

int main() {

    cout << "Criando lista vazia" << endl;

    ListaSeq lista = ListaSeq(10);

    lista.printarLista();

    cout << "Verificando se a lista está vazia: " << lista.estaVazia() << endl;
    cout << "Verificando se a lista está cheia: " << lista.estaCheia() << endl;

    cout << "Inserindo os valores 10, 20, 30, nas posições 1, 2 e 3" << endl;

    lista.inserirValor(10, 1);
    lista.inserirValor(20, 2);
    lista.inserirValor(30, 3);

    lista.printarLista();

    cout << "Verificando se a lista está vazia: " << lista.estaVazia() << endl;

    cout << "Obtendo o tamanho da lista: " << lista.obterTamanho() << endl;

    cout << "Obtendo o valor do elemento na posição 2: " << lista.recuperarValor(2) << endl;

    cout << "Modificando o elemento na posição 3 para 50" << endl;

    lista.modificarValor(50, 3);

    lista.printarLista();

    cout << "Retirando o elemento na posição 1: " << endl;

    lista.removerElemento(1);

    lista.printarLista();

    cout << endl << "-=-=-=-= Casos de Erro -=-=-=-=" << endl << endl;

    cout << "Tentando inserir um elemento numa posição 0, negativa, ou maior que o tamanho da lista + 1." << endl;

    lista.inserirValor(10, 0);
    lista.inserirValor(10, -2);
    lista.inserirValor(10, 4);

    cout << "Tentando modificar o valor um elemento numa posição 0, negativa, ou maior que o tamanho da lista + 1." << endl;

    lista.modificarValor(10, 0);
    lista.modificarValor(10, -2);
    lista.modificarValor(10, 4);

    cout << "Tentando obter o valor um elemento numa posição 0, negativa, ou maior que o tamanho da lista + 1." << endl;

    lista.recuperarValor(0);
    lista.recuperarValor(-2);
    lista.recuperarValor(4);

    cout << "Tentando remover um elemento numa posição 0, negativa, ou maior que o tamanho da lista + 1." << endl;

    lista.removerElemento(0);
    lista.removerElemento(-2);
    lista.removerElemento(4);

    return 0;
}