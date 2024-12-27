#pragma once
#include "CommonInclude.h"

namespace SY
{
	class GameObject
	{
	public:
		GameObject();
		~GameObject();

		void Update();
		void LateUpdate();
		void Render(HDC hdc);

		void SetPosition(float X, float Y);
		void SetSize(float Width, float Height);
		void SetSpeed(float Speed);
		void SetColor(COLORREF color);

		float GetPositionX() const { return mX; }
		float GetPositionY() const { return mY; }
		float GetWidth() const { return mWidth; }
		float GetHeight()const { return mHeight; }

	private:

		float mX;
		float mY;
		float mWidth;
		float mHeight;
		float mSpeed;
		COLORREF mColor;



	};

}