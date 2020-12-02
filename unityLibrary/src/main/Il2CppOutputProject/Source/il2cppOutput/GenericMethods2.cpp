#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
struct MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D;
// System.Threading.SemaphoreSlim/TaskNode
struct TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Runtime.CompilerServices.AsyncMethodBuilderCore_MoveNextRunner
struct  MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D  : public RuntimeObject
{
public:
	// System.Threading.ExecutionContext System.Runtime.CompilerServices.AsyncMethodBuilderCore_MoveNextRunner::m_context
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_context_0;
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore_MoveNextRunner::m_stateMachine
	RuntimeObject* ___m_stateMachine_1;

public:
	inline static int32_t get_offset_of_m_context_0() { return static_cast<int32_t>(offsetof(MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D, ___m_context_0)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_context_0() const { return ___m_context_0; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_context_0() { return &___m_context_0; }
	inline void set_m_context_0(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_context_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_context_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateMachine_1() { return static_cast<int32_t>(offsetof(MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D, ___m_stateMachine_1)); }
	inline RuntimeObject* get_m_stateMachine_1() const { return ___m_stateMachine_1; }
	inline RuntimeObject** get_address_of_m_stateMachine_1() { return &___m_stateMachine_1; }
	inline void set_m_stateMachine_1(RuntimeObject* value)
	{
		___m_stateMachine_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_1), (void*)value);
	}
};

struct MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D_StaticFields
{
public:
	// System.Threading.ContextCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore_MoveNextRunner::s_invokeMoveNext
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_invokeMoveNext_2;

public:
	inline static int32_t get_offset_of_s_invokeMoveNext_2() { return static_cast<int32_t>(offsetof(MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D_StaticFields, ___s_invokeMoveNext_2)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_invokeMoveNext_2() const { return ___s_invokeMoveNext_2; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_invokeMoveNext_2() { return &___s_invokeMoveNext_2; }
	inline void set_s_invokeMoveNext_2(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_invokeMoveNext_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_invokeMoveNext_2), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.Threading.SynchronizationContext
struct  SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Boolean>
struct  ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Threading.Tasks.Task>
struct  ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78, ___m_task_0)); }
	inline Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Threading.CancellationToken
struct  CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Threading.ExecutionContext_Reader
struct  Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C 
{
public:
	// System.Threading.ExecutionContext System.Threading.ExecutionContext_Reader::m_ec
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ec_0;

public:
	inline static int32_t get_offset_of_m_ec_0() { return static_cast<int32_t>(offsetof(Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C, ___m_ec_0)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ec_0() const { return ___m_ec_0; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ec_0() { return &___m_ec_0; }
	inline void set_m_ec_0(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ec_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ec_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.ExecutionContext/Reader
struct Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshaled_pinvoke
{
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ec_0;
};
// Native definition for COM marshalling of System.Threading.ExecutionContext/Reader
struct Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshaled_com
{
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ec_0;
};

// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct  AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_task_2)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Threading.ExecutionContextSwitcher
struct  ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 
{
public:
	// System.Threading.ExecutionContext_Reader System.Threading.ExecutionContextSwitcher::outerEC
	Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C  ___outerEC_0;
	// System.Boolean System.Threading.ExecutionContextSwitcher::outerECBelongsToScope
	bool ___outerECBelongsToScope_1;
	// System.Object System.Threading.ExecutionContextSwitcher::hecsw
	RuntimeObject * ___hecsw_2;
	// System.Threading.Thread System.Threading.ExecutionContextSwitcher::thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___thread_3;

public:
	inline static int32_t get_offset_of_outerEC_0() { return static_cast<int32_t>(offsetof(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277, ___outerEC_0)); }
	inline Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C  get_outerEC_0() const { return ___outerEC_0; }
	inline Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C * get_address_of_outerEC_0() { return &___outerEC_0; }
	inline void set_outerEC_0(Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C  value)
	{
		___outerEC_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___outerEC_0))->___m_ec_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_outerECBelongsToScope_1() { return static_cast<int32_t>(offsetof(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277, ___outerECBelongsToScope_1)); }
	inline bool get_outerECBelongsToScope_1() const { return ___outerECBelongsToScope_1; }
	inline bool* get_address_of_outerECBelongsToScope_1() { return &___outerECBelongsToScope_1; }
	inline void set_outerECBelongsToScope_1(bool value)
	{
		___outerECBelongsToScope_1 = value;
	}

	inline static int32_t get_offset_of_hecsw_2() { return static_cast<int32_t>(offsetof(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277, ___hecsw_2)); }
	inline RuntimeObject * get_hecsw_2() const { return ___hecsw_2; }
	inline RuntimeObject ** get_address_of_hecsw_2() { return &___hecsw_2; }
	inline void set_hecsw_2(RuntimeObject * value)
	{
		___hecsw_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hecsw_2), (void*)value);
	}

	inline static int32_t get_offset_of_thread_3() { return static_cast<int32_t>(offsetof(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277, ___thread_3)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_thread_3() const { return ___thread_3; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_thread_3() { return &___thread_3; }
	inline void set_thread_3(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___thread_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thread_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.ExecutionContextSwitcher
struct ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshaled_pinvoke
{
	Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshaled_pinvoke ___outerEC_0;
	int32_t ___outerECBelongsToScope_1;
	Il2CppIUnknown* ___hecsw_2;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___thread_3;
};
// Native definition for COM marshalling of System.Threading.ExecutionContextSwitcher
struct ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshaled_com
{
	Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshaled_com ___outerEC_0;
	int32_t ___outerECBelongsToScope_1;
	Il2CppIUnknown* ___hecsw_2;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___thread_3;
};

// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31
struct  U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F 
{
public:
	// System.Int32 System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// System.Threading.SemaphoreSlim_TaskNode System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::asyncWaiter
	TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * ___asyncWaiter_3;
	// System.Int32 System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::millisecondsTimeout
	int32_t ___millisecondsTimeout_4;
	// System.Threading.CancellationTokenSource System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<cts>5__1
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___U3CctsU3E5__1_5;
	// System.Threading.SemaphoreSlim System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<>4__this
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___U3CU3E4__this_6;
	// System.Object System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<>7__wrap1
	RuntimeObject * ___U3CU3E7__wrap1_7;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Threading.Tasks.Task> System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<>u__1
	ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  ___U3CU3Eu__1_8;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Boolean> System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<>u__2
	ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  ___U3CU3Eu__2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_asyncWaiter_3() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___asyncWaiter_3)); }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * get_asyncWaiter_3() const { return ___asyncWaiter_3; }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E ** get_address_of_asyncWaiter_3() { return &___asyncWaiter_3; }
	inline void set_asyncWaiter_3(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * value)
	{
		___asyncWaiter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asyncWaiter_3), (void*)value);
	}

	inline static int32_t get_offset_of_millisecondsTimeout_4() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___millisecondsTimeout_4)); }
	inline int32_t get_millisecondsTimeout_4() const { return ___millisecondsTimeout_4; }
	inline int32_t* get_address_of_millisecondsTimeout_4() { return &___millisecondsTimeout_4; }
	inline void set_millisecondsTimeout_4(int32_t value)
	{
		___millisecondsTimeout_4 = value;
	}

	inline static int32_t get_offset_of_U3CctsU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CctsU3E5__1_5)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_U3CctsU3E5__1_5() const { return ___U3CctsU3E5__1_5; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_U3CctsU3E5__1_5() { return &___U3CctsU3E5__1_5; }
	inline void set_U3CctsU3E5__1_5(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___U3CctsU3E5__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CctsU3E5__1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_6() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CU3E4__this_6)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_U3CU3E4__this_6() const { return ___U3CU3E4__this_6; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_U3CU3E4__this_6() { return &___U3CU3E4__this_6; }
	inline void set_U3CU3E4__this_6(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___U3CU3E4__this_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_7() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CU3E7__wrap1_7)); }
	inline RuntimeObject * get_U3CU3E7__wrap1_7() const { return ___U3CU3E7__wrap1_7; }
	inline RuntimeObject ** get_address_of_U3CU3E7__wrap1_7() { return &___U3CU3E7__wrap1_7; }
	inline void set_U3CU3E7__wrap1_7(RuntimeObject * value)
	{
		___U3CU3E7__wrap1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CU3Eu__1_8)); }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_9() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CU3Eu__2_9)); }
	inline ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  get_U3CU3Eu__2_9() const { return ___U3CU3Eu__2_9; }
	inline ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * get_address_of_U3CU3Eu__2_9() { return &___U3CU3Eu__2_9; }
	inline void set_U3CU3Eu__2_9(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  value)
	{
		___U3CU3Eu__2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_9))->___m_task_0), (void*)NULL);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);

// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::PrepareConstrainedRegions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_PrepareConstrainedRegions_m4A4D3987FEE068EE30D1ABC4005CDD29D5C52560 (const RuntimeMethod* method);
// System.Void System.Threading.ExecutionContext::EstablishCopyOnWriteScope(System.Threading.ExecutionContextSwitcher&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_EstablishCopyOnWriteScope_m526741703B27626D3AD07B14ADA3FECBF5C4E8DD (ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 * ___ecsw0, const RuntimeMethod* method);
// System.Void System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_MoveNext_mB5E635B57C016D9A7039342703EB200F7BE8218E (U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * __this, const RuntimeMethod* method);
// System.Void System.Threading.ExecutionContextSwitcher::Undo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContextSwitcher_Undo_mEC7752EB8502405D0F45F0E337C1B1FF34B74BF8 (ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_gshared)(__this, ___stateMachine0, method);
}
// System.Boolean System.Threading.Tasks.AsyncCausalityTracer::get_LoggingOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15 (const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::GetCompletionAction(System.Threading.Tasks.Task,System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * AsyncMethodBuilderCore_GetCompletionAction_m7FE7F57CC452F0EDE870AB08EEB648E2027D4F5C (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___taskForTracing0, MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D ** ___runnerToInitialize1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncMethodBuilderCore::PostBoxInitialization(System.Runtime.CompilerServices.IAsyncStateMachine,System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderCore_PostBoxInitialization_m22C1D9A2745255C6FC1426D4CB0C4355FBDA07E3 (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * __this, RuntimeObject* ___stateMachine0, MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D * ___runner1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___builtTask2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncMethodBuilderCore::ThrowAsync(System.Exception,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderCore_ThrowAsync_m69800E9752B30F7A1D824C2F1EBDEBA44BA75610 (Exception_t * ___exception0, SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___targetContext1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, RuntimeObject **, RuntimeObject **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Object>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, RuntimeObject **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		goto IL_0018;
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_RuntimeMethod_var);
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 ));
		RuntimeHelpers_PrepareConstrainedRegions_m4A4D3987FEE068EE30D1ABC4005CDD29D5C52560(/*hidden argument*/NULL);
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_il2cpp_TypeInfo_var);
		ExecutionContext_EstablishCopyOnWriteScope_m526741703B27626D3AD07B14ADA3FECBF5C4E8DD((ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(&V_0), /*hidden argument*/NULL);
		U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * L_2 = ___stateMachine0;
		U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_MoveNext_mB5E635B57C016D9A7039342703EB200F7BE8218E((U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F *)(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F *)L_2, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x42, FINALLY_003a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		ExecutionContextSwitcher_Undo_mEC7752EB8502405D0F45F0E337C1B1FF34B74BF8((ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_AdjustorThunk (RuntimeObject * __this, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * _thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *>(__this + _offset);
	AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9(_thisAdjusted, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * G_B2_0 = NULL;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * G_B1_0 = NULL;
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * G_B3_0 = NULL;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * G_B3_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			V_0 = (MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D *)NULL;
			AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * L_0 = (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)__this->get_address_of_m_coreState_1();
			bool L_1 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
			G_B1_0 = L_0;
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012;
			}
		}

IL_000f:
		{
			G_B3_0 = ((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018;
		}

IL_0012:
		{
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_2 = AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB((AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018:
		{
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = AsyncMethodBuilderCore_GetCompletionAction_m7FE7F57CC452F0EDE870AB08EEB648E2027D4F5C((AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)G_B3_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)G_B3_0, (MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D **)(MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D **)(&V_0), /*hidden argument*/NULL);
			V_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_3;
			AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * L_4 = (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)__this->get_address_of_m_coreState_1();
			RuntimeObject* L_5 = (RuntimeObject*)L_4->get_m_stateMachine_0();
			if (L_5)
			{
				goto IL_004c;
			}
		}

IL_002d:
		{
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_6 = AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB((AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
			V_2 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_6;
			AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * L_7 = (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)__this->get_address_of_m_coreState_1();
			RuntimeObject ** L_8 = ___stateMachine1;
			RuntimeObject * L_9 = (*(RuntimeObject **)L_8);
			MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D * L_10 = V_0;
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_11 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_m22C1D9A2745255C6FC1426D4CB0C4355FBDA07E3((AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)L_7, (RuntimeObject*)L_9, (MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D *)L_10, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_11, /*hidden argument*/NULL);
		}

IL_004c:
		{
			RuntimeObject ** L_12 = ___awaiter0;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = V_1;
			NullCheck((RuntimeObject*)(*L_12));
			InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void System.Runtime.CompilerServices.ICriticalNotifyCompletion::UnsafeOnCompleted(System.Action) */, ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_12), (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_13);
			goto IL_0063;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005b;
		throw e;
	}

CATCH_005b:
	{ // begin catch(System.Exception)
		AsyncMethodBuilderCore_ThrowAsync_m69800E9752B30F7A1D824C2F1EBDEBA44BA75610((Exception_t *)((Exception_t *)__exception_local), (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 *)NULL, /*hidden argument*/NULL);
		goto IL_0063;
	} // end catch (depth: 1)

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE_AdjustorThunk (RuntimeObject * __this, RuntimeObject ** ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * _thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE(_thisAdjusted, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject ** L_0 = ___stateMachine0;
		RuntimeObject * L_1 = (*(RuntimeObject **)L_0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_RuntimeMethod_var);
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 ));
		RuntimeHelpers_PrepareConstrainedRegions_m4A4D3987FEE068EE30D1ABC4005CDD29D5C52560(/*hidden argument*/NULL);
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_il2cpp_TypeInfo_var);
		ExecutionContext_EstablishCopyOnWriteScope_m526741703B27626D3AD07B14ADA3FECBF5C4E8DD((ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(&V_0), /*hidden argument*/NULL);
		RuntimeObject ** L_3 = ___stateMachine0;
		NullCheck((RuntimeObject*)(*L_3));
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.Runtime.CompilerServices.IAsyncStateMachine::MoveNext() */, IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_3));
		IL2CPP_LEAVE(0x42, FINALLY_003a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		ExecutionContextSwitcher_Undo_mEC7752EB8502405D0F45F0E337C1B1FF34B74BF8((ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_AdjustorThunk (RuntimeObject * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * _thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *>(__this + _offset);
	AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B(_thisAdjusted, ___stateMachine0, method);
}
