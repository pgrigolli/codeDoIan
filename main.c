#include <stdio.h>
#include <strings.h>

struct Contato
{
    int id;
    char nome[10];
    char telefone[11];
    char email[50];
};

typedef struct Contato contato;

contato criarContato(int id, char name, char telefone, char email){

    struct Contato c1;
    c1.id = id;
    strcpy(c1.nome, name);    
    strcpy(c1.telefone, telefone);    
    strcpy(c1.email, email);

    return c1;    

}

int addContato(contato c, contato* lista){

    *lista = c;
    lista++;

}

int removeContato(contato c, contato* lista){ 

    int len = sizeof(lista)/sizeof(lista[0]);

    int i = 0;

    for(int i = 0; i < len; i++){
        if(lista[i].id == c.id){
            for(int i = 0; i < len - 1; i++){
                lista[i] = lista[i + 1];
            }

        }
    }


}

int alterarContato(contato contatoAntigo, contato contatoNovo, contato* lista){


/*
TODO
Substituir o contatoAntigo pelo contatoNovo na lista
*/



}

int procurarContato(contato c, contato* lista){
    

/*
TODO
Procurar o contato dentro da lista pelo id
*/



}



int main(){

    contato listaDeContatos[20];


}


