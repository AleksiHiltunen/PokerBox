#include "welcome.h"
#include "ui_welcome.h"

Welcome::Welcome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);
    QPixmap welcome("res/welcome.png");
    ui->welcome_label->setPixmap(welcome);
    ui->welcome_label->setScaledContents(true);
    ui->welcome_label->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_start_game_button_clicked()
{
    qDebug() << "Start game clicked";
    this->hide();
    menu = new MainMenu;
    menu->show();
}
