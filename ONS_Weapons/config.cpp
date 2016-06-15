class CfgPatches
{
	class ONS_Weapons
	{
		units[] = {"ONS_Rifles_Box"};
		weapons[] = {"ONS_W_C8A3"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {};
		ammo[] = {};
	};
};
#include "CfgMovesBasic.hpp"
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
#include "cfgRecoils.hpp"
class CfgWeapons
{
	
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class Zasleh2;
	class ONS_A_556Suppressor: ItemCore
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		displayName = "ONS 5.56 Suppressor";
		picture = "";
		model = "\ons_weapons\ONS_556_Suppressor.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 4;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
				typicalSpeed = 1;
				airFriction = 1;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			soundTypeIndex = 1;
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class c8_base: Rifle_Base_F
	{
		scope = 0;
		magazines[] = {"30Rnd_556X45_NATO","30Rnd_556x45_T_stanag","30rnd_556x45_stanag","30Rnd_300x31_mag"};
		descriptionShort = "C8A3 Carbine made by Colt Canada";
		reloadAction = "ONS_GestureReloadC8";
		reloadTime = 0.1;
		memoryPointCamera = "eye";
		cameraDir = "eye_dir";
		handAnim[] = {"OFP2_ManSkeleton","ONS_Weapons\Data\Anim\carbine_hands.rtm"};
		//SelectionFireAnim = "zasleh";
		picture = "";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"ONS_A_556Suppressor"};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			};
			class PointerSlot: PointerSlot{};
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.2238721,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.2238721,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.2238721,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.2238721,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\ons_weapons\snd\ar15c_close",1,1,10};
				closure2[] = {"\ons_weapons\snd\ar15c_close",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ONS_Weapons\snd\C8.ogg",1,1,1200};
				begin2[] = {"\ONS_Weapons\snd\C8.ogg",1,1,1200};
				begin3[] = {"\ONS_Weapons\snd\C8.ogg",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"\ons_weapons\snd\tails\ar556_forest",1.5,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"\ons_weapons\snd\tails\car15_indoor",1.2,1,1200};
						frequency = 1;
						volume = "interior";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\ons_weapons\snd\m4_suppressed",1,1,200};
				begin2[] = {"\ons_weapons\snd\m4_suppressed",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"\ons_weapons\snd\tails\m4_sil_indoor",1.9952624,1,100};
						frequency = 1;
						volume = "interior";
					};
				};
			};
			begin1[] = {"ons_weapons\snd\ar15c_fire",1,1,1200};
			begin2[] = {"ons_weapons\snd\ar15c_fire",1,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"ons_weapons\snd\ar15c_close",1,1,30};
			closure2[] = {"ons_weapons\snd\ar15c_close",1,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.067;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.000347248;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\ons_weapons\snd\ar15c_close",1,1,10};
				closure2[] = {"\ons_weapons\snd\ar15c_close",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ONS_Weapons\snd\C8.ogg",1,1,1200};
				begin2[] = {"\ONS_Weapons\snd\C8.ogg",1,1,1200};
				begin3[] = {"\ONS_Weapons\snd\C8.ogg",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"\ons_weapons\snd\tails\ar556_forest",1.5,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"\ons_weapons\snd\tails\car15_indoor",1.2,1,1200};
						frequency = 1;
						volume = "interior";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\ons_weapons\snd\m4_suppressed",1,1,200};
				begin2[] = {"\ons_weapons\snd\m4_suppressed",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"\ons_weapons\snd\tails\m4_sil_indoor",1.9952624,1,100};
						frequency = 1;
						volume = "interior";
					};
				};
			};
			begin1[] = {"ons_weapons\snd\ar15c_fire",1,1,1200};
			begin2[] = {"ons_weapons\snd\ar15c_fire",1,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"ons_weapons\snd\ar15c_close",1,1,30};
			closure2[] = {"ons_weapons\snd\ar15c_close",1,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.079;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			dispersion = 0.000347248;
			maxrange = 60;
			maxrangeprobab = 0.05;
			midrange = 30;
			midrangeprobab = 0.7;
			minrange = 1;
			minrangeprobab = 0.3;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		class M203: UGL_F
		{
			displayName = "M203";
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {100,200,300};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3"};
			discreteDistanceInitIndex = 1;
			sound[] = {"A3\sounds_f\Weapons\grenades\ugl_shot_4",1.12202,1,200};
			reloadMagazineSound[] = {"A3\sounds_f\Weapons\grenades\ugl_reload",0.501187,1,20};
			drySound[] = {"A3\sounds_f\Weapons\other\sfx5",1.0,1,30};
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		drySound[] = {"A3\sounds_f\weapons\Other\dry6",0.39810717,1,15};
		reloadMagazineSound[] = {"ONS_Weapons\snd\AR15C_reload",1.0,1,10};
		class Library
		{
			libTextDesc = "Colt Canada C8A3";
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "C8A3";
			onHoverText = "TODO C8A3 DSS";
		};
	};
		class ONS_W_c8a3: C8_Base
	{
		scope = 2;
		displayname = "C8A3";
		model = "\ons_weapons\ONS_C8A3.p3d";
		picture = "\ons_weapons\data\UI\C8A3_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"ONS_A_556Suppressor"};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_SOS","optic_tws","optic_Nightstalker","optic_NVS","ons_c79Elcan","ons_c79Elcan_3D"};
			};
			class PointerSlot: PointerSlot{};
		};
	};
	class ONS_W_c8a3_RIS: C8_Base
	{
		scope = 2;
		displayname = "C8 SFW";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_afg.rtm"};
		model = "\ons_weapons\ONS_C8SFW.p3d";
		picture = "\ons_weapons\data\UI\C8A3_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"ONS_A_556Suppressor"};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_SOS","optic_tws","optic_Nightstalker","optic_NVS","ons_c79Elcan","ons_c79Elcan_3D"};
			};
			class PointerSlot: PointerSlot{};
		};
	};
	};