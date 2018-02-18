#ifndef WELCOME_H
#define WELCOME_H

#include <QMainWindow>
#include <QPixmap>
#include <QDebug>
#include "mainmenu.h"

namespace Ui {
class Welcome;
}

class Welcome : public QMainWindow
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = 0);
    ~Welcome();

private slots:
    void on_start_game_button_clicked();

private:
    Ui::Welcome *ui;
    MainMenu *menu;
};

#endif // WELCOME_H
