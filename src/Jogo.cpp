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
    Jogador* jog = new Jogador();

    while(pGGrafico->verificarJanelaAberta())
    {
        sf::Event evento;
        while(pGGrafico->getJanela()->pollEvent(evento))
        {
            if(evento.type == sf::Event::Closed)
            {
                pGGrafico->fecharJanela();
            }

        pGGrafico->limpaJanela();
        pGGrafico->desenhaEntidade(jog->getCorpo());
        pGGrafico->monstraEntidade();
        }
    }
}