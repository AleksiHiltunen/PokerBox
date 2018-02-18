#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>
#include <QDebug>

#include "playerselection.h"
#include "settings.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QDialog
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();

private slots:
    void on_quit_button_clicked();
    void on_play_button_clicked();
    void on_settings_button_clicked();
    void on_credits_button_clicked();

private:
    Ui::MainMenu *ui;
    PlayerSelection *ps;
    Settings *settings;
};

#endif // MAINMENU_H
