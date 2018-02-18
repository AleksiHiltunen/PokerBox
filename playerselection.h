#ifndef PLAYERSELECTION_H
#define PLAYERSELECTION_H

#include <QDialog>
#include <QString>
#include "game.h"
#include <QDebug>

namespace Ui {
class PlayerSelection;
}

class PlayerSelection : public QDialog
{
    Q_OBJECT

public:
    explicit PlayerSelection(QWidget *parent = 0);
    ~PlayerSelection();

private slots:
    void on_num_player_3_clicked();
    void on_num_player_4_clicked();
    void on_num_player_5_clicked();
    void on_num_player_6_clicked();
    void on_num_player_7_clicked();
    void on_num_player_8_clicked();
    void on_num_player_2_clicked();
    void on_play_button_clicked();

private:
    Ui::PlayerSelection *ui;
    unsigned num_players;
    QString player_names[];

    int check_names();

};

#endif // PLAYERSELECTION_H
