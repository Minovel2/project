#define NOMINMAX
#include <iostream>
#include <ctime>
#include <string>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <windows.h>
using namespace std;
int counter;
double* P3 = new double[45] { 22, 23, 24, 24, 25, 25, 26, 27, 27, 27, 27, 29, 29, 30, 31, 38, 39, 41, 41, 42, 43, 43, 44, 44, 44, 45, 46, 47, 48, 49, 43, 45, 45, 46, 47, 48, 49, 49, 50, 51, 51, 53, 53, 53, 54 };
double* P8 = new double[45] { 14, 23, 11, 27, 29, 15, 19, 17, 22, 25, 13, 26, 11, 17, 19, 23, 28, 25, 11, 17, 15, 22, 26, 29, 19, 15, 11, 17, 16, 23, 25, 13, 26, 11, 17, 19, 23, 28, 25, 11, 11, 27, 29, 15, 19 };
double* P7 = new double[45] { 11, 13, 19, 16, 12, 11, 17, 18, 13, 11, 15, 16, 19, 17, 12, 13, 11, 15, 16, 19, 17, 13, 19, 16, 12, 11, 17, 18, 11, 14, 17, 13, 19, 16, 12, 11, 17, 18, 11, 14, 15, 13, 19, 17, 12 };
double* P4 = new double[45] { 18, 19, 15, 17, 19, 21, 20, 16, 18, 22, 23, 20, 22, 18, 21, 13, 16, 11, 13, 14, 12, 16, 11, 13, 15, 9, 12, 14, 16, 13, 29, 26, 30, 28, 31, 29, 25, 27, 31, 28, 30, 26, 29, 31, 28 };
int* classes = new int[45] {};

double* PX = P3;
double* PY = P4;

double getDist(double x1, double y1, double x2, double y2) {
    return std::abs(x2 - x1) + std::abs(y2 - y1);
}

double* clusterisation() {
    double* firstCenter = new double[2];
    double* secondCenter = new double[2];
    double* thirdCenter = new double[2];
    for (int i = 0; i < 45; i++) {
        classes[i] = -1;
    }

    bool hasChanges = true;
    bool firstCall = true;
    const int maxIterations = 200;
    counter = 0;
    while (hasChanges && counter < maxIterations) {
        if (firstCall) {
            firstCall = false;
            int randInt = rand() % 45;
            firstCenter = new double[2] {PX[randInt], PY[randInt]};
            double maxDist = 0;
            for (int i = 0; i < 45; i++) {
                double dist = getDist(firstCenter[0], firstCenter[1], PX[i], PY[i]);
                if (dist > maxDist) {
                    secondCenter[0] = PX[i];
                    secondCenter[1] = PY[i];
                    maxDist = dist;
                }
            }

            maxDist = 0;
            for (int i = 0; i < 45; i++) {
                double minDist = std::min(getDist(PX[i], PY[i], firstCenter[0], firstCenter[1]), getDist(PX[i], PY[i], secondCenter[0], secondCenter[1]));
                if (minDist > maxDist) {
                    maxDist = minDist;
                    thirdCenter[0] = PX[i];
                    thirdCenter[1] = PY[i];
                }
            }
            //пересчет первого центра
           /* maxDist = 0;
            for (int i=0; i < 45; i++) {
                double minDist = std::min(getDist(PX[i],PY[i], thirdCenter[0],thirdCenter[1]), getDist(PX[i],PY[i], secondCenter[0],secondCenter[1]));
                if (minDist > maxDist) {
                    maxDist = minDist;
                    firstCenter[0] = PX[i];
                    firstCenter[1] = PY[i];
                }
            }*/
        }
        else {
            int* classCounter = new int[3] {0, 0, 0};
            for (int i = 0; i < 45; i++) {
                if (classes[i] == 0) {
                    firstCenter[0] += PX[i];
                    firstCenter[1] += PY[i];
                    classCounter[0]++;
                }
                else if (classes[i] == 1) {
                    secondCenter[0] += PX[i];
                    secondCenter[1] += PY[i];
                    classCounter[1]++;
                }
                else {
                    thirdCenter[0] += PX[i];
                    thirdCenter[1] += PY[i];
                    classCounter[2]++;
                }
            }
            for (int i = 0; i < 3; i++) {
                if (classCounter[i] == 0)
                    classCounter[i] = 1;
            }
            firstCenter[0] /= classCounter[0];
            firstCenter[1] /= classCounter[0];
            secondCenter[0] /= classCounter[1];
            secondCenter[1] /= classCounter[1];
            thirdCenter[0] /= classCounter[2];
            thirdCenter[1] /= classCounter[2];
        }

        //выдача класса в зависимости от расстояния до центров кластеров
        hasChanges = false;
        for (int i = 0; i < 45; i++) {
            int choosenClass;
            double dist1 = getDist(firstCenter[0], firstCenter[1], PX[i], PY[i]);
            double dist2 = getDist(secondCenter[0], secondCenter[1], PX[i], PY[i]);
            double dist3 = getDist(thirdCenter[0], thirdCenter[1], PX[i], PY[i]);
            if (dist1 <= dist2 && dist1 <= dist3) {
                choosenClass = 0;
            }
            else if (dist2 <= dist1 && dist2 <= dist3) {
                choosenClass = 1;
            }
            else {
                choosenClass = 2;
            }

            if (classes[i] != choosenClass) {
                hasChanges = true;
                classes[i] = choosenClass;
            }
        }
        counter++;
    }

    double* pointsCounter = new double[3] {0, 0, 0};
    for (int i = 0; i < 45; i++) {
        pointsCounter[classes[i]]++;
    }
    return pointsCounter;
}

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    srand(time(0));
    
    bool cycle = true;
    const int cyclesCount = 10000;
    double middleSko;
    while (cycle) {
        middleSko = 0;
        cout << "0 - прервать цикл, 1 - сгенерировать: ";
        cin >> cycle;
        if (cycle) {
            for (int i = 0; i < cyclesCount; i++) {
                double* pointsCounter = clusterisation();
                double sko = std::sqrt((std::pow(pointsCounter[0] - 15, 2) + std::pow(pointsCounter[1] - 15, 2) + std::pow(pointsCounter[2] - 15, 2)) / 3);
                middleSko += (sko / cyclesCount);
            }
            cout << "Количество циклов: " << cyclesCount;
            cout << endl << "Среднее СКО = " << middleSko << endl << endl;
        }
    }
}
