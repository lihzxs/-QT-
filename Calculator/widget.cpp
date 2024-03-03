#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //情况Label显示的结果

    ui->result->clear();

    //设置字体
    font = new QFont("微软雅黑",20,1,false);
    set_PushButton_font(ui->btn0);
    set_PushButton_font(ui->btn1);
    set_PushButton_font(ui->btn2);
    set_PushButton_font(ui->btn3);
    set_PushButton_font(ui->btn4);
    set_PushButton_font(ui->btn5);
    set_PushButton_font(ui->btn6);
    set_PushButton_font(ui->btn7);
    set_PushButton_font(ui->btn8);
    set_PushButton_font(ui->btn9);
    set_PushButton_font(ui->btncheng);
    set_PushButton_font(ui->btnchu);
    set_PushButton_font(ui->btnmo);
    set_PushButton_font(ui->btnjia);
    set_PushButton_font(ui->btndengyu);
    set_PushButton_font(ui->btnjian);
    set_PushButton_font(ui->btnshan);
    set_PushButton_font(ui->btnclear);

    set_Label_font(ui->result);

    //初始化前后两个数字
    qian = "";    //前一个数字
    hou = "";     //后一个数字
    fuhao = "";  //符号位
    result = "";   //记录显示在Label标签上的内容
}

Widget::~Widget()
{
    delete ui;
}
void Widget::set_PushButton_font(QPushButton *btn)
{
    btn->setFont(*font);
    const QString btn_style = "border: 2px solid #2c74c5;border-radius: 10px;";
    btn->setStyleSheet(btn_style);
}

void Widget::set_Label_font(QLabel *label)
{
    label->setFont(*font);
}

void Widget::on_btn1_clicked()
{
    if(fuhaowei())
    {
        qian += "1";
        result+="1";
        ui->result->setText(result);
    }
    else
    {
        hou +="1";
        result+="1";
        ui->result->setText(result);
    }
}


void Widget::on_btn2_clicked()
{
    if(fuhaowei())
    {
        qian += "2";
        result+="2";
        ui->result->setText(result);
    }
    else
    {
        hou +="2";
        result+="2";
        ui->result->setText(result);
    }
}


void Widget::on_btn3_clicked()
{
    if(fuhaowei())
    {
        qian += "3";
        result+="3";
        ui->result->setText(result);
    }
    else
    {
        hou +="3";
        result+="3";
        ui->result->setText(result);
    }
}


void Widget::on_btn4_clicked()
{
    if(fuhaowei())
    {
        qian += "4";
        result+="4";
        ui->result->setText(result);
    }
    else
    {
        hou +="4";
        result+="4";
        ui->result->setText(result);
    }
}


void Widget::on_btn5_clicked()
{
    if(fuhaowei())
    {
        qian += "5";
        result+="5";
        ui->result->setText(result);
    }
    else
    {
        hou +="5";
        result+="5";
        ui->result->setText(result);
    }
}


void Widget::on_btn6_clicked()
{
    if(fuhaowei())
    {
        qian += "6";
        result+="6";
        ui->result->setText(result);
    }
    else
    {
        hou +="6";
        result+="6";
        ui->result->setText(result);
    }
}


void Widget::on_btn7_clicked()
{
    if(fuhaowei())
    {
        qian += "7";
        result+="7";
        ui->result->setText(result);
    }
    else
    {
        hou +="7";
        result+="7";
        ui->result->setText(result);
    }
}


void Widget::on_btn8_clicked()
{
    if(fuhaowei())
    {
        qian += "8";
        result+="8";
        ui->result->setText(result);
    }
    else
    {
        hou +="8";
        result+="8";
        ui->result->setText(result);
    }
}


void Widget::on_btn9_clicked()
{
    if(fuhaowei())
    {
        qian += "9";
        result+="9";
        ui->result->setText(result);
    }
    else
    {
        hou +="9";
        result+="9";
        ui->result->setText(result);
    }
}


void Widget::on_btnjia_clicked()
{
    if(qian!=""&&fuhao_Empty())
    {
        fuhao = "+";
        result+=fuhao;
        ui->result->setText(result);
    }
}


void Widget::on_btnjian_clicked()
{
    if(qian!=""&&fuhao_Empty())
    {
        fuhao = "-";
        result+=fuhao;
        ui->result->setText(result);
    }
}


void Widget::on_btncheng_clicked()
{
    if(qian!=""&&fuhao_Empty())
    {
        fuhao = "*";
        result+=fuhao;
        ui->result->setText(result);
    }
}


