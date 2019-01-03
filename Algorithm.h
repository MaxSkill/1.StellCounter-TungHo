#include "Global.h"
void mouseHandler(int event, int x, int y, int flags, void* param)
{
	if (event == CV_EVENT_LBUTTONDOWN && !drag)
	{

		point1 = cv::Point(x, y);

		drag = 1;
	}

	if (event == CV_EVENT_MOUSEMOVE && drag)
	{


		point2 = cv::Point(x, y);

		imgShow_old.copyTo(imgShow);
		line(imgShow, point1, point2, CV_RGB(255, 0, 0), 1, 8, 0);
		circle(imgShow, point1, 2, Scalar(255, 0, 0), 2);
		circle(imgShow, point2, 2, Scalar(0, 0, 255), 2);


	}

	if (event == CV_EVENT_LBUTTONUP && drag)
	{

		point2 = cv::Point(x, y);


		imgShow_old.copyTo(imgShow);

		line(imgShow, point1, point2, CV_RGB(0, 0, 255), 1, 8, 0);
		circle(imgShow, point1, 2, Scalar(255, 0, 0), 2);
		circle(imgShow, point2, 2, Scalar(0, 0, 255), 2);
		double ix = (double)(szRaw.width*1.0 / szWindow.width);
		double iy = (double)(szRaw.height*1.0 / szWindow.height);
		point1.x = point1.x*(ix);
		point2.x = point2.x*(ix);
		point1.y = point1.y*(iy);
		point2.y = point2.y*(iy);

		dist_px = sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));


	}

	if (event == CV_EVENT_LBUTTONUP)
	{

		select_flag = 1;
		drag = 0;
	}
}
void mouseDrop(int event, int x, int y, int flags, void* param)
{
	if (event == CV_EVENT_LBUTTONDOWN && !drag)
	{

		point1 = cv::Point(x, y);
		circle(imgShow, point1, 2, Scalar(255, 0, 0), 2);
		drag = 1;
	}

	if (event == CV_EVENT_MOUSEMOVE && drag)
	{
		cv::Point pOrigin;

		point2 = cv::Point(x, y);
		circle(imgShow, point2, 2, Scalar(0, 0, 255), 2);
		imgShow_old.copyTo(imgShow);				
		if (point1.x <= point2.x)
			pOrigin.x = point1.x; 
		else 
			pOrigin.x = point2.x;
		if (point1.y <= point2.y)
			pOrigin.y = point1.y;
		else
			pOrigin.y = point2.y;
		int w = abs(point1.x - point2.x);
		int h  = abs(point1.y - point2.y);
		Rect rec = Rect(pOrigin.x, pOrigin.y, w, h);
		rectangle(imgShow, rec,  Scalar(0, 0,255),2);
	}

	if (event == CV_EVENT_LBUTTONUP && drag)
	{
		cv::Point pOrigin;
		point2 = cv::Point(x, y);
		imgShow_old.copyTo(imgShow);	
		if (point1.x < point2.x)
			pOrigin.x = point1.x;
		else
			pOrigin.x = point2.x;
		if (point1.y < point2.y)
			pOrigin.y = point1.y;
		else
			pOrigin.y = point2.y;
		int w = abs(point1.x - point2.x);
		int h = abs(point1.y - point2.y);
		Rect rec = Rect(pOrigin.x, pOrigin.y, w,h);
		rectangle(imgShow, rec, Scalar(0, 255, 0),2);
		recDrop = Rect(pOrigin.x, pOrigin.y, w, h);
		/*select_flag = 1;
		drag = 0;*/
	}

	if (event == CV_EVENT_LBUTTONUP)
	{

		select_flag = 1;
		drag = 0;
	}
}
cv::Point OffSet(cv::Point pInput, cv::Point pOffset)
{
	cv::Point point;
	point.x = pInput.x - pOffset.x;
	point.y = pInput.y - pOffset.y;
	return point;
}

