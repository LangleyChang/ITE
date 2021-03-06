#ifndef NEWPROJECTDIALOG_H
#define NEWPROJECTDIALOG_H

#include <QDialog>
#include <QPushButton>
#include <list>
#include "newprojectpathwidget.h"
#include "newprojectwelcomwidget.h"
#include "newprojectvcwidget.h"
#include "newprojectmemberwidget.h"

namespace Ui {
class NewProjectDialog;
}

using namespace std;

class NewProjectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewProjectDialog(QWidget *parent = 0);
    ~NewProjectDialog();
    QString projectPath;
    QString projectName;

private:
    Ui::NewProjectDialog *ui;
    list<NewProjectWidget*> widgetList;
    list<NewProjectWidget*>::iterator widgetListIt;
    list<NewProjectWidget*>::iterator widgetListItLast;
    void finishCreating();
private slots:
    void on_nextButton_clicked();
    void on_backButton_clicked();
};

#endif // NEWPROJECTDIALOG_H
