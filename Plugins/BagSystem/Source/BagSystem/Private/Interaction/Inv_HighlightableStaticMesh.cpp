// Fill out your copyright notice in the Description page of Project Settings.


#include "Interaction/Inv_HighlightableStaticMesh.h"
//UE 多人里，同一个物品 Actor 在不同机器上各有一份实例，所以“装备高亮材质”这件事本身不是网络同步行为。
void UInv_HighlightableStaticMesh::Highlight_Implementation()
{
	SetOverlayMaterial(HighlightMaterial);//把材质装备
}

void UInv_HighlightableStaticMesh::UnHighlight_Implementation()
{
	SetOverlayMaterial(nullptr);//取下材质
}