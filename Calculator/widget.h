#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStringList>
#include <QPushButton>
#include <QLabel>
#include <QFont>
#include <QKeyEvent>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn7_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btnjia_clicked();

    void on_btnjian_clicked();

    void on_btncheng_clicked();

    void on_btnchu_clicked();

    void on_btndengyu_clicked();

    void on_btn0_clicked();

    void on_btnmo_clicked();

    void on_btnshan_clicked();

    void on_btnclear_clicked();

    void set_PushButton_font(QPushButton *btn);

    void set_Label_font(QLabel *btn);

    void clear_Label();
    bool fuhaowei();

    bool fuhao_Empty();
protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::Widget *ui;
    QFont *font;

    QString qian;
    QString fuhao;
    QString hou;
    QString result;
};
#endif // WIDGET_H
