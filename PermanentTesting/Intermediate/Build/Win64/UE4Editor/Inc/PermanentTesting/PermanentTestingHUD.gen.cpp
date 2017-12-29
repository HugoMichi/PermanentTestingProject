// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PermanentTestingHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePermanentTestingHUD() {}
// Cross Module References
	PERMANENTTESTING_API UClass* Z_Construct_UClass_APermanentTestingHUD_NoRegister();
	PERMANENTTESTING_API UClass* Z_Construct_UClass_APermanentTestingHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PermanentTesting();
// End Cross Module References
	void APermanentTestingHUD::StaticRegisterNativesAPermanentTestingHUD()
	{
	}
	UClass* Z_Construct_UClass_APermanentTestingHUD_NoRegister()
	{
		return APermanentTestingHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_APermanentTestingHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_PermanentTesting,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "PermanentTestingHUD.h" },
				{ "ModuleRelativePath", "PermanentTestingHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APermanentTestingHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APermanentTestingHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APermanentTestingHUD, 3301130888);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APermanentTestingHUD(Z_Construct_UClass_APermanentTestingHUD, &APermanentTestingHUD::StaticClass, TEXT("/Script/PermanentTesting"), TEXT("APermanentTestingHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APermanentTestingHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
