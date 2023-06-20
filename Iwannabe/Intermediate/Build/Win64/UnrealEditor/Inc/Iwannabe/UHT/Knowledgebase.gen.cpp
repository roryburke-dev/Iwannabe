// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iwannabe/Knowledgebase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnowledgebase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	IWANNABE_API UClass* Z_Construct_UClass_AKnowledgebase();
	IWANNABE_API UClass* Z_Construct_UClass_AKnowledgebase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Iwannabe();
// End Cross Module References
	void AKnowledgebase::StaticRegisterNativesAKnowledgebase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKnowledgebase);
	UClass* Z_Construct_UClass_AKnowledgebase_NoRegister()
	{
		return AKnowledgebase::StaticClass();
	}
	struct Z_Construct_UClass_AKnowledgebase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKnowledgebase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Iwannabe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnowledgebase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Knowledgebase.h" },
		{ "ModuleRelativePath", "Knowledgebase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKnowledgebase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKnowledgebase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKnowledgebase_Statics::ClassParams = {
		&AKnowledgebase::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AKnowledgebase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKnowledgebase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKnowledgebase()
	{
		if (!Z_Registration_Info_UClass_AKnowledgebase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKnowledgebase.OuterSingleton, Z_Construct_UClass_AKnowledgebase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKnowledgebase.OuterSingleton;
	}
	template<> IWANNABE_API UClass* StaticClass<AKnowledgebase>()
	{
		return AKnowledgebase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKnowledgebase);
	AKnowledgebase::~AKnowledgebase() {}
	struct Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_Knowledgebase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_Knowledgebase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKnowledgebase, AKnowledgebase::StaticClass, TEXT("AKnowledgebase"), &Z_Registration_Info_UClass_AKnowledgebase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKnowledgebase), 3692564948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_Knowledgebase_h_3722179365(TEXT("/Script/Iwannabe"),
		Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_Knowledgebase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Iwannabe_Source_Iwannabe_Knowledgebase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
