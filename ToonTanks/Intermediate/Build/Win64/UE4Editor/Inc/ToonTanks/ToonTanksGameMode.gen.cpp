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
	static FName NAME_AToonTanksGameMode_GameOver = FName(TEXT("GameOver"));
	void AToonTanksGameMode::GameOver(bool bWonGame)
	{
		ToonTanksGameMode_eventGameOver_Parms Parms;
		Parms.bWonGame=bWonGame ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AToonTanksGameMode_GameOver),&Parms);
	}
	static FName NAME_AToonTanksGameMode_StartGame = FName(TEXT("StartGame"));
	void AToonTanksGameMode::StartGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AToonTanksGameMode_StartGame),NULL);
	}
	void AToonTanksGameMode::StaticRegisterNativesAToonTanksGameMode()
	{
	}
	struct Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics
	{
		static void NewProp_bWonGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWonGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::NewProp_bWonGame_SetBit(void* Obj)
	{
		((ToonTanksGameMode_eventGameOver_Parms*)Obj)->bWonGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::NewProp_bWonGame = { "bWonGame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ToonTanksGameMode_eventGameOver_Parms), &Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::NewProp_bWonGame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::NewProp_bWonGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ToonTanksGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToonTanksGameMode, nullptr, "GameOver", nullptr, nullptr, sizeof(ToonTanksGameMode_eventGameOver_Parms), Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AToonTanksGameMode_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AToonTanksGameMode_StartGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToonTanksGameMode_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ToonTanksGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AToonTanksGameMode_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToonTanksGameMode, nullptr, "StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AToonTanksGameMode_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AToonTanksGameMode_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AToonTanksGameMode_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AToonTanksGameMode_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AToonTanksGameMode_NoRegister()
	{
		return AToonTanksGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AToonTanksGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AToonTanksGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AToonTanksGameMode_GameOver, "GameOver" }, // 4197060772
		{ &Z_Construct_UFunction_AToonTanksGameMode_StartGame, "StartGame" }, // 1578700737
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AToonTanksGameMode, 2167189705);
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
