#pragma once

#include "NativeGameplayTags.h"

//所有Item的标签都在这里声明和定义，方便管理和使用。用于区分同类物品中的细分
namespace GameItems
{//用命名空间是为了规范
	namespace Equipment
	{
		namespace Weapons
		{
			UE_DECLARE_GAMEPLAY_TAG_EXTERN(Axe)
			UE_DECLARE_GAMEPLAY_TAG_EXTERN(Sword)
		}

		namespace Cloaks
		{
			UE_DECLARE_GAMEPLAY_TAG_EXTERN(RedCloak)
		}

		namespace Masks
		{
			UE_DECLARE_GAMEPLAY_TAG_EXTERN(SteelMask)
		}
	}

	namespace Consumables
	{
		namespace Potions
		{
			namespace Red
			{
				UE_DECLARE_GAMEPLAY_TAG_EXTERN(Small)
				UE_DECLARE_GAMEPLAY_TAG_EXTERN(Large)
			}

			namespace Blue
			{
				UE_DECLARE_GAMEPLAY_TAG_EXTERN(Small)
				UE_DECLARE_GAMEPLAY_TAG_EXTERN(Large)
			}
		}
	}

	namespace Craftables
	{
		UE_DECLARE_GAMEPLAY_TAG_EXTERN(FireFernFruit)
		UE_DECLARE_GAMEPLAY_TAG_EXTERN(LuminDaisy)
		UE_DECLARE_GAMEPLAY_TAG_EXTERN(ScorchPetalBlossom)
	}
}

