#include "newprojectwelcomwidget.h"
#include "ui_newprojectwelcomwidget.h"

NewProjectWelcomWidget::NewProjectWelcomWidget(QWidget *parent) :
    NewProjectWidget(parent),
    ui(new Ui::NewProjectWelcomWidget)
{
    ui->setupUi(this);
}

NewProjectWelcomWidget::~NewProjectWelcomWidget()
{
    delete ui;
}
