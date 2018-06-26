// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_CharacterInfoComponent_generated_h
#error "CharacterInfoComponent.generated.h already included, missing '#pragma once' in CharacterInfoComponent.h"
#endif
#define MYPROJECT_CharacterInfoComponent_generated_h

#define MyProject_Source_MyProject_CharacterInfoComponent_h_24_RPC_WRAPPERS
#define MyProject_Source_MyProject_CharacterInfoComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_CharacterInfoComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterInfoComponent(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_UCharacterInfoComponent(); \
public: \
	DECLARE_CLASS(UCharacterInfoComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UCharacterInfoComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_CharacterInfoComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterInfoComponent(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_UCharacterInfoComponent(); \
public: \
	DECLARE_CLASS(UCharacterInfoComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UCharacterInfoComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_CharacterInfoComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterInfoComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterInfoComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterInfoComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterInfoComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterInfoComponent(UCharacterInfoComponent&&); \
	NO_API UCharacterInfoComponent(const UCharacterInfoComponent&); \
public:


#define MyProject_Source_MyProject_CharacterInfoComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterInfoComponent(UCharacterInfoComponent&&); \
	NO_API UCharacterInfoComponent(const UCharacterInfoComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterInfoComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterInfoComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterInfoComponent)


#define MyProject_Source_MyProject_CharacterInfoComponent_h_24_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_CharacterInfoComponent_h_21_PROLOG
#define MyProject_Source_MyProject_CharacterInfoComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_CharacterInfoComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_CharacterInfoComponent_h_24_RPC_WRAPPERS \
	MyProject_Source_MyProject_CharacterInfoComponent_h_24_INCLASS \
	MyProject_Source_MyProject_CharacterInfoComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_CharacterInfoComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_CharacterInfoComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_CharacterInfoComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_CharacterInfoComponent_h_24_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_CharacterInfoComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_CharacterInfoComponent_h


#define FOREACH_ENUM_ERACEENUM(op) \
	op(ERaceEnum::RE_African) \
	op(ERaceEnum::RE_Antarctican) \
	op(ERaceEnum::RE_Asian) \
	op(ERaceEnum::RE_Australian) \
	op(ERaceEnum::RE_European) \
	op(ERaceEnum::RE_NorthAmerican) \
	op(ERaceEnum::RE_SouthAmerican) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
