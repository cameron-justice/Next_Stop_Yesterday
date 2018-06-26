// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MYPROJECT_ButtonTriggerBox_generated_h
#error "ButtonTriggerBox.generated.h already included, missing '#pragma once' in ButtonTriggerBox.h"
#endif
#define MYPROJECT_ButtonTriggerBox_generated_h

#define MyProject_Source_MyProject_ButtonTriggerBox_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_ButtonTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_ButtonTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAButtonTriggerBox(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AButtonTriggerBox(); \
public: \
	DECLARE_CLASS(AButtonTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AButtonTriggerBox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_ButtonTriggerBox_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAButtonTriggerBox(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AButtonTriggerBox(); \
public: \
	DECLARE_CLASS(AButtonTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AButtonTriggerBox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_ButtonTriggerBox_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AButtonTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AButtonTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AButtonTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AButtonTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AButtonTriggerBox(AButtonTriggerBox&&); \
	NO_API AButtonTriggerBox(const AButtonTriggerBox&); \
public:


#define MyProject_Source_MyProject_ButtonTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AButtonTriggerBox(AButtonTriggerBox&&); \
	NO_API AButtonTriggerBox(const AButtonTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AButtonTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AButtonTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AButtonTriggerBox)


#define MyProject_Source_MyProject_ButtonTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_ButtonTriggerBox_h_12_PROLOG
#define MyProject_Source_MyProject_ButtonTriggerBox_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_ButtonTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_ButtonTriggerBox_h_15_RPC_WRAPPERS \
	MyProject_Source_MyProject_ButtonTriggerBox_h_15_INCLASS \
	MyProject_Source_MyProject_ButtonTriggerBox_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_ButtonTriggerBox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_ButtonTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_ButtonTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_ButtonTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_ButtonTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_ButtonTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
