#include "welcome.h"
#include <QApplication>
#include "game.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Welcome w;
    //w.show();
    Game game;
    game.setup();
    return a.exec();
}
