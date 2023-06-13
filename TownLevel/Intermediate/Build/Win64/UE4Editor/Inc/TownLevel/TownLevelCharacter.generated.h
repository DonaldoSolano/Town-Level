// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWNLEVEL_TownLevelCharacter_generated_h
#error "TownLevelCharacter.generated.h already included, missing '#pragma once' in TownLevelCharacter.h"
#endif
#define TOWNLEVEL_TownLevelCharacter_generated_h

#define TownLevel_Source_TownLevel_TownLevelCharacter_h_12_SPARSE_DATA
#define TownLevel_Source_TownLevel_TownLevelCharacter_h_12_RPC_WRAPPERS
#define TownLevel_Source_TownLevel_TownLevelCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TownLevel_Source_TownLevel_TownLevelCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATownLevelCharacter(); \
	friend struct Z_Construct_UClass_ATownLevelCharacter_Statics; \
public: \
	DECLARE_CLASS(ATownLevelCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TownLevel"), NO_API) \
	DECLARE_SERIALIZER(ATownLevelCharacter)


#define TownLevel_Source_TownLevel_TownLevelCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATownLevelCharacter(); \
	friend struct Z_Construct_UClass_ATownLevelCharacter_Statics; \
public: \
	DECLARE_CLASS(ATownLevelCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TownLevel"), NO_API) \
	DECLARE_SERIALIZER(ATownLevelCharacter)


#define TownLevel_Source_TownLevel_TownLevelCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATownLevelCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATownLevelCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATownLevelCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATownLevelCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATownLevelCharacter(ATownLevelCharacter&&); \
	NO_API ATownLevelCharacter(const ATownLevelCharacter&); \
public:


#define TownLevel_Source_TownLevel_TownLevelCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATownLevelCharacter(ATownLevelCharacter&&); \
	NO_API ATownLevelCharacter(const ATownLevelCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATownLevelCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATownLevelCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATownLevelCharacter)


#define TownLevel_Source_TownLevel_TownLevelCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATownLevelCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATownLevelCharacter, FollowCamera); }


#define TownLevel_Source_TownLevel_TownLevelCharacter_h_9_PROLOG
#define TownLevel_Source_TownLevel_TownLevelCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TownLevel_Source_TownLevel_TownLevelCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TownLevel_Source_TownLevel_TownLevelCharacter_h_12_SPARSE_DATA \
	TownLevel_Source_TownLevel_TownLevelCharacter_h_12_RPC_WRAPPERS \
	TownLevel_Source_TownLevel_TownLevelCharacter_h_12_INCLASS \
	TownLevel_Source_TownLevel_TownLevelCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TownLevel_Source_TownLevel_TownLevelCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TownLevel_Source_TownLevel_TownLevelCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TownLevel_Source_TownLevel_TownLevelCharacter_h_12_SPARSE_DATA \
	TownLevel_Source_TownLevel_TownLevelCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TownLevel_Source_TownLevel_TownLevelCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TownLevel_Source_TownLevel_TownLevelCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWNLEVEL_API UClass* StaticClass<class ATownLevelCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TownLevel_Source_TownLevel_TownLevelCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
