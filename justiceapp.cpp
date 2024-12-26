#include "justiceapp.h"
#include "./ui_justiceapp.h"

JusticeApp::JusticeApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JusticeApp)
{
    ui->setupUi(this);
}

JusticeApp::~JusticeApp()
{
    delete ui;
}
