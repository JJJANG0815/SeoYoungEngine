#pragma once
#include "windows.h"


	class APP
	{
	public:

		APP();      //������
		~APP();		//�Ҹ���

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


