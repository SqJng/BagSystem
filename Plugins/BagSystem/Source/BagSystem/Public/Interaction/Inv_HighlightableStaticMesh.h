// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Inv_Highlightable.h"
#include "Components/StaticMeshComponent.h"
#include "Inv_HighlightableStaticMesh.generated.h"

/**
 * 带高亮能力的 StaticMeshComponent。
 *
 * 目前已经做了：
 * 继承 UStaticMeshComponent
 * 实现 IInv_Highlightable 接口
 * 保存 HighlightMaterial
 * Highlight 时显示高亮材质
 * UnHighlight 时隐藏高亮材质
 *
 * 还没有负责：
 * 拾取逻辑
 * 物品数据
 * 加入背包
 * 判断物品能不能拾取
 * 显示拾取提示
 */
UCLASS()
class BAGSYSTEM_API UInv_HighlightableStaticMesh : public UStaticMeshComponent,public IInv_Highlightable
{
	GENERATED_BODY()
	
public:
	//显示隐藏高亮材质
	virtual void Highlight_Implementation() override;
	virtual void UnHighlight_Implementation() override;

private:

	UPROPERTY(EditAnywhere, Category = "Inventory")
	TObjectPtr<UMaterialInterface> HighlightMaterial;//高亮材质指针
};
