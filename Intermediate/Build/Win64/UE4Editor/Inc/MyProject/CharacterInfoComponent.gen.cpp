// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CharacterInfoComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterInfoComponent() {}
// Cross Module References
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_ERaceEnum();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UClass* Z_Construct_UClass_UCharacterInfoComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UCharacterInfoComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	static UEnum* ERaceEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MyProject_ERaceEnum, Z_Construct_UPackage__Script_MyProject(), TEXT("ERaceEnum"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERaceEnum(ERaceEnum_StaticEnum, TEXT("/Script/MyProject"), TEXT("ERaceEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MyProject_ERaceEnum_CRC() { return 1668919354U; }
	UEnum* Z_Construct_UEnum_MyProject_ERaceEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERaceEnum"), 0, Get_Z_Construct_UEnum_MyProject_ERaceEnum_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERaceEnum::RE_African", (int64)ERaceEnum::RE_African },
				{ "ERaceEnum::RE_Antarctican", (int64)ERaceEnum::RE_Antarctican },
				{ "ERaceEnum::RE_Asian", (int64)ERaceEnum::RE_Asian },
				{ "ERaceEnum::RE_Australian", (int64)ERaceEnum::RE_Australian },
				{ "ERaceEnum::RE_European", (int64)ERaceEnum::RE_European },
				{ "ERaceEnum::RE_NorthAmerican", (int64)ERaceEnum::RE_NorthAmerican },
				{ "ERaceEnum::RE_SouthAmerican", (int64)ERaceEnum::RE_SouthAmerican },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "CharacterInfoComponent.h" },
				{ "RE_African.DisplayName", "African" },
				{ "RE_Antarctican.DisplayName", "Antarctican" },
				{ "RE_Asian.DisplayName", "Asian" },
				{ "RE_Australian.DisplayName", "Australian" },
				{ "RE_European.DisplayName", "European" },
				{ "RE_NorthAmerican.DisplayName", "North American" },
				{ "RE_SouthAmerican.DisplayName", "South American" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERaceEnum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERaceEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UCharacterInfoComponent::StaticRegisterNativesUCharacterInfoComponent()
	{
	}
	UClass* Z_Construct_UClass_UCharacterInfoComponent_NoRegister()
	{
		return UCharacterInfoComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UCharacterInfoComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "CharacterInfoComponent.h" },
				{ "ModuleRelativePath", "CharacterInfoComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_race_MetaData[] = {
				{ "Category", "Character Info" },
				{ "ModuleRelativePath", "CharacterInfoComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_race = { UE4CodeGen_Private::EPropertyClass::Enum, "race", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCharacterInfoComponent, race), Z_Construct_UEnum_MyProject_ERaceEnum, METADATA_PARAMS(NewProp_race_MetaData, ARRAY_COUNT(NewProp_race_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_race_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAge_MetaData[] = {
				{ "Category", "Character Info" },
				{ "ModuleRelativePath", "CharacterInfoComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerAge = { UE4CodeGen_Private::EPropertyClass::Byte, "PlayerAge", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCharacterInfoComponent, PlayerAge), nullptr, METADATA_PARAMS(NewProp_PlayerAge_MetaData, ARRAY_COUNT(NewProp_PlayerAge_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
				{ "Category", "Character Info" },
				{ "ModuleRelativePath", "CharacterInfoComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCharacterInfoComponent, PlayerName), METADATA_PARAMS(NewProp_PlayerName_MetaData, ARRAY_COUNT(NewProp_PlayerName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_race,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_race_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerAge,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCharacterInfoComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCharacterInfoComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterInfoComponent, 2762657004);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterInfoComponent(Z_Construct_UClass_UCharacterInfoComponent, &UCharacterInfoComponent::StaticClass, TEXT("/Script/MyProject"), TEXT("UCharacterInfoComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterInfoComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
