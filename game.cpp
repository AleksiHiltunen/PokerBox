#include "game.h"
#include <iostream>

Game::Game()
{

}


void Game::shuffle_deck(QVector<Card> unshuffled_deck){
    srand (time(NULL));
    _deck = {};
    for(int i = 0; unshuffled_deck.size() > 0; ++i){
        unsigned card_index = rand() % unshuffled_deck.size();
        _deck.push_back(unshuffled_deck[card_index]);
        unshuffled_deck.erase(unshuffled_deck.begin() + card_index);
    }

}

void Game::setup(){
    QVector<Card> unshuffled_deck = {
        {1, SUIT::SPADES},  {2, SUIT::SPADES},  {3, SUIT::SPADES},  {4, SUIT::SPADES},  {5, SUIT::SPADES},  {6, SUIT::SPADES},  {7, SUIT::SPADES},  {8, SUIT::SPADES},  {9, SUIT::SPADES},  {10, SUIT::SPADES},  {11, SUIT::SPADES},  {12, SUIT::SPADES},  {13, SUIT::SPADES},
        {1, SUIT::CLUBS},   {2, SUIT::CLUBS},   {3, SUIT::CLUBS},   {4, SUIT::CLUBS},   {5, SUIT::CLUBS},   {6, SUIT::CLUBS},   {7, SUIT::CLUBS},   {8, SUIT::CLUBS},   {9, SUIT::CLUBS},   {10, SUIT::CLUBS},   {11, SUIT::CLUBS},   {12, SUIT::CLUBS},   {13, SUIT::CLUBS},
        {1, SUIT::DIAMONDS},{2, SUIT::DIAMONDS},{3, SUIT::DIAMONDS},{4, SUIT::DIAMONDS},{5, SUIT::DIAMONDS},{6, SUIT::DIAMONDS},{7, SUIT::DIAMONDS},{8, SUIT::DIAMONDS},{9, SUIT::DIAMONDS},{10, SUIT::DIAMONDS},{11, SUIT::DIAMONDS},{12, SUIT::DIAMONDS},{13, SUIT::DIAMONDS},
        {1, SUIT::HEARTS},  {2, SUIT::HEARTS},  {3, SUIT::HEARTS},  {4, SUIT::HEARTS},  {5, SUIT::HEARTS},  {6, SUIT::HEARTS},  {7, SUIT::HEARTS},  {8, SUIT::HEARTS},  {9, SUIT::HEARTS},  {10, SUIT::HEARTS},  {11, SUIT::HEARTS},  {12, SUIT::HEARTS},  {13, SUIT::HEARTS},
    };

    //Initiate random seed
    shuffle_deck(unshuffled_deck);
}