void Widget::on_btnchu_clicked()
{
    if(qian!=""&&fuhao_Empty())
    {
        fuhao = "/";
        result+=fuhao;
        ui->result->setText(result);
    }
}


void Widget::on_btn0_clicked()
{
    if(qian!=""&&fuhaowei())
    {
        qian += "0";
        result+="0";
        ui->result->setText(result);
    }
    else
    {
        hou +="0";
        result+="0";
        ui->result->setText(result);
    }
}


void Widget::on_btnmo_clicked()
{
    if(qian!=""&&fuhao_Empty())
    {
        fuhao = "%";
        result+=fuhao;
        ui->result->setText(result);
    }
    qDebug()<<fuhao<<" result"<<result;
}


void Widget::on_btnshan_clicked()
{

}


void Widget::on_btnclear_clicked()
{
    clear_Label();
}

bool Widget::fuhaowei(){
    if(fuhao == "+" || fuhao == "-" || fuhao == "*" ||
        fuhao == "/" || fuhao == "%" )
    {
        return false;
    }
    return true;
}

bool Widget::fuhao_Empty()
{
    if(fuhao == "")
    {
        return true;
    }
    return false;
}

void Widget::clear_Label()
{
    ui->result->clear();
    qian = "";
    hou = "";
    result = "";
    fuhao = "";
}
void Widget::on_btndengyu_clicked()
{
    char *ch = fuhao.toUtf8().data();
    char c = ch[0];
    QString s = "";
    switch(c)
    {
        case '+':
        {
            int sum = qian.toInt()+hou.toInt();
            s = QString::number(sum);
            qDebug()<<"加法运算结果为:"<<s;
            clear_Label();
            ui->result->setText(s);
            break;
        }
        case '-':
        {
            int ji = qian.toInt()-hou.toInt();
            s = QString::number(ji);
            qDebug()<<"减法运算结果为:"<<s;
            clear_Label();
            ui->result->setText(s);
            break;
        }
        case '*':
        {
            int sum = qian.toInt()*hou.toInt();
            s = QString::number(sum);
            qDebug()<<"乘法运算结果为:"<<s;
            clear_Label();
            ui->result->setText(s);
            break;
        }
        case '/':
        {
            double sum = qian.toDouble()/hou.toDouble();
            s = QString::number(sum);
            qDebug()<<"除法运算结果为:"<<s;
            clear_Label();
            ui->result->setText(s);
            break;
        }
        case '%':
        {
            int sum = qian.toInt()%hou.toInt();
            s = QString::number(sum);
            qDebug()<<"模运算结果为:"<<s;
            clear_Label();
            ui->result->setText(s);
            break;
        }
        default:
            break;
    }
}

//实现键盘操作按键
void Widget::keyPressEvent(QKeyEvent *event)
{
    int myKey = event->key();

    if(myKey == Qt::Key_0)
    {
        on_btn0_clicked();
    }
    else if(myKey == Qt::Key_1)
    {
        on_btn1_clicked();
    }
    else if(myKey == Qt::Key_2)
    {
        on_btn2_clicked();
    }
    else if(myKey == Qt::Key_3)
    {
        on_btn3_clicked();
    }
    else if(myKey == Qt::Key_4)
    {
        on_btn4_clicked();
    }
    else if(myKey == Qt::Key_5)
    {
        on_btn5_clicked();
    }
    else if(myKey == Qt::Key_6)
    {
        on_btn6_clicked();
    }
    else if(myKey == Qt::Key_7)
    {
        on_btn7_clicked();
    }
    else if(myKey == Qt::Key_8)
    {
        on_btn8_clicked();
    }
    else if(myKey == Qt::Key_9)
    {
        on_btn9_clicked();
    }
    //按下ESC键表示清空输出内容
    else if(myKey == Qt::Key_Escape)
    {
        clear_Label();
    }
    //按下回车键   表示计算结果
    else if(myKey == Qt::Key_Return)
    {
        on_btndengyu_clicked();
    }
    //按下+号
    else if(myKey == Qt::Key_Plus){
        on_btnjia_clicked();
    }
    //按下-号
    else if(myKey == Qt::Key_Minus){
        on_btnjian_clicked();
    }
    /*Qt::Key_Asterisk：表示*键。
    Qt::Key_Slash：表示/键。
    Qt::Key_Percent：表示%键。*/
    //按下*号
    else if(myKey == Qt::Key_Asterisk){
        on_btncheng_clicked();
    }
    //按下/号
    else if(myKey == Qt::Key_Slash){
        on_btnchu_clicked();
    }
    //按下%号
    else if(myKey == Qt::Key_Percent){
        on_btnmo_clicked();
    }
}
