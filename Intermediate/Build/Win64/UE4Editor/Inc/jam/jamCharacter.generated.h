// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JAM_jamCharacter_generated_h
#error "jamCharacter.generated.h already included, missing '#pragma once' in jamCharacter.h"
#endif
#define JAM_jamCharacter_generated_h

#define hiyo_Source_jam_jamCharacter_h_12_RPC_WRAPPERS
#define hiyo_Source_jam_jamCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define hiyo_Source_jam_jamCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAjamCharacter(); \
	friend JAM_API class UClass* Z_Construct_UClass_AjamCharacter(); \
public: \
	DECLARE_CLASS(AjamCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/jam"), NO_API) \
	DECLARE_SERIALIZER(AjamCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define hiyo_Source_jam_jamCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAjamCharacter(); \
	friend JAM_API class UClass* Z_Construct_UClass_AjamCharacter(); \
public: \
	DECLARE_CLASS(AjamCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/jam"), NO_API) \
	DECLARE_SERIALIZER(AjamCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define hiyo_Source_jam_jamCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AjamCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AjamCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AjamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AjamCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AjamCharacter(AjamCharacter&&); \
	NO_API AjamCharacter(const AjamCharacter&); \
public:


#define hiyo_Source_jam_jamCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AjamCharacter(AjamCharacter&&); \
	NO_API AjamCharacter(const AjamCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AjamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AjamCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AjamCharacter)


#define hiyo_Source_jam_jamCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AjamCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AjamCharacter, FollowCamera); }


#define hiyo_Source_jam_jamCharacter_h_9_PROLOG
#define hiyo_Source_jam_jamCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	hiyo_Source_jam_jamCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	hiyo_Source_jam_jamCharacter_h_12_RPC_WRAPPERS \
	hiyo_Source_jam_jamCharacter_h_12_INCLASS \
	hiyo_Source_jam_jamCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define hiyo_Source_jam_jamCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	hiyo_Source_jam_jamCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	hiyo_Source_jam_jamCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	hiyo_Source_jam_jamCharacter_h_12_INCLASS_NO_PURE_DECLS \
	hiyo_Source_jam_jamCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID hiyo_Source_jam_jamCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
