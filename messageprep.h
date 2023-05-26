#ifndef MESSAGEPREP_H
#define MESSAGEPREP_H

#include <QWidget>
#include <QTcpServer>
#include <QAbstractSocket>

namespace Ui {
class messageprep;
}

class messageprep : public QWidget
{
    Q_OBJECT

public:
    explicit messageprep(QWidget *parent = nullptr);
    ~messageprep();
private slots:


    void UpdateField(QString text);
    void on_pushButton_clicked();

private:
    Ui::messageprep *ui;
};

#endif // MESSAGEPREP_H
