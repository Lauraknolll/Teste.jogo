#pragma once

#include "Elemento.h"
#include <iostream>

namespace Listas
{
    template<class TIPOL>
    class Lista
    {
        private:
        Elemento<TIPOL>* pontPrimeiro;
        Elemento<TIPOL>* pontUltimo;
        unsigned int tam;

        private:
        void setElemento(Elemento<TIPOL>* pontElemento);

        public:
        Lista();
        ~Lista();
        void Inicializa();
        void Limpar();
        void setInfo(TIPOL* pontInfo);
        const int getTamanho();
        TIPOL* operator[](int posicao);

    };

    template<class TIPOL>
    Lista<TIPOL>::Lista() 
    {
        Inicializa();
    }

    template<class TIPOL>
    Lista<TIPOL>::~Lista()
    {
        Limpar();
    }

    template<class TIPOL>
    void Lista<TIPOL>::Inicializa()
    {
        pontPrimeiro = nullptr;
        pontUltimo = nullptr;   
        tam = 0;    
    }

    template<class TIPOL>
    void Lista<TIPOL>::Limpar()
    {
        Elemento<TIPOL>* paux = pontPrimeiro;


        Inicializa();
    }

    template<class TIPOL>
    const int Lista<TIPOL>::getTamanho()
    {
        return tam;
    }

    template<class TIPOL>
    void Lista<TIPOL>::setElemento(Elemento<TIPOL>* pontElemento)
    {
        if(pontElemento != nullptr)
        {
            if(pontPrimeiro == nullptr)
            {
                pontPrimeiro = pontElemento;
                pontUltimo = pontElemento;
            }
            else
            {
                pontUltimo->setProximo(pontElemento);
                pontUltimo = pontUltimo->getProximo();
            }

            tam++;
        }

        else
        {
            std::cout << "ERRO" << std::endl;
            exit(1);
        }
    }

    template<class TIPOL>
    void Lista<TIPOL>::setInfo(TIPOL* pontInfo)
    {
        if(pontInfo != nullptr)
        {
            Elemento<TIPOL>* novo = new Elemento<TIPOL>();
            if(novo != nullptr)
            {
                novo->setInfo(pontInfo);
                setElemento(novo);
            }
        }

        else
        {
            std::cout << "ERRO" << std::endl;
            exit(1);
        }
    }

    template<class TIPOL>
    TIPOL* Lista<TIPOL>::operator[](int posicao)
    {
        if(posicao >= tam || posicao < 0)
        {
            std::cout << "ERRO" << std::endl;
            exit(1);
        }

        Elemento<TIPOL>* paux = pontPrimeiro;
        for(int i = 0; i < posicao; i++)
        {
            paux = paux->getProximo();
        }
        return paux->getInfo();
    }

}