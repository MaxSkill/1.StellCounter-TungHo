


#include "Algorithm.h"
namespace Capture {
	using namespace System::Threading;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();	
			
			//(CTlFactory::GetInstance().CreateFirstDevice())
			//camera.GetInstantCameraNodeMap().Connect;
		}

	protected:		
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	#pragma region Window_control
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnRun;		
	private: System::Windows::Forms::Timer^  tmRun;
	private: System::Windows::Forms::PictureBox^  picShow;


	private: System::Windows::Forms::Panel^  pEditor;
	private: System::Windows::Forms::Button^  btnCCD;
	private: System::Windows::Forms::Panel^  pCCD;
	private: System::Windows::Forms::Button^  btnFilter;


	private: System::Windows::Forms::Button^  btnSave;
private: System::Windows::Forms::Button^  btnExit;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Timer^  tmConnect;
private: System::ComponentModel::BackgroundWorker^  threadFilter;




private: System::ComponentModel::BackgroundWorker^  threadCap;




private: System::ComponentModel::BackgroundWorker^  threadFind;

private: System::Windows::Forms::Label^  label7;


private: System::Windows::Forms::Button^  btnDefautSize;
private: System::Windows::Forms::Panel^  pFilter;


private: System::Windows::Forms::TrackBar^  trackValBinary;




private: System::Windows::Forms::Button^  btnRobot;


private: System::Windows::Forms::Panel^  pFind;
private: System::Windows::Forms::Button^  btnFind;



private: System::Windows::Forms::Panel^  pTracking;
	private: System::Windows::Forms::Button^  btnTrigger;

































private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  label81;





private: System::Windows::Forms::Panel^  pEnd;
private: System::Windows::Forms::Button^  btnOnline;










private: System::Windows::Forms::Label^  lbST_connect;
private: System::ComponentModel::BackgroundWorker^  threadConnect;
private: System::Windows::Forms::PictureBox^  pictureBox1;


private: System::Windows::Forms::Panel^  pRun;

private: System::Windows::Forms::Button^  button2;


private: System::Windows::Forms::Label^  lbNum;

private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Timer^  tmClose;
private: System::Windows::Forms::Label^  label24;

private: System::Windows::Forms::Timer^  tmTop;









private: System::Windows::Forms::Label^  label35;






private: System::Windows::Forms::FolderBrowserDialog^  folderSaveImg;
private: System::Windows::Forms::Panel^  pRobot;
private: System::Windows::Forms::GroupBox^  groupBox13;
private: System::Windows::Forms::TextBox^  txtCmd;
private: System::Windows::Forms::NumericUpDown^  numMaxID;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::NumericUpDown^  numOffsetX;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::NumericUpDown^  numOffsetY;
private: System::Windows::Forms::NumericUpDown^  numOffsetAngle;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::NumericUpDown^  numPort;
private: System::Windows::Forms::MaskedTextBox^  txtIPAddress;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;

private: System::Windows::Forms::Label^  label89;




















































private: System::Windows::Forms::ToolTip^  tipValue;

private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::CheckBox^  checkBox8;
private: System::Windows::Forms::TrackBar^  trackBinary2;


private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::CheckBox^  check;
private: System::Windows::Forms::TrackBar^  trackSplit;



private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::CheckBox^  checkBox6;
private: System::Windows::Forms::TrackBar^  trackM;




private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TrackBar^  trackBlur;

private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::Label^  label46;

















private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::CheckBox^  checkBox11;
private: System::Windows::Forms::CheckBox^  checkBox10;

private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Button^  btnBroswer;
private: System::Windows::Forms::TextBox^  txtPath;
private: System::Windows::Forms::CheckBox^  ckAutoSave;
private: System::Windows::Forms::NumericUpDown^  numPicMax;



private: System::Windows::Forms::Label^  label55;





private: System::Windows::Forms::Label^  label47;









private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::Panel^  panel7;
private: System::Windows::Forms::Panel^  panel12;
private: System::Windows::Forms::Panel^  panel11;
private: System::Windows::Forms::Panel^  panel10;
private: System::Windows::Forms::Panel^  panel9;
private: System::Windows::Forms::Panel^  panel8;


private: System::Windows::Forms::Panel^  panel14;
private: System::Windows::Forms::Panel^  panel13;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Panel^  panel16;
private: System::Windows::Forms::Label^  label48;


private: System::Windows::Forms::Label^  label54;







private: System::Windows::Forms::Panel^  panel17;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::NumericUpDown^  numMinArea;



private: System::Windows::Forms::Label^  label20;



private: System::Windows::Forms::Panel^  panel19;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::NumericUpDown^  numDelayStartTrig;




private: System::Windows::Forms::Panel^  panel22;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
private: System::Windows::Forms::Panel^  panel21;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::NumericUpDown^  numSizeMax;

private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::TrackBar^  trackBar9;
private: System::Windows::Forms::Panel^  panel20;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::NumericUpDown^  numSizeMin;

private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::TrackBar^  trackBar8;




private: System::Windows::Forms::TrackBar^  trackBar19;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
private: System::Windows::Forms::TrackBar^  trackExplosure;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Button^  btnDrop;

private: System::Windows::Forms::NumericUpDown^  numCCD_height;
private: System::Windows::Forms::NumericUpDown^  numCCD_with;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::TrackBar^  trackCCD_offY;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::TrackBar^  trackCCD_offX;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
private: System::Windows::Forms::Button^  btnDropOK;

private: System::Windows::Forms::Timer^  tmDrop;
private: System::ComponentModel::BackgroundWorker^  threadDrop;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::Label^  label80;

private: System::Windows::Forms::CheckBox^  checkBox7;
private: System::Windows::Forms::TrackBar^  trackDilateTrig;

private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  lbBinaryTrig;

private: System::Windows::Forms::CheckBox^  checkBox5;
private: System::Windows::Forms::TrackBar^  trackBinnaryTrig;


private: System::Windows::Forms::Label^  lbDilateTrig;
private: System::ComponentModel::BackgroundWorker^  ThreadTrig;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::NumericUpDown^  numAreaCurrent;
private: System::Windows::Forms::NumericUpDown^  numMaxArea;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Timer^  DelayTrig;
private: System::Windows::Forms::Timer^  DelayStopTrig;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::NumericUpDown^  numDelayStopTrig;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::NumericUpDown^  numMinCur;

private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::NumericUpDown^  numMaxCur;

