#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QListWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}



void MainWindow::on_pushButton_2_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -a");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_3_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -A");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_4_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -B");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_5_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls --color");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_6_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls --blok-size");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_7_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -c");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_15_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -d");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_16_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -D");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_19_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -n");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_20_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -N");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_8_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -f");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_9_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -F");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_10_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -g");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_11_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -G");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_12_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -i");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_13_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -I");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_14_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -l");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_17_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -L");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_18_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -m");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);

}

void MainWindow::on_pushButton_21_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -o");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_22_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -p");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_23_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -q");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_24_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -r");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_25_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -R");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_26_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -s");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_27_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -S");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_28_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -t");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_29_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -T");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_30_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -u");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_31_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -U");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_32_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -w");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_33_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -x");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_34_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -X");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_35_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls -Z");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_36_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls --version");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);
}

void MainWindow::on_pushButton_37_clicked()
{
    QProcess *p= new QProcess;
    p= new QProcess(this);
    p->start("bash",QStringList()<< "-c" <<"ls --help");
    p->waitForBytesWritten();
    p->waitForFinished();
    QString cikti=p->readAll();
    ui->textEdit->clear();
    ui->textEdit->append(cikti);

}
