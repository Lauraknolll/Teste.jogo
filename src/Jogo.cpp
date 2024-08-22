#include "../include/Jogo.h"

Jogo::Jogo()
{

}

Jogo::~Jogo()
{

}

void Jogo::executar()
{
    Gerenciador::GerenciadorGrafico* pGGrafico = Gerenciador::GerenciadorGrafico::getGerenciadorGrafico();
    Gerenciador::GerenciadorEvento* pGEvento = Gerenciador::GerenciadorEvento::getGerenciadorEventos();
    Listas::ListaEntidades ListaEntidades;

    pGEvento->setGerenciadosGrafico(pGGrafico);
    Jogador* jog = new Jogador();
    pGEvento->setJogador(jog);
    InimigoFacil* ini1 = new InimigoFacil();
    InimigoMedio* ini2 = new InimigoMedio();
    ini2->setJogador(jog);

    Entidade::Entidade* e1 = static_cast<Entidade::Entidade*>(jog);
    Entidade::Entidade* e2 = static_cast<Entidade::Entidade*>(ini1);
    Entidade::Entidade* e3 = static_cast<Entidade::Entidade*>(ini2);

    ListaEntidades.adicionaEntidade(e1);
    ListaEntidades.adicionaEntidade(e2);
    ListaEntidades.adicionaEntidade(e3);
    
    while(pGGrafico->verificarJanelaAberta())
    {
        sf::Event evento;
                    
        pGEvento->executar(evento);
        pGGrafico->limpaJanela();
        ListaEntidades.percorrer();
        //ini->executar();
        pGGrafico->desenhaEntidade(jog->getCorpo());
        pGGrafico->desenhaEntidade(ini1->getCorpo());
        pGGrafico->desenhaEntidade(ini2->getCorpo());
        pGGrafico->monstraEntidade();
    }
}