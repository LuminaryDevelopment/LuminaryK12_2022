#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_tAFBB12867D1B05C187631306E8FFADF52B2E72E8;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_t168F62A5236518B8EDAD06AFD6E258EF8B5C0457;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t96040EB1E30984BEEE1B1302381393D337FD6ABC;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings
struct UnityARCameraSettings_tA0175E923E192DF566A6D03D8D6A9B8672EA8B54;
// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile
struct UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral6798986EE6D13B043A77AFD8D1CABA0C685A8E8C;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDDCA196BAF6654D8B77692DEC6D9E0F6869E7D55 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArEnumConversion
struct ArEnumConversion_tFA225B40A56043C6FAF68FA90424A88C7A7EB53B  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackedPose
struct ArTrackedPose_t081C76102923662BFACD0043487EEFD0DA080C9D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackedPose::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ArTrackedPose_t081C76102923662BFACD0043487EEFD0DA080C9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackingType
struct ArTrackingType_tD4B748B81D8392733E7C3A4560819197458C5F00 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ArTrackingType_tD4B748B81D8392733E7C3A4560819197458C5F00, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArUpdateType
struct ArUpdateType_t461E8D8244FA30A9EAD95BE3FCFB77C0F3754566 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArUpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ArUpdateType_t461E8D8244FA30A9EAD95BE3FCFB77C0F3754566, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___typeName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isEnabled_9)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979  : public BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979, ___U3CIsOpaqueU3Ek__BackingField_14)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_14() const { return ___U3CIsOpaqueU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_14() { return &___U3CIsOpaqueU3Ek__BackingField_14; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_14(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_tAFBB12867D1B05C187631306E8FFADF52B2E72E8  : public BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings
struct UnityARCameraSettings_tA0175E923E192DF566A6D03D8D6A9B8672EA8B54  : public BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979
{
public:
	// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackedPose Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings::poseSource
	int32_t ___poseSource_15;
	// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackingType Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings::trackingType
	int32_t ___trackingType_16;
	// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArUpdateType Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings::updateType
	int32_t ___updateType_17;

public:
	inline static int32_t get_offset_of_poseSource_15() { return static_cast<int32_t>(offsetof(UnityARCameraSettings_tA0175E923E192DF566A6D03D8D6A9B8672EA8B54, ___poseSource_15)); }
	inline int32_t get_poseSource_15() const { return ___poseSource_15; }
	inline int32_t* get_address_of_poseSource_15() { return &___poseSource_15; }
	inline void set_poseSource_15(int32_t value)
	{
		___poseSource_15 = value;
	}

	inline static int32_t get_offset_of_trackingType_16() { return static_cast<int32_t>(offsetof(UnityARCameraSettings_tA0175E923E192DF566A6D03D8D6A9B8672EA8B54, ___trackingType_16)); }
	inline int32_t get_trackingType_16() const { return ___trackingType_16; }
	inline int32_t* get_address_of_trackingType_16() { return &___trackingType_16; }
	inline void set_trackingType_16(int32_t value)
	{
		___trackingType_16 = value;
	}

	inline static int32_t get_offset_of_updateType_17() { return static_cast<int32_t>(offsetof(UnityARCameraSettings_tA0175E923E192DF566A6D03D8D6A9B8672EA8B54, ___updateType_17)); }
	inline int32_t get_updateType_17() const { return ___updateType_17; }
	inline int32_t* get_address_of_updateType_17() { return &___updateType_17; }
	inline void set_updateType_17(int32_t value)
	{
		___updateType_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile
struct UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C  : public BaseCameraSettingsProfile_tAFBB12867D1B05C187631306E8FFADF52B2E72E8
{
public:
	// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackedPose Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile::poseSource
	int32_t ___poseSource_5;
	// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackingType Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile::trackingType
	int32_t ___trackingType_6;
	// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArUpdateType Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile::updateType
	int32_t ___updateType_7;

public:
	inline static int32_t get_offset_of_poseSource_5() { return static_cast<int32_t>(offsetof(UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C, ___poseSource_5)); }
	inline int32_t get_poseSource_5() const { return ___poseSource_5; }
	inline int32_t* get_address_of_poseSource_5() { return &___poseSource_5; }
	inline void set_poseSource_5(int32_t value)
	{
		___poseSource_5 = value;
	}

	inline static int32_t get_offset_of_trackingType_6() { return static_cast<int32_t>(offsetof(UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C, ___trackingType_6)); }
	inline int32_t get_trackingType_6() const { return ___trackingType_6; }
	inline int32_t* get_address_of_trackingType_6() { return &___trackingType_6; }
	inline void set_trackingType_6(int32_t value)
	{
		___trackingType_6 = value;
	}

	inline static int32_t get_offset_of_updateType_7() { return static_cast<int32_t>(offsetof(UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C, ___updateType_7)); }
	inline int32_t get_updateType_7() const { return ___updateType_7; }
	inline int32_t* get_address_of_updateType_7() { return &___updateType_7; }
	inline void set_updateType_7(int32_t value)
	{
		___updateType_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider__ctor_mB850FFB29071196CA5F490DDB2CBE85FF5409F00 (BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_tAFBB12867D1B05C187631306E8FFADF52B2E72E8 * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings::ReadProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARCameraSettings_ReadProfile_m2D9126C2948F9BB416C6BA77F8FDE6FAE8A83D67 (UnityARCameraSettings_tA0175E923E192DF566A6D03D8D6A9B8672EA8B54 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings::get_SettingsProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * UnityARCameraSettings_get_SettingsProfile_m9A08E7093C86F8B2CA80D78795CECCFADE93DCDA (UnityARCameraSettings_tA0175E923E192DF566A6D03D8D6A9B8672EA8B54 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackedPose Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile::get_PoseSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityARCameraSettingsProfile_get_PoseSource_m0B01378EF422BD96ED946139102B94AEF4D14EFC_inline (UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackingType Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile::get_TrackingType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityARCameraSettingsProfile_get_TrackingType_m0D33BE5CDC1025E949906EA766CC1867F66FE23B_inline (UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArUpdateType Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile::get_UpdateType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityARCameraSettingsProfile_get_UpdateType_mE1AFEEA3F95A8F51238ED98B40735A4961AA521C_inline (UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProfile__ctor_m7BE85072A7718CF5EBDE2EDAF0ACF005F75A1BAF (BaseCameraSettingsProfile_tAFBB12867D1B05C187631306E8FFADF52B2E72E8 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARCameraSettings__ctor_m15DA8379841203AA6665C79A3FD827C3BBEB7C8E (UnityARCameraSettings_tA0175E923E192DF566A6D03D8D6A9B8672EA8B54 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_tAFBB12867D1B05C187631306E8FFADF52B2E72E8 * ___profile3, const RuntimeMethod* method)
{
	{
		// private ArTrackedPose poseSource = ArTrackedPose.ColorCamera;
		__this->set_poseSource_15(6);
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_tAFBB12867D1B05C187631306E8FFADF52B2E72E8 * L_3 = ___profile3;
		BaseCameraSettingsProvider__ctor_mB850FFB29071196CA5F490DDB2CBE85FF5409F00(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// ReadProfile();
		UnityARCameraSettings_ReadProfile_m2D9126C2948F9BB416C6BA77F8FDE6FAE8A83D67(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings::ReadProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARCameraSettings_ReadProfile_m2D9126C2948F9BB416C6BA77F8FDE6FAE8A83D67 (UnityARCameraSettings_tA0175E923E192DF566A6D03D8D6A9B8672EA8B54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6798986EE6D13B043A77AFD8D1CABA0C685A8E8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SettingsProfile == null)
		UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * L_0;
		L_0 = UnityARCameraSettings_get_SettingsProfile_m9A08E7093C86F8B2CA80D78795CECCFADE93DCDA(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning("A profile was not specified for the Unity AR Camera Settings provider.\nUsing Microsoft Mixed Reality Toolkit default options.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral6798986EE6D13B043A77AFD8D1CABA0C685A8E8C, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// poseSource = SettingsProfile.PoseSource;
		UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * L_2;
		L_2 = UnityARCameraSettings_get_SettingsProfile_m9A08E7093C86F8B2CA80D78795CECCFADE93DCDA(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UnityARCameraSettingsProfile_get_PoseSource_m0B01378EF422BD96ED946139102B94AEF4D14EFC_inline(L_2, /*hidden argument*/NULL);
		__this->set_poseSource_15(L_3);
		// trackingType = SettingsProfile.TrackingType;
		UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * L_4;
		L_4 = UnityARCameraSettings_get_SettingsProfile_m9A08E7093C86F8B2CA80D78795CECCFADE93DCDA(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = UnityARCameraSettingsProfile_get_TrackingType_m0D33BE5CDC1025E949906EA766CC1867F66FE23B_inline(L_4, /*hidden argument*/NULL);
		__this->set_trackingType_16(L_5);
		// updateType = SettingsProfile.UpdateType;
		UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * L_6;
		L_6 = UnityARCameraSettings_get_SettingsProfile_m9A08E7093C86F8B2CA80D78795CECCFADE93DCDA(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = UnityARCameraSettingsProfile_get_UpdateType_mE1AFEEA3F95A8F51238ED98B40735A4961AA521C_inline(L_6, /*hidden argument*/NULL);
		__this->set_updateType_17(L_7);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityARCameraSettings_get_IsOpaque_m38F9B77E8BFE4E0A3D564632A74A025D7D7B3293 (UnityARCameraSettings_tA0175E923E192DF566A6D03D8D6A9B8672EA8B54 * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsOpaque => poseSource != ArTrackedPose.ColorCamera;
		int32_t L_0 = __this->get_poseSource_15();
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings::get_SettingsProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * UnityARCameraSettings_get_SettingsProfile_m9A08E7093C86F8B2CA80D78795CECCFADE93DCDA (UnityARCameraSettings_tA0175E923E192DF566A6D03D8D6A9B8672EA8B54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityARCameraSettingsProfile SettingsProfile => ConfigurationProfile as UnityARCameraSettingsProfile;
		BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * L_0;
		L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		return ((UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C *)IsInstClass((RuntimeObject*)L_0, UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C_il2cpp_TypeInfo_var));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackedPose Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile::get_PoseSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityARCameraSettingsProfile_get_PoseSource_m0B01378EF422BD96ED946139102B94AEF4D14EFC (UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * __this, const RuntimeMethod* method)
{
	{
		// public ArTrackedPose PoseSource => poseSource;
		int32_t L_0 = __this->get_poseSource_5();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackingType Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile::get_TrackingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityARCameraSettingsProfile_get_TrackingType_m0D33BE5CDC1025E949906EA766CC1867F66FE23B (UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * __this, const RuntimeMethod* method)
{
	{
		// public ArTrackingType TrackingType => trackingType;
		int32_t L_0 = __this->get_trackingType_6();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArUpdateType Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile::get_UpdateType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityARCameraSettingsProfile_get_UpdateType_mE1AFEEA3F95A8F51238ED98B40735A4961AA521C (UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * __this, const RuntimeMethod* method)
{
	{
		// public ArUpdateType UpdateType => updateType;
		int32_t L_0 = __this->get_updateType_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARCameraSettingsProfile__ctor_mACCDA9CE0165F1918CADCF1DD6AD451E73958BE5 (UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * __this, const RuntimeMethod* method)
{
	{
		// private ArTrackedPose poseSource = ArTrackedPose.ColorCamera;
		__this->set_poseSource_5(6);
		BaseCameraSettingsProfile__ctor_m7BE85072A7718CF5EBDE2EDAF0ACF005F75A1BAF(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityARCameraSettingsProfile_get_PoseSource_m0B01378EF422BD96ED946139102B94AEF4D14EFC_inline (UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * __this, const RuntimeMethod* method)
{
	{
		// public ArTrackedPose PoseSource => poseSource;
		int32_t L_0 = __this->get_poseSource_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityARCameraSettingsProfile_get_TrackingType_m0D33BE5CDC1025E949906EA766CC1867F66FE23B_inline (UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * __this, const RuntimeMethod* method)
{
	{
		// public ArTrackingType TrackingType => trackingType;
		int32_t L_0 = __this->get_trackingType_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityARCameraSettingsProfile_get_UpdateType_mE1AFEEA3F95A8F51238ED98B40735A4961AA521C_inline (UnityARCameraSettingsProfile_tC596577057E3D41DAC643F490C01029DA6A3FB2C * __this, const RuntimeMethod* method)
{
	{
		// public ArUpdateType UpdateType => updateType;
		int32_t L_0 = __this->get_updateType_7();
		return L_0;
	}
}
