#include <QApplication>
#include <QLabel>
#include <QFont>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QFont font("Times", 16, QFont::Bold);
    QLabel* label = new QLabel("<center><h2>Hello!""<br/><font color=green>Programming by Qt is fun.</font></h2></center>");
    label->resize(450,100);
    label->setWindowTitle("Hello!");
    label->setFont(font);
    label->show();
    return app.exec();
}
