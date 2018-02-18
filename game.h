#ifndef GAME_H
#define GAME_H

#include <string>
#include <QString>
#include <QVector>
#include <random>
#include "time.h"
#include <QPixmap>

enum SUIT{
    SPADES,
    CLUBS,
    DIAMONDS,
    HEARTS
};

struct Card{
    unsigned value;
    SUIT suit;
    QPixmap pic;
};

struct Player{
    QString name;
    unsigned balance;
    unsigned seat;
    Card hand[2];
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
