#include "Application.h"
#include "GameObject.h"

namespace SY
{
	
	Application::Application()
		: mHwnd(nullptr)
		, mHdc(nullptr)
		
	{

	}

	Application::~Application()
	{

	}

	void Application::Initialize(HWND hWnd)
	{

		mHwnd = hWnd;
		mHdc = GetDC(hWnd);
	}

	void Application::Run()
	{
		Update();
		LateUpdate();
		Render();

	}
	void Application::Update()
	{



	}
	void Application::LateUpdate()
	{




	}
	void Application::Render()
	{





	}


}