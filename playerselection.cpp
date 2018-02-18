#include "playerselection.h"
#include "ui_playerselection.h"

PlayerSelection::PlayerSelection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayerSelection), num_players(0)
{
    ui->setupUi(this);
    QPixmap title("res/playerselection_title.png");
    ui->player_selection_title->setPixmap(title);
    ui->player_selection_title->setScaledContents(true);
    ui->player_selection_title->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

    ui->player_name_1->setEnabled(true);
    ui->player_name_2->setEnabled(true);
    ui->player_name_3->setEnabled(false);
    ui->player_name_4->setEnabled(false);
    ui->player_name_5->setEnabled(false);
    ui->player_name_6->setEnabled(false);
    ui->player_name_7->setEnabled(false);
    ui->player_name_8->setEnabled(false);
}

PlayerSelection::~PlayerSelection()
{
    delete ui;
}

void PlayerSelection::on_num_player_2_clicked()
{
    ui->player_name_1->setEnabled(true);
    ui->player_name_2->setEnabled(true);
    ui->player_name_3->setEnabled(false);
    ui->player_name_4->setEnabled(false);
    ui->player_name_5->setEnabled(false);
    ui->player_name_6->setEnabled(false);
    ui->player_name_7->setEnabled(false);
    ui->player_name_8->setEnabled(false);
    num_players = 2;
}

void PlayerSelection::on_num_player_3_clicked()
{
    ui->player_name_1->setEnabled(true);
    ui->player_name_2->setEnabled(true);
    ui->player_name_3->setEnabled(true);
    ui->player_name_4->setEnabled(false);
    ui->player_name_5->setEnabled(false);
    ui->player_name_6->setEnabled(false);
    ui->player_name_7->setEnabled(false);
    ui->player_name_8->setEnabled(false);
    num_players = 3;
}

void PlayerSelection::on_num_player_4_clicked()
{
    ui->player_name_1->setEnabled(true);
    ui->player_name_2->setEnabled(true);
    ui->player_name_3->setEnabled(true);
    ui->player_name_4->setEnabled(true);
    ui->player_name_5->setEnabled(false);
    ui->player_name_6->setEnabled(false);
    ui->player_name_7->setEnabled(false);
    ui->player_name_8->setEnabled(false);
    num_players = 4;
}

void PlayerSelection::on_num_player_5_clicked()
{
    ui->player_name_1->setEnabled(true);
    ui->player_name_2->setEnabled(true);
    ui->player_name_3->setEnabled(true);
    ui->player_name_4->setEnabled(true);
    ui->player_name_5->setEnabled(true);
    ui->player_name_6->setEnabled(false);
    ui->player_name_7->setEnabled(false);
    ui->player_name_8->setEnabled(false);
    num_players = 5;
}

void PlayerSelection::on_num_player_6_clicked()
{
    ui->player_name_1->setEnabled(true);
    ui->player_name_2->setEnabled(true);
    ui->player_name_3->setEnabled(true);
    ui->player_name_4->setEnabled(true);
    ui->player_name_5->setEnabled(true);
    ui->player_name_6->setEnabled(true);
    ui->player_name_7->setEnabled(false);
    ui->player_name_8->setEnabled(false);
    num_players = 6;
}

void PlayerSelection::on_num_player_7_clicked()
{
    ui->player_name_1->setEnabled(true);
    ui->player_name_2->setEnabled(true);
    ui->player_name_3->setEnabled(true);
    ui->player_name_4->setEnabled(true);
    ui->player_name_5->setEnabled(true);
    ui->player_name_6->setEnabled(true);
    ui->player_name_7->setEnabled(true);
    ui->player_name_8->setEnabled(false);
    num_players = 7;
}

void PlayerSelection::on_num_player_8_clicked()
{
    ui->player_name_1->setEnabled(true);
    ui->player_name_2->setEnabled(true);
    ui->player_name_3->setEnabled(true);
    ui->player_name_4->setEnabled(true);
    ui->player_name_5->setEnabled(true);
    ui->player_name_6->setEnabled(true);
    ui->player_name_7->setEnabled(true);
    ui->player_name_8->setEnabled(true);
    num_players = 8;
}



void PlayerSelection::on_play_button_clicked()
{
    if(check_names() != 0){
        qDebug() << "Player names invalid...";
        return;
    }

}

int PlayerSelection::check_names(){

    return 0;
}

void PlayerSelection::on_pushButton_clicked()
{
    this->hide();
}
