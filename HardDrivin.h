/*This file is part of FFB Arcade Plugin GUI.
FFB Arcade Plugin GUI is free software : you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
FFB Arcade Plugin GUI is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with FFB Arcade Plugin GUI.If not, see < https://www.gnu.org/licenses/>.
*/

#pragma once
#include <Windows.h>
#include "Helper.h"

namespace FFBPluginGUI {

	public ref class HardDrivin : Helper
	{
	public:
		HardDrivin(MetroForm^ obj1)
		{
			this->obj = obj1;
			this->InitializeComponent();
		}

	private:
		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoAddLongTextBox(L"Options", L"");
			this->AutoAddShortCheckBox("PowerModeHardD", L"Power Mode", L"Enable to raise strength of lower values");
			this->AutoAddComponent("EnableDamperHardD");

			this->AutoAddLongTrackBarBlock("DamperStrengthHardD", L"Damper Strength", 0, 100, L"Strength of damper effect to lower oscillation");

			this->AutoAddLongTrackBarBlock("FeedbackLengthHardD", L"Feedback Length", 16, 10000, L"Length of a feedback command");

			this->AutoAddLongTextBox(L"Force Spring Effect", L"Force Spring effect over using default game spring");

			this->AutoAddShortCheckBox("EnableForceSpringEffectHardD", L"Force Spring Effect", L"Forces spring effect to work all the time");
			this->AutoAddShortTrackBarBlock("ForceSpringStrengthHardD", L"Forced Spring Strength", 0, 100, L"How strong the spring effect is when forced on");

			this->New2ColsPage();

			this->AutoAddComponent("GlobalForceHeader");
			this->AutoAddShortTrackBarBlock("MinForceHardD", L"Min Force", 0, 100, L"Minimum overrall force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("MaxForceHardD", L"Max Force", 0, 100, L"Maximum overrall force strength that will be applied to device");

			this->AutoAddComponent("AltGlobalForceHeader");
			this->AutoAddShortTrackBarBlock("AlternativeMinForceLeftHardD", L"Min Force Left", -100, 100, L"Minimum overrall left force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMaxForceLeftHardD", L"Max Force Left", -100, 100, L"Maximum overrall left force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMinForceRightHardD", L"Min Force Right", -100, 100, L"Minimum overrall right force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMaxForceRightHardD", L"Max Force Right", -100, 100, L"Maximum overrall right force strength that will be applied to device");

			this->Init();
		}
	};
}