// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterMovement/CharacterMovementGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementGameMode() {}
// Cross Module References
	CHARACTERMOVEMENT_API UClass* Z_Construct_UClass_ACharacterMovementGameMode_NoRegister();
	CHARACTERMOVEMENT_API UClass* Z_Construct_UClass_ACharacterMovementGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CharacterMovement();
// End Cross Module References
	void ACharacterMovementGameMode::StaticRegisterNativesACharacterMovementGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACharacterMovementGameMode_NoRegister()
	{
		return ACharacterMovementGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterMovementGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterMovementGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovementGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CharacterMovementGameMode.h" },
		{ "ModuleRelativePath", "CharacterMovementGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterMovementGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterMovementGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterMovementGameMode_Statics::ClassParams = {
		&ACharacterMovementGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterMovementGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovementGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterMovementGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterMovementGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterMovementGameMode, 102381459);
	template<> CHARACTERMOVEMENT_API UClass* StaticClass<ACharacterMovementGameMode>()
	{
		return ACharacterMovementGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterMovementGameMode(Z_Construct_UClass_ACharacterMovementGameMode, &ACharacterMovementGameMode::StaticClass, TEXT("/Script/CharacterMovement"), TEXT("ACharacterMovementGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterMovementGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
