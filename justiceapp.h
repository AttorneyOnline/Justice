#ifndef JUSTICEAPP_H
#define JUSTICEAPP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class JusticeApp;
}
QT_END_NAMESPACE

class JusticeApp : public QMainWindow
{
    Q_OBJECT

public:
    JusticeApp(QWidget *parent = nullptr);
    ~JusticeApp();

private:
    Ui::JusticeApp *ui;
};
#endif // JUSTICEAPP_H
