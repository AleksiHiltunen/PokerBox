#ifndef GAME_H
#define GAME_H

#include <string>
#include <QString>
#include <QVector>
#include <random>
#include "time.h"

enum SUIT{
    SPADES,
    CLUBS,
    DIAMONDS,
    HEARTS
};

struct Card{
    unsigned value;
    SUIT suit;
};

struct Player{
    QString name;
    unsigned balance;
    unsigned seat;
    Card hand[];
};

class Game
{
public:
    Game();
    void setup();

private:
    Player _players[];
    Card _table;
    QVector<Card> _deck;

    void shuffle_deck(QVector<Card> unshuffled_deck);
};

#endif // GAME_H
