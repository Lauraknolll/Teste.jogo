#include "../../include/Listas/ListaEntidades.h"

Listas::ListaEntidades::ListaEntidades() :
    ObjListaEntidade()
{

}

Listas::ListaEntidades::~ListaEntidades()
{
    limpaLista();
}

void Listas::ListaEntidades::limpaLista()
{
    ObjListaEntidade.Limpar();
}

void Listas::ListaEntidades::adicionaEntidade(Entidade::Entidade* pontEnt)
{
    ObjListaEntidade.setInfo(pontEnt);
}

const int Listas::ListaEntidades::getTamanho()
{
    return ObjListaEntidade.getTamanho();
}

void Listas::ListaEntidades::percorrer()
{
    int tam = ObjListaEntidade.getTamanho();
    Entidade::Entidade* paux = nullptr;
    for(int i = 0; i < tam; i++)
    {
        paux = ObjListaEntidade.operator[](i);
        if(paux)
        {
            paux->executar();
        }
    }
}

Entidade::Entidade* Listas::ListaEntidades::operator[](int posicao)
{
    return ObjListaEntidade.operator[](posicao);
}