private: System::Windows::Forms::Label^  label76;












	private: System::ComponentModel::IContainer^  components;
	#pragma endregion
	protected: 
	private:
		#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbNum = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->picShow = (gcnew System::Windows::Forms::PictureBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnOnline = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->pEditor = (gcnew System::Windows::Forms::Panel());
			this->pRobot = (gcnew System::Windows::Forms::Panel());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->txtCmd = (gcnew System::Windows::Forms::TextBox());
			this->numMaxID = (gcnew System::Windows::Forms::NumericUpDown());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->numOffsetX = (gcnew System::Windows::Forms::NumericUpDown());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->numOffsetY = (gcnew System::Windows::Forms::NumericUpDown());
			this->numOffsetAngle = (gcnew System::Windows::Forms::NumericUpDown());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->numPort = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtIPAddress = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->btnRobot = (gcnew System::Windows::Forms::Button());
			this->pFind = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->numSizeMax = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMaxCur = (gcnew System::Windows::Forms::NumericUpDown());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->trackBar9 = (gcnew System::Windows::Forms::TrackBar());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->numMinCur = (gcnew System::Windows::Forms::NumericUpDown());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->numSizeMin = (gcnew System::Windows::Forms::NumericUpDown());
			this->trackBar8 = (gcnew System::Windows::Forms::TrackBar());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->btnFind = (gcnew System::Windows::Forms::Button());
			this->pTracking = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lbDilateTrig = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->trackDilateTrig = (gcnew System::Windows::Forms::TrackBar());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->lbBinaryTrig = (gcnew System::Windows::Forms::Label());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->trackBinnaryTrig = (gcnew System::Windows::Forms::TrackBar());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numDelayStopTrig = (gcnew System::Windows::Forms::NumericUpDown());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->numDelayStartTrig = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->numMaxArea = (gcnew System::Windows::Forms::NumericUpDown());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->numAreaCurrent = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMinArea = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->btnTrigger = (gcnew System::Windows::Forms::Button());
			this->pFilter = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->trackBinary2 = (gcnew System::Windows::Forms::TrackBar());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->trackSplit = (gcnew System::Windows::Forms::TrackBar());
			this->check = (gcnew System::Windows::Forms::CheckBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->trackM = (gcnew System::Windows::Forms::TrackBar());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->trackBlur = (gcnew System::Windows::Forms::TrackBar());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->trackValBinary = (gcnew System::Windows::Forms::TrackBar());
			this->btnFilter = (gcnew System::Windows::Forms::Button());
			this->pCCD = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->numPicMax = (gcnew System::Windows::Forms::NumericUpDown());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->btnBroswer = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->ckAutoSave = (gcnew System::Windows::Forms::CheckBox());
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->trackBar19 = (gcnew System::Windows::Forms::TrackBar());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->trackExplosure = (gcnew System::Windows::Forms::TrackBar());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnDropOK = (gcnew System::Windows::Forms::Button());
			this->btnDrop = (gcnew System::Windows::Forms::Button());
			this->numCCD_height = (gcnew System::Windows::Forms::NumericUpDown());
			this->numCCD_with = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->trackCCD_offY = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->trackCCD_offX = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->btnDefautSize = (gcnew System::Windows::Forms::Button());
			this->btnCCD = (gcnew System::Windows::Forms::Button());
			this->btnRun = (gcnew System::Windows::Forms::Button());
			this->tmRun = (gcnew System::Windows::Forms::Timer(this->components));
			this->tmConnect = (gcnew System::Windows::Forms::Timer(this->components));
			this->threadFilter = (gcnew System::ComponentModel::BackgroundWorker());
			this->threadCap = (gcnew System::ComponentModel::BackgroundWorker());
			this->threadFind = (gcnew System::ComponentModel::BackgroundWorker());
			this->pEnd = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lbST_connect = (gcnew System::Windows::Forms::Label());
			this->threadConnect = (gcnew System::ComponentModel::BackgroundWorker());
			this->pRun = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tmClose = (gcnew System::Windows::Forms::Timer(this->components));
			this->tmTop = (gcnew System::Windows::Forms::Timer(this->components));
			this->folderSaveImg = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->tipValue = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tmDrop = (gcnew System::Windows::Forms::Timer(this->components));
			this->threadDrop = (gcnew System::ComponentModel::BackgroundWorker());
			this->ThreadTrig = (gcnew System::ComponentModel::BackgroundWorker());
			this->DelayTrig = (gcnew System::Windows::Forms::Timer(this->components));
			this->DelayStopTrig = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picShow))->BeginInit();
			this->pEditor->SuspendLayout();
			this->pRobot->SuspendLayout();
			this->groupBox13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxID))->BeginInit();
			this->groupBox12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOffsetX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOffsetY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOffsetAngle))->BeginInit();
			this->groupBox11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPort))->BeginInit();
			this->pFind->SuspendLayout();
			this->panel22->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			this->panel21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSizeMax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxCur))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar9))->BeginInit();
			this->panel20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMinCur))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSizeMin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar8))->BeginInit();
			this->pTracking->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackDilateTrig))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBinnaryTrig))->BeginInit();
			this->panel19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDelayStopTrig))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDelayStartTrig))->BeginInit();
			this->panel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxArea))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAreaCurrent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMinArea))->BeginInit();
			this->pFilter->SuspendLayout();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBinary2))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackSplit))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackM))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBlur))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackValBinary))->BeginInit();
			this->pCCD->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPicMax))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar19))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackExplosure))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCCD_height))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCCD_with))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackCCD_offY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackCCD_offX))->BeginInit();
			this->pEnd->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->lbNum);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->picShow);
			this->panel1->Location = System::Drawing::Point(3, 47);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(791, 657);
			this->panel1->TabIndex = 0;
			// 
			// lbNum
			// 
			this->lbNum->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lbNum->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbNum->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNum->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->lbNum->Location = System::Drawing::Point(675, -1);
			this->lbNum->Name = L"lbNum";
			this->lbNum->Size = System::Drawing::Size(111, 35);
			this->lbNum->TabIndex = 15;
			this->lbNum->Text = L"00";
			this->lbNum->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lbNum->Click += gcnew System::EventHandler(this, &Form1::lbNum_Click);
			// 
			// label18
			// 
			this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label18->BackColor = System::Drawing::Color::DarkGray;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Cornsilk;
			this->label18->Location = System::Drawing::Point(581, -1);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(100, 35);
			this->label18->TabIndex = 14;
			this->label18->Text = L"Number";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// picShow
			// 
			this->picShow->BackColor = System::Drawing::Color::White;
			this->picShow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picShow->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picShow->Dock = System::Windows::Forms::DockStyle::Fill;
			this->picShow->Location = System::Drawing::Point(0, 0);
			this->picShow->Name = L"picShow";
			this->picShow->Size = System::Drawing::Size(787, 653);
			this->picShow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picShow->TabIndex = 1;
			this->picShow->TabStop = false;
			this->picShow->Click += gcnew System::EventHandler(this, &Form1::picShow_Click);
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::Silver;
			this->btnSave->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(0, 668);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(396, 40);
			this->btnSave->TabIndex = 13;
			this->btnSave->Text = L"Lưu thông số";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &Form1::btnSave_Click);
			// 
			// btnOnline
			// 
			this->btnOnline->BackColor = System::Drawing::Color::LightGray;
			this->btnOnline->Enabled = false;
			this->btnOnline->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOnline->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOnline->ImageIndex = 0;
			this->btnOnline->Location = System::Drawing::Point(3, 3);
			this->btnOnline->Name = L"btnOnline";
			this->btnOnline->Size = System::Drawing::Size(95, 33);
			this->btnOnline->TabIndex = 12;
			this->btnOnline->Text = L"OffLine";
			this->btnOnline->UseVisualStyleBackColor = false;
			this->btnOnline->Click += gcnew System::EventHandler(this, &Form1::btnOnline_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Cornsilk;
			this->button4->Location = System::Drawing::Point(217, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(957, 33);
			this->button4->TabIndex = 11;
			this->button4->Text = L"STEEL_&_COUNTER -TUNG HO";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->BackColor = System::Drawing::Color::LightSalmon;
			this->btnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(1173, 3);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(40, 33);
			this->btnExit->TabIndex = 10;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &Form1::btnExit_Click);
			// 
			// pEditor
			// 
			this->pEditor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pEditor->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pEditor->Controls->Add(this->btnSave);
			this->pEditor->Controls->Add(this->pRobot);
			this->pEditor->Controls->Add(this->btnRobot);
			this->pEditor->Controls->Add(this->pFind);
			this->pEditor->Controls->Add(this->btnFind);
			this->pEditor->Controls->Add(this->pTracking);
			this->pEditor->Controls->Add(this->btnTrigger);
			this->pEditor->Controls->Add(this->pFilter);
			this->pEditor->Controls->Add(this->btnFilter);
			this->pEditor->Controls->Add(this->pCCD);
			this->pEditor->Controls->Add(this->btnCCD);
			this->pEditor->Location = System::Drawing::Point(816, 42);
			this->pEditor->Name = L"pEditor";
			this->pEditor->Size = System::Drawing::Size(400, 695);
			this->pEditor->TabIndex = 1;
			// 
			// pRobot
			// 
			this->pRobot->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pRobot->Controls->Add(this->groupBox13);
			this->pRobot->Controls->Add(this->groupBox12);
			this->pRobot->Controls->Add(this->groupBox11);
			this->pRobot->Controls->Add(this->label89);
			this->pRobot->Dock = System::Windows::Forms::DockStyle::Top;
			this->pRobot->Location = System::Drawing::Point(0, 658);
			this->pRobot->Name = L"pRobot";
			this->pRobot->Size = System::Drawing::Size(396, 10);
			this->pRobot->TabIndex = 10;
			this->pRobot->Visible = false;
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->txtCmd);
			this->groupBox13->Controls->Add(this->numMaxID);
			this->groupBox13->Controls->Add(this->label30);
			this->groupBox13->Controls->Add(this->label31);
			this->groupBox13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox13->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox13->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->groupBox13->Location = System::Drawing::Point(0, 156);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(485, 70);
			this->groupBox13->TabIndex = 98;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Tương tác Robot";
			// 
			// txtCmd
			// 
			this->txtCmd->BackColor = System::Drawing::SystemColors::Control;
			this->txtCmd->Location = System::Drawing::Point(80, 27);
			this->txtCmd->Multiline = true;
			this->txtCmd->Name = L"txtCmd";
			this->txtCmd->Size = System::Drawing::Size(102, 29);
			this->txtCmd->TabIndex = 75;
			// 
			// numMaxID
			// 
			this->numMaxID->BackColor = System::Drawing::SystemColors::Control;
			this->numMaxID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numMaxID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numMaxID->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->numMaxID->Location = System::Drawing::Point(403, 23);
			this->numMaxID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numMaxID->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numMaxID->Name = L"numMaxID";
			this->numMaxID->Size = System::Drawing::Size(76, 29);
			this->numMaxID->TabIndex = 80;
			this->numMaxID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numMaxID->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numMaxID->ValueChanged += gcnew System::EventHandler(this, &Form1::numMaxID_ValueChanged);
			// 
			// label30
			// 
			this->label30->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::AliceBlue;
			this->label30->Location = System::Drawing::Point(15, 27);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(141, 29);
			this->label30->TabIndex = 63;
			this->label30->Text = L"Lệnh nhận";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label31
			// 
			this->label31->BackColor = System::Drawing::Color::DodgerBlue;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::AliceBlue;
			this->label31->Location = System::Drawing::Point(347, 23);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(132, 29);
			this->label31->TabIndex = 66;
			this->label31->Text = L"Số ID";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->numOffsetX);
			this->groupBox12->Controls->Add(this->label27);
			this->groupBox12->Controls->Add(this->numOffsetY);
			this->groupBox12->Controls->Add(this->numOffsetAngle);
			this->groupBox12->Controls->Add(this->label28);
			this->groupBox12->Controls->Add(this->label29);
			this->groupBox12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox12->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox12->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->groupBox12->Location = System::Drawing::Point(0, 77);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(485, 59);
			this->groupBox12->TabIndex = 97;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Offset Hệ tọa độ";
			// 
			// numOffsetX
			// 
			this->numOffsetX->BackColor = System::Drawing::SystemColors::Control;
			this->numOffsetX->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numOffsetX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numOffsetX->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->numOffsetX->Location = System::Drawing::Point(57, 27);
			this->numOffsetX->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->numOffsetX->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, System::Int32::MinValue });
			this->numOffsetX->Name = L"numOffsetX";
			this->numOffsetX->Size = System::Drawing::Size(75, 22);
			this->numOffsetX->TabIndex = 68;
			this->numOffsetX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numOffsetX->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->numOffsetX->ValueChanged += gcnew System::EventHandler(this, &Form1::numOffsetX_ValueChanged);
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::AliceBlue;
			this->label27->Location = System::Drawing::Point(15, 27);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(117, 22);
			this->label27->TabIndex = 63;
			this->label27->Text = L"X";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// numOffsetY
			// 
			this->numOffsetY->BackColor = System::Drawing::SystemColors::Control;
			this->numOffsetY->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numOffsetY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numOffsetY->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->numOffsetY->Location = System::Drawing::Point(240, 27);
			this->numOffsetY->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->numOffsetY->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, System::Int32::MinValue });
			this->numOffsetY->Name = L"numOffsetY";
			this->numOffsetY->Size = System::Drawing::Size(77, 22);
			this->numOffsetY->TabIndex = 69;
			this->numOffsetY->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numOffsetY->ValueChanged += gcnew System::EventHandler(this, &Form1::numOffsetY_ValueChanged);
			// 
			// numOffsetAngle
			// 
			this->numOffsetAngle->BackColor = System::Drawing::SystemColors::Control;
			this->numOffsetAngle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numOffsetAngle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numOffsetAngle->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->numOffsetAngle->Location = System::Drawing::Point(403, 26);
			this->numOffsetAngle->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 180, 0, 0, 0 });
			this->numOffsetAngle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 180, 0, 0, System::Int32::MinValue });
			this->numOffsetAngle->Name = L"numOffsetAngle";
			this->numOffsetAngle->Size = System::Drawing::Size(76, 22);
			this->numOffsetAngle->TabIndex = 70;
			this->numOffsetAngle->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numOffsetAngle->ValueChanged += gcnew System::EventHandler(this, &Form1::numOffsetAngle_ValueChanged);
			// 
			// label28
			// 
			this->label28->BackColor = System::Drawing::Color::DodgerBlue;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::AliceBlue;
			this->label28->Location = System::Drawing::Point(347, 26);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(132, 22);
			this->label28->TabIndex = 66;
			this->label28->Text = L"Angle";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label29
			// 
			this->label29->BackColor = System::Drawing::Color::SteelBlue;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::AliceBlue;
			this->label29->Location = System::Drawing::Point(185, 27);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(132, 22);
			this->label29->TabIndex = 65;
			this->label29->Text = L"Y";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->numPort);
			this->groupBox11->Controls->Add(this->txtIPAddress);
			this->groupBox11->Controls->Add(this->label25);
			this->groupBox11->Controls->Add(this->label26);
			this->groupBox11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox11->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->groupBox11->Location = System::Drawing::Point(1, 5);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(485, 55);
			this->groupBox11->TabIndex = 96;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Kết nối IP";
			// 
			// numPort
			// 
			this->numPort->BackColor = System::Drawing::SystemColors::Control;
			this->numPort->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numPort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numPort->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->numPort->Location = System::Drawing::Point(394, 23);
			this->numPort->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->numPort->Name = L"numPort";
			this->numPort->Size = System::Drawing::Size(81, 26);
			this->numPort->TabIndex = 71;
			this->numPort->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtIPAddress
			// 
			this->txtIPAddress->BackColor = System::Drawing::SystemColors::Control;
			this->txtIPAddress->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIPAddress->Location = System::Drawing::Point(33, 22);
			this->txtIPAddress->Name = L"txtIPAddress";
			this->txtIPAddress->Size = System::Drawing::Size(282, 27);
			this->txtIPAddress->TabIndex = 0;
			this->txtIPAddress->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &Form1::txtIPAddress_MaskInputRejected);
			this->txtIPAddress->TextChanged += gcnew System::EventHandler(this, &Form1::txtIPAddress_TextChanged);
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::AliceBlue;
			this->label25->Location = System::Drawing::Point(12, 22);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(132, 27);
			this->label25->TabIndex = 63;
			this->label25->Text = L"IP";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label26
			// 
			this->label26->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::AliceBlue;
			this->label26->Location = System::Drawing::Point(345, 22);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(129, 27);
			this->label26->TabIndex = 64;
			this->label26->Text = L"Port";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label89
			// 
			this->label89->BackColor = System::Drawing::Color::Coral;
			this->label89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label89->ForeColor = System::Drawing::Color::White;
			this->label89->Location = System::Drawing::Point(1, 161);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(306, 22);
			this->label89->TabIndex = 74;
			this->label89->Text = L"Tương tác Robot";
			// 
			// btnRobot
			// 
			this->btnRobot->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnRobot->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRobot->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRobot->ForeColor = System::Drawing::Color::DarkGreen;
			this->btnRobot->Location = System::Drawing::Point(0, 618);
			this->btnRobot->Name = L"btnRobot";
			this->btnRobot->Size = System::Drawing::Size(396, 40);
			this->btnRobot->TabIndex = 9;
			this->btnRobot->Text = L"5Kết nối Phần cứng";
			this->btnRobot->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRobot->UseVisualStyleBackColor = false;
			this->btnRobot->Click += gcnew System::EventHandler(this, &Form1::btnRobot_Click);
			// 
			// pFind
			// 
			this->pFind->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pFind->Controls->Add(this->panel22);
			this->pFind->Controls->Add(this->panel21);
			this->pFind->Controls->Add(this->panel20);
			this->pFind->Dock = System::Windows::Forms::DockStyle::Top;
			this->pFind->Location = System::Drawing::Point(0, 608);
			this->pFind->Name = L"pFind";
			this->pFind->Size = System::Drawing::Size(396, 10);
			this->pFind->TabIndex = 8;
			this->pFind->Visible = false;
			// 
			// panel22
			// 
			this->panel22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel22->Controls->Add(this->label64);
			this->panel22->Controls->Add(this->label72);
			this->panel22->Controls->Add(this->numericUpDown9);
			this->panel22->Controls->Add(this->label65);
			this->panel22->Controls->Add(this->numericUpDown8);
			this->panel22->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel22->Location = System::Drawing::Point(0, 186);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(392, 66);
			this->panel22->TabIndex = 75;
			// 
			// label64
			// 
			this->label64->BackColor = System::Drawing::Color::Cornsilk;
			this->label64->Dock = System::Windows::Forms::DockStyle::Top;
			this->label64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label64->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::Color::Red;
			this->label64->Location = System::Drawing::Point(0, 0);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(388, 21);
			this->label64->TabIndex = 0;
			this->label64->Text = L"3.Limit number";
			// 
			// label72
			// 
			this->label72->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label72->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label72->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label72->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->Location = System::Drawing::Point(194, 30);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(75, 22);
			this->label72->TabIndex = 70;
			this->label72->Text = L"Max";
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->BackColor = System::Drawing::SystemColors::Control;
			this->numericUpDown9->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown9->Location = System::Drawing::Point(270, 29);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(106, 23);
			this->numericUpDown9->TabIndex = 71;
			// 
			// label65
			// 
			this->label65->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label65->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label65->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(5, 31);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(38, 23);
			this->label65->TabIndex = 70;
			this->label65->Text = L"Min";
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->BackColor = System::Drawing::SystemColors::Control;
			this->numericUpDown8->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown8->Location = System::Drawing::Point(41, 31);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(137, 23);
			this->numericUpDown8->TabIndex = 71;
			// 
			// panel21
			// 
			this->panel21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel21->Controls->Add(this->label59);
			this->panel21->Controls->Add(this->numSizeMax);
			this->panel21->Controls->Add(this->numMaxCur);
			this->panel21->Controls->Add(this->label76);
			this->panel21->Controls->Add(this->label66);
			this->panel21->Controls->Add(this->label71);
			this->panel21->Controls->Add(this->label67);
			this->panel21->Controls->Add(this->label68);
			this->panel21->Controls->Add(this->trackBar9);
			this->panel21->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel21->Location = System::Drawing::Point(0, 96);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(392, 90);
			this->panel21->TabIndex = 74;
			// 
			// label59
			// 
			this->label59->BackColor = System::Drawing::Color::DarkGray;
			this->label59->Location = System::Drawing::Point(347, 25);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(32, 23);
			this->label59->TabIndex = 82;
			// 
			// numSizeMax
			// 
			this->numSizeMax->BackColor = System::Drawing::SystemColors::Control;
			this->numSizeMax->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numSizeMax->Location = System::Drawing::Point(41, 24);
			this->numSizeMax->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->numSizeMax->Name = L"numSizeMax";
			this->numSizeMax->Size = System::Drawing::Size(137, 23);
			this->numSizeMax->TabIndex = 71;
			this->numSizeMax->ValueChanged += gcnew System::EventHandler(this, &Form1::numSizeMax_ValueChanged);
			// 
			// numMaxCur
			// 
			this->numMaxCur->BackColor = System::Drawing::Color::Snow;
			this->numMaxCur->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numMaxCur->Location = System::Drawing::Point(270, 24);
			this->numMaxCur->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -1486618625, 232830643, 0, 0 });
			this->numMaxCur->Name = L"numMaxCur";
			this->numMaxCur->Size = System::Drawing::Size(106, 23);
			this->numMaxCur->TabIndex = 81;
			// 
			// label76
			// 
			this->label76->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label76->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label76->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label76->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(194, 24);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(75, 23);
			this->label76->TabIndex = 80;
			this->label76->Text = L"MaxCurrent";
			this->label76->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label66
			// 
			this->label66->BackColor = System::Drawing::Color::Cornsilk;
			this->label66->Dock = System::Windows::Forms::DockStyle::Top;
			this->label66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label66->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->ForeColor = System::Drawing::Color::Red;
			this->label66->Location = System::Drawing::Point(0, 0);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(388, 21);
			this->label66->TabIndex = 0;
			this->label66->Text = L"2.Size Max";
			// 
			// label71
			// 
			this->label71->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label71->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label71->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label71->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->Location = System::Drawing::Point(5, 24);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(38, 23);
			this->label71->TabIndex = 70;
			this->label71->Text = L"Value";
			// 
			// label67
			// 
			this->label67->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label67->BackColor = System::Drawing::SystemColors::Control;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label67->Location = System::Drawing::Point(-1, 68);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(30, 18);
			this->label67->TabIndex = 68;
			this->label67->Text = L"0";
			this->label67->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label68
			// 
			this->label68->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label68->BackColor = System::Drawing::SystemColors::Control;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label68->Location = System::Drawing::Point(334, 68);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(58, 18);
			this->label68->TabIndex = 68;
			this->label68->Text = L"255";
			this->label68->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trackBar9
			// 
			this->trackBar9->AutoSize = false;
			this->trackBar9->Location = System::Drawing::Point(-4, 49);
			this->trackBar9->Maximum = 255;
			this->trackBar9->Name = L"trackBar9";
			this->trackBar9->Size = System::Drawing::Size(380, 20);
			this->trackBar9->TabIndex = 66;
			this->trackBar9->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar9->Value = 255;
			// 
			// panel20
			// 
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel20->Controls->Add(this->label57);
			this->panel20->Controls->Add(this->numericUpDown4);
			this->panel20->Controls->Add(this->label58);
			this->panel20->Controls->Add(this->label21);
			this->panel20->Controls->Add(this->numMinCur);
			this->panel20->Controls->Add(this->label56);
			this->panel20->Controls->Add(this->numSizeMin);
			this->panel20->Controls->Add(this->trackBar8);
			this->panel20->Controls->Add(this->label17);
			this->panel20->Controls->Add(this->label22);
			this->panel20->Controls->Add(this->label62);
			this->panel20->Controls->Add(this->label63);
			this->panel20->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel20->Location = System::Drawing::Point(0, 0);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(392, 96);
			this->panel20->TabIndex = 73;
			// 
			// label57
			// 
			this->label57->BackColor = System::Drawing::Color::DarkGray;
			this->label57->Location = System::Drawing::Point(339, 127);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(32, 23);
			this->label57->TabIndex = 79;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->BackColor = System::Drawing::Color::Snow;
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown4->Location = System::Drawing::Point(265, 127);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -1486618625, 232830643, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(106, 23);
			this->numericUpDown4->TabIndex = 78;
			// 
			// label58
			// 
			this->label58->BackColor = System::Drawing::SystemColors::Control;
			this->label58->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label58->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(189, 128);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(75, 23);
			this->label58->TabIndex = 77;
			this->label58->Text = L"minCurrent";
			this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::DarkGray;
			this->label21->Location = System::Drawing::Point(344, 27);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(32, 23);
			this->label21->TabIndex = 76;
			// 
			// numMinCur
			// 
			this->numMinCur->BackColor = System::Drawing::Color::Snow;
			this->numMinCur->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numMinCur->Location = System::Drawing::Point(270, 27);
			this->numMinCur->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -1486618625, 232830643, 0, 0 });
			this->numMinCur->Name = L"numMinCur";
			this->numMinCur->Size = System::Drawing::Size(106, 23);
			this->numMinCur->TabIndex = 75;
			// 
			// label56
			// 
			this->label56->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label56->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label56->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(194, 27);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(75, 23);
			this->label56->TabIndex = 74;
			this->label56->Text = L"MinCurrent";
			this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numSizeMin
			// 
			this->numSizeMin->BackColor = System::Drawing::SystemColors::Control;
			this->numSizeMin->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numSizeMin->Location = System::Drawing::Point(41, 27);
			this->numSizeMin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numSizeMin->Name = L"numSizeMin";
			this->numSizeMin->Size = System::Drawing::Size(137, 23);
			this->numSizeMin->TabIndex = 71;
			this->numSizeMin->ValueChanged += gcnew System::EventHandler(this, &Form1::numSizeMin_ValueChanged);
			// 
			// trackBar8
			// 
			this->trackBar8->AutoSize = false;
			this->trackBar8->Location = System::Drawing::Point(-1, 54);
			this->trackBar8->Maximum = 255;
			this->trackBar8->Name = L"trackBar8";
			this->trackBar8->Size = System::Drawing::Size(380, 20);
			this->trackBar8->TabIndex = 66;
			this->trackBar8->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar8->Value = 255;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Cornsilk;
			this->label17->Dock = System::Windows::Forms::DockStyle::Top;
			this->label17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(0, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(388, 21);
			this->label17->TabIndex = 0;
			this->label17->Text = L"1.Size Min";
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label22->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(5, 27);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(38, 23);
			this->label22->TabIndex = 70;
			this->label22->Text = L"Value";
			// 
			// label62
			// 
			this->label62->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label62->BackColor = System::Drawing::SystemColors::Control;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label62->Location = System::Drawing::Point(-3, 72);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(30, 18);
			this->label62->TabIndex = 68;
			this->label62->Text = L"0";
			this->label62->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label63
			// 
			this->label63->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label63->BackColor = System::Drawing::SystemColors::Control;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label63->Location = System::Drawing::Point(347, 72);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(43, 18);
			this->label63->TabIndex = 68;
			this->label63->Text = L"255";
			this->label63->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnFind
			// 
			this->btnFind->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnFind->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnFind->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFind->ForeColor = System::Drawing::Color::DarkGreen;
			this->btnFind->Location = System::Drawing::Point(0, 568);
			this->btnFind->Name = L"btnFind";
			this->btnFind->Size = System::Drawing::Size(396, 40);
			this->btnFind->TabIndex = 7;
			this->btnFind->Text = L"4.Thông số  Phân tích số lượng";
			this->btnFind->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFind->UseVisualStyleBackColor = false;
			this->btnFind->Click += gcnew System::EventHandler(this, &Form1::btnFind_Click);
			// 
			// pTracking
			// 
			this->pTracking->BackColor = System::Drawing::Color::Snow;
			this->pTracking->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pTracking->Controls->Add(this->panel2);
			this->pTracking->Controls->Add(this->panel19);
			this->pTracking->Controls->Add(this->panel17);
			this->pTracking->Dock = System::Windows::Forms::DockStyle::Top;
			this->pTracking->Location = System::Drawing::Point(0, 140);
			this->pTracking->Name = L"pTracking";
			this->pTracking->Size = System::Drawing::Size(396, 428);
			this->pTracking->TabIndex = 6;
			this->pTracking->Visible = false;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->label75);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 199);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(392, 168);
			this->panel2->TabIndex = 75;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->lbDilateTrig);
			this->panel5->Controls->Add(this->label80);
			this->panel5->Controls->Add(this->checkBox7);
			this->panel5->Controls->Add(this->trackDilateTrig);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 93);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(388, 166);
			this->panel5->TabIndex = 78;
			// 
			// lbDilateTrig
			// 
			this->lbDilateTrig->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbDilateTrig->BackColor = System::Drawing::SystemColors::Control;
			this->lbDilateTrig->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDilateTrig->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lbDilateTrig->Location = System::Drawing::Point(342, 38);
			this->lbDilateTrig->Name = L"lbDilateTrig";
			this->lbDilateTrig->Size = System::Drawing::Size(50, 18);
			this->lbDilateTrig->TabIndex = 70;
			this->lbDilateTrig->Text = L"255";
			this->lbDilateTrig->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label80
			// 
			this->label80->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label80->BackColor = System::Drawing::SystemColors::Control;
			this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label80->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label80->Location = System::Drawing::Point(-2, 38);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(26, 18);
			this->label80->TabIndex = 68;
			this->label80->Text = L"0";
			this->label80->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox7
			// 
			this->checkBox7->BackColor = System::Drawing::Color::Cornsilk;
			this->checkBox7->Checked = true;
			this->checkBox7->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox7->Dock = System::Windows::Forms::DockStyle::Top;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox7->Location = System::Drawing::Point(0, 0);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(384, 19);
			this->checkBox7->TabIndex = 69;
			this->checkBox7->Text = L"2.Erode/Dilate";
			this->checkBox7->UseVisualStyleBackColor = false;
			// 
			// trackDilateTrig
			// 
			this->trackDilateTrig->AutoSize = false;
			this->trackDilateTrig->Location = System::Drawing::Point(-2, 21);
			this->trackDilateTrig->Maximum = 255;
			this->trackDilateTrig->Name = L"trackDilateTrig";
			this->trackDilateTrig->Size = System::Drawing::Size(380, 20);
			this->trackDilateTrig->TabIndex = 66;
			this->trackDilateTrig->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackDilateTrig->Value = 255;
			this->trackDilateTrig->Scroll += gcnew System::EventHandler(this, &Form1::trackDilateTrig_Scroll);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->label74);
			this->panel4->Controls->Add(this->lbBinaryTrig);
			this->panel4->Controls->Add(this->checkBox5);
			this->panel4->Controls->Add(this->trackBinnaryTrig);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 25);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(388, 68);
			this->panel4->TabIndex = 77;
			// 
			// label74
			// 
			this->label74->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label74->BackColor = System::Drawing::SystemColors::Control;
			this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label74->Location = System::Drawing::Point(-2, 48);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(26, 18);
			this->label74->TabIndex = 68;
			this->label74->Text = L"0";
			this->label74->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbBinaryTrig
			// 
			this->lbBinaryTrig->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbBinaryTrig->BackColor = System::Drawing::SystemColors::Control;
			this->lbBinaryTrig->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBinaryTrig->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lbBinaryTrig->Location = System::Drawing::Point(342, 48);
			this->lbBinaryTrig->Name = L"lbBinaryTrig";
			this->lbBinaryTrig->Size = System::Drawing::Size(50, 18);
			this->lbBinaryTrig->TabIndex = 68;
			this->lbBinaryTrig->Text = L"255";
			this->lbBinaryTrig->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox5
			// 
			this->checkBox5->BackColor = System::Drawing::Color::Cornsilk;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Dock = System::Windows::Forms::DockStyle::Top;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->Location = System::Drawing::Point(0, 0);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(384, 19);
			this->checkBox5->TabIndex = 69;
			this->checkBox5->Text = L"1.Binary";
			this->checkBox5->UseVisualStyleBackColor = false;
			// 
			// trackBinnaryTrig
			// 
			this->trackBinnaryTrig->AutoSize = false;
			this->trackBinnaryTrig->Location = System::Drawing::Point(-2, 27);
			this->trackBinnaryTrig->Maximum = 255;
			this->trackBinnaryTrig->Name = L"trackBinnaryTrig";
			this->trackBinnaryTrig->Size = System::Drawing::Size(380, 20);
			this->trackBinnaryTrig->TabIndex = 66;
			this->trackBinnaryTrig->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBinnaryTrig->Value = 255;
			this->trackBinnaryTrig->Scroll += gcnew System::EventHandler(this, &Form1::trackBinnaryTrig_Scroll);
			// 
			// label75
			// 
			this->label75->BackColor = System::Drawing::Color::Cornsilk;
			this->label75->Dock = System::Windows::Forms::DockStyle::Top;
			this->label75->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label75->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->ForeColor = System::Drawing::Color::Crimson;
			this->label75->Location = System::Drawing::Point(0, 0);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(388, 25);
			this->label75->TabIndex = 1;
			this->label75->Text = L"3.Filter";
			// 
			// panel19
			// 
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel19->Controls->Add(this->label11);
			this->panel19->Controls->Add(this->label14);
			this->panel19->Controls->Add(this->numDelayStopTrig);
			this->panel19->Controls->Add(this->label61);
			this->panel19->Controls->Add(this->label60);
			this->panel19->Controls->Add(this->label54);
			this->panel19->Controls->Add(this->numDelayStartTrig);
			this->panel19->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel19->Location = System::Drawing::Point(0, 100);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(392, 99);
			this->panel19->TabIndex = 74;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(224, 65);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(23, 15);
			this->label11->TabIndex = 75;
			this->label11->Text = L"ms";
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::CadetBlue;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(5, 57);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(78, 23);
			this->label14->TabIndex = 73;
			this->label14->Text = L"DelayStop";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numDelayStopTrig
			// 
			this->numDelayStopTrig->BackColor = System::Drawing::Color::Snow;
			this->numDelayStopTrig->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numDelayStopTrig->Location = System::Drawing::Point(83, 57);
			this->numDelayStopTrig->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numDelayStopTrig->Name = L"numDelayStopTrig";
			this->numDelayStopTrig->Size = System::Drawing::Size(137, 23);
			this->numDelayStopTrig->TabIndex = 74;
			this->numDelayStopTrig->ValueChanged += gcnew System::EventHandler(this, &Form1::numDelayStopTrig_ValueChanged);
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(223, 32);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(23, 15);
			this->label61->TabIndex = 72;
			this->label61->Text = L"ms";
			// 
			// label60
			// 
			this->label60->BackColor = System::Drawing::Color::Cornsilk;
			this->label60->Dock = System::Windows::Forms::DockStyle::Top;
			this->label60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label60->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->ForeColor = System::Drawing::Color::Crimson;
			this->label60->Location = System::Drawing::Point(0, 0);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(388, 21);
			this->label60->TabIndex = 1;
			this->label60->Text = L"2.Time Trigger";
			// 
			// label54
			// 
			this->label54->BackColor = System::Drawing::Color::CadetBlue;
			this->label54->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label54->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(4, 24);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(78, 23);
			this->label54->TabIndex = 70;
			this->label54->Text = L"DelayStart";
			this->label54->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numDelayStartTrig
			// 
			this->numDelayStartTrig->BackColor = System::Drawing::Color::Snow;
			this->numDelayStartTrig->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numDelayStartTrig->Location = System::Drawing::Point(82, 24);
			this->numDelayStartTrig->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numDelayStartTrig->Name = L"numDelayStartTrig";
			this->numDelayStartTrig->Size = System::Drawing::Size(137, 23);
			this->numDelayStartTrig->TabIndex = 71;
			this->numDelayStartTrig->ValueChanged += gcnew System::EventHandler(this, &Form1::numDelayStartTrig_ValueChanged);
			// 
			// panel17
			// 
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel17->Controls->Add(this->numMaxArea);
			this->panel17->Controls->Add(this->label69);
			this->panel17->Controls->Add(this->label19);
			this->panel17->Controls->Add(this->numAreaCurrent);
			this->panel17->Controls->Add(this->numMinArea);
			this->panel17->Controls->Add(this->label6);
			this->panel17->Controls->Add(this->label53);
			this->panel17->Controls->Add(this->label20);
			this->panel17->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel17->Location = System::Drawing::Point(0, 0);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(392, 100);
			this->panel17->TabIndex = 72;
			// 
			// numMaxArea
			// 
			this->numMaxArea->BackColor = System::Drawing::Color::Snow;
			this->numMaxArea->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numMaxArea->Location = System::Drawing::Point(40, 62);
			this->numMaxArea->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752191, 23, 0, 0 });
			this->numMaxArea->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numMaxArea->Name = L"numMaxArea";
			this->numMaxArea->Size = System::Drawing::Size(137, 23);
			this->numMaxArea->TabIndex = 73;
			this->numMaxArea->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numMaxArea->ValueChanged += gcnew System::EventHandler(this, &Form1::numMaxArea_ValueChanged);
			// 
			// label69
			// 
			this->label69->BackColor = System::Drawing::Color::CadetBlue;
			this->label69->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label69->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label69->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label69->Location = System::Drawing::Point(5, 62);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(38, 23);
			this->label69->TabIndex = 72;
			this->label69->Text = L"Max";
			this->label69->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::DarkGray;
			this->label19->Location = System::Drawing::Point(350, 28);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(32, 23);
			this->label19->TabIndex = 73;
			// 
			// numAreaCurrent
			// 
			this->numAreaCurrent->BackColor = System::Drawing::Color::Snow;
			this->numAreaCurrent->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numAreaCurrent->Location = System::Drawing::Point(276, 28);
			this->numAreaCurrent->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -1486618625, 232830643, 0, 0 });
			this->numAreaCurrent->Name = L"numAreaCurrent";
			this->numAreaCurrent->Size = System::Drawing::Size(106, 23);
			this->numAreaCurrent->TabIndex = 72;
			// 
			// numMinArea
			// 
			this->numMinArea->BackColor = System::Drawing::Color::Snow;
			this->numMinArea->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numMinArea->Location = System::Drawing::Point(40, 28);
			this->numMinArea->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numMinArea->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numMinArea->Name = L"numMinArea";
			this->numMinArea->Size = System::Drawing::Size(137, 23);
			this->numMinArea->TabIndex = 71;
			this->numMinArea->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numMinArea->ValueChanged += gcnew System::EventHandler(this, &Form1::numMinArea_ValueChanged);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Cornsilk;
			this->label6->Dock = System::Windows::Forms::DockStyle::Top;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(388, 21);
			this->label6->TabIndex = 0;
			this->label6->Text = L"1.Area";
			// 
			// label53
			// 
			this->label53->BackColor = System::Drawing::Color::CadetBlue;
			this->label53->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label53->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label53->Location = System::Drawing::Point(5, 28);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(38, 23);
			this->label53->TabIndex = 70;
			this->label53->Text = L"Min";
			this->label53->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::CadetBlue;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label20->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(189, 28);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(86, 23);
			this->label20->TabIndex = 70;
			this->label20->Text = L"CurrentArea";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnTrigger
			// 
			this->btnTrigger->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnTrigger->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnTrigger->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTrigger->ForeColor = System::Drawing::Color::DarkGreen;
			this->btnTrigger->Location = System::Drawing::Point(0, 100);
			this->btnTrigger->Name = L"btnTrigger";
			this->btnTrigger->Size = System::Drawing::Size(396, 40);
			this->btnTrigger->TabIndex = 5;
			this->btnTrigger->Text = L"3.Thông số  Trigger";
			this->btnTrigger->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTrigger->UseVisualStyleBackColor = false;
			this->btnTrigger->Click += gcnew System::EventHandler(this, &Form1::btnTrigger_Click);
			// 
			// pFilter
			// 
			this->pFilter->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pFilter->Controls->Add(this->panel12);
			this->pFilter->Controls->Add(this->panel11);
			this->pFilter->Controls->Add(this->panel10);
			this->pFilter->Controls->Add(this->panel9);
			this->pFilter->Controls->Add(this->panel8);
			this->pFilter->Dock = System::Windows::Forms::DockStyle::Top;
			this->pFilter->Location = System::Drawing::Point(0, 90);
			this->pFilter->Name = L"pFilter";
			this->pFilter->Size = System::Drawing::Size(396, 10);
			this->pFilter->TabIndex = 4;
			this->pFilter->Visible = false;
			// 
			// panel12
			// 
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel12->Controls->Add(this->label16);
			this->panel12->Controls->Add(this->label23);
			this->panel12->Controls->Add(this->trackBinary2);
			this->panel12->Controls->Add(this->checkBox8);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel12->Location = System::Drawing::Point(0, 283);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(392, 81);
			this->panel12->TabIndex = 80;
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label16->BackColor = System::Drawing::SystemColors::Control;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label16->Location = System::Drawing::Point(358, 50);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(30, 18);
			this->label16->TabIndex = 68;
			this->label16->Text = L"255";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label23->BackColor = System::Drawing::SystemColors::Control;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label23->Location = System::Drawing::Point(0, 49);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(30, 18);
			this->label23->TabIndex = 68;
			this->label23->Text = L"0";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trackBinary2
			// 
			this->trackBinary2->AutoSize = false;
			this->trackBinary2->LargeChange = 1;
			this->trackBinary2->Location = System::Drawing::Point(4, 28);
			this->trackBinary2->Maximum = 255;
			this->trackBinary2->Name = L"trackBinary2";
			this->trackBinary2->Size = System::Drawing::Size(380, 20);
			this->trackBinary2->TabIndex = 66;
			this->trackBinary2->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBinary2->Value = 255;
			this->trackBinary2->Scroll += gcnew System::EventHandler(this, &Form1::trackBinary2_Scroll);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->BackColor = System::Drawing::Color::Cornsilk;
			this->checkBox8->Checked = true;
			this->checkBox8->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox8->Dock = System::Windows::Forms::DockStyle::Top;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox8->Location = System::Drawing::Point(0, 0);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(388, 19);
			this->checkBox8->TabIndex = 72;
			this->checkBox8->Text = L"5.Binary 2";
			this->checkBox8->UseVisualStyleBackColor = false;
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel11->Controls->Add(this->label13);
			this->panel11->Controls->Add(this->trackSplit);
			this->panel11->Controls->Add(this->check);
			this->panel11->Controls->Add(this->label15);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel11->Location = System::Drawing::Point(0, 214);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(392, 69);
			this->panel11->TabIndex = 79;
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->BackColor = System::Drawing::SystemColors::Control;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label13->Location = System::Drawing::Point(358, 48);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 18);
			this->label13->TabIndex = 68;
			this->label13->Text = L"50";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trackSplit
			// 
			this->trackSplit->AutoSize = false;
			this->trackSplit->Location = System::Drawing::Point(4, 29);
			this->trackSplit->Maximum = 50;
			this->trackSplit->Minimum = 1;
			this->trackSplit->Name = L"trackSplit";
			this->trackSplit->Size = System::Drawing::Size(380, 20);
			this->trackSplit->TabIndex = 66;
			this->trackSplit->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackSplit->Value = 50;
			this->trackSplit->Scroll += gcnew System::EventHandler(this, &Form1::trackSplit_Scroll);
			// 
			// check
			// 
			this->check->AutoSize = true;
			this->check->BackColor = System::Drawing::Color::Cornsilk;
			this->check->Checked = true;
			this->check->CheckState = System::Windows::Forms::CheckState::Checked;
			this->check->Dock = System::Windows::Forms::DockStyle::Top;
			this->check->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->check->Location = System::Drawing::Point(0, 0);
			this->check->Name = L"check";
			this->check->Size = System::Drawing::Size(388, 19);
			this->check->TabIndex = 72;
			this->check->Text = L"4.Split";
			this->check->UseVisualStyleBackColor = false;
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label15->BackColor = System::Drawing::SystemColors::Control;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label15->Location = System::Drawing::Point(0, 49);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(30, 18);
			this->label15->TabIndex = 68;
			this->label15->Text = L"1";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->Controls->Add(this->label10);
			this->panel10->Controls->Add(this->label12);
			this->panel10->Controls->Add(this->checkBox6);
			this->panel10->Controls->Add(this->trackM);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel10->Location = System::Drawing::Point(0, 140);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(392, 74);
			this->panel10->TabIndex = 78;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label10->Location = System::Drawing::Point(0, 51);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(30, 18);
			this->label10->TabIndex = 68;
			this->label10->Text = L"1";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->BackColor = System::Drawing::SystemColors::Control;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label12->Location = System::Drawing::Point(358, 51);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(30, 18);
			this->label12->TabIndex = 68;
			this->label12->Text = L"50";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->BackColor = System::Drawing::Color::Cornsilk;
			this->checkBox6->Checked = true;
			this->checkBox6->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox6->Dock = System::Windows::Forms::DockStyle::Top;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox6->Location = System::Drawing::Point(0, 0);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(388, 19);
			this->checkBox6->TabIndex = 72;
			this->checkBox6->Text = L"3.Erode/Dilate";
			this->checkBox6->UseVisualStyleBackColor = false;
			// 
			// trackM
			// 
			this->trackM->AutoSize = false;
			this->trackM->Location = System::Drawing::Point(4, 29);
			this->trackM->Maximum = 50;
			this->trackM->Minimum = 1;
			this->trackM->Name = L"trackM";
			this->trackM->Size = System::Drawing::Size(380, 20);
			this->trackM->TabIndex = 66;
			this->trackM->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackM->Value = 50;
			this->trackM->Scroll += gcnew System::EventHandler(this, &Form1::trackM_Scroll);
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel9->Controls->Add(this->label9);
			this->panel9->Controls->Add(this->label5);
			this->panel9->Controls->Add(this->checkBox4);
			this->panel9->Controls->Add(this->trackBlur);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel9->Location = System::Drawing::Point(0, 67);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(392, 73);
			this->panel9->TabIndex = 77;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label9->Location = System::Drawing::Point(358, 46);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 18);
			this->label9->TabIndex = 68;
			this->label9->Text = L"50";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label5->Location = System::Drawing::Point(0, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 18);
			this->label5->TabIndex = 68;
			this->label5->Text = L"1";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::Color::Cornsilk;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Dock = System::Windows::Forms::DockStyle::Top;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(0, 0);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(388, 19);
			this->checkBox4->TabIndex = 70;
			this->checkBox4->Text = L"2.Blur";
			this->checkBox4->UseVisualStyleBackColor = false;
			// 
			// trackBlur
			// 
			this->trackBlur->AutoSize = false;
			this->trackBlur->Location = System::Drawing::Point(4, 25);
			this->trackBlur->Maximum = 50;
			this->trackBlur->Minimum = 1;
			this->trackBlur->Name = L"trackBlur";
			this->trackBlur->Size = System::Drawing::Size(380, 20);
			this->trackBlur->TabIndex = 66;
			this->trackBlur->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBlur->Value = 1;
			this->trackBlur->Scroll += gcnew System::EventHandler(this, &Form1::trackBlur_Scroll_1);
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->Controls->Add(this->label24);
			this->panel8->Controls->Add(this->label46);
			this->panel8->Controls->Add(this->checkBox3);
			this->panel8->Controls->Add(this->trackValBinary);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(392, 67);
			this->panel8->TabIndex = 76;
			// 
			// label24
			// 
			this->label24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label24->BackColor = System::Drawing::SystemColors::Control;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label24->Location = System::Drawing::Point(0, 44);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(30, 18);
			this->label24->TabIndex = 68;
			this->label24->Text = L"0";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label46
			// 
			this->label46->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label46->BackColor = System::Drawing::SystemColors::Control;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label46->Location = System::Drawing::Point(358, 44);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(30, 18);
			this->label46->TabIndex = 68;
			this->label46->Text = L"255";
			this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox3
			// 
			this->checkBox3->BackColor = System::Drawing::Color::Cornsilk;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Dock = System::Windows::Forms::DockStyle::Top;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(0, 0);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(388, 19);
			this->checkBox3->TabIndex = 69;
			this->checkBox3->Text = L"1.Binary";
			this->checkBox3->UseVisualStyleBackColor = false;
			// 
			// trackValBinary
			// 
			this->trackValBinary->AutoSize = false;
			this->trackValBinary->Location = System::Drawing::Point(4, 20);
			this->trackValBinary->Maximum = 255;
			this->trackValBinary->Name = L"trackValBinary";
			this->trackValBinary->Size = System::Drawing::Size(380, 20);
			this->trackValBinary->TabIndex = 66;
			this->trackValBinary->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackValBinary->Value = 255;
			this->trackValBinary->Scroll += gcnew System::EventHandler(this, &Form1::trackValBinary_Scroll);
			// 
			// btnFilter
			// 
			this->btnFilter->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnFilter->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnFilter->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFilter->ForeColor = System::Drawing::Color::DarkGreen;
			this->btnFilter->Location = System::Drawing::Point(0, 50);
			this->btnFilter->Name = L"btnFilter";
			this->btnFilter->Size = System::Drawing::Size(396, 40);
			this->btnFilter->TabIndex = 3;
			this->btnFilter->Text = L"2.Điều chỉnh bộ lọc";
			this->btnFilter->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFilter->UseVisualStyleBackColor = false;
			this->btnFilter->Click += gcnew System::EventHandler(this, &Form1::btnFilter_Click);
			// 
			// pCCD
			// 
			this->pCCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pCCD->Controls->Add(this->panel16);
			this->pCCD->Controls->Add(this->panel14);
			this->pCCD->Controls->Add(this->panel13);
			this->pCCD->Controls->Add(this->panel3);
			this->pCCD->Controls->Add(this->label35);
			this->pCCD->Controls->Add(this->label79);
			this->pCCD->Controls->Add(this->label81);
			this->pCCD->Controls->Add(this->btnDefautSize);
			this->pCCD->Dock = System::Windows::Forms::DockStyle::Top;
			this->pCCD->Location = System::Drawing::Point(0, 40);
			this->pCCD->Name = L"pCCD";
			this->pCCD->Size = System::Drawing::Size(396, 10);
			this->pCCD->TabIndex = 2;
			this->pCCD->Visible = false;
			// 
			// panel16
			// 
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel16->Controls->Add(this->label48);
			this->panel16->Controls->Add(this->panel7);
			this->panel16->Controls->Add(this->label36);
			this->panel16->Controls->Add(this->btnBroswer);
			this->panel16->Controls->Add(this->panel6);
			this->panel16->Controls->Add(this->txtPath);
			this->panel16->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel16->Location = System::Drawing::Point(0, 214);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(392, 114);
			this->panel16->TabIndex = 35;
			// 
			// label48
			// 
			this->label48->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label48->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label48->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(-1, 1);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(83, 105);
			this->label48->TabIndex = 75;
			this->label48->Text = L"\r\nSave\r\nData\r\n\r\n";
			this->label48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label32);
			this->panel7->Controls->Add(this->numPicMax);
			this->panel7->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->panel7->Location = System::Drawing::Point(281, 4);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(105, 56);
			this->panel7->TabIndex = 48;
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label32->Location = System::Drawing::Point(2, 2);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(96, 15);
			this->label32->TabIndex = 46;
			this->label32->Text = L"Maximum Picture";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numPicMax
			// 
			this->numPicMax->BackColor = System::Drawing::SystemColors::Control;
			this->numPicMax->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numPicMax->Location = System::Drawing::Point(4, 24);
			this->numPicMax->Name = L"numPicMax";
			this->numPicMax->Size = System::Drawing::Size(94, 27);
			this->numPicMax->TabIndex = 40;
			this->numPicMax->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numPicMax->ValueChanged += gcnew System::EventHandler(this, &Form1::numPicMax_ValueChanged);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label36->Location = System::Drawing::Point(86, 64);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(67, 15);
			this->label36->TabIndex = 42;
			this->label36->Text = L"Đường dẫn";
			// 
			// btnBroswer
			// 
			this->btnBroswer->BackColor = System::Drawing::Color::CadetBlue;
			this->btnBroswer->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnBroswer->ForeColor = System::Drawing::SystemColors::InfoText;
			this->btnBroswer->Location = System::Drawing::Point(280, 65);
			this->btnBroswer->Name = L"btnBroswer";
			this->btnBroswer->Size = System::Drawing::Size(107, 41);
			this->btnBroswer->TabIndex = 43;
			this->btnBroswer->Text = L"Broswer";
			this->btnBroswer->UseVisualStyleBackColor = false;
			this->btnBroswer->Click += gcnew System::EventHandler(this, &Form1::btnBroswer_Click_1);
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->checkBox11);
			this->panel6->Controls->Add(this->checkBox10);
			this->panel6->Controls->Add(this->ckAutoSave);
			this->panel6->Location = System::Drawing::Point(87, 4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(193, 56);
			this->panel6->TabIndex = 47;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Checked = true;
			this->checkBox11->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox11->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->checkBox11->Location = System::Drawing::Point(3, 29);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(176, 19);
			this->checkBox11->TabIndex = 45;
			this->checkBox11->Text = L"Lưu dữ liệu Excel           (xls)";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Checked = true;
			this->checkBox10->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox10->ForeColor = System::Drawing::Color::Maroon;
			this->checkBox10->Location = System::Drawing::Point(101, 5);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(89, 19);
			this->checkBox10->TabIndex = 44;
			this->checkBox10->Text = L"Lưu ảnh NG";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// ckAutoSave
			// 
			this->ckAutoSave->AutoSize = true;
			this->ckAutoSave->Checked = true;
			this->ckAutoSave->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckAutoSave->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ckAutoSave->ForeColor = System::Drawing::Color::LimeGreen;
			this->ckAutoSave->Location = System::Drawing::Point(3, 5);
			this->ckAutoSave->Name = L"ckAutoSave";
			this->ckAutoSave->Size = System::Drawing::Size(89, 19);
			this->ckAutoSave->TabIndex = 39;
			this->ckAutoSave->Text = L"Lưu ảnh OK";
			this->ckAutoSave->UseVisualStyleBackColor = true;
			// 
			// txtPath
			// 
			this->txtPath->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->txtPath->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPath->ForeColor = System::Drawing::Color::Black;
			this->txtPath->Location = System::Drawing::Point(87, 79);
			this->txtPath->Name = L"txtPath";
			this->txtPath->Size = System::Drawing::Size(187, 27);
			this->txtPath->TabIndex = 41;
			this->txtPath->Text = L"C://";
			// 
			// panel14
			// 
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel14->Controls->Add(this->label73);
			this->panel14->Controls->Add(this->numericUpDown10);
			this->panel14->Controls->Add(this->trackBar19);
			this->panel14->Controls->Add(this->label52);
			this->panel14->Controls->Add(this->label55);
			this->panel14->Controls->Add(this->label51);
			this->panel14->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel14->Location = System::Drawing::Point(0, 146);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(392, 68);
			this->panel14->TabIndex = 33;
			// 
			// label73
			// 
			this->label73->BackColor = System::Drawing::Color::CadetBlue;
			this->label73->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label73->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label73->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label73->Location = System::Drawing::Point(88, 1);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(48, 23);
			this->label73->TabIndex = 78;
			this->label73->Text = L"Value";
			this->label73->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->BackColor = System::Drawing::SystemColors::Control;
			this->numericUpDown10->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown10->Location = System::Drawing::Point(135, 1);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000, 0, 0, 0 });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(124, 23);
			this->numericUpDown10->TabIndex = 77;
			this->numericUpDown10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// trackBar19
			// 
			this->trackBar19->AutoSize = false;
			this->trackBar19->Location = System::Drawing::Point(82, 26);
			this->trackBar19->Name = L"trackBar19";
			this->trackBar19->Size = System::Drawing::Size(305, 22);
			this->trackBar19->TabIndex = 74;
			this->trackBar19->TickStyle = System::Windows::Forms::TickStyle::None;
			// 
			// label52
			// 
			this->label52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label52->BackColor = System::Drawing::SystemColors::Control;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label52->Location = System::Drawing::Point(360, 45);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(25, 18);
			this->label52->TabIndex = 75;
			this->label52->Text = L"50";
			this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label55
			// 
			this->label55->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label55->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label55->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(0, 1);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(81, 62);
			this->label55->TabIndex = 73;
			this->label55->Text = L"\r\nGain";
			this->label55->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label51
			// 
			this->label51->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label51->BackColor = System::Drawing::SystemColors::Control;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label51->Location = System::Drawing::Point(79, 46);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(25, 18);
			this->label51->TabIndex = 76;
			this->label51->Text = L"1";
			this->label51->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel13
			// 
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel13->Controls->Add(this->label70);
			this->panel13->Controls->Add(this->numericUpDown2);
			this->panel13->Controls->Add(this->trackExplosure);
			this->panel13->Controls->Add(this->label49);
			this->panel13->Controls->Add(this->label7);
			this->panel13->Controls->Add(this->label50);
			this->panel13->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel13->Location = System::Drawing::Point(0, 78);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(392, 68);
			this->panel13->TabIndex = 32;
			// 
			// label70
			// 
			this->label70->BackColor = System::Drawing::Color::CadetBlue;
			this->label70->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label70->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label70->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label70->Location = System::Drawing::Point(88, 2);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(48, 23);
			this->label70->TabIndex = 75;
			this->label70->Text = L"Value";
			this->label70->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::SystemColors::Control;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(135, 2);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(124, 23);
			this->numericUpDown2->TabIndex = 72;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// trackExplosure
			// 
			this->trackExplosure->AutoSize = false;
			this->trackExplosure->Location = System::Drawing::Point(82, 27);
			this->trackExplosure->Name = L"trackExplosure";
			this->trackExplosure->Size = System::Drawing::Size(307, 22);
			this->trackExplosure->TabIndex = 71;
			this->trackExplosure->TickStyle = System::Windows::Forms::TickStyle::None;
			// 
			// label49
			// 
			this->label49->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label49->BackColor = System::Drawing::SystemColors::Control;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label49->Location = System::Drawing::Point(359, 46);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(25, 18);
			this->label49->TabIndex = 73;
			this->label49->Text = L"50";
			this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label7->Location = System::Drawing::Point(1, 1);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 63);
			this->label7->TabIndex = 21;
			this->label7->Text = L"\r\nExplosure";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label50
			// 
			this->label50->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label50->BackColor = System::Drawing::SystemColors::Control;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label50->Location = System::Drawing::Point(79, 47);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(25, 18);
			this->label50->TabIndex = 74;
			this->label50->Text = L"1";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->btnDropOK);
			this->panel3->Controls->Add(this->btnDrop);
			this->panel3->Controls->Add(this->numCCD_height);
			this->panel3->Controls->Add(this->numCCD_with);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->trackCCD_offY);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->trackCCD_offX);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label47);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(392, 78);
			this->panel3->TabIndex = 31;
			// 
			// btnDropOK
			// 
			this->btnDropOK->BackColor = System::Drawing::Color::CadetBlue;
			this->btnDropOK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDropOK->ForeColor = System::Drawing::SystemColors::InfoText;
			this->btnDropOK->Location = System::Drawing::Point(88, 41);
			this->btnDropOK->Name = L"btnDropOK";
			this->btnDropOK->Size = System::Drawing::Size(59, 33);
			this->btnDropOK->TabIndex = 39;
			this->btnDropOK->Text = L"OK";
			this->btnDropOK->UseVisualStyleBackColor = false;
			this->btnDropOK->Click += gcnew System::EventHandler(this, &Form1::btnDropOK_Click);
			// 
			// btnDrop
			// 
			this->btnDrop->BackColor = System::Drawing::Color::CadetBlue;
			this->btnDrop->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDrop->ForeColor = System::Drawing::SystemColors::InfoText;
			this->btnDrop->Location = System::Drawing::Point(88, 4);
			this->btnDrop->Name = L"btnDrop";
			this->btnDrop->Size = System::Drawing::Size(59, 33);
			this->btnDrop->TabIndex = 38;
			this->btnDrop->Text = L"Vẽ";
			this->btnDrop->UseVisualStyleBackColor = false;
			this->btnDrop->Click += gcnew System::EventHandler(this, &Form1::btnDrop_Click);
			// 
			// numCCD_height
			// 
			this->numCCD_height->BackColor = System::Drawing::SystemColors::Control;
			this->numCCD_height->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCCD_height->Location = System::Drawing::Point(194, 46);
			this->numCCD_height->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000, 0, 0, 0 });
			this->numCCD_height->Name = L"numCCD_height";
			this->numCCD_height->Size = System::Drawing::Size(64, 23);
			this->numCCD_height->TabIndex = 31;
			this->numCCD_height->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numCCD_with
			// 
			this->numCCD_with->BackColor = System::Drawing::SystemColors::Control;
			this->numCCD_with->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCCD_with->Location = System::Drawing::Point(194, 9);
			this->numCCD_with->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000, 0, 0, 0 });
			this->numCCD_with->Name = L"numCCD_with";
			this->numCCD_with->Size = System::Drawing::Size(61, 27);
			this->numCCD_with->TabIndex = 30;
			this->numCCD_with->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(299, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 14);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Offset Y";
			// 
			// trackCCD_offY
			// 
			this->trackCCD_offY->AutoSize = false;
			this->trackCCD_offY->Location = System::Drawing::Point(259, 51);
			this->trackCCD_offY->Maximum = 2000;
			this->trackCCD_offY->Name = L"trackCCD_offY";
			this->trackCCD_offY->Size = System::Drawing::Size(135, 22);
			this->trackCCD_offY->TabIndex = 35;
			this->trackCCD_offY->TickStyle = System::Windows::Forms::TickStyle::None;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(298, 2);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 14);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Offset X";
			// 
			// trackCCD_offX
			// 
			this->trackCCD_offX->AutoSize = false;
			this->trackCCD_offX->Location = System::Drawing::Point(259, 15);
			this->trackCCD_offX->Maximum = 2000;
			this->trackCCD_offX->Name = L"trackCCD_offX";
			this->trackCCD_offX->Size = System::Drawing::Size(133, 22);
			this->trackCCD_offX->TabIndex = 34;
			this->trackCCD_offX->TickStyle = System::Windows::Forms::TickStyle::None;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(160, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 15);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Dài";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(153, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 15);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Rộng";
			// 
			// label47
			// 
			this->label47->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label47->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(1, 1);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(80, 72);
			this->label47->TabIndex = 21;
			this->label47->Text = L"Resolution";
			this->label47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(412, 300);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(28, 14);
			this->label35->TabIndex = 30;
			this->label35->Text = L"ảnh";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->Location = System::Drawing::Point(412, 193);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(27, 14);
			this->label79->TabIndex = 17;
			this->label79->Text = L"mm";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label81->Location = System::Drawing::Point(411, 237);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(59, 14);
			this->label81->TabIndex = 17;
			this->label81->Text = L"mm/pixel";
			// 
			// btnDefautSize
			// 
			this->btnDefautSize->Location = System::Drawing::Point(392, 3);
			this->btnDefautSize->Name = L"btnDefautSize";
			this->btnDefautSize->Size = System::Drawing::Size(87, 28);
			this->btnDefautSize->TabIndex = 14;
			this->btnDefautSize->Text = L"DeFlaut";
			this->btnDefautSize->UseVisualStyleBackColor = true;
			// 
			// btnCCD
			// 
			this->btnCCD->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnCCD->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnCCD->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCCD->ForeColor = System::Drawing::Color::DarkGreen;
			this->btnCCD->Location = System::Drawing::Point(0, 0);
			this->btnCCD->Name = L"btnCCD";
			this->btnCCD->Size = System::Drawing::Size(396, 40);
			this->btnCCD->TabIndex = 1;
			this->btnCCD->Text = L"1.Cài CCD-Basler";
			this->btnCCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCCD->UseVisualStyleBackColor = false;
			this->btnCCD->Click += gcnew System::EventHandler(this, &Form1::btnCCD_Click);
			// 
			// btnRun
			// 
			this->btnRun->BackColor = System::Drawing::Color::LightGray;
			this->btnRun->Enabled = false;
			this->btnRun->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRun->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRun->Location = System::Drawing::Point(100, 3);
			this->btnRun->Name = L"btnRun";
			this->btnRun->Size = System::Drawing::Size(111, 33);
			this->btnRun->TabIndex = 1;
			this->btnRun->Text = L"RUN";
			this->btnRun->UseVisualStyleBackColor = false;
			this->btnRun->Click += gcnew System::EventHandler(this, &Form1::btnRun_Click);
			// 
			// tmRun
			// 
			this->tmRun->Interval = 1;
			this->tmRun->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// tmConnect
			// 
			this->tmConnect->Interval = 50;
			this->tmConnect->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// threadFilter
			// 
			this->threadFilter->WorkerReportsProgress = true;
			this->threadFilter->WorkerSupportsCancellation = true;
			this->threadFilter->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::threadFilter_DoWork);
			this->threadFilter->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &Form1::threadFilter_RunWorkerCompleted);
			// 
			// threadCap
			// 
			this->threadCap->WorkerReportsProgress = true;
			this->threadCap->WorkerSupportsCancellation = true;
			this->threadCap->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::threadCap_DoWork);
			// 
			// threadFind
			// 
			this->threadFind->WorkerReportsProgress = true;
			this->threadFind->WorkerSupportsCancellation = true;
			this->threadFind->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::threadFind_DoWork);
			this->threadFind->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &Form1::threadFind_RunWorkerCompleted);
			// 
			// pEnd
			// 
			this->pEnd->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pEnd->Controls->Add(this->pictureBox1);
			this->pEnd->Controls->Add(this->lbST_connect);
			this->pEnd->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pEnd->Location = System::Drawing::Point(3, 737);
			this->pEnd->Name = L"pEnd";
			this->pEnd->Size = System::Drawing::Size(1217, 10);
			this->pEnd->TabIndex = 13;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(1093, -31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(118, 38);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// lbST_connect
			// 
			this->lbST_connect->AutoSize = true;
			this->lbST_connect->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbST_connect->ForeColor = System::Drawing::Color::Lime;
			this->lbST_connect->Location = System::Drawing::Point(5, 5);
			this->lbST_connect->Name = L"lbST_connect";
			this->lbST_connect->Size = System::Drawing::Size(225, 23);
			this->lbST_connect->TabIndex = 0;
			this->lbST_connect->Text = L"Connected with Balser CCD";
			// 
			// threadConnect
			// 
			this->threadConnect->WorkerReportsProgress = true;
			this->threadConnect->WorkerSupportsCancellation = true;
			this->threadConnect->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::threadConnect_DoWork);
			this->threadConnect->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &Form1::threadConnect_RunWorkerCompleted);
			// 
			// pRun
			// 
			this->pRun->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pRun->BackColor = System::Drawing::Color::White;
			this->pRun->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pRun->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pRun->Location = System::Drawing::Point(816, 90);
			this->pRun->Name = L"pRun";
			this->pRun->Size = System::Drawing::Size(400, 647);
			this->pRun->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::LightSlateGray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Cornsilk;
			this->button2->Location = System::Drawing::Point(816, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(400, 44);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Kết Quả Phân Loại";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// tmClose
			// 
			this->tmClose->Tick += gcnew System::EventHandler(this, &Form1::tmClose_Tick);
			// 
			// tmTop
			// 
			this->tmTop->Enabled = true;
			this->tmTop->Interval = 500;
			this->tmTop->Tick += gcnew System::EventHandler(this, &Form1::tmTop_Tick);
			// 
			// tipValue
			// 
			this->tipValue->AutoPopDelay = 5000;
			this->tipValue->InitialDelay = 5;
			this->tipValue->ReshowDelay = 1;
			// 
			// tmDrop
			// 
			this->tmDrop->Interval = 1;
			this->tmDrop->Tick += gcnew System::EventHandler(this, &Form1::tmDrop_Tick);
			// 
			// threadDrop
			// 
			this->threadDrop->WorkerReportsProgress = true;
			this->threadDrop->WorkerSupportsCancellation = true;
			this->threadDrop->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::threadDrop_DoWork);
			this->threadDrop->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &Form1::threadDrop_RunWorkerCompleted);
			// 
			// ThreadTrig
			// 
			this->ThreadTrig->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::ThreadTrig_DoWork);
			this->ThreadTrig->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &Form1::ThreadTrig_RunWorkerCompleted);
			// 
			// DelayTrig
			// 
			this->DelayTrig->Interval = 1000;
			this->DelayTrig->Tick += gcnew System::EventHandler(this, &Form1::DelayTrig_Tick);
			// 
			// DelayStopTrig
			// 
			this->DelayStopTrig->Interval = 1000;
			this->DelayStopTrig->Tick += gcnew System::EventHandler(this, &Form1::DelayStopTrig_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1223, 750);
			this->Controls->Add(this->pEnd);
			this->Controls->Add(this->btnOnline);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnRun);
			this->Controls->Add(this->pEditor);
			this->Controls->Add(this->pRun);
			this->Controls->Add(this->button2);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Padding = System::Windows::Forms::Padding(3);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Capture";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picShow))->EndInit();
			this->pEditor->ResumeLayout(false);
			this->pRobot->ResumeLayout(false);
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxID))->EndInit();
			this->groupBox12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOffsetX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOffsetY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOffsetAngle))->EndInit();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPort))->EndInit();
			this->pFind->ResumeLayout(false);
			this->panel22->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			this->panel21->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSizeMax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxCur))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar9))->EndInit();
			this->panel20->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMinCur))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSizeMin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar8))->EndInit();
			this->pTracking->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackDilateTrig))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBinnaryTrig))->EndInit();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDelayStopTrig))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDelayStartTrig))->EndInit();
			this->panel17->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxArea))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAreaCurrent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMinArea))->EndInit();
			this->pFilter->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBinary2))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackSplit))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackM))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBlur))->EndInit();
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackValBinary))->EndInit();
			this->pCCD->ResumeLayout(false);
			this->pCCD->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPicMax))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar19))->EndInit();
			this->panel13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackExplosure))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCCD_height))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCCD_with))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackCCD_offY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackCCD_offX))->EndInit();
			this->pEnd->ResumeLayout(false);
			this->pEnd->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) 
	{
		
	}
			 

			 System::Drawing::Bitmap^ MatToBitmap(Mat srcImg){
				 int stride = srcImg.size().width * srcImg.channels();//calc the srtide
				 int hDataCount = srcImg.size().height;

				 System::Drawing::Bitmap^ retImg;

				 System::IntPtr ptr(srcImg.data);

				 //create a pointer with Stride
				 if (stride % 4 != 0){//is not stride a multiple of 4?
					 //make it a multiple of 4 by fiiling an offset to the end of each row

					 uchar *dataPro = new uchar[((srcImg.size().width * srcImg.channels() + 3) & -4) * hDataCount];//to hold processed data

					 uchar *data = srcImg.ptr();

					 //current position on the data array
					 int curPosition = 0;
					 //current offset
					 int curOffset = 0;

					 int offsetCounter = 0;

					 //itterate through all the bytes on the structure
					 for (int r = 0; r < hDataCount; r++){
						 //fill the data
						 for (int c = 0; c < stride; c++){
							 curPosition = (r * stride) + c;

							 dataPro[curPosition + curOffset] = data[curPosition];
						 }

						 //reset offset counter
						 offsetCounter = stride;

						 //fill the offset
						 do{
							 curOffset += 1;
							 dataPro[curPosition + curOffset] = 0;

							 offsetCounter += 1;
						 } while (offsetCounter % 4 != 0);
					 }

					 ptr = (System::IntPtr)dataPro;//set the data pointer to new/modified data array

					 //calc the stride to nearest number which is a multiply of 4
					 stride = (srcImg.size().width * srcImg.channels() + 3) & -4;

					 retImg = gcnew System::Drawing::Bitmap(srcImg.size().width, srcImg.size().height,
						 stride,
						 System::Drawing::Imaging::PixelFormat::Format24bppRgb,
						 ptr);
				 }
				 else{

					 //no need to add a padding or recalculate the stride
					 retImg = gcnew System::Drawing::Bitmap(srcImg.size().width, srcImg.size().height,
						 stride,
						 System::Drawing::Imaging::PixelFormat::Format24bppRgb,
						 ptr);
				 }

				 array<System::Byte>^ imageData;
				 System::Drawing::Bitmap^ output;

				 // Create the byte array.
				 {
					 System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					 retImg->Save(ms, System::Drawing::Imaging::ImageFormat::Png);
					 imageData = ms->ToArray();
					 delete ms;
				 }

				 // Convert back to bitmap
				 {
					 System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(imageData);
					 output = (System::Drawing::Bitmap^)System::Drawing::Bitmap::FromStream(ms);
				 }

				 return output;
			 }
			
					System::Drawing::Bitmap^ bm;
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
				
				 if (threadCap->IsBusy != true)
				 {
					
					 threadCap->RunWorkerAsync();
				 }
				 if (isFil == false)
				 if (ThreadTrig->IsBusy != true)
				 {
					 ThreadTrig->RunWorkerAsync();///
				 }
				 if (isStartFilter == true || isFil == true)
				 {

					 if (threadFilter->IsBusy != true)
					 {

						 threadFilter->RunWorkerAsync();
					 }
				 }
				 
				
				 

	}
		
