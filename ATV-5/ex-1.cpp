#include <iostream>
#include <string>

struct dados {
    char nome[50];
    char sexo[50];
    int idade;
    float peso;
    float altura;
};

struct Elementos {
    dados cadastro;
    struct elementos* prox;
};

typedef struct elementos* Elem;

struct descritor {
    Elem* inicio;
    Elem* fim;
    int tamanho;
};

descritor* Criar(void) {
    descritor* desc;
    desc = (descritor*)malloc(sizeof(descritor));
    desc -> inicio = NULL;
    desc -> tamanho = 0;
    desc -> fim = NULL;

    return desc;
}

int inserirInicioLista(Elem* elem, descritor* desc) {
    Elem *novo;
    novo = (Elem*)malloc(sizeof(Elem));
    novo->cadastro = elem;
}


int main() {
}