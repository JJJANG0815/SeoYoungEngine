#pragma once
#include "CommonInclude.h"
#include "GameObject.h"

namespace SY
{

	class Player
	{
		
	public:
		Player();
		~Player();

		void Update();
		void LateUpdate();
		void Render(HDC hdc);



	private:


	};

}