private: System::Void btnRun_Click(System::Object^  sender, System::EventArgs^  e) {

			 isRun = !isRun;
			 if (isRun == true)
			 {
				 btnRun->Text = "RUN";
				
				 tmRun->Start();
				
				 isTracking = false;
				 isFind = false;
				 isFil = false;
				 isEditTrig = false;
				 pEditor->Visible = false;
			 }

			 else 
			 {

				 btnRun->Text = "EDITOR";
				
				 pEditor->Visible = true;
				
			 }
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			// panel4->Visible = false;
}
		

private:void GetListCCD()
{
			
			

}
private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 tmRun->Stop();		
			 tmClose->Start();
			
}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 
			 if (threadConnect->IsBusy != true)
			 {
				 threadConnect->RunWorkerAsync();
			 }
}



		 bool isLoad = false;
		 bool isLoadImge = false;




private: System::Void threadShow_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			 if (imgShow.cols != 0)
			 {
				 ShowImg();
			 }
}
private: System::Void threadShow_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
			
}
private: System::Void threadFind_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			
			
			 
}
private: System::Void threadFind_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
			 imshow(WINDOW_RESULT, imgResult);
}

		
		 System::String^ sCmd = "";
		 System::String^ sIP = "";
		 private:void loadParameter()
		 {
					 string line;
					 ifstream myfile("para.txt");
					 // cout << "Thong so cai dat" << '\n';
					 if (myfile.is_open())
					 {
						 int index = 0;
						 while (getline(myfile, line))
						 {
							 vector<string> v{ explode(line, ',') };
							 //cout << line << '\n';
							 switch (index)
							 {
								 //cai dat CCD Basler/
							 case 0:
								 dScan = atof(v[0].c_str()); //chuyen doi String=>INT
								 break;
							 case 1:
								 parthName = gcnew  System::String(v[0].c_str());
								 sPath = v[0].c_str();
								 break;
							 case 2:
								 picMax = std::stoi(v[0]);
								 break;

								 //dieu chinh bo loc
							 case 3:
								 valBinary1 = std::stoi(v[0]);
								 break;
							 case 4:
								 valBlur = std::stoi(v[0]);
								 break;
							 case 5:
								 szM = std::stoi(v[0]);
								 break;
							 case 6:
								 valSplit = std::stoi(v[0]);
								 break;
							 case 7:
								 valBinary2 = std::stoi(v[0]);
								 break;

								 //Thong so trigger
							 case 8:
								 minTrig = atof(v[0].c_str()); maxTrig = atof(v[1].c_str());
								 break;
							 case 9:
								 DelayTrig->Interval = std::stoi(v[0]);  DelayStopTrig->Interval = std::stoi(v[1]);
								 break;
							 case 10:
								 valBinaryTrig = std::stoi(v[0]);
								 break;
							 case 11:
								 szMtrig = std::stoi(v[0]);
								 break;

								 //phan tich so luong
							 case 12:
								 minArea = atof(v[0].c_str()); maxArea = atof(v[1].c_str());
								 break;
							 case 13:
								 minNumber = std::stoi(v[0]); maxNumber = std::stoi(v[1]);
								 break;
							 }
							 index++;

						 }
						 myfile.close();
					 }


		 }
		
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 
			 loadParameter();
			 trackValBinary->Value = valBinary1;
			 pCCD->Height = 338;
			 pFilter->Height = 365;
			 pTracking->Height = 364;
			 pFind->Height = 255;
			 pRobot->Height = 270;
			
			 imgResult = cv::Mat(pRun->Height, pRun->Width, CV_8UC3);
			 imgShow = cv::Mat(picShow->Height, picShow->Width, CV_8UC3);
			 imgResult = cv::Scalar(0, 0, 0);
			 imgShow = cv::Scalar(255,255,255);
			 //imgShow.copyTo(imgMain(Rect(5, 40, imgShow.cols, imgShow.rows)));
			 cvNamedWindow(WINDOW_NAME, CV_WINDOW_NORMAL);
			 resizeWindow(WINDOW_NAME, picShow->Width, picShow->Height);
			 //cvSetWindowProperty(WINDOW_NAME, CV_WND_PROP_FULLSCREEN, CV_WINDOW_FULLSCREEN);
			 moveWindow(WINDOW_NAME, picShow->Location.X-5, picShow->Location.Y+20);
			 //WINDOW_RESULT
			 cvNamedWindow(WINDOW_RESULT, CV_WINDOW_NORMAL);
			 resizeWindow(WINDOW_RESULT, pRun->Width, pRun->Height);
			
			 moveWindow(WINDOW_RESULT, pRun->Location.X+5, pRun->Location.Y-24);
			 imshow(WINDOW_RESULT, imgResult);
			 PylonInitialize();
			 tmConnect->Start();


			 ////Trigger//////
			 trackBinnaryTrig->Value = (int)valBinaryTrig;
			 trackDilateTrig->Value = (int)szMtrig;
			 numMinArea->Value = (Decimal)minTrig;
			 numMaxArea->Value = (Decimal)maxTrig;

			 numDelayStartTrig->Value = DelayTrig->Interval;
			 numDelayStopTrig->Value = DelayStopTrig->Interval;
			 /*numDelayStartTrig->Value = delayStartTrig;
			 DelayTrig->Interval = (int) delayStartTrig;*/
			/* numDelayStopTrig->Value = delayStopTrig;
			 DelayStopTrig->Interval = (int)delayStopTrig;*/

			 ///////FILLTER/////
			 trackValBinary->Value = valBinary1;
			 trackBlur->Value = valBlur;
			 trackM->Value =szM  ;
			 trackSplit->Value = valSplit;
			 trackBinary2->Value = valBinary2 ;

			 /////thong so dem////
			 numSizeMin->Value = (Decimal) minArea;
			 numSizeMax->Value = (Decimal)maxArea;
			 //Ket qua////
			 numPicMax->Value = (Decimal)picMax;
			 txtPath->Text = gcnew System::String(sPath.c_str());//chuyen doi String Std quay String Systems
			
}
		 bool is_pCCD = false, is_pFilter = false, is_pFind = false, is_pTracking = false, is_pRobot = false,isCalib=false;
