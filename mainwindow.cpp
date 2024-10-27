#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QContextMenuEvent>
#include <QTreeView>
#include <QStandardItemModel>
#include <QHeaderView>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    iniUI();
    addTree();
}

void MainWindow::addTree(){
    QStandardItemModel *model = new QStandardItemModel();
    QStandardItem *rootItem = model->invisibleRootItem();

    // 添加顶层项目
    QStandardItem *item1 = new QStandardItem("指标体系管理");
    QStandardItem *item2 = new QStandardItem("仿真建模");

    // 添加子项到 "系统管理"
    item1->appendRow(new QStandardItem("指标体系设计"));
    item1->appendRow(new QStandardItem("权重体系设计"));
    item1->appendRow(new QStandardItem("算法体系设计"));

    // 添加子项到 "仿真建模"
    item2->appendRow(new QStandardItem("仿真程序配置"));
    item2->appendRow(new QStandardItem("输入数据配置"));
    item2->appendRow(new QStandardItem("数据预处理"));
    item2->appendRow(new QStandardItem("结果校验处理"));


    // 将顶层项目添加到根节点
    rootItem->appendRow(item1);
    rootItem->appendRow(item2);

    ui->treeView->setModel(model);
    ui->treeView->expandAll();
}

void MainWindow::iniUI(){
    fLabCurFile = new QLabel;
    fLabCurFile->setMinimumWidth(150);
    fLabCurFile->setText("当前文件：");
    ui->statusbar->addWidget(fLabCurFile);

    progressBar1=new QProgressBar;
    progressBar1->setMaximumWidth(200);
    progressBar1->setMaximum(50);
    progressBar1->setMinimum(5);
    //progressBar1->setValue(ui->txtEdit->font().pointSize());
    ui->statusbar->addWidget(progressBar1);

    spinFontSize=new QSpinBox;
    spinFontSize->setMaximum(50);
    spinFontSize->setMinimum(5);
    //spinFontSize->setValue(ui->txtEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);

    ui->toolBar->addWidget(new QLabel("字体大小"));
    ui->toolBar->addWidget(spinFontSize);

    ui->toolBar->addSeparator();
    ui->toolBar->addWidget(new QLabel("字体"));
    comboFont= new QFontComboBox;
    comboFont->setMinimumWidth(150);
    ui->toolBar->addWidget(comboFont);

    //setCentralWidget(ui->txtEdit);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_3_clicked()
{

}

