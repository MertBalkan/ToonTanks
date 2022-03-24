// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/ToonTanksGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToonTanksGameMode() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_AToonTanksGameMode_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_AToonTanksGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References
	void AToonTanksGameMode::StaticRegisterNativesAToonTanksGameMode()
	{
	}
	UClass* Z_Construct_UClass_AToonTanksGameMode_NoRegister()
	{
		return AToonTanksGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AToonTanksGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToonTanksGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToonTanksGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ToonTanksGameMode.h" },
		{ "ModuleRelativePath", "ToonTanksGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToonTanksGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToonTanksGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AToonTanksGameMode_Statics::ClassParams = {
		&AToonTanksGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AToonTanksGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AToonTanksGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AToonTanksGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AToonTanksGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AToonTanksGameMode, 624627206);
	template<> TOONTANKS_API UClass* StaticClass<AToonTanksGameMode>()
	{
		return AToonTanksGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AToonTanksGameMode(Z_Construct_UClass_AToonTanksGameMode, &AToonTanksGameMode::StaticClass, TEXT("/Script/ToonTanks"), TEXT("AToonTanksGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToonTanksGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