private: System::Void btnCCD_Click(System::Object^  sender, System::EventArgs^  e) {
			 is_pCCD = !is_pCCD;
			 if (is_pCCD == true)
			 {
				  
				 btnCCD->ForeColor = Color::Black;
				 btnFilter->ForeColor = Color::DimGray;
				 btnTrigger->ForeColor = Color::DimGray;
				 btnFind->ForeColor = Color::DimGray;
				 btnRobot->ForeColor = Color::DimGray;
				
				 pCCD->Visible = true;
				 pFilter->Visible = false;
				 pTracking->Visible = false;
				 pFind->Visible = false;
				 pRobot->Visible = false;
				 is_pFilter = false;
				 is_pTracking = false;
				 is_pRobot = false;
				 is_pFind = false;
				
				 isCalib = false;
				 
				
			 }
			 else
			 {
				 pCCD->Visible = false;
				 pFilter->Visible = false;
				 pTracking->Visible = false;
				 pFind->Visible = false;
				 pRobot->Visible = false;
				 
				 tmRun->Start();
				
			 }


}
private: System::Void btnFilter_Click(System::Object^  sender, System::EventArgs^  e) {
			 is_pFilter = !is_pFilter;
			 if (is_pFilter == true)
			 {
				 btnCCD->ForeColor = Color::DimGray;
				 btnFilter->ForeColor = Color::Black;
				 btnTrigger->ForeColor = Color::DimGray;
				 btnFind->ForeColor = Color::DimGray;
				 btnRobot->ForeColor = Color::DimGray;
				 
				 pCCD->Visible = false;
				 pFilter->Visible = true;
				 pTracking->Visible = false;
				 pFind->Visible = false;
				 
				 pRobot->Visible = false;
				 is_pCCD = false;
				 is_pTracking = false;
				 is_pRobot = false;
				 is_pFind = false;
				 isFil = true;
				 isCalib = false;
			 }
			 else
			 {
				 isFil = false;
				 pCCD->Visible = false;
				 pFilter->Visible = false;
				 pTracking->Visible = false;
				 pFind->Visible = false;
				 pRobot->Visible = false;
				 
			 }
}

