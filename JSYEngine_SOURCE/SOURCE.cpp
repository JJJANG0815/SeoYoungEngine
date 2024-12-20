#include "SOURCE.h"

int colornum = 7;


	APP::APP()
		: mHwnd(nullptr), mHdc(nullptr), mX(0.f), mY(0.f) {}

	APP::~APP() {
		if (mHdc) {
			ReleaseDC(mHwnd, mHdc);
		}
	}

	void APP::Initialize(HWND hwnd)
	{
		mHwnd = hwnd;
		mHdc = GetDC(hwnd);
	}

	void APP::Run()
	{
		Update();
		Render();
	}

	void APP::Update()
	{
		if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			mX -= 1.0f;
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			mX += 1.0f;
		}
		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			mY -= 1.0f;
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			mY += 1.0f;
		}
	}

	void APP::Render()
	{
		COLORREF colors[7] = { RGB(255, 0, 0), RGB(255, 165, 0), RGB(255, 255, 0),
					  RGB(0, 255, 0), RGB(0, 0, 255), RGB(75, 0, 130),
					  RGB(138, 43, 226) };

		colornum = (colornum + 1) % 7;


		HBRUSH RainbowBrush = CreateSolidBrush(colors[colornum]);
		HBRUSH oldBrush = (HBRUSH)SelectObject(mHdc, RainbowBrush);

		Rectangle(mHdc, 100 + mX, 100 + mY, 200 + mX, 200 + mY);
		SelectObject(mHdc, oldBrush);
		DeleteObject(RainbowBrush);
	}



