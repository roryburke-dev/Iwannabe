// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iwannabe/Agent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	IWANNABE_API UClass* Z_Construct_UClass_AAgent();
	IWANNABE_API UClass* Z_Construct_UClass_AAgent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Iwannabe();
// End Cross Module References
	void AAgent::StaticRegisterNativesAAgent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAgent);
	UClass* Z_Construct_UClass_AAgent_NoRegister()
	{
		return AAgent::StaticClass();
	}
	struct Z_Construct_UClass_AAgent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAgent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Iwannabe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Agent.h" },
		{ "ModuleRelativePath", "Agent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAgent_Statics::ClassParams = {
		&AAgent::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAgent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAgent()
	{
		if (!Z_Registration_Info_UClass_AAgent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAgent.OuterSingleton, Z_Construct_UClass_AAgent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAgent.OuterSingleton;
	}
	template<> IWANNABE_API UClass* StaticClass<AAgent>()
	{
		return AAgent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgent);
	AAgent::~AAgent() {}
	struct Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_Agent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_Agent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAgent, AAgent::StaticClass, TEXT("AAgent"), &Z_Registration_Info_UClass_AAgent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAgent), 3861830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_Agent_h_4157445460(TEXT("/Script/Iwannabe"),
		Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_Agent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_Agent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