private: System::Void btnRobot_Click(System::Object^  sender, System::EventArgs^  e) {
			 is_pRobot = !is_pRobot;
			 if (is_pRobot == true)
			 {
				 btnCCD->ForeColor = Color::DimGray;
				 btnFilter->ForeColor = Color::DimGray;
				 btnTrigger->ForeColor = Color::DimGray;
				 btnFind->ForeColor = Color::DimGray;
				 btnRobot->ForeColor = Color::Black;
				
				 pCCD->Visible = false;
				 pFilter->Visible = false;
				 pTracking->Visible = false;
				 pFind->Visible = false;
				 pRobot->Visible = true;
				
				 is_pCCD = false;
				 is_pFilter = false;
				 is_pTracking = false;
				 is_pFind = false;
				 isCalib = false;

			 }
			 else
			 {
				 pCCD->Visible = false;
				 pFilter->Visible = false;
				 pTracking->Visible = false;
				 pFind->Visible = false;
				 pRobot->Visible = false;
				 
			 }
}
private: System::Void btnFind_Click(System::Object^  sender, System::EventArgs^  e) {
			 is_pFind = !is_pFind;
			 if (is_pFind == true)
			 {
				 btnCCD->ForeColor= Color::DimGray;
				 btnFilter->ForeColor = Color::DimGray;
				 btnTrigger->ForeColor = Color::DimGray;
				 btnFind->ForeColor = Color::Black;
				 btnRobot->ForeColor = Color::DimGray;
				
				 pCCD->Visible = false;
				 pFilter->Visible = false;
				 pTracking->Visible = false;
				 pFind->Visible = true;
				 pRobot->Visible = false;
				
				 is_pCCD = false;
				 is_pFilter = false;
				 is_pTracking = false;
				 is_pRobot = false;
				 isFind = true;
				 isCalib = false;
			 }
			 else
			 {
				 pCCD->Visible = false;
				 pFilter->Visible = false;
				 pTracking->Visible = false;
				 pFind->Visible = false;
				 pRobot->Visible = false;
				 
			 }
}
private: System::Void trackValBinary_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 valBinary1 = trackValBinary->Value;
			 tipValue->SetToolTip(trackValBinary, trackValBinary->Value.ToString());
			// numValBinary->Value = valThresh;
}
private: System::Void numValBinary_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			// valThresh = (int)numValBinary->Value;
			// trackValBinary->Value = valThresh;
}
private: System::Void numSzBlurX_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			// numSzBlurY->Value = numSzBlurX->Value;
			// szBlur = (int)numSzBlurX->Value;
			// szBlur = (int)numSzBlurY->Value;
}
private: System::Void numSzBlurY_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			// numSzBlurX->Value = numSzBlurY->Value;
			// szBlur = (int)numSzBlurX->Value;
			// szBlur = (int)numSzBlurY->Value;
}
private: System::Void numSzCloseX_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		
}
private: System::Void numSzCloseY_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			
}
private: System::Void numArea_min_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			// minArea = (int)numArea_min->Value;
}
private: System::Void numArea_max_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			// maxArea = (int)numArea_max->Value;
}
private: System::Void numBoxX_min_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			// minInch = (int)numInch_min->Value;
}
private: System::Void numBoxX_max_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			// maxInch = (int)numInch_max->Value;
}
private: System::Void numPassY_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			
}
private: System::Void trackPassY_Scroll(System::Object^  sender, System::EventArgs^  e) {
			
}

