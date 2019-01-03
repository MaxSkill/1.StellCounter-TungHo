#ifndef _ENHANCED_WINDOW_H_
#define _ENHANCED_WINDOW_H_

/*
This class enhances the window component of cvui by making it movable and minimizable.

Authors:
	ShengYu - https://github.com/shengyu7697
	Amaury Bréhéret - https://github.com/abreheret

Contributions:
	Fernando Bevilacqua <dovyski@gmail.com>

Code licensed under the MIT license.
*/
class EnhancedWindow
{
private:
	int mX;
	int mY;
	int mWidth;
	int mHeight;
	int mHeightNotMinimized;
	cv::String mTitle;
	int mDeltaY;
	int mDeltaX;
	bool mIsMoving;
	bool mMinimized;
	bool mMinimizable;

public:
	EnhancedWindow(int x, int y, int width, int height, const cv::String& title, bool minimizable, bool mIsMoving, bool mMinimized) :
		mX(x),
		mY(y),
		mWidth(width),
		mHeight(height),
		mHeightNotMinimized(height),
		mTitle(title),
		mDeltaY(0),
		mDeltaX(0),
		mIsMoving(mIsMoving),
		mMinimized(mMinimized),
		mMinimizable(minimizable) {
	}

	void begin(cv::Mat &frame) {
		bool mouseInsideTitleArea = cvui::mouse().inside(cv::Rect(mX, mY, mWidth, 20));
		mHeight = mMinimized ? 20 : mHeightNotMinimized;

		if (mIsMoving == false && cvui::mouse(cvui::DOWN) && mouseInsideTitleArea) {
			mDeltaX = cvui::mouse().x - mX;
			mDeltaY = cvui::mouse().y - mY;
			mIsMoving = true;

		} else if (mIsMoving=false && cvui::mouse(cvui::IS_DOWN)) {
			mX = cvui::mouse().x - mDeltaX;
			mY = cvui::mouse().y - mDeltaY;

		} else {
			//mIsMoving = false;
			mX = std::max(0, mX);
			mY = std::max(0, mY);
			mX = std::min(frame.cols - mWidth, mX);
			mY = std::min(frame.rows - 20, mY);
		}

		cvui::window(frame, mX, mY, mWidth, mHeight, mTitle);
		if (mMinimizable && cvui::button(frame, mX + mWidth - 20, mY + 1, 18, 18, mMinimized ? "+" : "-", cv::Scalar(0x42, 0x42, 0x42), cv::Scalar(0x52, 0x52, 0x52), cv::Scalar(0x32, 0x32, 0x32), cv::Scalar(255, 255, 255))){
			mMinimized = !mMinimized;
		}
		cvui::beginRow(frame, mX + 10, mY + 30, mWidth - 20, mHeight - 20);
		cvui::beginColumn(mWidth - 10, mHeight - 20);
	}

	void end() {
		cvui::endColumn();
		cvui::endRow();
	}
	int X() const {
		return mX;
	}
	int Y() const {
		return mY;
	}
	void setX(int X) {
		mX = X;
	}
	void setY(int Y) {
		mY = Y;
	}
	int width() const {
		return mWidth;
	}

	int height() const {
		return mHeight;
	}

	void setWidth(int w) {
		mWidth = w;
	}

	void setHeight(int h) {
		mHeightNotMinimized = h;
	}
	void setmMinimizable(bool isMinimizable) {
		mMinimized = isMinimizable;
	}
	bool isMinimized() {
		return mMinimized;
	}
};

#endif // _ENHANCED_WINDOW_H_