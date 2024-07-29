# Lista Sequencial em C++

Este projeto implementa uma lista sequencial simples em C++. A classe `ListaSeq` oferece operações básicas para manipulação de uma lista de inteiros, como inserção, modificação, remoção e consulta de elementos. O projeto é voltado para um Exercício da cadeira de Estrutura de Dados, prof. Gilberto.

## Estrutura do Projeto

O projeto contém os seguintes arquivos:

- `main.cpp`: Contém a implementação da classe `ListaSeq` e o código principal para testar suas funcionalidades.
- `Makefile`: Arquivo para automação de compilação.

## Classe `ListaSeq`

A classe `ListaSeq` implementa uma lista sequencial com as seguintes funcionalidades:

### Atributos

- `int *dados`: Ponteiro para o array de inteiros que armazena os dados da lista.
- `int tamAtual`: Número atual de elementos na lista.
- `int tamMax`: Capacidade máxima da lista.

### Métodos Públicos

- **Construtor `ListaSeq(int tamMax)`**: Inicializa a lista com uma capacidade máxima especificada.
  
- **`void printarLista()`**: Imprime a lista no formato `[ valor1, valor2, ... ]`.

- **`bool estaVazia()`**: Retorna `true` se a lista estiver vazia, caso contrário `false`.

- **`bool estaCheia()`**: Retorna `true` se a lista estiver cheia, caso contrário `false`.

- **`int obterTamanho()`**: Retorna o número atual de elementos na lista.

- **`int recuperarValor(int pos)`**: Retorna o valor do elemento na posição especificada (1-indexado). Exibe uma mensagem de erro e retorna 0 se a posição estiver fora dos limites.

- **`void modificarValor(int valor, int pos)`**: Modifica o valor do elemento na posição especificada (1-indexado). Exibe uma mensagem de erro se a posição estiver fora dos limites.

- **`void inserirValor(int valor, int pos)`**: Insere um valor na posição especificada (1-indexado). Exibe uma mensagem de erro se a posição estiver fora dos limites.

- **`void removerElemento(int pos)`**: Remove o elemento na posição especificada (1-indexado). Exibe uma mensagem de erro se a posição estiver fora dos limites.

## Compilação e Execução

### Compilação

Para compilar o projeto, você pode usar o `Makefile` incluído no repositório. No terminal, navegue até o diretório do projeto e execute:

```sh
make
```

Isso gerará um executável chamado `main.exe`.

### Execução

Para executar o programa, use o seguinte comando:

```sh
./main.exe
```

### Limpeza

Para limpar os arquivos gerados pela compilação, execute:

```sh
make clean
```

## Testes

O programa realiza uma série de testes para verificar o funcionamento da lista sequencial, incluindo inserção, modificação, e remoção de elementos, além de casos de erro para inserção e leitura fora dos limites.
