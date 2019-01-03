#include <WinSock2.h>
#include <WS2tcpip.h>
#include <Windows.h>
#pragma comment(lib,"ws2_32.lib") 
#include <WinSock2.h>
// Include files to use the pylon API.
#include <pylon/PylonIncludes.h>
#ifdef PYLON_WIN_BUILD
#    include <pylon/PylonGUI.h>
#endif
#include <pylon/gige/BaslerGigEInstantCamera.h>
typedef Pylon::CBaslerGigEInstantCamera Camera_t;
typedef Camera_t::GrabResultPtr_t GrabResultPtr_t;
using namespace GenApi;
using namespace Basler_GigECameraParams;
#pragma once
#include "opencv/cv.h"
#include "opencv/highgui.h"
#include "opencv2/opencv.hpp"
#include "opencv2/core/core.hpp"
#include <iostream>
#include <fstream>
#include "Blob.h"
#include <stdio.h>
#include <windows.h>
#include <process.h>         // needed for _beginthread()
#include <ctime>

using namespace cv;
using namespace std;
using namespace Pylon;
using namespace System;

CInstantCameraArray cameras(min(1, 2));

#pragma region Bien
#pragma region CCD
CDeviceInfo nameDev;
Camera_t camera;
CGrabResultPtr ptrGrabResult;
int ccd_With = 1034, ccd_Height = 561, ccd_OffX = 0, ccd_OffY = 0, ccd_Exposure =1000;
#pragma endregion
#pragma region Calib
int _calibBin = 30;
int _calibClose = 30;
int _calibMinArea =1000;
int _calibMaxArea = 50000;
int _calDis = 200;
double _calAngle ;

cv::Point pCalibB;
cv::Point pCalibE;
cv::Point pCalibE_ver;
clock_t _calib_timeB;
bool isCalibRun = false;
bool _calibDone = false;

#pragma endregion
#pragma region FILTER
Mat imgRaw;
int  valBinary1 =220, valBinary2= 1;
int valBlur =22;
int szM=2;
int valSplit =35;
Mat imgFil;
int numberSteel = 0;
Mat raw, imgThresh;
double minArea=100, maxArea=10000;
double CurArea, tempMinArea = 999999, tempMaxArea = 0;
bool isFilterDone = false;
int minNumber, maxNumber;
cv::Point pDraw = cv::Point(0, 0 );
vector<Mat> ListResult;

time_t dtSave;
#pragma endregion
#pragma region Trigger
Mat imgTrig;
int szMtrig=43;
int valBinaryTrig=240;
bool isTrigger = false;
bool isStartFilter = false;
bool isStopTrig = false;
bool isEditTrig = false;
double areaTrigger=0;
double minTrig = 90000;
double maxTrig = 150000;

//Decimal delayStartTrig = 500;
//Decimal delayStopTrig = 500;

#pragma endregion
#pragma endregion
////VARIALBE FORM
bool isRun = true;
bool isCap = false;
bool isFil = false;
bool isTracking = false;
bool isFind = false;
bool isFindOK = false;
bool isTrackings = false;
bool isSrc = false;
Mat src_gray;


Mat fr, src;
CPylonImage image;/////anh output
CImageFormatConverter fc;///anh convert

cv::Size szWindow;

//Load
bool blLoad;
bool isOne = false;
Mat frLogo;
Rect recLogo = Rect(5, 5, 80, 30);

///Kết quả
double dScan = 1;
cv::Size szSave = cv::Size(400, 250);
Mat imgSave;

string sPath;
int picMax = 10;
std::vector<std::vector<cv::Point> > list_contourTracking;

vector<Mat > list_imgResult;

vector<string > list_Result;
vector<int > list_ID;
vector<int > list_L;
vector<int > list_X;
vector<int > list_Y;
vector<int > list_A;
vector<clock_t > list_T;
cv::Mat imgShow;
Mat imgResult;
int indexTemp = 0;


#define WINDOW_NAME	"ABB"
#define WINDOW_RESULT	"RESULT"
//////kich thuoc///
int drag = 0;
int select_flag = 0;
cv::Point point1, point2;
Mat imgShow_old;
int dist_px = 0;
int dist_mm = 0;
double convert_px_mm =2.4;
///Cat hinh
cv::Size szForm1;
cv::Size szRaw;
cv::Size szScan;
double szScanX;
double szScanY;
cv::Rect recDrop;
//SPLIT 
