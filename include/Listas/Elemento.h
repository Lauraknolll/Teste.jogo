#pragma once

namespace Listas
{
    template<class TIPOE>
    class Elemento
    {
        private:
            Elemento<TIPOE>* pontProximo;
            TIPOE* pontInfo;            
        public: 
            Elemento();
            ~Elemento();
            void setProximo(Elemento<TIPOE>* pP);
            void setInfo(TIPOE* pI);
            Elemento<TIPOE>* getProximo();
            TIPOE* getInfo();
    };

    template<class TIPOE>
    Elemento<TIPOE>::Elemento() :   
        pontProximo(nullptr), pontInfo(nullptr)
    {
    }

    template<class TIPOE>
    Elemento<TIPOE>::~Elemento()
    {
    }

    template<class TIPOE>
    void Elemento<TIPOE>::setProximo(Elemento<TIPOE>* pP)
    {
        pontProximo = pP;
    }

    template<class TIPOE>
    Elemento<TIPOE>* Elemento<TIPOE>::getProximo()
    {
        return pontProximo;
    }

    template<class TIPOE>
    void Elemento<TIPOE>::setInfo(TIPOE* pI)
    {
        pontInfo = pI;
    }

    template<class TIPOE>
    TIPOE* Elemento<TIPOE>::getInfo()
    {
        return pontInfo;
    }
}