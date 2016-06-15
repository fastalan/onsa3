class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ONS_GestureReloadC7 = "ONS_GestureReloadC7";
		ONS_GestureReloadC8 = "ONS_GestureReloadC8";
		ONS_GestureReloadM249 = "ONS_GestureReloadM249";
		ons_GesturerechamberC14 = "ons_GesturerechamberC14";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			ONS_GestureReloadC7[] = {"ONS_GestureReloadC7","Gesture"};
			ONS_GestureReloadC8[] = {"ONS_GestureReloadC8","Gesture"};
			ONS_GestureReloadM249[] = { "ONS_GestureReloadM249", "Gesture" };
			ons_GesturerechamberC14[] = { "ons_GesturerechamberC14", "Gesture" };
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			ONS_GestureReloadC7[] = {"ONS_GestureReloadC7_Prone","Gesture"};
			ONS_GestureReloadC8[] = {"ONS_GestureReloadC8_Prone","Gesture"};
			ONS_GestureReloadM249[] = { "ONS_GestureReloadM249_Prone", "Gesture" };
			ons_GesturerechamberC14[] = { "ons_GesturerechamberC14_Prone", "Gesture" };
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			ONS_GestureReloadC7[] = {"ONS_GestureReloadC7_Context","Gesture"};
			ONS_GestureReloadC8[] = {"ONS_GestureReloadC8_Context","Gesture"};
			ONS_GestureReloadM249[] = { "ONS_GestureReloadM249_Context", "Gesture" };
			ons_GesturerechamberC14[] = { "ons_GesturerechamberC14_Context", "Gesture" };
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			ONS_GestureReloadC7[] = {"ONS_GestureReloadC7_Context","Gesture"};
			ONS_GestureReloadC8[] = {"ONS_GestureReloadC8_Context","Gesture"};
			ONS_GestureReloadM249[] = { "ONS_GestureReloadM249_Context", "Gesture" };
			ons_GesturerechamberC14[] = { "ons_GesturerechamberC14_Context", "Gesture" };
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			ONS_GestureReloadC7[] = {"ONS_GestureReloadC7","Gesture"};
			ONS_GestureReloadC8[] = {"ONS_GestureReloadC8","Gesture"};
			ONS_GestureReloadM249[] = { "ONS_GestureReloadM249_Context", "Gesture" };
			ons_GesturerechamberC14[] = { "ons_GesturerechamberC14_Context", "Gesture" };
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class ONS_GestureReloadC7_Prone: Default
		{
			file = "\ONS_Weapons\data\Anim\reload\reload_ar15_prone.rtm";
			looped = 0;
			speed = 0.25;
			mask = "handsWeapon";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0,1,0.07,0,0.81,0,0.86,1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,0.08,0,0.14,0,0.17,1,0.57,1,0.68,0,0.78,1};
			rightHandIKEnd = 1;
		};
		class ONS_GestureReloadC8_Prone: Default
		{
			file = "\ONS_Weapons\data\Anim\reload\reload_ar15_prone.rtm";
			looped = 0;
			speed = 0.25;
			mask = "handsWeapon";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0,1,0.07,0,0.81,0,0.86,1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,0.08,0,0.14,0,0.17,1,0.57,1,0.68,0,0.78,1};
			rightHandIKEnd = 1;
		};
		class ONS_GestureReloadC8: Default
		{
			file = "\ONS_Weapons\data\Anim\reload\reload_ar15_catch_workspace.rtm";
			looped = 0;
			speed = 0.25;
			mask = "handsWeapon";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0,1,0.07,0,0.81,0,0.86,1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,0.08,0,0.14,0,0.17,1,0.57,1,0.68,0,0.78,1};
			rightHandIKEnd = 1;
		};
		class ONS_GestureReloadC7: Default
		{
			file = "\ONS_Weapons\data\Anim\reload\reload_ar15_catch_downrange.rtm";
			looped = 0;
			speed = 0.25;
			mask = "handsWeapon";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0,1,0.07,0,0.81,0,0.86,1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,0.08,0,0.14,0,0.17,1,0.57,1,0.68,0,0.78,1};
			rightHandIKEnd = 1;
		};
		class ONS_GestureReloadM249 :Default
		{
			file = "\ONS_Weapons\data\Anim\m249_reload_stand.rtm";
			speed = 0.09868421052631578947368421052632;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.3;
			headBobMode = 2;
			rightHandIKCurve[] = { 0, 1, 0.016, 0, 0.288, 0, 0.3076, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0.09868, 1, 0.1118421, 0, 0.92105, 0, 0.947368, 1 };
		};
		class ONS_GestureReloadM249_Crouch :Default
		{
			file = "\ONS_Weapons\data\Anim\m249_reload_crouch.rtm";
			speed = 0.09868421052631578947368421052632;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.45;
			headBobMode = 2;
			rightHandIKCurve[] = { 0, 1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, 0.00986, 0, 0.92105, 0, 0.947368, 1 };
		};
		class ONS_GestureReloadM249_Prone :Default
		{
			file = "\ONS_Weapons\data\Anim\m249_reload_prone.rtm";
			speed = 0.09868421052631578947368421052632;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = { 0, 1, 0.016, 0, 0.288, 0, 0.3076, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0.09868, 1, 0.1118421, 0, 0.92105, 0, 0.947368, 1 };
		};
		class ons_GesturerechamberC14 :Default
		{
			file = "ONS_Weapons\data\Anim\awc_rechamber_stand.rtm";
			speed = 0.6;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1 };
		};
		class ons_GesturerechamberC14_Prone :Default
		{
			file = "ONS_Weapons\data\Anim\awc_rechamber_prone.rtm";
			speed = 0.6;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1 };
		};
		class ons_GesturerechamberC14_Context : ons_GesturerechamberC14
		{
				mask = "handsWeapon_context";
		};
		class ONS_GestureReloadC7_Context: ONS_GestureReloadC7
		{
			mask = "handsWeapon_context";
		};
		class ONS_GestureReloadC8_Context: ONS_GestureReloadC8
		{
			mask = "handsWeapon_context";
		};
		class ons_GestureReloadM249_Context : ons_GestureReloadM249
		{
			mask = "handsWeapon_context";
		};
	};
};