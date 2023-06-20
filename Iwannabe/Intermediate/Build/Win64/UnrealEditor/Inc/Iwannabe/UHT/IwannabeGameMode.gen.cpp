// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iwannabe/IwannabeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIwannabeGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	IWANNABE_API UClass* Z_Construct_UClass_AIwannabeGameMode();
	IWANNABE_API UClass* Z_Construct_UClass_AIwannabeGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Iwannabe();
// End Cross Module References
	void AIwannabeGameMode::StaticRegisterNativesAIwannabeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIwannabeGameMode);
	UClass* Z_Construct_UClass_AIwannabeGameMode_NoRegister()
	{
		return AIwannabeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIwannabeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIwannabeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Iwannabe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIwannabeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "IwannabeGameMode.h" },
		{ "ModuleRelativePath", "IwannabeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIwannabeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIwannabeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIwannabeGameMode_Statics::ClassParams = {
		&AIwannabeGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AIwannabeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIwannabeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIwannabeGameMode()
	{
		if (!Z_Registration_Info_UClass_AIwannabeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIwannabeGameMode.OuterSingleton, Z_Construct_UClass_AIwannabeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIwannabeGameMode.OuterSingleton;
	}
	template<> IWANNABE_API UClass* StaticClass<AIwannabeGameMode>()
	{
		return AIwannabeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIwannabeGameMode);
	AIwannabeGameMode::~AIwannabeGameMode() {}
	struct Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_IwannabeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_IwannabeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIwannabeGameMode, AIwannabeGameMode::StaticClass, TEXT("AIwannabeGameMode"), &Z_Registration_Info_UClass_AIwannabeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIwannabeGameMode), 3599017599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_IwannabeGameMode_h_2527485515(TEXT("/Script/Iwannabe"),
		Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_IwannabeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_IwannabeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
