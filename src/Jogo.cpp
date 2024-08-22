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
    pGEvento->setGerenciadosGrafico(pGGrafico);
    Jogador* jog = new Jogador();
    pGEvento->setJogador(jog);
    InimigoFacil* ini = new InimigoFacil();


    while(pGGrafico->verificarJanelaAberta())
    {
        sf::Event evento;
                    
        pGEvento->executar(evento);
        pGGrafico->limpaJanela();
        ini->executar();
        pGGrafico->desenhaEntidade(jog->getCorpo());
        pGGrafico->desenhaEntidade(ini->getCorpo());
        pGGrafico->monstraEntidade();
    }
}