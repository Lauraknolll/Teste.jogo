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
    InimigoFacil* ini = new InimigoFacil();

    Entidade::Entidade* e1 = static_cast<Entidade::Entidade*>(jog);
    Entidade::Entidade* e2 = static_cast<Entidade::Entidade*>(ini);

    ListaEntidades.adicionaEntidade(e1);
    ListaEntidades.adicionaEntidade(e2);
    
    while(pGGrafico->verificarJanelaAberta())
    {
        sf::Event evento;
                    
        pGEvento->executar(evento);
        pGGrafico->limpaJanela();
        ListaEntidades.percorrer();
        //ini->executar();
        pGGrafico->desenhaEntidade(jog->getCorpo());
        pGGrafico->desenhaEntidade(ini->getCorpo());
        pGGrafico->monstraEntidade();
    }
}