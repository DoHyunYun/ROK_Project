// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ReturnOfKing.h"
#include "ReturnOfKing.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1ReturnOfKing() {}
	void AReturnOfKingGameMode::StaticRegisterNativesAReturnOfKingGameMode()
	{
	}
	IMPLEMENT_CLASS(AReturnOfKingGameMode, 528877493);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();

	RETURNOFKING_API class UClass* Z_Construct_UClass_AReturnOfKingGameMode_NoRegister();
	RETURNOFKING_API class UClass* Z_Construct_UClass_AReturnOfKingGameMode();
	RETURNOFKING_API class UPackage* Z_Construct_UPackage__Script_ReturnOfKing();
	UClass* Z_Construct_UClass_AReturnOfKingGameMode_NoRegister()
	{
		return AReturnOfKingGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AReturnOfKingGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage__Script_ReturnOfKing();
			OuterClass = AReturnOfKingGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ReturnOfKingGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ReturnOfKingGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReturnOfKingGameMode(Z_Construct_UClass_AReturnOfKingGameMode, &AReturnOfKingGameMode::StaticClass, TEXT("AReturnOfKingGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReturnOfKingGameMode);
	UPackage* Z_Construct_UPackage__Script_ReturnOfKing()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/ReturnOfKing")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xF5D36CFD;
			Guid.B = 0xBE798343;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
