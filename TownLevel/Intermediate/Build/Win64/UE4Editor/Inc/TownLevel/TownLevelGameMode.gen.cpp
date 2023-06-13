// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TownLevel/TownLevelGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTownLevelGameMode() {}
// Cross Module References
	TOWNLEVEL_API UClass* Z_Construct_UClass_ATownLevelGameMode_NoRegister();
	TOWNLEVEL_API UClass* Z_Construct_UClass_ATownLevelGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TownLevel();
// End Cross Module References
	void ATownLevelGameMode::StaticRegisterNativesATownLevelGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATownLevelGameMode_NoRegister()
	{
		return ATownLevelGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATownLevelGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATownLevelGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TownLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATownLevelGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TownLevelGameMode.h" },
		{ "ModuleRelativePath", "TownLevelGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATownLevelGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATownLevelGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATownLevelGameMode_Statics::ClassParams = {
		&ATownLevelGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATownLevelGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATownLevelGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATownLevelGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATownLevelGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATownLevelGameMode, 3761401722);
	template<> TOWNLEVEL_API UClass* StaticClass<ATownLevelGameMode>()
	{
		return ATownLevelGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATownLevelGameMode(Z_Construct_UClass_ATownLevelGameMode, &ATownLevelGameMode::StaticClass, TEXT("/Script/TownLevel"), TEXT("ATownLevelGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATownLevelGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
