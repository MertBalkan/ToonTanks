// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/BasePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePawn() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_ABasePawn_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_ABasePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ABasePawn::StaticRegisterNativesABasePawn()
	{
	}
	UClass* Z_Construct_UClass_ABasePawn_NoRegister()
	{
		return ABasePawn::StaticClass();
	}
	struct Z_Construct_UClass_ABasePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleAnywhereInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisibleAnywhereInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditAnywhereInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditAnywhereInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleInstanceOnlyInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisibleInstanceOnlyInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleDefaultsOnlyInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisibleDefaultsOnlyInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditDefaultsOnlyInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditDefaultsOnlyInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditInstanceOnlyInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditInstanceOnlyInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_BaseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_BaseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_Turret_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_Turret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletSpawnPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasePawn.h" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleAnywhereInt_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleAnywhereInt = { "VisibleAnywhereInt", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, VisibleAnywhereInt), METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleAnywhereInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleAnywhereInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_EditAnywhereInt_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_EditAnywhereInt = { "EditAnywhereInt", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, EditAnywhereInt), METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_EditAnywhereInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_EditAnywhereInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleInstanceOnlyInt_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleInstanceOnlyInt = { "VisibleInstanceOnlyInt", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, VisibleInstanceOnlyInt), METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleInstanceOnlyInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleInstanceOnlyInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleDefaultsOnlyInt_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleDefaultsOnlyInt = { "VisibleDefaultsOnlyInt", nullptr, (EPropertyFlags)0x0010000000030001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, VisibleDefaultsOnlyInt), METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleDefaultsOnlyInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleDefaultsOnlyInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_EditDefaultsOnlyInt_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_EditDefaultsOnlyInt = { "EditDefaultsOnlyInt", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, EditDefaultsOnlyInt), METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_EditDefaultsOnlyInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_EditDefaultsOnlyInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_EditInstanceOnlyInt_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_EditInstanceOnlyInt = { "EditInstanceOnlyInt", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, EditInstanceOnlyInt), METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_EditInstanceOnlyInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_EditInstanceOnlyInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Deneme" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, Health), METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_BaseMesh_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_BaseMesh = { "SM_BaseMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, SM_BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_Turret_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_Turret = { "SM_Turret", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, SM_Turret), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_Turret_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_Turret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_BulletSpawnPoint_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_BulletSpawnPoint = { "BulletSpawnPoint", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, BulletSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_BulletSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_BulletSpawnPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleAnywhereInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_EditAnywhereInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleInstanceOnlyInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleDefaultsOnlyInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_EditDefaultsOnlyInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_EditInstanceOnlyInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_BaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_Turret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_BulletSpawnPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasePawn_Statics::ClassParams = {
		&ABasePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABasePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasePawn, 3466882827);
	template<> TOONTANKS_API UClass* StaticClass<ABasePawn>()
	{
		return ABasePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasePawn(Z_Construct_UClass_ABasePawn, &ABasePawn::StaticClass, TEXT("/Script/ToonTanks"), TEXT("ABasePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
