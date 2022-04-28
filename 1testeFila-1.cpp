#include <iostream>
using namespace std;

struct no {
    int info;
    struct no * prox;
};

typedef struct no * noPtr;
noPtr topo = NULL;

void insercao();
void exclusao();
void printList();
bool listaVazia();

int main(){
    int op;

    do{
        cout << "\n1.Inserir"
                "\n2.Excluir"
                "\n3.Listar elementos da pilha"
                "\n0.Sair"
                "\n\nInforme a opcao: ";
        cin>>op;
        switch(op){
            case 1: insercao();break;
            case 2: exclusao();break;
            case 3: printList(); break;
        }
    } while (op != 0);
}

void inserir(){
    noPtr aux, p= new no;

    cout << "\nDigite o valor do elemento: ";
    cin>> p->info;
    p->prox = NULL;
    if(listaVazia())
        topo = p;
     else {
        aux=topo;
        while(aux->prox !=NULL){
            aux = aux->prox;
        }
        aux->prox= p;
    }
}



void exclusao(){
    noPtr p;
    if(listaVazia()){
        cout << "\nFila vazia!";
    }else {
        p=topo;
        topo = p->prox;
        delete p;
        cout << "\nO espaco de alocamento " << p->info <<" foi retirado da fila!" << endl;
    }
}