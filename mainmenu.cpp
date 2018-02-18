#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    QPixmap title("C:/Users/Aleksi/Documents/PokerBox/res/title.png");
    ui->mainmenu_title->setPixmap(title);
    ui->mainmenu_title->setScaledContents(true);
    ui->mainmenu_title->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_play_button_clicked()
{
    qDebug() << "Play clicked";
    ps = new PlayerSelection;
    ps->show();
    this->hide();
}

void MainMenu::on_settings_button_clicked()
{
    qDebug() << "Settings clicked";
}

void MainMenu::on_credits_button_clicked()
{
    qDebug() << "Credits clicked";
}

void MainMenu::on_quit_button_clicked()
{
    qDebug() << "Quit clicked";
}
