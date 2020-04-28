#include "window.h"
#include "./ui_window.h"

#include "frameless.h"

window::window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::window)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
    frameless = new Frameless(this);
}

window::~window()
{
    delete frameless;
    delete ui;
}