void Trigger()
{	
	
	Mat hide;
	raw.copyTo(imgTrig);//Input
	raw.copyTo(imgShow);//Input
	cvtColor(imgTrig, imgTrig, COLOR_BGR2GRAY);//
	Mat M = Mat::ones(szMtrig, szMtrig, CV_8U);
	threshold(imgTrig, imgTrig, valBinaryTrig, 255, THRESH_BINARY);//binary
	dilate(imgTrig, imgTrig, M); //mo ra
	Mat imgcontour = imgTrig.clone();//coppy
	vector<vector<cv::Point>>contours;
	cv::findContours(imgcontour, contours, 0, cv::CHAIN_APPROX_SIMPLE);
	

	for (int i = 0; i < contours.size(); i++)
	{
		areaTrigger = contourArea(contours[i]);
		
		
		if (areaTrigger>minTrig && areaTrigger< maxTrig)
		{
			 
			isTrigger = true;
			isStopTrig = false;
			if (isStartFilter == true){
				drawContours(imgShow, contours, i, Scalar(255, 255, 0), 1, 8, hide, 2);
			}		
		}
		else
		{
			if (isTrigger == true)
			{
				isStopTrig = true;
				
			}
		}
	};
	
}

void Filter()
{
	
	if (isFilterDone == false || isFil == true)
	{

		//************Thay doi
		vector<vector<cv::Point>>contours;
		
		clock_t tStart = clock();
		raw.copyTo(imgFil);//Input
		
		raw.copyTo(imgRaw);//Input

		//inRange(imgShow, Scalar(valBlur, valBlur, valBlur), Scalar(valBinary, valBinary, valBinary), imgFil);
		//cvtColor(imgFil, imgFil, COLOR_BGR2GRAY);
		//cv::threshold(imgFil, imgFil, valBinary, 255.0, THRESH_BINARY_INV );

		//	cv::threshold(imgFil, imgFil, valBinary, 255.0, 1);
		//cv::blur(imgFil, imgFil, cv::Size(20, 20));

		//imgFil = imgFil(recCrop
		cvtColor(imgFil, imgFil, COLOR_BGR2GRAY);
		//cv::blur(imgFil, imgFil, cv::Size(valBlur, valBlur));
		cv::threshold(imgFil, imgFil, valBinary1, 255.0, 0);
		//bitwise_not(imgFil, imgFil);
		Mat M = Mat::ones(szM, szM, CV_8U);
		Mat imgFil2; Mat unknown, fr;
		erode(imgFil, imgFil, M);//thu lai
		dilate(imgFil, imgFil, M); //mo ra
		dilate(imgFil, imgFil2, M, cv::Point(-1, -1), 3);//mo ra
		distanceTransform(imgFil, imgFil, DIST_L2, 5);////
		normalize(imgFil, imgFil, valSplit / 10.0, 0, NORM_INF);//tach center
		cv::blur(imgFil, imgFil, cv::Size(valBlur, valBlur));
		threshold(imgFil, imgFil, valBinary2, 255, THRESH_BINARY);//binary

		imgFil.convertTo(imgThresh, CV_8U, 1, 0);

		//Mat opening8 = coinsFg.clone();
		subtract(imgFil2, imgThresh, unknown);
		//bitwise_not(imgFil, imgFil);
		//cv::Canny(imgFil, imgFil, 0, 255);

		//Mat structuringElement = cv::getStructuringElement(CV_SHAPE_ELLIPSE, cv::Size(szCloseX, szCloseY), cv::Point(-1, -1));
		//cv::morphologyEx(imgFil, imgThresh, 3, structuringElement);
		//Mat src2 = imgFil.clone();
		Mat hide;
		cv::findContours(imgThresh, contours, 0, cv::CHAIN_APPROX_SIMPLE);
		numberSteel = 0;
		tempMinArea = 999999; tempMaxArea = 0;
		for (int i = 0; i < contours.size(); i++)
		{
			CurArea = contourArea(contours[i]);
			if (CurArea < tempMinArea)tempMinArea = CurArea;
			if (CurArea > tempMaxArea)tempMaxArea = CurArea;
			if (CurArea<minArea || CurArea> maxArea) continue;
			drawContours(imgRaw, contours, i, Scalar(255, 255, 0), CV_FILLED, 8, hide, 2);
		
			numberSteel++;
		}
		
		if (isFil == false)
		{

			Mat imgCrop = imgRaw.clone();
			cv::resize(imgCrop, imgCrop, cv::Size(imgResult.cols, imgResult.rows / 3), 0, 0, CV_INTER_LINEAR);//dinh dang lại kích thuoc anh imgCrop
			cv::putText(imgCrop,"SL: "+ to_string(numberSteel), cv::Point(5, 50), CV_FONT_HERSHEY_SIMPLEX, 0.7, Scalar(165,247,125),2);//ghi chữ lên ảnh
			ListResult.push_back(imgCrop);
			dtSave = time(0);//Now
			tm* now = localtime(&dtSave);/// phan tich time Now thanh chuoi string hour min sercond
			string sDate = to_string(now->tm_hour) + "_" + to_string(now->tm_min) + "_" + to_string(now->tm_sec) + "_";//ten anh
			string sSave = sPath + "\\" + sDate + ".png";	//dg dan		
			
			pDraw = cv::Point(0, 0);
			for (int i = ListResult.size() - 1; i >= 0; i--)//
			{
				cv::putText(ListResult[i], "ID: " + to_string(i + 1), cv::Point(5, 20), CV_FONT_HERSHEY_SIMPLEX, 0.7, Scalar(165, 247, 125), 2);
				ListResult[i].copyTo(imgResult(Rect(pDraw.x, pDraw.y, ListResult[i].cols, ListResult[i].rows)));
				pDraw.y += ListResult[i].rows + 10;
				if (pDraw.y + ListResult[i].rows > imgResult.rows)break;
			}
			cv::imwrite(sSave, ListResult[ListResult.size()-1]);//SAve anh
			///isTrigger = false;
			//isTrackings = true;
			///cyclFil = ((double)(clock() - tStart) / CLOCKS_PER_SEC) * 1000; /* 1s = 1000ms */
			isFilterDone = true;

		}
	}
}
bool isConnected = false;
void ShowImg()
{
	//if (blnAtLeastOneBlobCrossedTheLine == true) {
	//	cv::line(imgShow, crossingLine[0], crossingLine[1], SCALAR_GREEN, 3);
	//}
	//else {
	///	cv::line(imgShow, crossingLine[0], crossingLine[1], Scalar(255, 0, 0), 1);
	//}

}
const vector<string> explode(const string& s, const char& c)
{
	string buff{ "" };
	vector<string> v;

	for (auto n : s)
	{
		if (n != c) buff += n; else
		if (n == c && buff != "") { v.push_back(buff); buff = ""; }
	}
	if (buff != "") v.push_back(buff);

	return v;
}
void WriteParaCCD()
 {
	camera.Width.SetValue(ccd_With);
	camera.Height.SetValue(ccd_Height);
	camera.OffsetX.SetValue(ccd_OffX);
	camera.OffsetY.SetValue(ccd_OffY);
	camera.AcquisitionMode.SetValue(AcquisitionModeEnums::AcquisitionMode_Continuous);
	camera.AcquisitionFrameRateAbs.SetValue(100, true);
	camera.AcquisitionFrameRateEnable.SetValue(true);
	
	//camera.PgiMode()
	//int a = camera.FrameTimeoutAbs.GetValue();
	//camera.FrameTimeoutEnable.SetValue(1);
	//camera.FrameTimeoutAbs.SetValue(100);

	camera.ExposureTimeRaw.SetValue(ccd_Exposure);
	INodeMap& nodemap = camera.GetNodeMap();
	CIntegerPtr BlackLevelRaw(nodemap.GetNode("BlackLevelRaw"));
	BlackLevelRaw->SetValue(51);
	//CIntegerPtr AcquisitionFrameRateAbs(nodemap.GetNode("AcquisitionMode"));
	//AcquisitionFrameRateAbs->SetValue(true);
	//camera.PgiMode.SetValue(PgiModeEnums::PgiMode_On);
	//camera.BlackLevelAbs.SetValue(10);
	//

			// ccd_Expore = camera.ExposureTimeRaw.GetValue();
			// ccd_OffX = camera.OffsetX.GetValue();
			// ccd_OffY = camera.OffsetY.GetValue();
 }