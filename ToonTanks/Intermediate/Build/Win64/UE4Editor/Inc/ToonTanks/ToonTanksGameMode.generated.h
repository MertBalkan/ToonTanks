// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_ToonTanksGameMode_generated_h
#error "ToonTanksGameMode.generated.h already included, missing '#pragma once' in ToonTanksGameMode.h"
#endif
#define TOONTANKS_ToonTanksGameMode_generated_h

#define ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_RPC_WRAPPERS
#define ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_EVENT_PARMS \
	struct ToonTanksGameMode_eventGameOver_Parms \
	{ \
		bool bWonGame; \
	};


#define ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_CALLBACK_WRAPPERS
#define ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAToonTanksGameMode(); \
	friend struct Z_Construct_UClass_AToonTanksGameMode_Statics; \
public: \
	DECLARE_CLASS(AToonTanksGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AToonTanksGameMode)


#define ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAToonTanksGameMode(); \
	friend struct Z_Construct_UClass_AToonTanksGameMode_Statics; \
public: \
	DECLARE_CLASS(AToonTanksGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AToonTanksGameMode)


#define ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AToonTanksGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AToonTanksGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AToonTanksGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AToonTanksGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AToonTanksGameMode(AToonTanksGameMode&&); \
	NO_API AToonTanksGameMode(const AToonTanksGameMode&); \
public:


#define ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AToonTanksGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AToonTanksGameMode(AToonTanksGameMode&&); \
	NO_API AToonTanksGameMode(const AToonTanksGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AToonTanksGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AToonTanksGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AToonTanksGameMode)


#define ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_PRIVATE_PROPERTY_OFFSET
#define ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_7_PROLOG \
	ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_EVENT_PARMS


#define ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_CALLBACK_WRAPPERS \
	ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_INCLASS \
	ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_CALLBACK_WRAPPERS \
	ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class AToonTanksGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_ToonTanksGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
