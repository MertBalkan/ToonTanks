// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/Tank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_ATank_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_ATank();
	TOONTANKS_API UClass* Z_Construct_UClass_ABasePawn();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ATank::StaticRegisterNativesATank()
	{
	}
	UClass* Z_Construct_UClass_ATank_NoRegister()
	{
		return ATank::StaticClass();
	}
	struct Z_Construct_UClass_ATank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CursorPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tank.h" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_TankMoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_TankMoveSpeed = { "TankMoveSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATank, TankMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_TankMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_TankMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_TurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_TurnRate = { "TurnRate", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATank, TurnRate), METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_TurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_TurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tank Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATank, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tank Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATank, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_CursorPosition_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tank Vectors" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_CursorPosition = { "CursorPosition", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATank, CursorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_CursorPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_CursorPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_TankMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_TurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_CursorPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATank>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATank_Statics::ClassParams = {
		&ATank::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATank_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATank, 4073766291);
	template<> TOONTANKS_API UClass* StaticClass<ATank>()
	{
		return ATank::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATank(Z_Construct_UClass_ATank, &ATank::StaticClass, TEXT("/Script/ToonTanks"), TEXT("ATank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
