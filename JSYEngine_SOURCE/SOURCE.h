#pragma once
#include "windows.h"


	class APP
	{
	public:

		APP();      //持失切
		~APP();		//社瑚切

		void Initialize(HWND hwnd);
		void Run();

		void Update();
		void Render();


	private:
		
		HWND mHwnd;
		HDC mHdc;

		float mX;
		float mY;

	};