private: System::Void numSizeSampling_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			// szSampling =(int) numSizeSampling->Value;
}
private: System::Void numDisHut_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			// disHut = (int)numDisHut->Value;
}
private: System::Void numSpeedBelt_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			
			// numSpeedBelt->Value = (int)speedBelt;
}
		 bool isConnected = false;
private: System::Void threadConnect_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			 isConnected = false;
			 try
			 {
				 nameDev.SetDeviceClass(Camera_t::DeviceClass());///Quet ten CCD
				 CTlFactory& tlFactory = CTlFactory::GetInstance();
				 if (nameDev.GetFullName()!= "")// đã nhận dc tên ccd
				 {
					 try
					 {
						// camera.Width.SetValue(500);
					camera.Attach(tlFactory.CreateDevice(nameDev));//kt quyền điều khiển
					camera.Open();
				
					GenApi::CBooleanPtr ptrAutoPacketSize = camera.GetStreamGrabberNodeMap().GetNode("AutoPacketSize");           
					if (GenApi::IsWritable(ptrAutoPacketSize))
					{
						ptrAutoPacketSize->SetValue(true);
					}
					///trackExplosure->Maximum = (int)camera.ExposureTimeRaw.GetMax() / 1000;
					///trackExplosure->Minimum = (int)camera.ExposureTimeRaw.GetMin();
					szRaw.width = camera.Width.GetValue();
					szRaw.height = camera.Height.GetValue();
					//WriteParaCCD();//set thong so ccd
					szForm1.width = picShow->Width;
					szForm1.height = picShow->Height;
					szScanX = szRaw.width*1.0 / szForm1.width;
					szScanY = szRaw.height*1.0 / szForm1.height;
					camera.StartGrabbing();//Tao luong Doc anh
					
					isConnected = true;
					 }


					 catch (GenICam::GenericException &e)
					 {
						 // Error handling.
						 cerr << "An exception occurred." << endl
							 << e.GetDescription() << endl;
						 camera.StopGrabbing();
						 camera.Close();
						 camera.DetachDevice();
						 // Comment the following two lines to disable waiting on exit

						 // PylonTerminate();
					 }
				 }
				
				/* // Get all attached devices and exit application if no device is found.
				 DeviceInfoList_t devices;
				 if (tlFactory.EnumerateDevices(devices) != 0)
				 {				
					
					 try
					 {

						 if (tlFactory.EnumerateDevices(devices) == 0)
						 {
							 throw RUNTIME_EXCEPTION("No camera present.");
						 }
						 //namedWindow("CV_Image", WINDOW_AUTOSIZE);

						 for (size_t i = 0; i < cameras.GetSize(); ++i)
						 {
							 if (cameras[i].IsPylonDeviceAttached() == false)
								 // m_camera[i].RegisterConfiguration(new CAutoPacketSizeConfiguration(), Pylon::RegistrationMode_Append, Pylon::Cleanup_Delete);
								 cameras[i].Attach(tlFactory.CreateDevice(devices[i]));
						 }


						 cameras.StartGrabbing();
						
						 isConnected = true;
					 }


					 catch (GenICam::GenericException &e)
					 {
						 // Error handling.
						 cerr << "An exception occurred." << endl
							 << e.GetDescription() << endl;
						 cameras.StopGrabbing();
						 cameras.Close();
						 cameras.DetachDevice();
						 // Comment the following two lines to disable waiting on exit

						// PylonTerminate();
					 }
				 }*/
			 }
			 catch (GenICam::GenericException &e)
			 {
				 // Error handling.
				 cerr << "An exception occurred." << endl
					 << e.GetDescription() << endl;
				 camera.StopGrabbing();
				 camera.Close();
				 camera.DetachDevice();
				 // Comment the following two lines to disable waiting on exit

				 PylonTerminate();
			 }
			
}
		 private:void ShowParaCCD()
		 {

					 numCCD_with->Value = ccd_With;					
					 numCCD_height->Value = ccd_Height;
		 }
