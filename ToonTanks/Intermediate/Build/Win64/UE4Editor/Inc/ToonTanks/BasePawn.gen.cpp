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
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOONTANKS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathParticle;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_DeathParticle_MetaData[] = {
		{ "Category", "Base Pawn Particles" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_DeathParticle = { "DeathParticle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, DeathParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_DeathParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_DeathParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Base Pawn Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_BaseMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Base Pawn Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_BaseMesh = { "SM_BaseMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, SM_BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_Turret_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Base Pawn Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_Turret = { "SM_Turret", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, SM_Turret), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_Turret_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_Turret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_BulletSpawnPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Base Pawn Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_BulletSpawnPoint = { "BulletSpawnPoint", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, BulletSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_BulletSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_BulletSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_DeathParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_BaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_SM_Turret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_BulletSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_ProjectileClass,
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
	IMPLEMENT_CLASS(ABasePawn, 3759332662);
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
