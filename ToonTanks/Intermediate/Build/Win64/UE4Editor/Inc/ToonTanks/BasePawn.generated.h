// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_BasePawn_generated_h
#error "BasePawn.generated.h already included, missing '#pragma once' in BasePawn.h"
#endif
#define TOONTANKS_BasePawn_generated_h

#define ToonTanks_Source_ToonTanks_BasePawn_h_11_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_BasePawn_h_11_RPC_WRAPPERS
#define ToonTanks_Source_ToonTanks_BasePawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTanks_Source_ToonTanks_BasePawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePawn(); \
	friend struct Z_Construct_UClass_ABasePawn_Statics; \
public: \
	DECLARE_CLASS(ABasePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ABasePawn)


#define ToonTanks_Source_ToonTanks_BasePawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesABasePawn(); \
	friend struct Z_Construct_UClass_ABasePawn_Statics; \
public: \
	DECLARE_CLASS(ABasePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ABasePawn)


#define ToonTanks_Source_ToonTanks_BasePawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePawn(ABasePawn&&); \
	NO_API ABasePawn(const ABasePawn&); \
public:


#define ToonTanks_Source_ToonTanks_BasePawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePawn(ABasePawn&&); \
	NO_API ABasePawn(const ABasePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePawn)


#define ToonTanks_Source_ToonTanks_BasePawn_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DeathParticle() { return STRUCT_OFFSET(ABasePawn, DeathParticle); } \
	FORCEINLINE static uint32 __PPO__CapsuleComponent() { return STRUCT_OFFSET(ABasePawn, CapsuleComponent); } \
	FORCEINLINE static uint32 __PPO__SM_BaseMesh() { return STRUCT_OFFSET(ABasePawn, SM_BaseMesh); } \
	FORCEINLINE static uint32 __PPO__SM_Turret() { return STRUCT_OFFSET(ABasePawn, SM_Turret); } \
	FORCEINLINE static uint32 __PPO__BulletSpawnPoint() { return STRUCT_OFFSET(ABasePawn, BulletSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ABasePawn, ProjectileClass); }


#define ToonTanks_Source_ToonTanks_BasePawn_h_8_PROLOG
#define ToonTanks_Source_ToonTanks_BasePawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_BasePawn_h_11_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_BasePawn_h_11_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_BasePawn_h_11_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_BasePawn_h_11_INCLASS \
	ToonTanks_Source_ToonTanks_BasePawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_BasePawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_BasePawn_h_11_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_BasePawn_h_11_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_BasePawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_BasePawn_h_11_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_BasePawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class ABasePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_BasePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
