#pragma once

#include "Lista.h"
#include "../Entidade/Entidade.h"

namespace Listas
{
    class ListaEntidades
    {
        private:
            Lista<Entidade::Entidade> ObjListaEntidade;
        public:
            ListaEntidades();
            ~ListaEntidades();
            void limpaLista();
            void adicionaEntidade(Entidade::Entidade* pontEnt);
            const int getTamanho();
            void percorrer();
            Entidade::Entidade* operator[](int posicao);
            //void desenharEntidades();
    };
} 
