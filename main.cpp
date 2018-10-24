#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    int smaK(int n1, int n2)
    {
        int m1 = qPow(10,n2-1),
                m2 = qPow(10,n2);
        int si1 = m2-m1,
                j1=0;
        QVector<int>ve1(si1);
        for(int i1=m1;i1<m2;i1++)
        {   ve1[j1] = i1; j1++;        }
//        qDebug() << n2 << m1 << m2 << " \n-- " << ve1;
        QVector<int>ve2;
        int si2=0, j2=0;
        ve1.resize(m2);
        for(int i2=0; i2< m2;i2++)
        {
            if(ve1[i2]%n1 ==0)
            {
                si2++;
                ve2.resize(si2);
                ve2[j2] = ve1[i2];
               j2++;
            }
        }
        qDebug() << n2 << " -- " << m1 << m2 << "\n divided by  " << n1 << " \n = " << ve2 ;
    }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;    

    s1.smaK(14, 4);

    for(int i1=1;i1<20;i1++)
    {

    }
    return a.exec();
}
