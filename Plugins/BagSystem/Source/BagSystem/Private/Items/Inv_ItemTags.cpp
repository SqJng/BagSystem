#include "Items/Inv_ItemTags.h"
//头文件声明标签，cpp文件定义标签，结构是一样的
namespace GameItems
{
	namespace Equipment
	{
		namespace Weapons
		{//Tag层级和命名空间一一对应。UE_DEFINE_GAMEPLAY_TAG 会创建标签，如果标签已经存在就直接定义，不会重复创建
			UE_DEFINE_GAMEPLAY_TAG_COMMENT(Axe, "GameItems.Equipment.Weapons.Axe", "斧头，近战武器，攻击力较高但攻击速度较慢")
			UE_DEFINE_GAMEPLAY_TAG(Sword, "GameItems.Equipment.Weapons.Sword")
		}

		namespace Cloaks
		{
			UE_DEFINE_GAMEPLAY_TAG(RedCloak, "GameItems.Equipment.Cloaks.RedCloak")
		}

		namespace Masks
		{
			UE_DEFINE_GAMEPLAY_TAG(SteelMask, "GameItems.Equipment.Masks.SteelMask")
		}
	}

	namespace Consumables
	{
		namespace Potions
		{
			namespace Red
			{
				UE_DEFINE_GAMEPLAY_TAG(Small, "GameItems.Consumables.Potions.Red.Small")
				UE_DEFINE_GAMEPLAY_TAG(Large, "GameItems.Consumables.Potions.Red.Large")
			}

			namespace Blue
			{
				UE_DEFINE_GAMEPLAY_TAG(Small, "GameItems.Consumables.Potions.Blue.Small")
				UE_DEFINE_GAMEPLAY_TAG(Large, "GameItems.Consumables.Potions.Blue.Large")
			}
		}
	}

	namespace Craftables
	{
		UE_DEFINE_GAMEPLAY_TAG(FireFernFruit, "GameItems.Craftables.FireFernFruit")
		UE_DEFINE_GAMEPLAY_TAG(LuminDaisy, "GameItems.Craftables.LuminDaisy")
		UE_DEFINE_GAMEPLAY_TAG(ScorchPetalBlossom, "GameItems.Craftables.ScorchPetalBlossom")
	}
}









