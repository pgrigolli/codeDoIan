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

contato criarContato(char name, char telefone, char email){

    struct Contato c1;
    strcpy(c1.nome, name);    
    strcpy(c1.telefone, telefone);    
    strcpy(c1.email, email);

    return c1;    

}

int addContato(contato c, contato* lista){


/*
TODO
Adicionar o contato com id igual ao idx da lista
*/

}

int removeContato(contato c, contato* lista){

/*
TODO
Remover o contato igual ao que foi passado na chamada da funcao
*/



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


