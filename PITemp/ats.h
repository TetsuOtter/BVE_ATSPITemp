//Headder for ATS Plugin
//Written by Tetsu Otter
#include <windows.h>

//DLL importを短縮
#define DE extern "C" __declspec(dllexport)
//何のためか忘れたけど入れとく
#define SC __stdcall

#define PI_VERSION 0x00020000

struct Spec{
	int B = 0;	//ブレーキ段数
	int P = 0;	//ノッチ段数
	int A = 0;	//ATS確認段数
	int J = 0;	//常用最大段数
	int C = 0;	//編成車両数
};
struct State{
	double Z = 0;	//列車位置[m]
	float V = 0;	//列車速度[km/h]
	int T = 0;		//0時からの経過時間[ms]
	float BC = 0;	//BC圧力[kPa]
	float MR = 0;	//MR圧力[kPa]
	float ER = 0;	//ER圧力[kPa]
	float BP = 0;	//BP圧力[kPa]
	float SAP = 0;	//SAP圧力[kPa]
	float I = 0;	//電流[A]
};
struct Hand{
	int B = 0;	//ブレーキハンドル位置
	int P = 0;	//ノッチハンドル位置
	int R = 0;	//レバーサーハンドル位置
	int C = 0;	//定速制御状態
};
struct Beacon{
	int Num = 0;	//Beaconの番号
	int Sig = 0;	//対応する閉塞の現示番号
	float X = 0;	//対応する閉塞までの距離[m]
	int Data = 0;	//Beaconの第三引数の値
};
Hand handle;

DE void SC Load(void);
DE void SC Dispose(void);
DE int SC GetPluginVersion(void);
DE void SC SetVehicleSpec(Spec);
DE void SC Initialize(int);
DE Hand SC Elapse(State, int *, int *);
DE void SC SetPower(int);
DE void SC SetBrake(int);
DE void SC SetReverser(int);
DE void SC KeyDown(int);
DE void SC KeyUp(int);
DE void SC HornBlow(int);
DE void SC DoorOpen(void);
DE void SC DoorClose(void);
DE void SC SetSignal(int);
DE void SC SetBeaconData(Beacon);