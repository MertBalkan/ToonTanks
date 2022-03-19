// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_Tower_generated_h
#error "Tower.generated.h already included, missing '#pragma once' in Tower.h"
#endif
#define TOONTANKS_Tower_generated_h

#define ToonTanks_Source_ToonTanks_Tower_h_10_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_Tower_h_10_RPC_WRAPPERS
#define ToonTanks_Source_ToonTanks_Tower_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTanks_Source_ToonTanks_Tower_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATower(); \
	friend struct Z_Construct_UClass_ATower_Statics; \
public: \
	DECLARE_CLASS(ATower, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATower)


#define ToonTanks_Source_ToonTanks_Tower_h_10_INCLASS \
private: \
	static void StaticRegisterNativesATower(); \
	friend struct Z_Construct_UClass_ATower_Statics; \
public: \
	DECLARE_CLASS(ATower, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATower)


#define ToonTanks_Source_ToonTanks_Tower_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower(ATower&&); \
	NO_API ATower(const ATower&); \
public:


#define ToonTanks_Source_ToonTanks_Tower_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower(ATower&&); \
	NO_API ATower(const ATower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATower)


#define ToonTanks_Source_ToonTanks_Tower_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FiringRange() { return STRUCT_OFFSET(ATower, FiringRange); }


#define ToonTanks_Source_ToonTanks_Tower_h_7_PROLOG
#define ToonTanks_Source_ToonTanks_Tower_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Tower_h_10_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Tower_h_10_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Tower_h_10_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_Tower_h_10_INCLASS \
	ToonTanks_Source_ToonTanks_Tower_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_Tower_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Tower_h_10_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Tower_h_10_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Tower_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Tower_h_10_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Tower_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class ATower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_Tower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