private: System::Void threadConnect_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
			 if (isConnected == true)
			 {				
				 btnRun->Enabled = true;
				 btnOnline->Enabled = true;
				 tmConnect->Stop();				 
				 tmRun->Start();
				
				 btnRun->BackColor = Color::LightGreen;
				 btnRun->Text = "RUN";	
				// btnOnline->BackColor = Color::LightGreen;
				 btnOnline->Text = "OFFLINE";
				 lbST_connect->ForeColor = Color::Lime;
				 lbST_connect->Text = "Connected with Balser CCD";
				
				 fc.OutputPixelFormat = PixelType_RGB8packed;
				  
				 isTracking = false;
				 isFind = false;
				 isFil = false;
				 
				 pEditor->Visible = false;
				// ReadParaCCD();
				 //ShowParaCCD();
				 //FindSampling();
			 }
			 else
			 {
				 
				 btnRun->Enabled = false;
				 btnRun->BackColor = Color::LightGray;
				 btnRun->Text = "WAITTING";
				 btnOnline->BackColor = Color::LightGray;
				 btnOnline->Text = "WAITTING";
				 lbST_connect->ForeColor = Color::DarkRed;
				 lbST_connect->Text = "Waitting connect with Balser CCD";
			 }
}
private: System::Void tmEditor_Tick(System::Object^  sender, System::EventArgs^  e) {
			
}

private: System::Void threadTracking_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			// if (imgFil.cols != 0)
			// {
			///	 Tracking();
			// }
}
private: System::Void threadTracking_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
			// numCurArea->Value = (Decimal)valCurArea;
			// numCurInch->Value = (Decimal)valCurInch;
			
}
		 bool isCrop = false;
