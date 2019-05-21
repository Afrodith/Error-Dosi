#include "NMDosimetry.h"
#include "ui_NMDosimetry.h"

NMDosimetry::NMDosimetry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NMDosimetry)
{
    ui->setupUi(this);
    phantom_match = nullptr;

    currentDir=QDir::currentPath();

}

NMDosimetry::~NMDosimetry()
{
    delete ui;
}

void NMDosimetry::on_pushButton_clicked()
{
    if(phantom_match==nullptr)
        phantom_match=new integradeDose(this);
    phantom_match->getFileNames(activityCurves,sadr);
    phantom_match->compute();
    activityCurves.clear();
    sadr.clear();
    activityCurves=nullptr;
    sadr=nullptr;
}

void NMDosimetry::on_cB_radiopharma_currentIndexChanged(int index)
{
    switch (index) {
      case 0:
     {
#ifdef Q_OS_LINUX
        //linux code goes here
        activityCurves = currentDir;
        activityCurves.append("/data/I131_INa1/time_activity_curves_I131_INa1.txt");
        sadr = currentDir;
        sadr.append("/data/I131_INa1/phantom_001.txt");
#elif defined(Q_OS_WIN32)
        activityCurves = QDir::toNativeSeparators(currentDir);
        activityCurves.append("\data\I131_INa1\time_activity_curves_I131_INa1.txt");
        sadr = currentDir;
        sadr.append("\data\I131_INa1\phantom_001.txt");
#else

#endif
     }break;

      case 1:
      {
#ifdef Q_OS_LINUX
        //linux code goes here
        activityCurves = currentDir;
        activityCurves.append("/data/I131_INa2/time_activity_curves_I131_INa2.txt");
        sadr = currentDir;
        sadr.append("/data/I131_INa2/phantom_001.txt");
#elif defined(Q_OS_WIN32)
        activityCurves = QDir::toNativeSeparators(currentDir);
        activityCurves.append("\data\I131_INa2\time_activity_curves_I131_INa2.txt");
        sadr = currentDir;
        sadr.append("\data\I131_INa2\phantom_001.txt");
#else

#endif
      }break;

    case 2:
    {
#ifdef Q_OS_LINUX
        //linux code goes here
        activityCurves = currentDir;
        activityCurves.append("/data/Sm153_EDTMP/time_activity_curves_Sm153_EDTMP.txt");
        sadr = currentDir;
        sadr.append("/data/Sm153_EDTMP/phantom_001.txt");
#elif defined(Q_OS_WIN32)
        activityCurves = QDir::toNativeSeparators(currentDir);
        activityCurves.append("\data\Sm153_EDTMP\time_activity_curves_Sm153_EDTMP.txt");
        sadr = currentDir;
        sadr.append("\data\Sm153_EDTMP\phantom_001.txt");
#else

#endif

    }break;

    case 3:
    {
#ifdef Q_OS_LINUX
        //linux code goes here
        activityCurves = currentDir;
        activityCurves.append("/data/I131_MIBG/time_activity_curves_I131_MIBG.txt");
        sadr = currentDir;
        sadr.append("/data/I131_MIBG/phantom_001.txt");
#elif defined(Q_OS_WIN32)
        activityCurves = QDir::toNativeSeparators(currentDir);
        activityCurves.append("\data\I131_MIBG\time_activity_curves_I131_MIBG.txt");
        sadr = currentDir;
        sadr.append("\data\I131_MIBG\phantom_001.txt");
#else

#endif

    }break;

    case 4:
    {
#ifdef Q_OS_LINUX
        //linux code goes here
        activityCurves = currentDir;
        activityCurves.append("/data/I123_MIBG/time_activity_curves_I123_MIBG.txt");
        sadr = currentDir;
        sadr.append("/data/I123_MIBG/phantom_001.txt");
#elif defined(Q_OS_WIN32)
        activityCurves = QDir::toNativeSeparators(currentDir);
        activityCurves.append("\data\I123_MIBG\time_activity_curves_I123_MIBG.txt");
        sadr = currentDir;
        sadr.append("\data\I123_MIBG\phantom_001.txt");
#else

#endif

    }break;
    case 5:
    {
#ifdef Q_OS_LINUX
        //linux code goes here
        activityCurves = currentDir;
        activityCurves.append("/data/Tc99m_MDP/time_activity_curves_Tc99m_MDP.txt");
        sadr = currentDir;
        sadr.append("/data/Tc99m_MDP/phantom_001.txt");
#elif defined(Q_OS_WIN32)
        activityCurves = QDir::toNativeSeparators(currentDir);
        activityCurves.append("\data\Tc99m_MDP\time_activity_curves_Tc99m_MDP.txt");
        sadr =  QDir::toNativeSeparators(currentDir);
        sadr.append("\data\Tc99m_MDP\phantom_001.txt");
#else

#endif

    }break;
    }




}
