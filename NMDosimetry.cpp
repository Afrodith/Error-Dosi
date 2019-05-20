#include "NMDosimetry.h"
#include "ui_NMDosimetry.h"

NMDosimetry::NMDosimetry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NMDosimetry)
{
    ui->setupUi(this);
    phantom_match = nullptr;

    currentDir=QDir::currentPath();

#ifdef Q_OS_LINUX
    //linux code goes here
#elif Q_OS_WIN32
    // windows code goes here
#else

#endif
}

NMDosimetry::~NMDosimetry()
{
    delete ui;
}

void NMDosimetry::on_pushButton_clicked()
{
    if(phantom_match==nullptr)
        phantom_match=new integradeDose(this,linux_activityCurves,linux_sadr);
    phantom_match->compute();
}

void NMDosimetry::on_cB_radiopharma_currentIndexChanged(int index)
{
    switch (index) {
      case 0:
     {
#ifdef Q_OS_LINUX
        //linux code goes here
        linux_activityCurves = currentDir;
        linux_activityCurves.append("/data/I131_INa1/time_activity_curves_I131_INa1.txt");
        linux_sadr = currentDir;
        linux_sadr.append("/data/I131_INa1/phantom_001.txt");
#elif Q_OS_WIN32
        linux_activityCurves = currentDir;
        linux_activityCurves.append("\data\I131_INa1\time_activity_curves_I131_INa1.txt");
        linux_sadr = currentDir;
        linux_sadr.append("\data/I131_INa1\phantom_001.txt");
#else

#endif
     }break;

      case 1:
      {
#ifdef Q_OS_LINUX
        //linux code goes here
        linux_activityCurves = currentDir;
        linux_activityCurves.append("/data/I131_INa2/time_activity_curves_I131_INa2.txt");
        linux_sadr = currentDir;
        linux_sadr.append("/data/I131_INa2/phantom_001.txt");
#elif Q_OS_WIN32
        linux_activityCurves = currentDir;
        linux_activityCurves.append("\data\I131_INa2\time_activity_curves_I131_INa2.txt");
        linux_sadr = currentDir;
        linux_sadr.append("\data\I131_INa2\phantom_001.txt");
#else

#endif
      }break;

    case 2:
    {
#ifdef Q_OS_LINUX
        //linux code goes here
        linux_activityCurves = currentDir;
        linux_activityCurves.append("/data/Sm153_EDTMP/time_activity_curves_Sm153_EDTMP.txt");
        linux_sadr = currentDir;
        linux_sadr.append("/data/Sm153_EDTMP/phantom_001.txt");
#elif Q_OS_WIN32
        linux_activityCurves = currentDir;
        linux_activityCurves.append("\data\Sm153_EDTMP\time_activity_curves_Sm153_EDTMP.txt");
        linux_sadr = currentDir;
        linux_sadr.append("\data\Sm153_EDTMP\phantom_001.txt");
#else

#endif

    }break;

    case 3:
    {
#ifdef Q_OS_LINUX
        //linux code goes here
        linux_activityCurves = currentDir;
        linux_activityCurves.append("/data/I131_MIBG/time_activity_curves_I131_MIBG.txt");
        linux_sadr = currentDir;
        linux_sadr.append("/data/I131_MIBG/phantom_001.txt");
#elif Q_OS_WIN32
        linux_activityCurves = currentDir;
        linux_activityCurves.append("\data\I131_MIBG\time_activity_curves_I131_MIBG.txt");
        linux_sadr = currentDir;
        linux_sadr.append("\data\I131_MIBG\phantom_001.txt");
#else

#endif

    }break;

    case 4:
    {
#ifdef Q_OS_LINUX
        //linux code goes here
        linux_activityCurves = currentDir;
        linux_activityCurves.append("/data/I123_MIBG/time_activity_curves_I123_MIBG.txt");
        linux_sadr = currentDir;
        linux_sadr.append("/data/I123_MIBG/phantom_001.txt");
#elif Q_OS_WIN32
        linux_activityCurves = currentDir;
        linux_activityCurves.append("\data\I123_MIBG\time_activity_curves_I123_MIBG.txt");
        linux_sadr = currentDir;
        linux_sadr.append("\data\I123_MIBG\phantom_001.txt");
#else

#endif

    }break;
    case 5:
    {
#ifdef Q_OS_LINUX
        //linux code goes here
        linux_activityCurves = currentDir;
        linux_activityCurves.append("/data/Tc99m_MDP/time_activity_curves_Tc99m_MDP.txt");
        linux_sadr = currentDir;
        linux_sadr.append("/data/Tc99m_MDP/phantom_001.txt");
#elif Q_OS_WIN32
        linux_activityCurves = currentDir;
        linux_activityCurves.append("\data\Tc99m_MDP\time_activity_curves_Tc99m_MDP.txt");
        linux_sadr = currentDir;
        linux_sadr.append("\data\Tc99m_MDP\phantom_001.txt");
#else

#endif

    }break;
    }




}