private: System::Void threadCap_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			 try
			 {
				 if (isCrop == true)
				 {
					 try
					 {

						 camera.OffsetX.SetValue(recDrop.x);
						 camera.OffsetY.SetValue(recDrop.y);
						 isCrop = false;


					 }
					 catch (GenICam::GenericException &e)
					 {

					 }
				 }
				 else
				 {



					 camera.RetrieveResult(-1, ptrGrabResult, TimeoutHandling_ThrowException);//Lay Data Camera SAU KHOẢNG THỜI GIAN SẼ THOÁT RA ,(NẾU GIÁ TRỊ BẰNG -1 KHÔNG THOÁT RA)
					 if (ptrGrabResult->GrabSucceeded())
					 {
						 fc.Convert(image, ptrGrabResult);///Chuyen gia tri ma camera qua anh thu viện Pylon Balser
						 src = cv::Mat(ptrGrabResult->GetHeight(), ptrGrabResult->GetWidth(), CV_8UC3, (uint8_t*)image.GetBuffer(), Mat::AUTO_STEP);///convert anh thu vien pylon thanh Mat
						 src.copyTo(raw);//copy src to raw để xử lý

						 isLoadImge = true;
						 //src.copyTo(rawS);
						 isLoadImge = false;
						 if (isLoad == false)
						 {
							 isLoad = true;
							 szRaw = src.size();
							 imgShow = src.clone();


						 }

					 }
					 ptrGrabResult.Release();//Xoa data
				 }
			 }
			 catch (GenICam::GenericException &e)
			 {

			 }
}
private: System::Void threadFilter_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			 if (src.cols != 0)
			 {
				 Filter();
			 }
}
private: System::Void threadFilter_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
			 if (isFil == true)
			 if (imgFil.cols != 0)
				 imshow(WINDOW_NAME, imgFil);
			 if (is_pFind == true)
			 {
				 lbNum->Text = numberSteel.ToString();

				 if (imgRaw.cols != 0)
					 imshow(WINDOW_NAME, imgRaw);
			 }
			 else
			 {

				 if (isFil == false)
				 {
					 lbNum->Text = numberSteel.ToString();

					 if (imgResult.cols != 0)
						 imshow(WINDOW_RESULT, imgResult);
				 }
			 }
			 numMinCur->Value = (Decimal)tempMinArea;
			 numMaxCur->Value = (Decimal)tempMaxArea;

}
private: System::Void tmClose_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (threadCap->IsBusy != true && threadFilter->IsBusy != true )
			 {
				 cvDestroyAllWindows();
				 Thread::Sleep(100);
				 tmClose->Stop();
				 this->Close();
			 }
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numCurArea_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
			 string sSvae;
			 sSvae += to_string(dScan) + ",//Scale";
			sSvae += "\n";
			 sSvae += sPath + ",//PathSave";
			 sSvae += "\n";
			 sSvae += to_string(picMax) + ",//Maximum Picture";
			 sSvae += "\n";
			 sSvae += to_string(valBinary1) + ",//valBinary1 Fillter";
			 sSvae += "\n";
			 sSvae += to_string(valBlur) + ",//valBlur Fillter";
			 sSvae += "\n";
			 sSvae += to_string(szM) + ",//szM Fillter";
			 sSvae += "\n";
			 sSvae += to_string(valSplit) + ",//valSplit Fillter";
			 sSvae += "\n";
			 sSvae += to_string(valBinary2) + ",//valBinary2 Fillter";
			 sSvae += "\n";
			 sSvae += to_string(minTrig) + "," + to_string(maxTrig) + ",//(minTrig/maxTrig)";
			 sSvae += "\n";
			 sSvae += to_string(DelayTrig->Interval) + "," + to_string(DelayStopTrig->Interval) + ",//(DelayTrig/DelayStopTrig) ";
			 sSvae += "\n";
			 sSvae += to_string(valBinaryTrig) + ",//valBinaryTrig";
			 sSvae += "\n";
			 sSvae += to_string(szMtrig) + ",//szMtrig";
			 sSvae += "\n";
			 sSvae += to_string(minArea) + "," + to_string(maxArea) + ",//(minArea/maxArea)";
			 sSvae += "\n";
			 sSvae += to_string(minNumber) + "," + to_string(maxNumber) + ",//(minNumber/maxNumber)";

			 ofstream myfile;
			 myfile.open("para.txt");
			 myfile << sSvae;
			 myfile.close();
}
private: System::Void numNormalize_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			// valNomarlize = (int)numNormalize->Value;
}
private: System::Void numBinary1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			// valBinary1 =(int) numBinary1->Value;
			
}
private: System::Void btnOnline_Click(System::Object^  sender, System::EventArgs^  e) {

			 
}
private: System::Void trackBLur_Scroll(System::Object^  sender, System::EventArgs^  e) {
			//valBlur=(int)trackBLur->Value;
}
private: System::Void tmTop_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->TopMost=true;
}





		 System::String^ parthName;//string Winform
private: System::Void btnBroswer_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 System::Windows::Forms::DialogResult ReSult = folderSaveImg->ShowDialog();
			 if (ReSult == System::Windows::Forms::DialogResult::OK)
			 {
				 parthName= folderSaveImg->SelectedPath;
				 txtPath->Text = parthName;
				 char cStr[500] = { 0 };
				 sprintf(cStr, "%s", parthName);//convert String^ tochar  
				 std::string s(cStr);//char to std::string
				 sPath = s;
				 
			 }
}
private: System::Void txtIPAddress_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
			
			
			
			 
}
private: System::Void threadOffSet_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			
}
private: System::Void txtIPAddress_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			
}
private: System::Void threadCalib_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			
}
private: System::Void threadCalib_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
			 if (imgShow.cols != 0)
			 {
				 imshow(WINDOW_NAME, imgShow);
				 imshow("fILTER", src_gray);

			 }
}
				 


private: System::Void numbinaryCalib_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 //valBinCalib =(int)numCal_bin->Value;
}

private: System::Void numOffsetX_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			
}
private: System::Void numOffsetY_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			
}
private: System::Void numOffsetAngle_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			
}
private: System::Void numMaxID_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			
}
private: System::Void numSpeedBelt_ValueChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 
			
}
private: System::Void lbSpeedBelt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			
			 
}
private: System::Void btnRunCalib_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 _calibDone = false;
			 isCalibRun = !isCalibRun;
			 if (isCalibRun== true)
			 {
				 pCalibB = pCalibE;
				 _calib_timeB = clock();
				 btnRun->Text = "STOP";
				 btnRun->BackColor = Color::Red;
			 }
			 else
			 {
				 btnRun->Text = "RUN";
				 btnRun->BackColor = Color::LightGreen;
				 _calibDone = true;
				 
			 }
			
}
private: System::Void btnCalib_Click(System::Object^  sender, System::EventArgs^  e) {
			 isCalib = !isCalib;
			 if (isCalib == true)
			 {
				 btnCCD->ForeColor = Color::DimGray;
				 btnFilter->ForeColor = Color::DimGray;
				 btnTrigger->ForeColor = Color::DimGray;
				 btnFind->ForeColor = Color::DimGray;
				 btnRobot->ForeColor = Color::DimGray;
				
				 pCCD->Visible = false;
				 pFilter->Visible = false;
				 pTracking->Visible = false;
				 pFind->Visible = true;
				 pRobot->Visible = false;
				
				 is_pCCD = false;
				 is_pFilter = false;
				 is_pTracking = false;
				 is_pRobot = false;
				 isFind = false;
				 isCalib = true;
				
			 }
			 else
			 {
				 pCCD->Visible = false;
				 pFilter->Visible = false;
				 pTracking->Visible = false;
				 pFind->Visible = false;
				 pRobot->Visible = false;
				
			 }
			
}

private: System::Void trackExplosure_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 int val = trackExplosure->Value;
			 camera.ExposureTimeRaw.SetValue(val);
			
			 tipValue->SetToolTip(trackExplosure, trackExplosure->Value.ToString());
			
}


private: System::Void btnDrop_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 tmRun->Stop();
			try{ 
				camera.StopGrabbing();
				camera.Width.SetValue(camera.Width.GetMax());
				camera.Height.SetValue(camera.Height.GetMax());
				szRaw.width = camera.Width.GetMax();
				szRaw.height = camera.Height.GetMax();
				szForm1.width = picShow->Width;
				szForm1.height = picShow->Height;
				szScanX = szRaw.width*1.0 / szForm1.width;
				szScanY = szRaw.height*1.0 / szForm1.height;
				camera.StartGrabbing();
			 camera.RetrieveResult(-1, ptrGrabResult, TimeoutHandling_ThrowException);//Lay Data Camera
			 if (ptrGrabResult->GrabSucceeded())
			 {
				 fc.Convert(image, ptrGrabResult);///Chuyen gia tri ma camera qua anh thu viện Pylon Balser
				 src = cv::Mat(ptrGrabResult->GetHeight(), ptrGrabResult->GetWidth(), CV_8UC3, (uint8_t*)image.GetBuffer(), Mat::AUTO_STEP);///convert anh thu vien pylon thanh Mat

				

			 }
			 ptrGrabResult.Release();//Xoa data
         }
		 catch (GenICam::GenericException &e)
		 {

		 }
			 src.copyTo(imgShow);
			 imshow(WINDOW_NAME, imgShow);
			 imgShow.copyTo(imgShow_old);
			 tmDrop->Start();
}
private: System::Void threadDrop_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) 
{
			 cvSetMouseCallback(WINDOW_NAME, mouseDrop, NULL);
}
private: System::Void tmDrop_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (threadDrop->IsBusy == false)
			 {
				 threadDrop->RunWorkerAsync();
			 }
}
private: System::Void threadDrop_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) 
{
			 cv::imshow(WINDOW_NAME, imgShow);
}
private: System::Void btnDropOK_Click(System::Object^  sender, System::EventArgs^  e)
{
			 tmDrop->Stop();
			 try{
				 camera.StopGrabbing();
				 camera.OffsetX.SetValue(0);
				 camera.OffsetY.SetValue(0);
				 camera.Width.SetValue(recDrop.width);
				 camera.Height.SetValue(recDrop.height);
				
				
				
				 camera.StartGrabbing();
				 tmRun->Start();
				 isCrop = true;
			 }
			 catch (GenICam::GenericException &e)
			 {

			 }
		
}
private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e)
{
			// valBlur = trackBar2->Value;
}
private: System::Void picShow_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void trackM_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 szM = trackM->Value;
			 tipValue->SetToolTip(trackM, trackM->Value.ToString());

}
private: System::Void trackSplit_Scroll(System::Object^  sender, System::EventArgs^  e) 
{
			 valSplit = trackSplit->Value;
			 tipValue->SetToolTip(trackSplit, trackSplit->Value.ToString());
}
private: System::Void trackBlur_Scroll_1(System::Object^  sender, System::EventArgs^  e) {
			 valBlur = trackBlur->Value;
			 tipValue->SetToolTip(trackBlur, trackBlur->Value.ToString());
}
private: System::Void trackBinary2_Scroll(System::Object^  sender, System::EventArgs^  e)
{
			 valBinary2 = trackBinary2->Value;
			 tipValue->SetToolTip(trackBinary2, trackBinary2->Value.ToString());
}

		 private: System::Void trackBinnaryTrig_Scroll(System::Object^  sender, System::EventArgs^  e)
		 {
					  valBinaryTrig = trackBinnaryTrig->Value;
					  tipValue->SetToolTip(trackBinnaryTrig, trackBinnaryTrig->Value.ToString());
					//  lbBinaryTrig->Text = valBinaryTrig.ToString();
					 
		 }
private: System::Void trackDilateTrig_Scroll(System::Object^  sender, System::EventArgs^  e) 
{
			 szMtrig = trackDilateTrig->Value;
			 tipValue->SetToolTip(trackDilateTrig, trackDilateTrig->Value.ToString());//hien thi so tren con chuot
			// lbDilateTrig->Text = szMtrig.ToString();
}
private: System::Void ThreadTrig_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			 if (raw.cols != 0)
			 Trigger();
}
private: System::Void ThreadTrig_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
			 if (isStartFilter == false)
			 {
				 if (isTrigger == true)
					 DelayTrig->Start();
				 else
					 DelayTrig->Stop();
			 }
			 else
			 {


				 if (isStopTrig == true)
					 DelayStopTrig->Start();
				 else{
					 DelayStopTrig->Stop();
				 }
			 }
				 
			 if (isEditTrig == true)
			 if (imgTrig.cols != 0)
				 imshow(WINDOW_NAME, imgTrig);
			 if (isEditTrig == false && is_pFind==false)
			 {

				 if (imgShow.cols != 0)
					 imshow(WINDOW_NAME, imgShow);
			 }
			 numAreaCurrent->Value = (Decimal)areaTrigger;
			
}
private: System::Void btnTrigger_Click(System::Object^  sender, System::EventArgs^  e) {
			 isEditTrig = !isEditTrig;
			 if (isEditTrig == true)
			 {
				 
				 
				 
				 btnCCD->ForeColor = Color::DimGray;
				 btnFilter->ForeColor = Color::DimGray;
				 btnTrigger->ForeColor = Color::Black;
				 btnFind->ForeColor = Color::DimGray;
				 btnRobot->ForeColor = Color::DimGray;
				
				 pCCD->Visible = false;
				 pFilter->Visible = false;
				 pTracking->Visible = true;
				 pFind->Visible = false;
				 pRobot->Visible = false;
				 
				 is_pCCD = false;
				 is_pFilter = false;
				 is_pRobot = false;
				 is_pFind = false;
				 isTracking = true;
				 isCalib = false;
				
			 }
			 else
			 {
				 pCCD->Visible = false;
				 pFilter->Visible = false;
				 pTracking->Visible = false;
				 pFind->Visible = false;
				 pRobot->Visible = false;
				
				 
			 }
}

private: System::Void numMinArea_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
{
			 minTrig = (double)numMinArea->Value;
			
}
private: System::Void numMaxArea_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
{
			 maxTrig = (double)numMaxArea->Value;
}
private: System::Void DelayTrig_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (isTrigger == true)
			 {
				 isStartFilter = true;
				 DelayTrig->Stop();
			 }
			
}
private: System::Void DelayStopTrig_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (isStopTrig == true)
			 {
				 isTrigger = false;
				 isFilterDone = false;
				 isStartFilter = false;
				 DelayStopTrig->Stop();
			 }
}
private: System::Void numDelayStartTrig_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
{
			/* delayStartTrig = numDelayStartTrig->Value;
			 DelayTrig->Interval = (int)delayStartTrig;*/
			 DelayTrig->Interval= (int)numDelayStartTrig->Value;
			
}
private: System::Void numDelayStopTrig_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 /*delayStopTrig = numDelayStopTrig->Value;
			 DelayStopTrig->Interval = (int)delayStopTrig;*/
			 DelayStopTrig->Interval = (int)numDelayStopTrig->Value;
}



private: System::Void numSizeMin_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 minArea = (int)numSizeMin->Value;
			
}
private: System::Void numSizeMax_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 maxArea = (int)numSizeMax->Value;
}
private: System::Void lbNum_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numPicMax_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 picMax = (int)numPicMax->Value;
}
private: System::Void btnBroswer_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult ReSult = folderSaveImg->ShowDialog();
			 if (ReSult == System::Windows::Forms::DialogResult::OK)
			 {
				 parthName = folderSaveImg->SelectedPath;
				 txtPath->Text = parthName;
				 char cStr[500] = { 0 };
				 sprintf(cStr, "%s", parthName);//convert String^ tochar  
				 std::string s(cStr);//char to std::string
				 sPath = s;
			 }
}
};
}
		 