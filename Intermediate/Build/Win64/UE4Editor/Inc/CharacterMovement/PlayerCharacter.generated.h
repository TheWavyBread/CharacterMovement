// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHARACTERMOVEMENT_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define CHARACTERMOVEMENT_PlayerCharacter_generated_h

#define CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_SPARSE_DATA
#define CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_RPC_WRAPPERS
#define CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CharacterMovement"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CharacterMovement"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(APlayerCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(APlayerCharacter, CameraComp); }


#define CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_9_PROLOG
#define CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_SPARSE_DATA \
	CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_RPC_WRAPPERS \
	CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_INCLASS \
	CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_SPARSE_DATA \
	CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_INCLASS_NO_PURE_DECLS \
	CharacterMovement_Source_CharacterMovement_PlayerCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHARACTERMOVEMENT_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CharacterMovement_Source_CharacterMovement_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
