﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784;
// UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// UnityEngine.Events.InvokableCall
struct InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct MessageEventArgs_t6905F6AA12A37C5A38BBCB907E9215622364DCCA;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCall
struct PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.ResolveEventHandler
struct ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2DArray
struct Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C;
// UnityEngine.Texture3D
struct Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101;
// UnityEngine.UnityLogWriter
struct UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D;
// UnityEngine.UnitySynchronizationContext
struct UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Collections.LowLevel.Unsafe.WriteAccessRequiredAttribute
struct WriteAccessRequiredAttribute_t801D798894A40E3789DE39CC4BE0D3B04B852DCA;
// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF;
// UnityEngine.Application/LogCallback
struct LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD;
// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240;
// UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
struct OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t48C36AFA6015405AE4069BB1F3623AF3BC51FDA0;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876;
// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tC029C4F11E384EFEF6FD86B7BEC83D295D098769;
// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t1A8EBE4E3370D09549DE4FD59077B3A7AEAD0C54;
// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tEA47E236E3FCEC75772DAF52911B35E8F14766DD;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t96633FB6A2AE351A4A3FCDF89D10891DA07AD54F;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t7C625D285CBB757F88C0232D12D88EDABF06EB60;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tE64E7CAC5415DCD425D14A6062600087CC872B93;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_tCA1C8C14171C72EC394EF45450D69C1585067BDF;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.Transform/Enumerator
struct Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259;
// UnityEngine.UnhandledExceptionHandler/<>c
struct U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct IEnumerable_1_tCE4ECCD343378F3D3800523073B60FDAB73EA77F;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t0AA6B1123983D70EF4686E9230A4AE3DC192BB3E;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct UnityEvent_1_t5380899C55F3CD7FD1CD64F13EE5E1E4B11D602B;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Collections.Generic.KeyValuePair`2<System.Byte[],System.Text.Encoding>[]
struct KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7;
// UnityEngine.Light[]
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Text.UTF32Encoding
struct UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_tFA66D5AA8F6337DEF8E2B494B3B8C377C9FDB885;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68;
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatUsage_t98D974BA17DF860A91D96AEBF446A2E9BF914336_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral098A172DEA459360162609211F3572251217DFE4;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2C858C708A53B482CEA9BA62F9D7A0CC6A5E3F09;
IL2CPP_EXTERN_C String_t* _stringLiteral3101ED7ACD48624A3ECC70BC8CA746903A32B589;
IL2CPP_EXTERN_C String_t* _stringLiteral393D29E55DA6AB694C34E4CD55DD01405ABE2979;
IL2CPP_EXTERN_C String_t* _stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E;
IL2CPP_EXTERN_C String_t* _stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05;
IL2CPP_EXTERN_C String_t* _stringLiteral53C1FDDFB27F4AC3390BB680F6C9973557316267;
IL2CPP_EXTERN_C String_t* _stringLiteral6B48F4683F01C4D3007AF697B43017699B0D495E;
IL2CPP_EXTERN_C String_t* _stringLiteral9B8F64EE075510D6F35C002ED590FD5A7BE00B34;
IL2CPP_EXTERN_C String_t* _stringLiteralA34FFC54E682CB6088DC765006892669E0B3C5A5;
IL2CPP_EXTERN_C String_t* _stringLiteralAEEADD39FAC5E5FBA4DB890FD04D7348FC618A7D;
IL2CPP_EXTERN_C String_t* _stringLiteralB8F710F417E2D96E747683BF53A8CA9BB6B9648C;
IL2CPP_EXTERN_C String_t* _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
IL2CPP_EXTERN_C String_t* _stringLiteralD6343EA158ACCD33CE0C95B0C5BD499231DEA80B;
IL2CPP_EXTERN_C String_t* _stringLiteralD874F42C13E37C2DC1439129B007C88EBE826695;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D;
IL2CPP_EXTERN_C String_t* _stringLiteralEB8D80CAAEEA45EB1896A03486B82F32A82622C3;
IL2CPP_EXTERN_C String_t* _stringLiteralF23E728301722ADFB4013CAFB98300BDB22AE4D6;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mE3B6053863D44C5F1D341E3608D33EA07D9AF00F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mC8998BD9202FEE7FE0D2F5C2C3DDE2A3B2E3CAE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m2D7540B01275552CA127202F40536B5D5831A907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m38FF3BFEF5EF5F96F6B84F59AEC29C695C4CFD4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m5CE622FEE2BD41D0769D74CDDAD0EA55C07A2025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemInfo_SupportsTextureFormat_mE7DA9DC2B167CB7E9A864924C8772307F1A2F0B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2DArray_Internal_Create_m5DD4264F3965FBE126FAA447C79876C22D36D39C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture3D_Internal_Create_m65B50261584E685D8375F5398311C549271ED1B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture_set_height_mAC3CA245CB260972C0537919C451DBF3BA1A4554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture_set_width_m6BCD23D97A9883DE0FB34E6FF48883F6C09D9F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterUECatcherU3Eb__0_0_mB2E6DD6B9C72FA3D5DB8D311DB281F272A587278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_FindMethod_m665F2360483EC2BE2D190C6EFA4A624FB8722089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mC7E63F58C7EFC8E8747E3619B7564A7325F03D3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ConnectionChangeEvent__ctor_m95EBD8B5EA1C4A14A5F2B71CEE1A2C18C73DB0A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CreateOutputMethod_BeginInvoke_m082AE47F9DFBF0C1787081D2D628E0E5CECCBFF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EncodingUtility__cctor_m6BADEB7670563CC438C10AF259028A7FF06AD65F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogCallback_BeginInvoke_m346CFB69BAB75EF96F9EBA2B3C312A1AD1D4147F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MessageEvent__ctor_mE4D70D8837C51E422C9A40C3F8F34ACB9AB572BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MessageTypeSubscribers__ctor_mA51A6D3E38DBAA5B8237BAB1688F669F24982F29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPerformCulling_BeginInvoke_mAF6E29B6BAC52D4DCAD0C87B8C6939B94566EAA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RequestLightsDelegate_BeginInvoke_m75482E3D4E28205DCB4A202F5C144CB7C95622A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StateChanged_BeginInvoke_m70DAA3720650BA61CA34446A5E19736213E82D4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportedRenderingFeatures_FallbackMixedLightingModeByRef_m517CBD3BBD91EEA5D20CD5979DF8841FE0DBEDAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mB6F953153B328DBFD1F7E444D155F8C53ABCD876_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportedRenderingFeatures_IsLightmapBakeTypeSupported_m8BBA40E9CBAFFD8B176F3812C36DD31D9D60BBEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportedRenderingFeatures_IsLightmapperSupportedByRef_mEAFB23042E154953C780501A57D605F76510BB11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportedRenderingFeatures_IsLightmapsModeSupportedByRef_m3477F21B073DD73F183FAD40A8EEF53843A8A581_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mC13FADD4B8DCEB26F58C6F5DD9D7899A621F9828_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportedRenderingFeatures_IsMixedLightingModeSupported_m8AFE3C9D450B1A6E52A31EA84C1B8F626AAC0CD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportedRenderingFeatures_IsUIOverlayRenderedBySRP_m829585DA31B1BECD1349A02B69657B1D38D2DDC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportedRenderingFeatures__cctor_mCC9E6E14A59B708435BCF2B25BE36943EC590E28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportedRenderingFeatures__ctor_m0612F2A9F55682A7255B3B276E9BAFCFC0CB4EF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportedRenderingFeatures_set_active_m3BC49234CD45C5EFAE64E319D5198CA159143F54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SystemInfo_IsValidEnumValue_mDF4AFDCB30A42032742988AD9BC5E0E00EFA86C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SystemInfo_SupportsTextureFormat_mE7DA9DC2B167CB7E9A864924C8772307F1A2F0B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextAsset_DecodeString_m3CD8D6865DCE58592AE76360F4DB856A6962FE13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture2DArray_Internal_Create_m5DD4264F3965FBE126FAA447C79876C22D36D39C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture2DArray__ctor_m139056CD509EAC819F9713F6A2CAE801D49CA13F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture2DArray__ctor_mB19D8E34783F95713A23A0F06F63EF1B1613E9C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture2DArray__ctor_mEE6D4AD1D7469894FA16627A222EDC34647F6DB3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture3D_Internal_Create_m65B50261584E685D8375F5398311C549271ED1B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture3D__ctor_m666A8D01B0E3B7773C7CDAB624D69E16331CFA36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture3D__ctor_m6DC8372EBD1146127A4CE86F3E65930ABAB6539D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture3D__ctor_m7AE9A6F7E67FE89DEA087647FB3375343D997F4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureMixerPlayable_Equals_m49E1B77DF4F13F35321494AC6B5330538D0A1980_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture_ValidateFormat_mB721DB544C78FC025FC3D3F85AD705D54F1B52CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture_ValidateFormat_mC3C7A3FE51CA18357ABE027958BF97D3C6675D39_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture__cctor_m6474E45E076B9A176073F458843BAC631033F2B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture__ctor_mA6FE9CC0AF05A99FADCEF0BED2FB0C95571AAF4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture_set_height_mAC3CA245CB260972C0537919C451DBF3BA1A4554_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture_set_width_m6BCD23D97A9883DE0FB34E6FF48883F6C09D9F8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterUECatcherU3Eb__0_0_mB2E6DD6B9C72FA3D5DB8D311DB281F272A587278_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass12_0_U3CRegisterU3Eb__0_m27C1416BAD7AF0A1BF83339C8A03865A6487B234_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass13_0_U3CUnregisterU3Eb__0_mBA34804D7BB1B4FFE45D077BBB07BFA81C8DCB00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass6_0_U3CInvokeMessageIdSubscribersU3Eb__0_mEF5D5DFC8F7C2CEC86378AC3BBD40E80A1D9C615_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass7_0_U3CAddAndCreateU3Eb__0_mAA3D205F35F7BE200A5DDD14099F56312FBED909_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass8_0_U3CUnregisterManagedCallbackU3Eb__0_m70805C4CE0F8DD258CC3975A8C90313A0A609BE3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m2A00D547FF8F6F8A03666B4737BB9A0620719987_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m5B3F5B8A2DD74DC42F3E777C1FDD1C880EFA95BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnhandledExceptionHandler_RegisterUECatcher_m3A92AB19701D52AE35F525E9518DAD6763D66A93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEventBase_FindMethod_m665F2360483EC2BE2D190C6EFA4A624FB8722089_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEventBase_FindMethod_m9F887E46F769E2C1D0CFE3C71F98892F9C461025_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEventBase_ToString_m0A3BBFEC8C23E044D52502CE201FE82EEF60A8E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEventTools_TidyAssemblyTypeName_m7ABD7C25EA8BF24C586CD9BD637421A12D8C5B44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_FindMethod_Impl_m763FB43F24EF4A092E26FAE6F6DF561CF360475A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_GetDelegate_m7AD1450601F49B957A87161BE6D14020720A1A56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityException__ctor_m00AA4E67E35F95220B5A1C46C9B59AF4ED0D6274_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityException__ctor_m8E5C592F5F76B6385D4EFDC2C28AA93B020279E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityLogWriter_Init_m84D1792BF114717225B36DD1AA45DC1201BA77FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityLogWriter__ctor_mB7AF0B7C8C546F210699D5F3AA23F370F1963A25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySynchronizationContext_CreateCopy_mBB5F2E7947732680B0715AD92187E89211AE5E61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySynchronizationContext_Exec_mC89E49BFB922E69AAE753887480031A142016F81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySynchronizationContext_ExecutePendingTasks_m7FD629962A8BA72CB2F51583DC393A8FDA672DBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySynchronizationContext_ExecuteTasks_m323E27C0CD442B806D966D024725D9809563E0DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySynchronizationContext_HasPendingTasks_mBA93E72DC46200231B7ABCFB5F22FB0617A1B1EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySynchronizationContext_InitializeSynchronizationContext_mB581D86F8675566DC3A885C15DC5B9A7B8D42CD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySynchronizationContext_Post_mE3277DB5A0DCB461E497EC7B9C13850D4E7AB076_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySynchronizationContext_Send_mEDA081A69B18358B9239E2A46E570466E5FA77F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySynchronizationContext__ctor_m266FAB5B25698C86EC1AC37CE4BBA1FA244BB4FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySynchronizationContext__ctor_mF71A02778FCC672CC2FE4F329D9D6C66C96F70CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2_ToString_m503AFEA3F57B8529C047FF93C2E72126C5591C23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2__cctor_m64DC76912D71BE91E6A3B2D15D63452E2B3AD6EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854UnityEngine_CoreModule1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3__cctor_m1630C6F57B6D41EFCDFC7A10F52A4D2448BFB2E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4_ToString_m0EC6AA83CD606E3EB5BE60108A1D9AC4ECB5517A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4_ToString_mF2D17142EBD75E91BC718B3E347F614AC45E9040_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4__cctor_m35F167F24C48A767EAD837754896B5A5178C078A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorkRequest_Invoke_m1C292B7297918C5F2DBE70971895FE8D5C33AA20_MetadataUsageId;
struct BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A;;
struct BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshaled_pinvoke;
struct BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshaled_pinvoke;;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9;
struct WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext_WorkRequest>
struct  List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA, ____items_1)); }
	inline WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* get__items_1() const { return ____items_1; }
	inline WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_StaticFields, ____emptyArray_5)); }
	inline WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.EventArgs
struct  EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.Binder
struct  Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_4;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_5;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_6;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_7;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_8;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_9;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_10;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_11;

public:
	inline static int32_t get_offset_of_m_members_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_0() const { return ___m_members_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_0() { return &___m_members_0; }
	inline void set_m_members_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_1() const { return ___m_data_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_1() { return &___m_data_1; }
	inline void set_m_data_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_2)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_2() const { return ___m_types_2; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_2() { return &___m_types_2; }
	inline void set_m_types_2(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_3)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_3() const { return ___m_nameToIndex_3; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_3() { return &___m_nameToIndex_3; }
	inline void set_m_nameToIndex_3(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_4)); }
	inline int32_t get_m_currMember_4() const { return ___m_currMember_4; }
	inline int32_t* get_address_of_m_currMember_4() { return &___m_currMember_4; }
	inline void set_m_currMember_4(int32_t value)
	{
		___m_currMember_4 = value;
	}

	inline static int32_t get_offset_of_m_converter_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_5)); }
	inline RuntimeObject* get_m_converter_5() const { return ___m_converter_5; }
	inline RuntimeObject** get_address_of_m_converter_5() { return &___m_converter_5; }
	inline void set_m_converter_5(RuntimeObject* value)
	{
		___m_converter_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_6)); }
	inline String_t* get_m_fullTypeName_6() const { return ___m_fullTypeName_6; }
	inline String_t** get_address_of_m_fullTypeName_6() { return &___m_fullTypeName_6; }
	inline void set_m_fullTypeName_6(String_t* value)
	{
		___m_fullTypeName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_7)); }
	inline String_t* get_m_assemName_7() const { return ___m_assemName_7; }
	inline String_t** get_address_of_m_assemName_7() { return &___m_assemName_7; }
	inline void set_m_assemName_7(String_t* value)
	{
		___m_assemName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_7), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_8)); }
	inline Type_t * get_objectType_8() const { return ___objectType_8; }
	inline Type_t ** get_address_of_objectType_8() { return &___objectType_8; }
	inline void set_objectType_8(Type_t * value)
	{
		___objectType_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_8), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_9)); }
	inline bool get_isFullTypeNameSetExplicit_9() const { return ___isFullTypeNameSetExplicit_9; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_9() { return &___isFullTypeNameSetExplicit_9; }
	inline void set_isFullTypeNameSetExplicit_9(bool value)
	{
		___isFullTypeNameSetExplicit_9 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_10)); }
	inline bool get_isAssemblyNameSetExplicit_10() const { return ___isAssemblyNameSetExplicit_10; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_10() { return &___isAssemblyNameSetExplicit_10; }
	inline void set_isAssemblyNameSetExplicit_10(bool value)
	{
		___isAssemblyNameSetExplicit_10 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_11)); }
	inline bool get_requireSameTokenInPartialTrust_11() const { return ___requireSameTokenInPartialTrust_11; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_11() { return &___requireSameTokenInPartialTrust_11; }
	inline void set_requireSameTokenInPartialTrust_11(bool value)
	{
		___requireSameTokenInPartialTrust_11 = value;
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


// System.Text.DecoderFallback
struct  DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D  : public RuntimeObject
{
public:
	// System.Boolean System.Text.DecoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields
{
public:
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::replacementFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___replacementFallback_1;
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::exceptionFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___exceptionFallback_2;
	// System.Object System.Text.DecoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___replacementFallback_1)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___exceptionFallback_2)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.EncoderFallback
struct  EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4  : public RuntimeObject
{
public:
	// System.Boolean System.Text.EncoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields
{
public:
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::replacementFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___replacementFallback_1;
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::exceptionFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___exceptionFallback_2;
	// System.Object System.Text.EncoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___replacementFallback_1)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___exceptionFallback_2)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
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

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct  UnsafeUtility_tAA965823E05BE8ADD69F58C82BF0DF723476E551  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27, ___m_ObjectArgument_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObjectArgument_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObjectArgumentAssemblyTypeName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringArgument_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};


// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9, ___m_PersistentCalls_0)); }
	inline List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9, ___m_RuntimeCalls_1)); }
	inline List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RuntimeCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9, ___m_ExecutingCalls_2)); }
	inline List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutingCalls_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};


// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t0AA6B1123983D70EF4686E9230A4AE3DC192BB3E * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC, ___m_Calls_0)); }
	inline List_1_t0AA6B1123983D70EF4686E9230A4AE3DC192BB3E * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t0AA6B1123983D70EF4686E9230A4AE3DC192BB3E ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t0AA6B1123983D70EF4686E9230A4AE3DC192BB3E * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.Events.UnityEventTools
struct  UnityEventTools_t91C81DC8D297A00FAD8427BEC49C6773E0950A09  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Experimental.GlobalIllumination.Lightmapping_<>c
struct  U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826_StaticFields
{
public:
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping_<>c UnityEngine.Experimental.GlobalIllumination.Lightmapping_<>c::<>9
	U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct  MessageEventArgs_t6905F6AA12A37C5A38BBCB907E9215622364DCCA  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t6905F6AA12A37C5A38BBCB907E9215622364DCCA, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t6905F6AA12A37C5A38BBCB907E9215622364DCCA, ___data_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerConnection_<>c__DisplayClass20_0
struct  U3CU3Ec__DisplayClass20_0_tEA47E236E3FCEC75772DAF52911B35E8F14766DD  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection_<>c__DisplayClass20_0::msgReceived
	bool ___msgReceived_0;

public:
	inline static int32_t get_offset_of_msgReceived_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tEA47E236E3FCEC75772DAF52911B35E8F14766DD, ___msgReceived_0)); }
	inline bool get_msgReceived_0() const { return ___msgReceived_0; }
	inline bool* get_address_of_msgReceived_0() { return &___msgReceived_0; }
	inline void set_msgReceived_0(bool value)
	{
		___msgReceived_0 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageTypeSubscribers
struct  MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageTypeSubscribers::messageCallback
	MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_messageTypeId_0), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F, ___messageCallback_2)); }
	inline MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageCallback_2), (void*)value);
	}
};


// UnityEngine.SystemInfo
struct  SystemInfo_t649647E096A6051CE590854C2FBEC1E8161CF33C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.TextAsset_EncodingUtility
struct  EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983  : public RuntimeObject
{
public:

public:
};

struct EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields
{
public:
	// System.Collections.Generic.KeyValuePair`2<System.Byte[],System.Text.Encoding>[] UnityEngine.TextAsset_EncodingUtility::encodingLookup
	KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* ___encodingLookup_0;
	// System.Text.Encoding UnityEngine.TextAsset_EncodingUtility::targetEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___targetEncoding_1;

public:
	inline static int32_t get_offset_of_encodingLookup_0() { return static_cast<int32_t>(offsetof(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields, ___encodingLookup_0)); }
	inline KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* get_encodingLookup_0() const { return ___encodingLookup_0; }
	inline KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7** get_address_of_encodingLookup_0() { return &___encodingLookup_0; }
	inline void set_encodingLookup_0(KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* value)
	{
		___encodingLookup_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodingLookup_0), (void*)value);
	}

	inline static int32_t get_offset_of_targetEncoding_1() { return static_cast<int32_t>(offsetof(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields, ___targetEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_targetEncoding_1() const { return ___targetEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_targetEncoding_1() { return &___targetEncoding_1; }
	inline void set_targetEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___targetEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetEncoding_1), (void*)value);
	}
};


// UnityEngine.Time
struct  Time_tCE5C6E624BDC86B30112C860F5622AFA25F1EC9F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Transform_Enumerator
struct  Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform_Enumerator::outer
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___outer_0;
	// System.Int32 UnityEngine.Transform_Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259, ___outer_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_outer_0() const { return ___outer_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outer_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};


// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_tB9372CACCD13A470B7F86851C9707042D211D1DC  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UnhandledExceptionHandler_<>c
struct  U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_StaticFields
{
public:
	// UnityEngine.UnhandledExceptionHandler_<>c UnityEngine.UnhandledExceptionHandler_<>c::<>9
	U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF * ___U3CU3E9_0;
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler_<>c::<>9__0_0
	UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Byte[],System.Text.Encoding>
struct  KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B, ___key_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_key_0() const { return ___key_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B, ___value_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_value_1() const { return ___value_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.ParameterModifier
struct  ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____byRef_0;

public:
	inline static int32_t get_offset_of__byRef_0() { return static_cast<int32_t>(offsetof(ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA, ____byRef_0)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__byRef_0() const { return ____byRef_0; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__byRef_0() { return &____byRef_0; }
	inline void set__byRef_0(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____byRef_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____byRef_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130  : public DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D
{
public:
	// System.String System.Text.DecoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDefault_4), (void*)value);
	}
};


// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418  : public EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4
{
public:
	// System.String System.Text.EncoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDefault_4), (void*)value);
	}
};


// System.Text.UTF32Encoding
struct  UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF32Encoding::emitUTF32ByteOrderMark
	bool ___emitUTF32ByteOrderMark_16;
	// System.Boolean System.Text.UTF32Encoding::isThrowException
	bool ___isThrowException_17;
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_18;

public:
	inline static int32_t get_offset_of_emitUTF32ByteOrderMark_16() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___emitUTF32ByteOrderMark_16)); }
	inline bool get_emitUTF32ByteOrderMark_16() const { return ___emitUTF32ByteOrderMark_16; }
	inline bool* get_address_of_emitUTF32ByteOrderMark_16() { return &___emitUTF32ByteOrderMark_16; }
	inline void set_emitUTF32ByteOrderMark_16(bool value)
	{
		___emitUTF32ByteOrderMark_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}

	inline static int32_t get_offset_of_bigEndian_18() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___bigEndian_18)); }
	inline bool get_bigEndian_18() const { return ___bigEndian_18; }
	inline bool* get_address_of_bigEndian_18() { return &___bigEndian_18; }
	inline void set_bigEndian_18(bool value)
	{
		___bigEndian_18 = value;
	}
};


// System.Text.UTF8Encoding
struct  UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}
};


// System.Text.UnicodeEncoding
struct  UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UnicodeEncoding::isThrowException
	bool ___isThrowException_16;
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_17;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_18;

public:
	inline static int32_t get_offset_of_isThrowException_16() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___isThrowException_16)); }
	inline bool get_isThrowException_16() const { return ___isThrowException_16; }
	inline bool* get_address_of_isThrowException_16() { return &___isThrowException_16; }
	inline void set_isThrowException_16(bool value)
	{
		___isThrowException_16 = value;
	}

	inline static int32_t get_offset_of_bigEndian_17() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___bigEndian_17)); }
	inline bool get_bigEndian_17() const { return ___bigEndian_17; }
	inline bool* get_address_of_bigEndian_17() { return &___bigEndian_17; }
	inline void set_bigEndian_17(bool value)
	{
		___bigEndian_17 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_18() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___byteOrderMark_18)); }
	inline bool get_byteOrderMark_18() const { return ___byteOrderMark_18; }
	inline bool* get_address_of_byteOrderMark_18() { return &___byteOrderMark_18; }
	inline void set_byteOrderMark_18(bool value)
	{
		___byteOrderMark_18 = value;
	}
};

struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_StaticFields
{
public:
	// System.UInt64 System.Text.UnicodeEncoding::highLowPatternMask
	uint64_t ___highLowPatternMask_19;

public:
	inline static int32_t get_offset_of_highLowPatternMask_19() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_StaticFields, ___highLowPatternMask_19)); }
	inline uint64_t get_highLowPatternMask_19() const { return ___highLowPatternMask_19; }
	inline uint64_t* get_address_of_highLowPatternMask_19() { return &___highLowPatternMask_19; }
	inline void set_highLowPatternMask_19(uint64_t value)
	{
		___highLowPatternMask_19 = value;
	}
};


// System.Threading.Thread
struct  Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_tFA66D5AA8F6337DEF8E2B494B3B8C377C9FDB885  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Object System.UnhandledExceptionEventArgs::_Exception
	RuntimeObject * ____Exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_IsTerminating
	bool ____IsTerminating_2;

public:
	inline static int32_t get_offset_of__Exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_tFA66D5AA8F6337DEF8E2B494B3B8C377C9FDB885, ____Exception_1)); }
	inline RuntimeObject * get__Exception_1() const { return ____Exception_1; }
	inline RuntimeObject ** get_address_of__Exception_1() { return &____Exception_1; }
	inline void set__Exception_1(RuntimeObject * value)
	{
		____Exception_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Exception_1), (void*)value);
	}

	inline static int32_t get_offset_of__IsTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_tFA66D5AA8F6337DEF8E2B494B3B8C377C9FDB885, ____IsTerminating_2)); }
	inline bool get__IsTerminating_2() const { return ____IsTerminating_2; }
	inline bool* get_address_of__IsTerminating_2() { return &____IsTerminating_2; }
	inline void set__IsTerminating_2(bool value)
	{
		____IsTerminating_2 = value;
	}
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


// Unity.Collections.LowLevel.Unsafe.WriteAccessRequiredAttribute
struct  WriteAccessRequiredAttribute_t801D798894A40E3789DE39CC4BE0D3B04B852DCA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Unity.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t6897770F57B21F93E440F44DF3D1A5804D6019FA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.BeforeRenderHelper_OrderBlock
struct  OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper_OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper_OrderBlock::callback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___callback_1)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};


// UnityEngine.Events.InvokableCall
struct  InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741, ___Delegate_0)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct  UnityEvent_1_t5380899C55F3CD7FD1CD64F13EE5E1E4B11D602B  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t5380899C55F3CD7FD1CD64F13EE5E1E4B11D602B, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct  LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// UnityEngine.PlayerLoop.EarlyUpdate_ARCoreUpdate
struct  ARCoreUpdate_t345A656C10E6E775CE53726D062F4CECDACD7D56 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ARCoreUpdate_t345A656C10E6E775CE53726D062F4CECDACD7D56__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_AnalyticsCoreStatsUpdate
struct  AnalyticsCoreStatsUpdate_t4A67F117F57258A558CE7C30ECD0DC6BD844E0BC 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AnalyticsCoreStatsUpdate_t4A67F117F57258A558CE7C30ECD0DC6BD844E0BC__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_ClearIntermediateRenderers
struct  ClearIntermediateRenderers_tAC7049D6072F90734E528B90B95C40CF7F90A748 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearIntermediateRenderers_tAC7049D6072F90734E528B90B95C40CF7F90A748__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_ClearLines
struct  ClearLines_t07F570AD58667935AD12B63CD120E9BCB6E95D71 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearLines_t07F570AD58667935AD12B63CD120E9BCB6E95D71__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_DeliverIosPlatformEvents
struct  DeliverIosPlatformEvents_t3BF56C33BEF28195805C74F0ED4B3F53BEDF9049 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DeliverIosPlatformEvents_t3BF56C33BEF28195805C74F0ED4B3F53BEDF9049__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_DispatchEventQueueEvents
struct  DispatchEventQueueEvents_t57DA008DF9012DB2B7B7B093F66207E11F1801C7 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DispatchEventQueueEvents_t57DA008DF9012DB2B7B7B093F66207E11F1801C7__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_ExecuteMainThreadJobs
struct  ExecuteMainThreadJobs_t178184E2A46BE6E4999FB4A6909DA0981128FF19 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExecuteMainThreadJobs_t178184E2A46BE6E4999FB4A6909DA0981128FF19__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_GpuTimestamp
struct  GpuTimestamp_t2AFDA2966ED888A5AD724AAB77422828D4ADBA7F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t GpuTimestamp_t2AFDA2966ED888A5AD724AAB77422828D4ADBA7F__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_PerformanceAnalyticsUpdate
struct  PerformanceAnalyticsUpdate_t1AE3F68BF048267B56AC956F28F48B286F2DB5C6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PerformanceAnalyticsUpdate_t1AE3F68BF048267B56AC956F28F48B286F2DB5C6__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_PhysicsResetInterpolatedTransformPosition
struct  PhysicsResetInterpolatedTransformPosition_t63FDDA90182BA3FA40B3D74870BC99958C67E18C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsResetInterpolatedTransformPosition_t63FDDA90182BA3FA40B3D74870BC99958C67E18C__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_PlayerCleanupCachedData
struct  PlayerCleanupCachedData_t59BB27B35F4901EFD5243D3ACB724C4AB760D97E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerCleanupCachedData_t59BB27B35F4901EFD5243D3ACB724C4AB760D97E__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_PollHtcsPlayerConnection
struct  PollHtcsPlayerConnection_t0701098C7389B5A4ABE7B2D875AF7797FC693C63 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PollHtcsPlayerConnection_t0701098C7389B5A4ABE7B2D875AF7797FC693C63__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_PollPlayerConnection
struct  PollPlayerConnection_tC440AA2EF4FFBE9A131CD21E28FD2C999C9699C9 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PollPlayerConnection_tC440AA2EF4FFBE9A131CD21E28FD2C999C9699C9__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_PresentBeforeUpdate
struct  PresentBeforeUpdate_tF1A8E51EF605A45F3AFA67A3EC4F55D48483E2D0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PresentBeforeUpdate_tF1A8E51EF605A45F3AFA67A3EC4F55D48483E2D0__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_ProcessMouseInWindow
struct  ProcessMouseInWindow_t5E3FFEFC4E6FC09E607DACE6E0CA8DF0CDADFAE6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProcessMouseInWindow_t5E3FFEFC4E6FC09E607DACE6E0CA8DF0CDADFAE6__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_ProcessRemoteInput
struct  ProcessRemoteInput_t42D081A550685F4C78E334CA381D184F08FB62F3 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProcessRemoteInput_t42D081A550685F4C78E334CA381D184F08FB62F3__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_ProfilerStartFrame
struct  ProfilerStartFrame_tAC3E2CF0778F729F11D08358849F7CD4CD585E7C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilerStartFrame_tAC3E2CF0778F729F11D08358849F7CD4CD585E7C__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_RendererNotifyInvisible
struct  RendererNotifyInvisible_t8ED1E3B4D8DE9D108C6EA967C5DB4B59A5BD48E5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RendererNotifyInvisible_t8ED1E3B4D8DE9D108C6EA967C5DB4B59A5BD48E5__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_ResetFrameStatsAfterPresent
struct  ResetFrameStatsAfterPresent_t7E3F5B7774CBAD72CB6EAF576B64A4D7AF24D1D4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ResetFrameStatsAfterPresent_t7E3F5B7774CBAD72CB6EAF576B64A4D7AF24D1D4__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_ScriptRunDelayedStartupFrame
struct  ScriptRunDelayedStartupFrame_tCD3EB2C533206E2243EDBEC265AE32D963A12298 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedStartupFrame_tCD3EB2C533206E2243EDBEC265AE32D963A12298__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_SpriteAtlasManagerUpdate
struct  SpriteAtlasManagerUpdate_t98936A7616CEE98F8447488F9CC817448529250F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SpriteAtlasManagerUpdate_t98936A7616CEE98F8447488F9CC817448529250F__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_TangoUpdate
struct  TangoUpdate_tD6640C8082DC2C21F7864C6D5D5606C435455A68 
{
public:
	union
	{
		struct
		{
		};
		uint8_t TangoUpdate_tD6640C8082DC2C21F7864C6D5D5606C435455A68__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_UnityWebRequestUpdate
struct  UnityWebRequestUpdate_t893B39AA3BF55998BCBF9F6C33C3A24146456781 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UnityWebRequestUpdate_t893B39AA3BF55998BCBF9F6C33C3A24146456781__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_UpdateAsyncReadbackManager
struct  UpdateAsyncReadbackManager_t432611386C4251CC08B4CA68843AAE1B049D116F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAsyncReadbackManager_t432611386C4251CC08B4CA68843AAE1B049D116F__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_UpdateCanvasRectTransform
struct  UpdateCanvasRectTransform_t6BD3BF9EC17DC88DCCACE9DA694623B8184D4C08 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t6BD3BF9EC17DC88DCCACE9DA694623B8184D4C08__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_UpdateInputManager
struct  UpdateInputManager_t4624AF2E3D5322A456E241653B288D4407A070D7 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateInputManager_t4624AF2E3D5322A456E241653B288D4407A070D7__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_UpdateKinect
struct  UpdateKinect_t5BDA1D122E2563A2BD5C16B5BFC9675704984331 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateKinect_t5BDA1D122E2563A2BD5C16B5BFC9675704984331__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_UpdateMainGameViewRect
struct  UpdateMainGameViewRect_tF94FDE58A08AA15EE7B31E9090AC23CD08BF9080 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateMainGameViewRect_tF94FDE58A08AA15EE7B31E9090AC23CD08BF9080__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_UpdatePreloading
struct  UpdatePreloading_t29F051FCC78430BB557F67F99A1E24431DF85AB4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdatePreloading_t29F051FCC78430BB557F67F99A1E24431DF85AB4__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_UpdateStreamingManager
struct  UpdateStreamingManager_tCAB478C327FDE15704577ED0A7CA8A22B2BB8554 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateStreamingManager_tCAB478C327FDE15704577ED0A7CA8A22B2BB8554__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_UpdateTextureStreamingManager
struct  UpdateTextureStreamingManager_tD08A0C8DDF3E6C7970AA5A651B0163D449C21A3A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateTextureStreamingManager_tD08A0C8DDF3E6C7970AA5A651B0163D449C21A3A__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate_XRUpdate
struct  XRUpdate_t718B5C2C28DAC016453B3B52D02EEE90D546A495 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRUpdate_t718B5C2C28DAC016453B3B52D02EEE90D546A495__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate_AudioFixedUpdate
struct  AudioFixedUpdate_t7BB8352EC33E8541EAE347A6ECE127618C347C71 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AudioFixedUpdate_t7BB8352EC33E8541EAE347A6ECE127618C347C71__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate_ClearLines
struct  ClearLines_t1D6D67DA1401D35D871A126DB5A5EF69CCD57721 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearLines_t1D6D67DA1401D35D871A126DB5A5EF69CCD57721__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate_DirectorFixedSampleTime
struct  DirectorFixedSampleTime_t407AD40EC7E9155C6016F3C38DA8B626FF5495D2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedSampleTime_t407AD40EC7E9155C6016F3C38DA8B626FF5495D2__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate_DirectorFixedUpdate
struct  DirectorFixedUpdate_tC33E95FDFBA813B63A0AD9A8446234869AE0EDDA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdate_tC33E95FDFBA813B63A0AD9A8446234869AE0EDDA__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate_DirectorFixedUpdatePostPhysics
struct  DirectorFixedUpdatePostPhysics_t1ADEB661939FF1C092B77D6E72D0B84C2B357346 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdatePostPhysics_t1ADEB661939FF1C092B77D6E72D0B84C2B357346__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate_LegacyFixedAnimationUpdate
struct  LegacyFixedAnimationUpdate_tA84F66DFD94D3FC2604C0AD276D9D61D1039A351 
{
public:
	union
	{
		struct
		{
		};
		uint8_t LegacyFixedAnimationUpdate_tA84F66DFD94D3FC2604C0AD276D9D61D1039A351__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate_NewInputFixedUpdate
struct  NewInputFixedUpdate_t988F4AAC48EC31DD66EAC14BE6EC2DF37ACC10CC 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NewInputFixedUpdate_t988F4AAC48EC31DD66EAC14BE6EC2DF37ACC10CC__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate_Physics2DFixedUpdate
struct  Physics2DFixedUpdate_t4A442ECBB32F36838F630AC8A06CDC557C8C0B68 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Physics2DFixedUpdate_t4A442ECBB32F36838F630AC8A06CDC557C8C0B68__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate_PhysicsClothFixedUpdate
struct  PhysicsClothFixedUpdate_t3CEB0DDEB572CBD9C45085F56EC6788F7EEEB275 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsClothFixedUpdate_t3CEB0DDEB572CBD9C45085F56EC6788F7EEEB275__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate_PhysicsFixedUpdate
struct  PhysicsFixedUpdate_t46121810B20B779B5BA50C78BC94DE2ABEB4D0C2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsFixedUpdate_t46121810B20B779B5BA50C78BC94DE2ABEB4D0C2__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate_ScriptRunBehaviourFixedUpdate
struct  ScriptRunBehaviourFixedUpdate_t7FE48475D8C09E8A4FF93E60B9CEA5B69EC9B203 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourFixedUpdate_t7FE48475D8C09E8A4FF93E60B9CEA5B69EC9B203__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate_ScriptRunDelayedFixedFrameRate
struct  ScriptRunDelayedFixedFrameRate_t85D2FB79D04C22A2A6C8FD81A9B32D9930C23297 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedFixedFrameRate_t85D2FB79D04C22A2A6C8FD81A9B32D9930C23297__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate_XRFixedUpdate
struct  XRFixedUpdate_t6A63A12A03ABAACF0B95B921C5CC15484C467132 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRFixedUpdate_t6A63A12A03ABAACF0B95B921C5CC15484C467132__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Initialization_AsyncUploadTimeSlicedUpdate
struct  AsyncUploadTimeSlicedUpdate_t47FF6A1EB31C45CA8BD817C6D50FCF55CAD91610 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AsyncUploadTimeSlicedUpdate_t47FF6A1EB31C45CA8BD817C6D50FCF55CAD91610__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Initialization_DirectorSampleTime
struct  DirectorSampleTime_tF12AFDE1C2F301238588429E1D63F4B7D28FFA51 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorSampleTime_tF12AFDE1C2F301238588429E1D63F4B7D28FFA51__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Initialization_PlayerUpdateTime
struct  PlayerUpdateTime_tFAFDC539899B8F97BB232721904BEAF398C16CAF 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerUpdateTime_tFAFDC539899B8F97BB232721904BEAF398C16CAF__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Initialization_SynchronizeInputs
struct  SynchronizeInputs_t4F1F899CB89A9DF9090DEBDF21425980C1A216C0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SynchronizeInputs_t4F1F899CB89A9DF9090DEBDF21425980C1A216C0__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Initialization_SynchronizeState
struct  SynchronizeState_tC915C418D749E282696E2D2DC6080CE18C4ABDFA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SynchronizeState_tC915C418D749E282696E2D2DC6080CE18C4ABDFA__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Initialization_XREarlyUpdate
struct  XREarlyUpdate_t9F969CD15ECD221891055EB60CE7A879B6A1AE86 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XREarlyUpdate_t9F969CD15ECD221891055EB60CE7A879B6A1AE86__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_BatchModeUpdate
struct  BatchModeUpdate_t8C6F527A5CA9A7A8E9CCCA61F2E99448C18AEAD2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t BatchModeUpdate_t8C6F527A5CA9A7A8E9CCCA61F2E99448C18AEAD2__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_ClearImmediateRenderers
struct  ClearImmediateRenderers_t37FCF798A50163FCAE31F618A88AA0928C40CAFB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearImmediateRenderers_t37FCF798A50163FCAE31F618A88AA0928C40CAFB__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_DirectorLateUpdate
struct  DirectorLateUpdate_t77313447CF25B5FBC7F6A738FC6B6FE4FB7D3B0E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorLateUpdate_t77313447CF25B5FBC7F6A738FC6B6FE4FB7D3B0E__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_DirectorRenderImage
struct  DirectorRenderImage_t18FF15945AD4A75A4E38086E7E50F0839A6085B9 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorRenderImage_t18FF15945AD4A75A4E38086E7E50F0839A6085B9__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate
struct  EndGraphicsJobsAfterScriptLateUpdate_tE1D20D73472F346D7745C213712D90496E6E9350 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptLateUpdate_tE1D20D73472F346D7745C213712D90496E6E9350__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_EnlightenRuntimeUpdate
struct  EnlightenRuntimeUpdate_t0F7246E586E8744EBF22C6E557A5CDD79D42512F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EnlightenRuntimeUpdate_t0F7246E586E8744EBF22C6E557A5CDD79D42512F__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_ExecuteGameCenterCallbacks
struct  ExecuteGameCenterCallbacks_t6AAA6429F53079FA5779EC93FF422C45F39B6A69 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExecuteGameCenterCallbacks_t6AAA6429F53079FA5779EC93FF422C45F39B6A69__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_FinishFrameRendering
struct  FinishFrameRendering_t6D8F987520D0CABFB634214E47EA6C98A1DE69F5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t FinishFrameRendering_t6D8F987520D0CABFB634214E47EA6C98A1DE69F5__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_GUIClearEvents
struct  GUIClearEvents_t2ACF18A4B2C80DFB240DBE01D7B0B0751C3042ED 
{
public:
	union
	{
		struct
		{
		};
		uint8_t GUIClearEvents_t2ACF18A4B2C80DFB240DBE01D7B0B0751C3042ED__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_InputEndFrame
struct  InputEndFrame_t4E00F58665EC8A4AC407107E6AD65F8D9BE5D496 
{
public:
	union
	{
		struct
		{
		};
		uint8_t InputEndFrame_t4E00F58665EC8A4AC407107E6AD65F8D9BE5D496__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_MemoryFrameMaintenance
struct  MemoryFrameMaintenance_t8641D3964D8E591E9924C60B849CFC8E13781FCA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MemoryFrameMaintenance_t8641D3964D8E591E9924C60B849CFC8E13781FCA__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_ParticleSystemEndUpdateAll
struct  ParticleSystemEndUpdateAll_t0C9862FC07BF69AEC1B23295BF70D3F4862D9DE8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemEndUpdateAll_t0C9862FC07BF69AEC1B23295BF70D3F4862D9DE8__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_PhysicsSkinnedClothBeginUpdate
struct  PhysicsSkinnedClothBeginUpdate_t23CEEF7DB8085BB3831A7670928EDD96A0BD36C1 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothBeginUpdate_t23CEEF7DB8085BB3831A7670928EDD96A0BD36C1__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_PhysicsSkinnedClothFinishUpdate
struct  PhysicsSkinnedClothFinishUpdate_tA2BC6F1632D750962DBB9A5331B880A3964D17C0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothFinishUpdate_tA2BC6F1632D750962DBB9A5331B880A3964D17C0__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_PlayerEmitCanvasGeometry
struct  PlayerEmitCanvasGeometry_tD6837358BC1539ED3BFDA4A14DBA2634D21C7278 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerEmitCanvasGeometry_tD6837358BC1539ED3BFDA4A14DBA2634D21C7278__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_PlayerSendFrameComplete
struct  PlayerSendFrameComplete_tFCB4A131339039D456553596DC33CD625CFF7AAC 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameComplete_tFCB4A131339039D456553596DC33CD625CFF7AAC__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_PlayerSendFramePostPresent
struct  PlayerSendFramePostPresent_t2F6B4A129327E35A001A0C0808FEFF20D1BAFCB6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFramePostPresent_t2F6B4A129327E35A001A0C0808FEFF20D1BAFCB6__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_PlayerSendFrameStarted
struct  PlayerSendFrameStarted_tBE2DDEEFF66EAD5BFC54776035F83F2BBFDC866A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameStarted_tBE2DDEEFF66EAD5BFC54776035F83F2BBFDC866A__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_PlayerUpdateCanvases
struct  PlayerUpdateCanvases_tA3BDD28A248E9294BBA8E93C53AF78B902A24CD4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerUpdateCanvases_tA3BDD28A248E9294BBA8E93C53AF78B902A24CD4__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_PresentAfterDraw
struct  PresentAfterDraw_t26958AF5B43FD8A6101C88833BC41A0F5CE9830A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PresentAfterDraw_t26958AF5B43FD8A6101C88833BC41A0F5CE9830A__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_ProcessWebSendMessages
struct  ProcessWebSendMessages_t5AD55E51AED08DA28C11DF31783B07C7A5128124 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProcessWebSendMessages_t5AD55E51AED08DA28C11DF31783B07C7A5128124__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_ProfilerEndFrame
struct  ProfilerEndFrame_t9D91D2F297E099F92D03834C9FBFF860A8EF45DD 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilerEndFrame_t9D91D2F297E099F92D03834C9FBFF860A8EF45DD__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_ProfilerSynchronizeStats
struct  ProfilerSynchronizeStats_t8B0F4436679D8BAF7D86793D207AD90477D601BB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilerSynchronizeStats_t8B0F4436679D8BAF7D86793D207AD90477D601BB__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_ResetInputAxis
struct  ResetInputAxis_t585B9BDCE262954A57C75B9492FCF7146662E21C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ResetInputAxis_t585B9BDCE262954A57C75B9492FCF7146662E21C__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_ScriptRunDelayedDynamicFrameRate
struct  ScriptRunDelayedDynamicFrameRate_t6D962FA77CFBF776A2D946C07C567B795CF671B4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t6D962FA77CFBF776A2D946C07C567B795CF671B4__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_ShaderHandleErrors
struct  ShaderHandleErrors_t2A99C9332EC9DE30DD16AF1FD18C582E5B02AE92 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ShaderHandleErrors_t2A99C9332EC9DE30DD16AF1FD18C582E5B02AE92__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_SortingGroupsUpdate
struct  SortingGroupsUpdate_tBC21E7D8B383652646C08B9AE743A7EC38733CEF 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SortingGroupsUpdate_tBC21E7D8B383652646C08B9AE743A7EC38733CEF__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_ThreadedLoadingDebug
struct  ThreadedLoadingDebug_t12597D128CC91C40B4C874800B0C3AEBF7DAD04B 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ThreadedLoadingDebug_t12597D128CC91C40B4C874800B0C3AEBF7DAD04B__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_TriggerEndOfFrameCallbacks
struct  TriggerEndOfFrameCallbacks_tB5DD4CDE53AB8C30E72194AB21AFE73BFB4DC424 
{
public:
	union
	{
		struct
		{
		};
		uint8_t TriggerEndOfFrameCallbacks_tB5DD4CDE53AB8C30E72194AB21AFE73BFB4DC424__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_UpdateAllRenderers
struct  UpdateAllRenderers_t96FC2DF53BC1D90C7E40E2CAD10B8C674A94B86C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAllRenderers_t96FC2DF53BC1D90C7E40E2CAD10B8C674A94B86C__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_UpdateAllSkinnedMeshes
struct  UpdateAllSkinnedMeshes_tC6792E38655DE2113814AC6A642B3D937D6640F6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAllSkinnedMeshes_tC6792E38655DE2113814AC6A642B3D937D6640F6__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_UpdateAudio
struct  UpdateAudio_t87394777AB6FE384B45C0C013722C1F68A60CF58 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAudio_t87394777AB6FE384B45C0C013722C1F68A60CF58__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_UpdateCanvasRectTransform
struct  UpdateCanvasRectTransform_t4E5EA2B18FCFD686E1F2052517657E391709422A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t4E5EA2B18FCFD686E1F2052517657E391709422A__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_UpdateCaptureScreenshot
struct  UpdateCaptureScreenshot_t4FC86A971BE4E341EE83B9BCF72D3642CB67E483 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCaptureScreenshot_t4FC86A971BE4E341EE83B9BCF72D3642CB67E483__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_UpdateCustomRenderTextures
struct  UpdateCustomRenderTextures_t52B541FA5A7354ED440E274C6E357EBAA3F4C031 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCustomRenderTextures_t52B541FA5A7354ED440E274C6E357EBAA3F4C031__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_UpdateLightProbeProxyVolumes
struct  UpdateLightProbeProxyVolumes_t42C724BC635B9701939388DCB63A3FF0E882EA3E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateLightProbeProxyVolumes_t42C724BC635B9701939388DCB63A3FF0E882EA3E__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_UpdateRectTransform
struct  UpdateRectTransform_t6290D8B6BF5E990B5F706FE60B4A5CD954D72F13 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateRectTransform_t6290D8B6BF5E990B5F706FE60B4A5CD954D72F13__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_UpdateResolution
struct  UpdateResolution_t8394E04EF0F5C04C0C65B1DF23F0E3E700144B45 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateResolution_t8394E04EF0F5C04C0C65B1DF23F0E3E700144B45__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_UpdateSubstance
struct  UpdateSubstance_tC6E01D9640025CD7D0B09D636C02172D22F66967 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateSubstance_tC6E01D9640025CD7D0B09D636C02172D22F66967__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_UpdateVideo
struct  UpdateVideo_t1E34A645DFD2C4E5243980D958392F6969F3D064 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_t1E34A645DFD2C4E5243980D958392F6969F3D064__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_UpdateVideoTextures
struct  UpdateVideoTextures_t05417287668B8B95121C4236FD3A419DAC091BB5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideoTextures_t05417287668B8B95121C4236FD3A419DAC091BB5__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_VFXUpdate
struct  VFXUpdate_tA520740E78D381B2830822C7FE90A203478B2214 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VFXUpdate_tA520740E78D381B2830822C7FE90A203478B2214__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate_XRPostPresent
struct  XRPostPresent_t1B355F20B2823F13F6FBC66E36526B280B7EA85C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRPostPresent_t1B355F20B2823F13F6FBC66E36526B280B7EA85C__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate_AIUpdatePostScript
struct  AIUpdatePostScript_t8A88713869A78E54E8A68D01A2DAE28612B31BE4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AIUpdatePostScript_t8A88713869A78E54E8A68D01A2DAE28612B31BE4__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate_ConstraintManagerUpdate
struct  ConstraintManagerUpdate_t60B829793DBE56E48C551CA2FC80F7FE82EC0090 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ConstraintManagerUpdate_t60B829793DBE56E48C551CA2FC80F7FE82EC0090__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate_DirectorDeferredEvaluate
struct  DirectorDeferredEvaluate_t1ADCC8CADAB3489481182AE5AE94F2218BA8E08F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorDeferredEvaluate_t1ADCC8CADAB3489481182AE5AE94F2218BA8E08F__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate_DirectorUpdateAnimationBegin
struct  DirectorUpdateAnimationBegin_t1F818F8031BEDE2CDC67F69C0CDFF860F2063A74 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationBegin_t1F818F8031BEDE2CDC67F69C0CDFF860F2063A74__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate_DirectorUpdateAnimationEnd
struct  DirectorUpdateAnimationEnd_tDFC00FCAC7FBFD798572D224654127451FF4CEC1 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationEnd_tDFC00FCAC7FBFD798572D224654127451FF4CEC1__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate_EndGraphicsJobsAfterScriptUpdate
struct  EndGraphicsJobsAfterScriptUpdate_tD208592C17EBA50EB4E2E9B4E4C64C9122AE3C96 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptUpdate_tD208592C17EBA50EB4E2E9B4E4C64C9122AE3C96__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate_LegacyAnimationUpdate
struct  LegacyAnimationUpdate_t4838E9C42DDCC98CF195A798F73DD5E57F559A37 
{
public:
	union
	{
		struct
		{
		};
		uint8_t LegacyAnimationUpdate_t4838E9C42DDCC98CF195A798F73DD5E57F559A37__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate_ParticleSystemBeginUpdateAll
struct  ParticleSystemBeginUpdateAll_t87DCB20B8C93E68E52B943F1E3B31BB091FCA078 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemBeginUpdateAll_t87DCB20B8C93E68E52B943F1E3B31BB091FCA078__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate_ScriptRunBehaviourLateUpdate
struct  ScriptRunBehaviourLateUpdate_t58F4C9331E2958013C6CB7FEF18E370AD5043B9A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourLateUpdate_t58F4C9331E2958013C6CB7FEF18E370AD5043B9A__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate_UIElementsUpdatePanels
struct  UIElementsUpdatePanels_t88C1C5E585CBE9C5230CD7862714798690BF034F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UIElementsUpdatePanels_t88C1C5E585CBE9C5230CD7862714798690BF034F__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate_UNetUpdate
struct  UNetUpdate_tDD911C7D34BC0CE4B5C79DD46C45285E224E21B2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UNetUpdate_tDD911C7D34BC0CE4B5C79DD46C45285E224E21B2__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate_UpdateMasterServerInterface
struct  UpdateMasterServerInterface_t1F40E6F5C301466C446578EF63381B5D1C8DA187 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateMasterServerInterface_t1F40E6F5C301466C446578EF63381B5D1C8DA187__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate_UpdateNetworkManager
struct  UpdateNetworkManager_tBEE4C45468BA0C0DBA98B8C25FC315233267AE2C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateNetworkManager_tBEE4C45468BA0C0DBA98B8C25FC315233267AE2C__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate_AIUpdate
struct  AIUpdate_tACDB7E77F804905AFC0D39674778A62488A22CE2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AIUpdate_tACDB7E77F804905AFC0D39674778A62488A22CE2__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate_CheckTexFieldInput
struct  CheckTexFieldInput_t1FA363405F456B111E58078F4EFAB82912734432 
{
public:
	union
	{
		struct
		{
		};
		uint8_t CheckTexFieldInput_t1FA363405F456B111E58078F4EFAB82912734432__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate_IMGUISendQueuedEvents
struct  IMGUISendQueuedEvents_tF513CA3C17A07868E255F8D5A34C284803A22767 
{
public:
	union
	{
		struct
		{
		};
		uint8_t IMGUISendQueuedEvents_tF513CA3C17A07868E255F8D5A34C284803A22767__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate_NewInputUpdate
struct  NewInputUpdate_tF98FD69B5E9EAFEA02964DFFE852FF6029676308 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NewInputUpdate_tF98FD69B5E9EAFEA02964DFFE852FF6029676308__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate_Physics2DUpdate
struct  Physics2DUpdate_tDC29C716549E1E860FD67BF84EF243D3BA595A60 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Physics2DUpdate_tDC29C716549E1E860FD67BF84EF243D3BA595A60__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate_PhysicsUpdate
struct  PhysicsUpdate_tF321BF0A833E955AED90F182BBC9D6D7D40F2F25 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsUpdate_tF321BF0A833E955AED90F182BBC9D6D7D40F2F25__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate_SendMouseEvents
struct  SendMouseEvents_t2D84BCC439FE9A04E341AD07ECEBF4E8B12D2F9D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SendMouseEvents_t2D84BCC439FE9A04E341AD07ECEBF4E8B12D2F9D__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate_UpdateVideo
struct  UpdateVideo_tE460041F5545E24C8A107B563F971F491286C0BD 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_tE460041F5545E24C8A107B563F971F491286C0BD__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate_WindUpdate
struct  WindUpdate_t40BB9BF39AEE43023A49F0335A9DAC9F91E43150 
{
public:
	union
	{
		struct
		{
		};
		uint8_t WindUpdate_t40BB9BF39AEE43023A49F0335A9DAC9F91E43150__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Update
struct  Update_t32B2954EA10F244F78F2D823FD13488A82A4D9EE 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Update_t32B2954EA10F244F78F2D823FD13488A82A4D9EE__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Update_DirectorUpdate
struct  DirectorUpdate_t4A7FCDCBD027B9D28BFAFF7DEB5F33E0B5E27A85 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdate_t4A7FCDCBD027B9D28BFAFF7DEB5F33E0B5E27A85__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Update_ScriptRunBehaviourUpdate
struct  ScriptRunBehaviourUpdate_tAAEB9BAF1DB9036DFA153F433C2D719A7BC30536 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourUpdate_tAAEB9BAF1DB9036DFA153F433C2D719A7BC30536__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Update_ScriptRunDelayedDynamicFrameRate
struct  ScriptRunDelayedDynamicFrameRate_t1A2D15EEF198E3050B653FD370CBDFE82A46F66E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t1A2D15EEF198E3050B653FD370CBDFE82A46F66E__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Update_ScriptRunDelayedTasks
struct  ScriptRunDelayedTasks_t87535B3420E907071EA14E80AD9D811F29AA978A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedTasks_t87535B3420E907071EA14E80AD9D811F29AA978A__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.ScriptingUtility_TestClass
struct  TestClass_tE31E21A91B6A07C4CA1720FE6B57C980181F3F2C 
{
public:
	// System.Int32 UnityEngine.ScriptingUtility_TestClass::value
	int32_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(TestClass_tE31E21A91B6A07C4CA1720FE6B57C980181F3F2C, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3  : public SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext_WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * ___m_AsyncWorkQueue_0;
	// System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext_WorkRequest> UnityEngine.UnitySynchronizationContext::m_CurrentFrameWork
	List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * ___m_CurrentFrameWork_1;
	// System.Int32 UnityEngine.UnitySynchronizationContext::m_MainThreadID
	int32_t ___m_MainThreadID_2;
	// System.Int32 UnityEngine.UnitySynchronizationContext::m_TrackedCount
	int32_t ___m_TrackedCount_3;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_0() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3, ___m_AsyncWorkQueue_0)); }
	inline List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * get_m_AsyncWorkQueue_0() const { return ___m_AsyncWorkQueue_0; }
	inline List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA ** get_address_of_m_AsyncWorkQueue_0() { return &___m_AsyncWorkQueue_0; }
	inline void set_m_AsyncWorkQueue_0(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * value)
	{
		___m_AsyncWorkQueue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AsyncWorkQueue_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentFrameWork_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3, ___m_CurrentFrameWork_1)); }
	inline List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * get_m_CurrentFrameWork_1() const { return ___m_CurrentFrameWork_1; }
	inline List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA ** get_address_of_m_CurrentFrameWork_1() { return &___m_CurrentFrameWork_1; }
	inline void set_m_CurrentFrameWork_1(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * value)
	{
		___m_CurrentFrameWork_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentFrameWork_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_MainThreadID_2() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3, ___m_MainThreadID_2)); }
	inline int32_t get_m_MainThreadID_2() const { return ___m_MainThreadID_2; }
	inline int32_t* get_address_of_m_MainThreadID_2() { return &___m_MainThreadID_2; }
	inline void set_m_MainThreadID_2(int32_t value)
	{
		___m_MainThreadID_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackedCount_3() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3, ___m_TrackedCount_3)); }
	inline int32_t get_m_TrackedCount_3() const { return ___m_TrackedCount_3; }
	inline int32_t* get_address_of_m_TrackedCount_3() { return &___m_TrackedCount_3; }
	inline void set_m_TrackedCount_3(int32_t value)
	{
		___m_TrackedCount_3 = value;
	}
};


// UnityEngine.UnitySynchronizationContext_WorkRequest
struct  WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext_WorkRequest::m_DelagateCallback
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext_WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext_WorkRequest::m_WaitHandle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateState_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitHandle_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};

// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_0;
	// System.Single UnityEngine.Vector4::y
	float ___y_1;
	// System.Single UnityEngine.Vector4::z
	float ___z_2;
	// System.Single UnityEngine.Vector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_4;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_7;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_6() const { return ___positiveInfinityVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_6() { return &___positiveInfinityVector_6; }
	inline void set_positiveInfinityVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_6 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_7() const { return ___negativeInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_7() { return &___negativeInfinityVector_7; }
	inline void set_negativeInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_7 = value;
	}
};


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.AppDomain
struct  AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___DomainUnload_13)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ProcessExit_14)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ResourceResolve_15)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___TypeResolve_16)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___FirstChanceException_18)); }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___compatibility_switch_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ___default_domain_10)); }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
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

// System.Globalization.NumberStyles
struct  NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.WaitHandle
struct  WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// Unity.Collections.Allocator
struct  Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Jobs.JobHandle
struct  JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// UnityEngine.Camera_MonoOrStereoscopicEye
struct  MonoOrStereoscopicEye_t22538A0C5043C3A233E0332787D3E06DA966703E 
{
public:
	// System.Int32 UnityEngine.Camera_MonoOrStereoscopicEye::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MonoOrStereoscopicEye_t22538A0C5043C3A233E0332787D3E06DA966703E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t8C14676A2C0B75B241D48EDF3BEC3956E768DEED 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t8C14676A2C0B75B241D48EDF3BEC3956E768DEED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t0C02178C38AC6CEA1C9CEAF96EFD05FE755C14A5 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityEventCallState_t0C02178C38AC6CEA1C9CEAF96EFD05FE755C14A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.AngularFalloffType
struct  AngularFalloffType_tE33F65C52CF289A72D8EA70883440F4D993621E2 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.AngularFalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AngularFalloffType_tE33F65C52CF289A72D8EA70883440F4D993621E2, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.Cookie
struct  Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.Cookie::instanceID
	int32_t ___instanceID_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.Cookie::scale
	float ___scale_1;
	// UnityEngine.Vector2 UnityEngine.Experimental.GlobalIllumination.Cookie::sizes
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___sizes_2;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_sizes_2() { return static_cast<int32_t>(offsetof(Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B, ___sizes_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_sizes_2() const { return ___sizes_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_sizes_2() { return &___sizes_2; }
	inline void set_sizes_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___sizes_2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct  FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct  LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct  LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.DefaultFormat
struct  DefaultFormat_t07516FEBB0F52BA4FD627E19343F4B765D5B5E5D 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.DefaultFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultFormat_t07516FEBB0F52BA4FD627E19343F4B765D5B5E5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.FormatUsage
struct  FormatUsage_t98D974BA17DF860A91D96AEBF446A2E9BF914336 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.FormatUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatUsage_t98D974BA17DF860A91D96AEBF446A2E9BF914336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.GraphicsFormat
struct  GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.TextureCreationFlags
struct  TextureCreationFlags_t8DD12B3EF9FDAB7ED2CB356AC7370C3F3E0D415C 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.TextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureCreationFlags_t8DD12B3EF9FDAB7ED2CB356AC7370C3F3E0D415C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LightType
struct  LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14 
{
public:
	// System.Int32 UnityEngine.LightType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LightmapBakeType
struct  LightmapBakeType_t6C5A20612951F0BFB370705B7132297E1F193AC0 
{
public:
	// System.Int32 UnityEngine.LightmapBakeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightmapBakeType_t6C5A20612951F0BFB370705B7132297E1F193AC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LightmapsMode
struct  LightmapsMode_t819A0A8C0EBF854ABBDE79973EAEF5F6348C17CD 
{
public:
	// System.Int32 UnityEngine.LightmapsMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightmapsMode_t819A0A8C0EBF854ABBDE79973EAEF5F6348C17CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LogType
struct  LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Mesh_MeshData
struct  MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 
{
public:
	// System.IntPtr UnityEngine.Mesh_MeshData::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.MixedLightingMode
struct  MixedLightingMode_tFB2A5273DD1129DA639FE8E3312D54AEB363DCA9 
{
public:
	// System.Int32 UnityEngine.MixedLightingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedLightingMode_tFB2A5273DD1129DA639FE8E3312D54AEB363DCA9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerConnection_<>c__DisplayClass12_0
struct  U3CU3Ec__DisplayClass12_0_tC029C4F11E384EFEF6FD86B7BEC83D295D098769  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerConnection_<>c__DisplayClass12_0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_tC029C4F11E384EFEF6FD86B7BEC83D295D098769, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerConnection_<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_t1A8EBE4E3370D09549DE4FD59077B3A7AEAD0C54  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerConnection_<>c__DisplayClass13_0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t1A8EBE4E3370D09549DE4FD59077B3A7AEAD0C54, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t96633FB6A2AE351A4A3FCDF89D10891DA07AD54F  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_<>c__DisplayClass6_0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t96633FB6A2AE351A4A3FCDF89D10891DA07AD54F, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_t7C625D285CBB757F88C0232D12D88EDABF06EB60  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_<>c__DisplayClass7_0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t7C625D285CBB757F88C0232D12D88EDABF06EB60, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_<>c__DisplayClass8_0
struct  U3CU3Ec__DisplayClass8_0_tE64E7CAC5415DCD425D14A6062600087CC872B93  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_<>c__DisplayClass8_0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tE64E7CAC5415DCD425D14A6062600087CC872B93, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_ConnectionChangeEvent
struct  ConnectionChangeEvent_tCA1C8C14171C72EC394EF45450D69C1585067BDF  : public UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF
{
public:

public:
};


// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageEvent
struct  MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B  : public UnityEvent_1_t5380899C55F3CD7FD1CD64F13EE5E1E4B11D602B
{
public:

public:
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.Playables.FrameData_Flags
struct  Flags_t64F4A80C88F9E613B720DA0195BAB2B34C5307D5 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData_Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t64F4A80C88F9E613B720DA0195BAB2B34C5307D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.ReflectionProbe_ReflectionProbeEvent
struct  ReflectionProbeEvent_tA90347B5A1B5256D229969ADF158978AF137003A 
{
public:
	// System.Int32 UnityEngine.ReflectionProbe_ReflectionProbeEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeEvent_tA90347B5A1B5256D229969ADF158978AF137003A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.BatchRendererGroup
struct  BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.BatchRendererGroup::m_GroupHandle
	intptr_t ___m_GroupHandle_0;
	// UnityEngine.Rendering.BatchRendererGroup_OnPerformCulling UnityEngine.Rendering.BatchRendererGroup::m_PerformCulling
	OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * ___m_PerformCulling_1;

public:
	inline static int32_t get_offset_of_m_GroupHandle_0() { return static_cast<int32_t>(offsetof(BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A, ___m_GroupHandle_0)); }
	inline intptr_t get_m_GroupHandle_0() const { return ___m_GroupHandle_0; }
	inline intptr_t* get_address_of_m_GroupHandle_0() { return &___m_GroupHandle_0; }
	inline void set_m_GroupHandle_0(intptr_t value)
	{
		___m_GroupHandle_0 = value;
	}

	inline static int32_t get_offset_of_m_PerformCulling_1() { return static_cast<int32_t>(offsetof(BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A, ___m_PerformCulling_1)); }
	inline OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * get_m_PerformCulling_1() const { return ___m_PerformCulling_1; }
	inline OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB ** get_address_of_m_PerformCulling_1() { return &___m_PerformCulling_1; }
	inline void set_m_PerformCulling_1(OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * value)
	{
		___m_PerformCulling_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PerformCulling_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshaled_pinvoke
{
	intptr_t ___m_GroupHandle_0;
	Il2CppMethodPointer ___m_PerformCulling_1;
};
// Native definition for COM marshalling of UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshaled_com
{
	intptr_t ___m_GroupHandle_0;
	Il2CppMethodPointer ___m_PerformCulling_1;
};

// UnityEngine.Rendering.LODParameters
struct  LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD 
{
public:
	// System.Int32 UnityEngine.Rendering.LODParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.LODParameters::m_CameraPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CameraPosition_1;
	// System.Single UnityEngine.Rendering.LODParameters::m_FieldOfView
	float ___m_FieldOfView_2;
	// System.Single UnityEngine.Rendering.LODParameters::m_OrthoSize
	float ___m_OrthoSize_3;
	// System.Int32 UnityEngine.Rendering.LODParameters::m_CameraPixelHeight
	int32_t ___m_CameraPixelHeight_4;

public:
	inline static int32_t get_offset_of_m_IsOrthographic_0() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_IsOrthographic_0)); }
	inline int32_t get_m_IsOrthographic_0() const { return ___m_IsOrthographic_0; }
	inline int32_t* get_address_of_m_IsOrthographic_0() { return &___m_IsOrthographic_0; }
	inline void set_m_IsOrthographic_0(int32_t value)
	{
		___m_IsOrthographic_0 = value;
	}

	inline static int32_t get_offset_of_m_CameraPosition_1() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_CameraPosition_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CameraPosition_1() const { return ___m_CameraPosition_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CameraPosition_1() { return &___m_CameraPosition_1; }
	inline void set_m_CameraPosition_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CameraPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_FieldOfView_2() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_FieldOfView_2)); }
	inline float get_m_FieldOfView_2() const { return ___m_FieldOfView_2; }
	inline float* get_address_of_m_FieldOfView_2() { return &___m_FieldOfView_2; }
	inline void set_m_FieldOfView_2(float value)
	{
		___m_FieldOfView_2 = value;
	}

	inline static int32_t get_offset_of_m_OrthoSize_3() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_OrthoSize_3)); }
	inline float get_m_OrthoSize_3() const { return ___m_OrthoSize_3; }
	inline float* get_address_of_m_OrthoSize_3() { return &___m_OrthoSize_3; }
	inline void set_m_OrthoSize_3(float value)
	{
		___m_OrthoSize_3 = value;
	}

	inline static int32_t get_offset_of_m_CameraPixelHeight_4() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_CameraPixelHeight_4)); }
	inline int32_t get_m_CameraPixelHeight_4() const { return ___m_CameraPixelHeight_4; }
	inline int32_t* get_address_of_m_CameraPixelHeight_4() { return &___m_CameraPixelHeight_4; }
	inline void set_m_CameraPixelHeight_4(int32_t value)
	{
		___m_CameraPixelHeight_4 = value;
	}
};


// UnityEngine.Rendering.SupportedRenderingFeatures_LightmapMixedBakeModes
struct  LightmapMixedBakeModes_t517152ED1576E98EFCB29D358676919D88844F75 
{
public:
	// System.Int32 UnityEngine.Rendering.SupportedRenderingFeatures_LightmapMixedBakeModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightmapMixedBakeModes_t517152ED1576E98EFCB29D358676919D88844F75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.SupportedRenderingFeatures_ReflectionProbeModes
struct  ReflectionProbeModes_tBE15DD8892571EBC569B7FCD5D918B0588F8EA4A 
{
public:
	// System.Int32 UnityEngine.Rendering.SupportedRenderingFeatures_ReflectionProbeModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeModes_tBE15DD8892571EBC569B7FCD5D918B0588F8EA4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Space
struct  Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TrackedReference
struct  TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UnityLogWriter
struct  UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:

public:
};


// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
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

// System.Reflection.ParameterInfo
struct  ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct  NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct  NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Events.PersistentCall
struct  PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_TargetAssemblyTypeName
	String_t* ___m_TargetAssemblyTypeName_1;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_2;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_3;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27 * ___m_Arguments_4;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9, ___m_Target_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9, ___m_TargetAssemblyTypeName_1)); }
	inline String_t* get_m_TargetAssemblyTypeName_1() const { return ___m_TargetAssemblyTypeName_1; }
	inline String_t** get_address_of_m_TargetAssemblyTypeName_1() { return &___m_TargetAssemblyTypeName_1; }
	inline void set_m_TargetAssemblyTypeName_1(String_t* value)
	{
		___m_TargetAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetAssemblyTypeName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_MethodName_2() { return static_cast<int32_t>(offsetof(PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9, ___m_MethodName_2)); }
	inline String_t* get_m_MethodName_2() const { return ___m_MethodName_2; }
	inline String_t** get_address_of_m_MethodName_2() { return &___m_MethodName_2; }
	inline void set_m_MethodName_2(String_t* value)
	{
		___m_MethodName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MethodName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Mode_3() { return static_cast<int32_t>(offsetof(PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9, ___m_Mode_3)); }
	inline int32_t get_m_Mode_3() const { return ___m_Mode_3; }
	inline int32_t* get_address_of_m_Mode_3() { return &___m_Mode_3; }
	inline void set_m_Mode_3(int32_t value)
	{
		___m_Mode_3 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_4() { return static_cast<int32_t>(offsetof(PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9, ___m_Arguments_4)); }
	inline ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27 * get_m_Arguments_4() const { return ___m_Arguments_4; }
	inline ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27 ** get_address_of_m_Arguments_4() { return &___m_Arguments_4; }
	inline void set_m_Arguments_4(ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27 * value)
	{
		___m_Arguments_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Arguments_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallState_5() { return static_cast<int32_t>(offsetof(PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9, ___m_CallState_5)); }
	inline int32_t get_m_CallState_5() const { return ___m_CallState_5; }
	inline int32_t* get_address_of_m_CallState_5() { return &___m_CallState_5; }
	inline void set_m_CallState_5(int32_t value)
	{
		___m_CallState_5 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct  DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DirectionalLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DirectionalLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DirectionalLight::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DirectionalLight::penumbraWidthRadian
	float ___penumbraWidthRadian_7;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_8;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_shadow_1() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___shadow_1)); }
	inline bool get_shadow_1() const { return ___shadow_1; }
	inline bool* get_address_of_shadow_1() { return &___shadow_1; }
	inline void set_shadow_1(bool value)
	{
		___shadow_1 = value;
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___mode_2)); }
	inline uint8_t get_mode_2() const { return ___mode_2; }
	inline uint8_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(uint8_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_3() const { return ___position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_orientation_4() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___orientation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_4() const { return ___orientation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_4() { return &___orientation_4; }
	inline void set_orientation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_4 = value;
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___color_5)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_5() const { return ___color_5; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_5 = value;
	}

	inline static int32_t get_offset_of_indirectColor_6() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___indirectColor_6)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_6() const { return ___indirectColor_6; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_6() { return &___indirectColor_6; }
	inline void set_indirectColor_6(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_6 = value;
	}

	inline static int32_t get_offset_of_penumbraWidthRadian_7() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___penumbraWidthRadian_7)); }
	inline float get_penumbraWidthRadian_7() const { return ___penumbraWidthRadian_7; }
	inline float* get_address_of_penumbraWidthRadian_7() { return &___penumbraWidthRadian_7; }
	inline void set_penumbraWidthRadian_7(float value)
	{
		___penumbraWidthRadian_7 = value;
	}

	inline static int32_t get_offset_of_direction_8() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___direction_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_8() const { return ___direction_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_8() { return &___direction_8; }
	inline void set_direction_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_8;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_8;
};

// UnityEngine.Experimental.GlobalIllumination.DiscLight
struct  DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DiscLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DiscLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DiscLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DiscLight::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DiscLight::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::radius
	float ___radius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.DiscLight::falloff
	uint8_t ___falloff_9;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_shadow_1() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___shadow_1)); }
	inline bool get_shadow_1() const { return ___shadow_1; }
	inline bool* get_address_of_shadow_1() { return &___shadow_1; }
	inline void set_shadow_1(bool value)
	{
		___shadow_1 = value;
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___mode_2)); }
	inline uint8_t get_mode_2() const { return ___mode_2; }
	inline uint8_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(uint8_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_3() const { return ___position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_orientation_4() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___orientation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_4() const { return ___orientation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_4() { return &___orientation_4; }
	inline void set_orientation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_4 = value;
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___color_5)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_5() const { return ___color_5; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_5 = value;
	}

	inline static int32_t get_offset_of_indirectColor_6() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___indirectColor_6)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_6() const { return ___indirectColor_6; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_6() { return &___indirectColor_6; }
	inline void set_indirectColor_6(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_radius_8() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___radius_8)); }
	inline float get_radius_8() const { return ___radius_8; }
	inline float* get_address_of_radius_8() { return &___radius_8; }
	inline void set_radius_8(float value)
	{
		___radius_8 = value;
	}

	inline static int32_t get_offset_of_falloff_9() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___falloff_9)); }
	inline uint8_t get_falloff_9() const { return ___falloff_9; }
	inline uint8_t* get_address_of_falloff_9() { return &___falloff_9; }
	inline void set_falloff_9(uint8_t value)
	{
		___falloff_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
};

// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct  LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_cookieID_1() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieID_1)); }
	inline int32_t get_cookieID_1() const { return ___cookieID_1; }
	inline int32_t* get_address_of_cookieID_1() { return &___cookieID_1; }
	inline void set_cookieID_1(int32_t value)
	{
		___cookieID_1 = value;
	}

	inline static int32_t get_offset_of_cookieScale_2() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieScale_2)); }
	inline float get_cookieScale_2() const { return ___cookieScale_2; }
	inline float* get_address_of_cookieScale_2() { return &___cookieScale_2; }
	inline void set_cookieScale_2(float value)
	{
		___cookieScale_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___color_3)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_3() const { return ___color_3; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_indirectColor_4() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___indirectColor_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_4() const { return ___indirectColor_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_4() { return &___indirectColor_4; }
	inline void set_indirectColor_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___orientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_6() const { return ___position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_coneAngle_8() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___coneAngle_8)); }
	inline float get_coneAngle_8() const { return ___coneAngle_8; }
	inline float* get_address_of_coneAngle_8() { return &___coneAngle_8; }
	inline void set_coneAngle_8(float value)
	{
		___coneAngle_8 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_9() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___innerConeAngle_9)); }
	inline float get_innerConeAngle_9() const { return ___innerConeAngle_9; }
	inline float* get_address_of_innerConeAngle_9() { return &___innerConeAngle_9; }
	inline void set_innerConeAngle_9(float value)
	{
		___innerConeAngle_9 = value;
	}

	inline static int32_t get_offset_of_shape0_10() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape0_10)); }
	inline float get_shape0_10() const { return ___shape0_10; }
	inline float* get_address_of_shape0_10() { return &___shape0_10; }
	inline void set_shape0_10(float value)
	{
		___shape0_10 = value;
	}

	inline static int32_t get_offset_of_shape1_11() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape1_11)); }
	inline float get_shape1_11() const { return ___shape1_11; }
	inline float* get_address_of_shape1_11() { return &___shape1_11; }
	inline void set_shape1_11(float value)
	{
		___shape1_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___type_12)); }
	inline uint8_t get_type_12() const { return ___type_12; }
	inline uint8_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(uint8_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___mode_13)); }
	inline uint8_t get_mode_13() const { return ___mode_13; }
	inline uint8_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(uint8_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_shadow_14() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shadow_14)); }
	inline uint8_t get_shadow_14() const { return ___shadow_14; }
	inline uint8_t* get_address_of_shadow_14() { return &___shadow_14; }
	inline void set_shadow_14(uint8_t value)
	{
		___shadow_14 = value;
	}

	inline static int32_t get_offset_of_falloff_15() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___falloff_15)); }
	inline uint8_t get_falloff_15() const { return ___falloff_15; }
	inline uint8_t* get_address_of_falloff_15() { return &___falloff_15; }
	inline void set_falloff_15(uint8_t value)
	{
		___falloff_15 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.PointLight
struct  PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.PointLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.PointLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.PointLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.PointLight::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_5;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::range
	float ___range_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::sphereRadius
	float ___sphereRadius_7;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.PointLight::falloff
	uint8_t ___falloff_8;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_shadow_1() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___shadow_1)); }
	inline bool get_shadow_1() const { return ___shadow_1; }
	inline bool* get_address_of_shadow_1() { return &___shadow_1; }
	inline void set_shadow_1(bool value)
	{
		___shadow_1 = value;
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___mode_2)); }
	inline uint8_t get_mode_2() const { return ___mode_2; }
	inline uint8_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(uint8_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_3() const { return ___position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___color_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_4() const { return ___color_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_4 = value;
	}

	inline static int32_t get_offset_of_indirectColor_5() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___indirectColor_5)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_5() const { return ___indirectColor_5; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_5() { return &___indirectColor_5; }
	inline void set_indirectColor_5(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_5 = value;
	}

	inline static int32_t get_offset_of_range_6() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___range_6)); }
	inline float get_range_6() const { return ___range_6; }
	inline float* get_address_of_range_6() { return &___range_6; }
	inline void set_range_6(float value)
	{
		___range_6 = value;
	}

	inline static int32_t get_offset_of_sphereRadius_7() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___sphereRadius_7)); }
	inline float get_sphereRadius_7() const { return ___sphereRadius_7; }
	inline float* get_address_of_sphereRadius_7() { return &___sphereRadius_7; }
	inline void set_sphereRadius_7(float value)
	{
		___sphereRadius_7 = value;
	}

	inline static int32_t get_offset_of_falloff_8() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___falloff_8)); }
	inline uint8_t get_falloff_8() const { return ___falloff_8; }
	inline uint8_t* get_address_of_falloff_8() { return &___falloff_8; }
	inline void set_falloff_8(uint8_t value)
	{
		___falloff_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_5;
	float ___range_6;
	float ___sphereRadius_7;
	uint8_t ___falloff_8;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_5;
	float ___range_6;
	float ___sphereRadius_7;
	uint8_t ___falloff_8;
};

// UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct  RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.RectangleLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.RectangleLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.RectangleLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.RectangleLight::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.RectangleLight::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::width
	float ___width_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::height
	float ___height_9;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.RectangleLight::falloff
	uint8_t ___falloff_10;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_shadow_1() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___shadow_1)); }
	inline bool get_shadow_1() const { return ___shadow_1; }
	inline bool* get_address_of_shadow_1() { return &___shadow_1; }
	inline void set_shadow_1(bool value)
	{
		___shadow_1 = value;
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___mode_2)); }
	inline uint8_t get_mode_2() const { return ___mode_2; }
	inline uint8_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(uint8_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_3() const { return ___position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_orientation_4() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___orientation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_4() const { return ___orientation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_4() { return &___orientation_4; }
	inline void set_orientation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_4 = value;
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___color_5)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_5() const { return ___color_5; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_5 = value;
	}

	inline static int32_t get_offset_of_indirectColor_6() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___indirectColor_6)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_6() const { return ___indirectColor_6; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_6() { return &___indirectColor_6; }
	inline void set_indirectColor_6(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_width_8() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___width_8)); }
	inline float get_width_8() const { return ___width_8; }
	inline float* get_address_of_width_8() { return &___width_8; }
	inline void set_width_8(float value)
	{
		___width_8 = value;
	}

	inline static int32_t get_offset_of_height_9() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___height_9)); }
	inline float get_height_9() const { return ___height_9; }
	inline float* get_address_of_height_9() { return &___height_9; }
	inline void set_height_9(float value)
	{
		___height_9 = value;
	}

	inline static int32_t get_offset_of_falloff_10() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___falloff_10)); }
	inline uint8_t get_falloff_10() const { return ___falloff_10; }
	inline uint8_t* get_address_of_falloff_10() { return &___falloff_10; }
	inline void set_falloff_10(uint8_t value)
	{
		___falloff_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};

// UnityEngine.Experimental.GlobalIllumination.SpotLight
struct  SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.SpotLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.SpotLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.SpotLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.SpotLight::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.SpotLight::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::sphereRadius
	float ___sphereRadius_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::coneAngle
	float ___coneAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::innerConeAngle
	float ___innerConeAngle_10;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::falloff
	uint8_t ___falloff_11;
	// UnityEngine.Experimental.GlobalIllumination.AngularFalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::angularFalloff
	uint8_t ___angularFalloff_12;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_shadow_1() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___shadow_1)); }
	inline bool get_shadow_1() const { return ___shadow_1; }
	inline bool* get_address_of_shadow_1() { return &___shadow_1; }
	inline void set_shadow_1(bool value)
	{
		___shadow_1 = value;
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___mode_2)); }
	inline uint8_t get_mode_2() const { return ___mode_2; }
	inline uint8_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(uint8_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_3() const { return ___position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_orientation_4() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___orientation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_4() const { return ___orientation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_4() { return &___orientation_4; }
	inline void set_orientation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_4 = value;
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___color_5)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_5() const { return ___color_5; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_5 = value;
	}

	inline static int32_t get_offset_of_indirectColor_6() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___indirectColor_6)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_6() const { return ___indirectColor_6; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_6() { return &___indirectColor_6; }
	inline void set_indirectColor_6(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_sphereRadius_8() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___sphereRadius_8)); }
	inline float get_sphereRadius_8() const { return ___sphereRadius_8; }
	inline float* get_address_of_sphereRadius_8() { return &___sphereRadius_8; }
	inline void set_sphereRadius_8(float value)
	{
		___sphereRadius_8 = value;
	}

	inline static int32_t get_offset_of_coneAngle_9() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___coneAngle_9)); }
	inline float get_coneAngle_9() const { return ___coneAngle_9; }
	inline float* get_address_of_coneAngle_9() { return &___coneAngle_9; }
	inline void set_coneAngle_9(float value)
	{
		___coneAngle_9 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_10() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___innerConeAngle_10)); }
	inline float get_innerConeAngle_10() const { return ___innerConeAngle_10; }
	inline float* get_address_of_innerConeAngle_10() { return &___innerConeAngle_10; }
	inline void set_innerConeAngle_10(float value)
	{
		___innerConeAngle_10 = value;
	}

	inline static int32_t get_offset_of_falloff_11() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___falloff_11)); }
	inline uint8_t get_falloff_11() const { return ___falloff_11; }
	inline uint8_t* get_address_of_falloff_11() { return &___falloff_11; }
	inline void set_falloff_11(uint8_t value)
	{
		___falloff_11 = value;
	}

	inline static int32_t get_offset_of_angularFalloff_12() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___angularFalloff_12)); }
	inline uint8_t get_angularFalloff_12() const { return ___angularFalloff_12; }
	inline uint8_t* get_address_of_angularFalloff_12() { return &___angularFalloff_12; }
	inline void set_angularFalloff_12(uint8_t value)
	{
		___angularFalloff_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};

// UnityEngine.Experimental.Playables.TextureMixerPlayable
struct  TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Experimental.Playables.TexturePlayableOutput
struct  TexturePlayableOutput_t85F2BAEA947F492D052706E7C270DB1CA2EFB530 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Experimental.Playables.TexturePlayableOutput::m_Handle
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(TexturePlayableOutput_t85F2BAEA947F492D052706E7C270DB1CA2EFB530, ___m_Handle_0)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82, ___m_Handle_0)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};


// UnityEngine.Rendering.SupportedRenderingFeatures
struct  SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.SupportedRenderingFeatures_ReflectionProbeModes UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbeModes>k__BackingField
	int32_t ___U3CreflectionProbeModesU3Ek__BackingField_1;
	// UnityEngine.Rendering.SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::<defaultMixedLightingModes>k__BackingField
	int32_t ___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
	// UnityEngine.Rendering.SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::<mixedLightingModes>k__BackingField
	int32_t ___U3CmixedLightingModesU3Ek__BackingField_3;
	// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::<lightmapBakeTypes>k__BackingField
	int32_t ___U3ClightmapBakeTypesU3Ek__BackingField_4;
	// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::<lightmapsModes>k__BackingField
	int32_t ___U3ClightmapsModesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<enlighten>k__BackingField
	bool ___U3CenlightenU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<lightProbeProxyVolumes>k__BackingField
	bool ___U3ClightProbeProxyVolumesU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<motionVectors>k__BackingField
	bool ___U3CmotionVectorsU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<receiveShadows>k__BackingField
	bool ___U3CreceiveShadowsU3Ek__BackingField_9;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbes>k__BackingField
	bool ___U3CreflectionProbesU3Ek__BackingField_10;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendererPriority>k__BackingField
	bool ___U3CrendererPriorityU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<terrainDetailUnsupported>k__BackingField
	bool ___U3CterrainDetailUnsupportedU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendersUIOverlay>k__BackingField
	bool ___U3CrendersUIOverlayU3Ek__BackingField_13;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesEnvironmentLighting>k__BackingField
	bool ___U3CoverridesEnvironmentLightingU3Ek__BackingField_14;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesFog>k__BackingField
	bool ___U3CoverridesFogU3Ek__BackingField_15;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesRealtimeReflectionProbes>k__BackingField
	bool ___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_16;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesOtherLightingSettings>k__BackingField
	bool ___U3CoverridesOtherLightingSettingsU3Ek__BackingField_17;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<editableMaterialRenderQueue>k__BackingField
	bool ___U3CeditableMaterialRenderQueueU3Ek__BackingField_18;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesLODBias>k__BackingField
	bool ___U3CoverridesLODBiasU3Ek__BackingField_19;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesMaximumLODLevel>k__BackingField
	bool ___U3CoverridesMaximumLODLevelU3Ek__BackingField_20;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendererProbes>k__BackingField
	bool ___U3CrendererProbesU3Ek__BackingField_21;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<particleSystemInstancing>k__BackingField
	bool ___U3CparticleSystemInstancingU3Ek__BackingField_22;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesShadowmask>k__BackingField
	bool ___U3CoverridesShadowmaskU3Ek__BackingField_23;
	// System.String UnityEngine.Rendering.SupportedRenderingFeatures::<overrideShadowmaskMessage>k__BackingField
	String_t* ___U3CoverrideShadowmaskMessageU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CreflectionProbeModesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CreflectionProbeModesU3Ek__BackingField_1)); }
	inline int32_t get_U3CreflectionProbeModesU3Ek__BackingField_1() const { return ___U3CreflectionProbeModesU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CreflectionProbeModesU3Ek__BackingField_1() { return &___U3CreflectionProbeModesU3Ek__BackingField_1; }
	inline void set_U3CreflectionProbeModesU3Ek__BackingField_1(int32_t value)
	{
		___U3CreflectionProbeModesU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CdefaultMixedLightingModesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CdefaultMixedLightingModesU3Ek__BackingField_2)); }
	inline int32_t get_U3CdefaultMixedLightingModesU3Ek__BackingField_2() const { return ___U3CdefaultMixedLightingModesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CdefaultMixedLightingModesU3Ek__BackingField_2() { return &___U3CdefaultMixedLightingModesU3Ek__BackingField_2; }
	inline void set_U3CdefaultMixedLightingModesU3Ek__BackingField_2(int32_t value)
	{
		___U3CdefaultMixedLightingModesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmixedLightingModesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CmixedLightingModesU3Ek__BackingField_3)); }
	inline int32_t get_U3CmixedLightingModesU3Ek__BackingField_3() const { return ___U3CmixedLightingModesU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CmixedLightingModesU3Ek__BackingField_3() { return &___U3CmixedLightingModesU3Ek__BackingField_3; }
	inline void set_U3CmixedLightingModesU3Ek__BackingField_3(int32_t value)
	{
		___U3CmixedLightingModesU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3ClightmapBakeTypesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3ClightmapBakeTypesU3Ek__BackingField_4)); }
	inline int32_t get_U3ClightmapBakeTypesU3Ek__BackingField_4() const { return ___U3ClightmapBakeTypesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ClightmapBakeTypesU3Ek__BackingField_4() { return &___U3ClightmapBakeTypesU3Ek__BackingField_4; }
	inline void set_U3ClightmapBakeTypesU3Ek__BackingField_4(int32_t value)
	{
		___U3ClightmapBakeTypesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3ClightmapsModesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3ClightmapsModesU3Ek__BackingField_5)); }
	inline int32_t get_U3ClightmapsModesU3Ek__BackingField_5() const { return ___U3ClightmapsModesU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3ClightmapsModesU3Ek__BackingField_5() { return &___U3ClightmapsModesU3Ek__BackingField_5; }
	inline void set_U3ClightmapsModesU3Ek__BackingField_5(int32_t value)
	{
		___U3ClightmapsModesU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CenlightenU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CenlightenU3Ek__BackingField_6)); }
	inline bool get_U3CenlightenU3Ek__BackingField_6() const { return ___U3CenlightenU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CenlightenU3Ek__BackingField_6() { return &___U3CenlightenU3Ek__BackingField_6; }
	inline void set_U3CenlightenU3Ek__BackingField_6(bool value)
	{
		___U3CenlightenU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3ClightProbeProxyVolumesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3ClightProbeProxyVolumesU3Ek__BackingField_7)); }
	inline bool get_U3ClightProbeProxyVolumesU3Ek__BackingField_7() const { return ___U3ClightProbeProxyVolumesU3Ek__BackingField_7; }
	inline bool* get_address_of_U3ClightProbeProxyVolumesU3Ek__BackingField_7() { return &___U3ClightProbeProxyVolumesU3Ek__BackingField_7; }
	inline void set_U3ClightProbeProxyVolumesU3Ek__BackingField_7(bool value)
	{
		___U3ClightProbeProxyVolumesU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CmotionVectorsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CmotionVectorsU3Ek__BackingField_8)); }
	inline bool get_U3CmotionVectorsU3Ek__BackingField_8() const { return ___U3CmotionVectorsU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CmotionVectorsU3Ek__BackingField_8() { return &___U3CmotionVectorsU3Ek__BackingField_8; }
	inline void set_U3CmotionVectorsU3Ek__BackingField_8(bool value)
	{
		___U3CmotionVectorsU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CreceiveShadowsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CreceiveShadowsU3Ek__BackingField_9)); }
	inline bool get_U3CreceiveShadowsU3Ek__BackingField_9() const { return ___U3CreceiveShadowsU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CreceiveShadowsU3Ek__BackingField_9() { return &___U3CreceiveShadowsU3Ek__BackingField_9; }
	inline void set_U3CreceiveShadowsU3Ek__BackingField_9(bool value)
	{
		___U3CreceiveShadowsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CreflectionProbesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CreflectionProbesU3Ek__BackingField_10)); }
	inline bool get_U3CreflectionProbesU3Ek__BackingField_10() const { return ___U3CreflectionProbesU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CreflectionProbesU3Ek__BackingField_10() { return &___U3CreflectionProbesU3Ek__BackingField_10; }
	inline void set_U3CreflectionProbesU3Ek__BackingField_10(bool value)
	{
		___U3CreflectionProbesU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CrendererPriorityU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CrendererPriorityU3Ek__BackingField_11)); }
	inline bool get_U3CrendererPriorityU3Ek__BackingField_11() const { return ___U3CrendererPriorityU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CrendererPriorityU3Ek__BackingField_11() { return &___U3CrendererPriorityU3Ek__BackingField_11; }
	inline void set_U3CrendererPriorityU3Ek__BackingField_11(bool value)
	{
		___U3CrendererPriorityU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CterrainDetailUnsupportedU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CterrainDetailUnsupportedU3Ek__BackingField_12)); }
	inline bool get_U3CterrainDetailUnsupportedU3Ek__BackingField_12() const { return ___U3CterrainDetailUnsupportedU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CterrainDetailUnsupportedU3Ek__BackingField_12() { return &___U3CterrainDetailUnsupportedU3Ek__BackingField_12; }
	inline void set_U3CterrainDetailUnsupportedU3Ek__BackingField_12(bool value)
	{
		___U3CterrainDetailUnsupportedU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CrendersUIOverlayU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CrendersUIOverlayU3Ek__BackingField_13)); }
	inline bool get_U3CrendersUIOverlayU3Ek__BackingField_13() const { return ___U3CrendersUIOverlayU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CrendersUIOverlayU3Ek__BackingField_13() { return &___U3CrendersUIOverlayU3Ek__BackingField_13; }
	inline void set_U3CrendersUIOverlayU3Ek__BackingField_13(bool value)
	{
		___U3CrendersUIOverlayU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CoverridesEnvironmentLightingU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CoverridesEnvironmentLightingU3Ek__BackingField_14)); }
	inline bool get_U3CoverridesEnvironmentLightingU3Ek__BackingField_14() const { return ___U3CoverridesEnvironmentLightingU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CoverridesEnvironmentLightingU3Ek__BackingField_14() { return &___U3CoverridesEnvironmentLightingU3Ek__BackingField_14; }
	inline void set_U3CoverridesEnvironmentLightingU3Ek__BackingField_14(bool value)
	{
		___U3CoverridesEnvironmentLightingU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CoverridesFogU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CoverridesFogU3Ek__BackingField_15)); }
	inline bool get_U3CoverridesFogU3Ek__BackingField_15() const { return ___U3CoverridesFogU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CoverridesFogU3Ek__BackingField_15() { return &___U3CoverridesFogU3Ek__BackingField_15; }
	inline void set_U3CoverridesFogU3Ek__BackingField_15(bool value)
	{
		___U3CoverridesFogU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_16)); }
	inline bool get_U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_16() const { return ___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_16() { return &___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_16; }
	inline void set_U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_16(bool value)
	{
		___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CoverridesOtherLightingSettingsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CoverridesOtherLightingSettingsU3Ek__BackingField_17)); }
	inline bool get_U3CoverridesOtherLightingSettingsU3Ek__BackingField_17() const { return ___U3CoverridesOtherLightingSettingsU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CoverridesOtherLightingSettingsU3Ek__BackingField_17() { return &___U3CoverridesOtherLightingSettingsU3Ek__BackingField_17; }
	inline void set_U3CoverridesOtherLightingSettingsU3Ek__BackingField_17(bool value)
	{
		___U3CoverridesOtherLightingSettingsU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CeditableMaterialRenderQueueU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CeditableMaterialRenderQueueU3Ek__BackingField_18)); }
	inline bool get_U3CeditableMaterialRenderQueueU3Ek__BackingField_18() const { return ___U3CeditableMaterialRenderQueueU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CeditableMaterialRenderQueueU3Ek__BackingField_18() { return &___U3CeditableMaterialRenderQueueU3Ek__BackingField_18; }
	inline void set_U3CeditableMaterialRenderQueueU3Ek__BackingField_18(bool value)
	{
		___U3CeditableMaterialRenderQueueU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CoverridesLODBiasU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CoverridesLODBiasU3Ek__BackingField_19)); }
	inline bool get_U3CoverridesLODBiasU3Ek__BackingField_19() const { return ___U3CoverridesLODBiasU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CoverridesLODBiasU3Ek__BackingField_19() { return &___U3CoverridesLODBiasU3Ek__BackingField_19; }
	inline void set_U3CoverridesLODBiasU3Ek__BackingField_19(bool value)
	{
		___U3CoverridesLODBiasU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CoverridesMaximumLODLevelU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CoverridesMaximumLODLevelU3Ek__BackingField_20)); }
	inline bool get_U3CoverridesMaximumLODLevelU3Ek__BackingField_20() const { return ___U3CoverridesMaximumLODLevelU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CoverridesMaximumLODLevelU3Ek__BackingField_20() { return &___U3CoverridesMaximumLODLevelU3Ek__BackingField_20; }
	inline void set_U3CoverridesMaximumLODLevelU3Ek__BackingField_20(bool value)
	{
		___U3CoverridesMaximumLODLevelU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CrendererProbesU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CrendererProbesU3Ek__BackingField_21)); }
	inline bool get_U3CrendererProbesU3Ek__BackingField_21() const { return ___U3CrendererProbesU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CrendererProbesU3Ek__BackingField_21() { return &___U3CrendererProbesU3Ek__BackingField_21; }
	inline void set_U3CrendererProbesU3Ek__BackingField_21(bool value)
	{
		___U3CrendererProbesU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CparticleSystemInstancingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CparticleSystemInstancingU3Ek__BackingField_22)); }
	inline bool get_U3CparticleSystemInstancingU3Ek__BackingField_22() const { return ___U3CparticleSystemInstancingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CparticleSystemInstancingU3Ek__BackingField_22() { return &___U3CparticleSystemInstancingU3Ek__BackingField_22; }
	inline void set_U3CparticleSystemInstancingU3Ek__BackingField_22(bool value)
	{
		___U3CparticleSystemInstancingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CoverridesShadowmaskU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CoverridesShadowmaskU3Ek__BackingField_23)); }
	inline bool get_U3CoverridesShadowmaskU3Ek__BackingField_23() const { return ___U3CoverridesShadowmaskU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CoverridesShadowmaskU3Ek__BackingField_23() { return &___U3CoverridesShadowmaskU3Ek__BackingField_23; }
	inline void set_U3CoverridesShadowmaskU3Ek__BackingField_23(bool value)
	{
		___U3CoverridesShadowmaskU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CoverrideShadowmaskMessageU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54, ___U3CoverrideShadowmaskMessageU3Ek__BackingField_24)); }
	inline String_t* get_U3CoverrideShadowmaskMessageU3Ek__BackingField_24() const { return ___U3CoverrideShadowmaskMessageU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CoverrideShadowmaskMessageU3Ek__BackingField_24() { return &___U3CoverrideShadowmaskMessageU3Ek__BackingField_24; }
	inline void set_U3CoverrideShadowmaskMessageU3Ek__BackingField_24(String_t* value)
	{
		___U3CoverrideShadowmaskMessageU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoverrideShadowmaskMessageU3Ek__BackingField_24), (void*)value);
	}
};

struct SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_StaticFields
{
public:
	// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::s_Active
	SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * ___s_Active_0;

public:
	inline static int32_t get_offset_of_s_Active_0() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_StaticFields, ___s_Active_0)); }
	inline SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * get_s_Active_0() const { return ___s_Active_0; }
	inline SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 ** get_address_of_s_Active_0() { return &___s_Active_0; }
	inline void set_s_Active_0(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * value)
	{
		___s_Active_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Active_0), (void*)value);
	}
};


// UnityEngine.TextAsset
struct  TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.UnityException
struct  UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
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


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ManualResetEvent
struct  ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C  : public MulticastDelegate_t
{
public:

public:
};


// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Application_LogCallback
struct  LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Application_LowMemoryCallback
struct  LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera_CameraCallback
struct  CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.CullingGroup_StateChanged
struct  StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Display_DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.GlobalIllumination.Lightmapping_RequestLightsDelegate
struct  RequestLightsDelegate_t48C36AFA6015405AE4069BB1F3623AF3BC51FDA0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.LowLevel.PlayerLoopSystem_UpdateFunction
struct  UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Playables.PlayableBinding_CreateOutputMethod
struct  CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.RectTransform_ReapplyDrivenProperties
struct  ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Rendering.BatchCullingContext
struct  BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Plane> UnityEngine.Rendering.BatchCullingContext::cullingPlanes
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  ___cullingPlanes_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility> UnityEngine.Rendering.BatchCullingContext::batchVisibility
	NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  ___batchVisibility_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.BatchCullingContext::visibleIndices
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___visibleIndices_2;
	// UnityEngine.Rendering.LODParameters UnityEngine.Rendering.BatchCullingContext::lodParameters
	LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  ___lodParameters_3;

public:
	inline static int32_t get_offset_of_cullingPlanes_0() { return static_cast<int32_t>(offsetof(BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66, ___cullingPlanes_0)); }
	inline NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  get_cullingPlanes_0() const { return ___cullingPlanes_0; }
	inline NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E * get_address_of_cullingPlanes_0() { return &___cullingPlanes_0; }
	inline void set_cullingPlanes_0(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  value)
	{
		___cullingPlanes_0 = value;
	}

	inline static int32_t get_offset_of_batchVisibility_1() { return static_cast<int32_t>(offsetof(BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66, ___batchVisibility_1)); }
	inline NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  get_batchVisibility_1() const { return ___batchVisibility_1; }
	inline NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA * get_address_of_batchVisibility_1() { return &___batchVisibility_1; }
	inline void set_batchVisibility_1(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  value)
	{
		___batchVisibility_1 = value;
	}

	inline static int32_t get_offset_of_visibleIndices_2() { return static_cast<int32_t>(offsetof(BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66, ___visibleIndices_2)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_visibleIndices_2() const { return ___visibleIndices_2; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_visibleIndices_2() { return &___visibleIndices_2; }
	inline void set_visibleIndices_2(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___visibleIndices_2 = value;
	}

	inline static int32_t get_offset_of_lodParameters_3() { return static_cast<int32_t>(offsetof(BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66, ___lodParameters_3)); }
	inline LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  get_lodParameters_3() const { return ___lodParameters_3; }
	inline LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD * get_address_of_lodParameters_3() { return &___lodParameters_3; }
	inline void set_lodParameters_3(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  value)
	{
		___lodParameters_3 = value;
	}
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture2DArray
struct  Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture3D
struct  Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Light
struct  Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.RectTransform
struct  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.Rendering.BatchRendererGroup_OnPerformCulling
struct  OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Byte[],System.Text.Encoding>[]
struct KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  m_Items[1];

public:
	inline KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  m_Items[1];

public:
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Light[]
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Light_tA2F349FE839781469A0344CF6039B51512394275 * m_Items[1];

public:
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UnitySynchronizationContext_WorkRequest[]
struct WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  m_Items[1];

public:
	inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle_2), (void*)NULL);
		#endif
	}
	inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle_2), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke(const BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A& unmarshaled, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke_back(const BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshaled_pinvoke& marshaled, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A& unmarshaled);
IL2CPP_EXTERN_C void BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke_cleanup(BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshaled_pinvoke& marshaled);

// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_gshared (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557_gshared (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m2D7540B01275552CA127202F40536B5D5831A907_gshared (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m38FF3BFEF5EF5F96F6B84F59AEC29C695C4CFD4E_gshared (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_gshared_inline (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m5CE622FEE2BD41D0769D74CDDAD0EA55C07A2025_gshared (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_gshared_inline (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_m0612F2A9F55682A7255B3B276E9BAFCFC0CB4EF4 (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F (const RuntimeMethod* method);
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_defaultMixedLightingModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7B53835BDDAF009835F9A0907BC59E4E88C71D9C_inline (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_mixedLightingModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_mE4A171C47A4A685E49F2F382AA51C556B48EE58C_inline (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine.MixedLightingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m8AFE3C9D450B1A6E52A31EA84C1B8F626AAC0CD0 (int32_t ___mixedMode0, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mC13FADD4B8DCEB26F58C6F5DD9D7899A621F9828 (int32_t ___mixedMode0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_m8BBA40E9CBAFFD8B176F3812C36DD31D9D60BBEA (int32_t ___bakeType0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mB6F953153B328DBFD1F7E444D155F8C53ABCD876 (int32_t ___bakeType0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method);
// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapBakeTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_mAF3B22ACCE625D1C45F411D30C2874E8A847605E_inline (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlighten()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_mA4BDBEBFE0E8F1C161D7BE28B328E6D6E36720A9_inline (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method);
// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapsModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m69B5455BF172B258A0A2DB6F52846E8934AD048A_inline (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_rendersUIOverlay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m8E56255490C51999C7B14F30CD072E49E2C39B4E_inline (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::IsValidEnumValue(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_IsValidEnumValue_mDF4AFDCB30A42032742988AD9BC5E0E00EFA86C8 (Enum_t23B90B40F60E677A8025267341651C94AE079CDA * ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::SupportsTextureFormatNative(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsTextureFormatNative_m1514BFE543D7EE39CEF43B429B52E2EC20AB8E75 (int32_t ___format0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.TextAsset::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::DecodeString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_DecodeString_m3CD8D6865DCE58592AE76360F4DB856A6962FE13 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Byte[],System.Text.Encoding>::get_Key()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* KeyValuePair_2_get_Key_mE3B6053863D44C5F1D341E3608D33EA07D9AF00F_inline (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Byte[],System.Text.Encoding>::get_Value()
inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * KeyValuePair_2_get_Value_mC8998BD9202FEE7FE0D2F5C2C3DDE2A3B2E3CAE2_inline (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B * __this, const RuntimeMethod* method)
{
	return ((  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * (*) (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m4DCF5CDB32C2C69290894101A81F473865169279 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::SupportsTextureFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsTextureFormat_mE7DA9DC2B167CB7E9A864924C8772307F1A2F0B9 (int32_t ___format0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCompressedTextureFormat_m740C48D113EFDF97CD6EB48308B486F68C03CF82 (int32_t ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_IsFormatSupported_m03EDA316B42377504BA47B256EB094F8A54BC75C (int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2DArray_Internal_CreateImpl_m5B8B806393D443E6F0CB49AB019C8E9A1C8644B1 (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___mipCount4, int32_t ___format5, int32_t ___flags6, const RuntimeMethod* method);
// System.Void UnityEngine.UnityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8 (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetGraphicsFormat(UnityEngine.Experimental.Rendering.DefaultFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_GetGraphicsFormat_mE36FE85F87F085503FEAA34112E454E9F2AFEF55 (int32_t ___format0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DArray__ctor_m139056CD509EAC819F9713F6A2CAE801D49CA13F (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DArray__ctor_mB19D8E34783F95713A23A0F06F63EF1B1613E9C5 (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, int32_t ___mipCount5, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture__ctor_mA6FE9CC0AF05A99FADCEF0BED2FB0C95571AAF4A (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture::ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture_ValidateFormat_mB721DB544C78FC025FC3D3F85AD705D54F1B52CE (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2DArray::Internal_Create(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DArray_Internal_Create_m5DD4264F3965FBE126FAA447C79876C22D36D39C (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___mipCount4, int32_t ___format5, int32_t ___flags6, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture::ValidateFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture_ValidateFormat_mC3C7A3FE51CA18357ABE027958BF97D3C6675D39 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___format0, const RuntimeMethod* method);
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mF9AFEB31DE7E63FC76D6A99AE31A108491A9F232 (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCrunchFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCrunchFormat_mB31D5C0C0D337A3B00D1AED3A7E036CD52540F66 (int32_t ___format0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DArray__ctor_mEE6D4AD1D7469894FA16627A222EDC34647F6DB3 (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, int32_t ___mipCount4, bool ___linear5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture3D_Internal_CreateImpl_m41E3DE82535685BDE643C82AB65722CCB98E7C20 (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___mipCount4, int32_t ___format5, int32_t ___flags6, const RuntimeMethod* method);
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D__ctor_m666A8D01B0E3B7773C7CDAB624D69E16331CFA36 (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, const RuntimeMethod* method);
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D__ctor_m6DC8372EBD1146127A4CE86F3E65930ABAB6539D (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, int32_t ___mipCount5, const RuntimeMethod* method);
// System.Void UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D_Internal_Create_m65B50261584E685D8375F5398311C549271ED1B6 (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___mipCount4, int32_t ___format5, int32_t ___flags6, const RuntimeMethod* method);
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D__ctor_m7AE9A6F7E67FE89DEA087647FB3375343D997F4C (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, int32_t ___mipCount4, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  TextureMixerPlayable_GetHandle_m44A48E52180084F5A93942EA0AFA454C9DFBFD40 (TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___x0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m49E1B77DF4F13F35321494AC6B5330538D0A1980 (TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405 * __this, TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component__ctor_m0B00FA207EB3E560B78938D8AD877DB2BC1E3722 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_get_position_Injected_m43CE3FC8FB3C52896D709B07EB77340407800C13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_Injected_m634DE2302555154065001583E6080CC48D58A602 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_get_rotation_Injected_m1F756C98851F36F25BFBAC3401B67A4D2F176DF1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_Injected_m9ACF0891D219140A329411F33858C7B0A026407F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::get_localRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_get_localRotation_Injected_mCF48B92BAD51A015698EFE3973CD2F595048E74B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_Injected_m19EF26CC5E0F8331297D3FB17EFFC7FD217A9FCA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m052C22273F1D789E58A09606D5EE5E87ABC2C91B (Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___outer0, const RuntimeMethod* method);
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E (const RuntimeMethod* method);
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler__ctor_mE6B0B21833515D1B7627DB2DCB6CF045E5E1B691 (UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_UnhandledException_mCF60CDF3EFDFC0C7757CE33C59B3C4B59948FB9E (AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * __this, UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36 (Type_t * ___objectType0, String_t* ___functionName1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall__ctor_mB755E9394048D1920AA344EA3B3905810042E992 (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList__ctor_m986F4056CA5480D44854152DB768E031AF95C5D8 (InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCallGroup__ctor_m0F94D4591DB6C4D6C7B997FA45A39C680610B1E0 (PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_DirtyPersistentCalls_m85DA5AEA84F8C32D2FDF5DD58D9B7EF704B7B238 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27 * PersistentCall_get_arguments_m9FDD073B5551520F0FF4A672C60E237CADBC3435 (PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_mAA84D93F6FE66B3422F4A99D794BCCA11882DE35 (ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * PersistentCall_get_target_mE1268D2B40A4618C5E318D439F37022B969A6115 (PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.Events.PersistentCall::get_targetAssemblyTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistentCall_get_targetAssemblyTypeName_m2F53F996EA6BFFDFCDF1D10B6361DE2A98DD9113 (PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Events.PersistentCall::get_methodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistentCall_get_methodName_m249643D059927A05051B73309FCEAC6A6C9F9C88 (PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * __this, const RuntimeMethod* method);
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PersistentCall_get_mode_m7041C70D7CA9CC2D7FCB5D31C81E9C519AF1FEB8 (PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Type,UnityEngine.Events.PersistentListenerMode,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_FindMethod_m9F887E46F769E2C1D0CFE3C71F98892F9C461025 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, String_t* ___name0, Type_t * ___listenerType1, int32_t ___mode2, Type_t * ___argumentType3, const RuntimeMethod* method);
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_ClearPersistent_m9A59E6161F8E42120439B76FE952A17DA742443C (InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCallGroup_Initialize_m162FC343BA2C41CBBB6358D624CBD2CED9468833 (PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * __this, InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___invokableList0, UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * ___unityEventBase1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_AddListener_m07F4E145332E2059D570D8300CB422F56F6B0BF1 (InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * __this, BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_RemoveListener_mDE659068D9590D54D00436CCBDB3D27DCD263549 (InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RebuildPersistentCallsIfNeeded_m1FF3E4C46BB16B554103FAAAF3BBCE52C991D21F (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * InvokableCallList_PrepareInvoke_mE340D329F5FC08EA77FC0F3662FF5E5BB85AE0B1 (InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * __this, const RuntimeMethod* method);
// System.String System.Object::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_ToString_m6EEDE9678ACEB962C586D13EC873DE2948668B06 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m69EE86B5A87244C925333CCF1B6D6B9BCFED8A89 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___binder2, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types3, ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B* ___modifiers4, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3 (Type_t * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::set_HResult(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_mB9E603303A0678B32684B0EEC144334BAB0E6392_inline (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0CD24092BF55B8EDE25AED989ACADB80298EF917 (Exception_t * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F (String_t* ___s0, const RuntimeMethod* method);
// System.Void UnityEngine.UnityLogWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter__ctor_mB7AF0B7C8C546F210699D5F3AA23F370F1963A25 (UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D * __this, const RuntimeMethod* method);
// System.Void System.Console::SetOut(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_SetOut_m5496747868AA56C75F16C326E5C282C204FFCCCA (TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___newOut0, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLog_m7DF2A8AB78591F20C87B8947A22D2C845F207A20 (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.IO.TextWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriter__ctor_m9C6FF4B9607BA4D452BECA38EA8F7E1499A13A6C (TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Int32)
inline void List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45 (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, int32_t, const RuntimeMethod*))List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_gshared)(__this, ___capacity0, method);
}
// System.Void System.Threading.SynchronizationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_mBFA5A0DA5DAD6FD0001098E970759A1F90A03391 (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * __this, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback_Invoke_m352534ED0E61440A793944CC44809F666BBC1461 (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * __this, RuntimeObject * ___state0, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::.ctor(System.Threading.SendOrPostCallback,System.Object,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkRequest__ctor_m13C7B4A89E47F4B97ED9B786DB99849DBC2B5603 (WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * __this, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___callback0, RuntimeObject * ___state1, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___waitHandle2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Add(!0)
inline void List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557 (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 , const RuntimeMethod*))List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.UnitySynchronizationContext::.ctor(System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m266FAB5B25698C86EC1AC37CE4BBA1FA244BB4FC (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * ___queue0, int32_t ___mainThreadID1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m2D7540B01275552CA127202F40536B5D5831A907 (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m2D7540B01275552CA127202F40536B5D5831A907_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Clear()
inline void List_1_Clear_m38FF3BFEF5EF5F96F6B84F59AEC29C695C4CFD4E (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, const RuntimeMethod*))List_1_Clear_m38FF3BFEF5EF5F96F6B84F59AEC29C695C4CFD4E_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Item(System.Int32)
inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_inline (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, int32_t, const RuntimeMethod*))List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_gshared_inline)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Remove(!0)
inline bool List_1_Remove_m5CE622FEE2BD41D0769D74CDDAD0EA55C07A2025 (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 , const RuntimeMethod*))List_1_Remove_m5CE622FEE2BD41D0769D74CDDAD0EA55C07A2025_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkRequest_Invoke_m1C292B7297918C5F2DBE70971895FE8D5C33AA20 (WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Count()
inline int32_t List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_inline (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, const RuntimeMethod*))List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UnitySynchronizationContext::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_mF71A02778FCC672CC2FE4F329D9D6C66C96F70CF (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, int32_t ___mainThreadID0, const RuntimeMethod* method);
// System.Void System.Threading.SynchronizationContext::SetSynchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContext_SetSynchronizationContext_m0307B8FDCDC2A4D2C25B7DB20CF60B00E72CE04B (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___syncContext0, const RuntimeMethod* method);
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942 (const RuntimeMethod* method);
// System.Void UnityEngine.UnitySynchronizationContext::Exec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Exec_mC89E49BFB922E69AAE753887480031A142016F81 (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UnitySynchronizationContext::HasPendingTasks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnitySynchronizationContext_HasPendingTasks_mBA93E72DC46200231B7ABCFB5F22FB0617A1B1EA (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String UnityEngine.Vector2::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m503AFEA3F57B8529C047FF93C2E72126C5591C23 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9 (String_t* ___fmt0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_mA92800CD98ED6A42DD7C55C5DB22DAB4DEAA6397 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector4::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_mCA7B312F8CA141F6F25BABDDF406F3D2BDD5E895 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::Equals(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m0919D35807550372D1748193EB31E4C5E406AE61_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.String UnityEngine.Vector4::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m0EC6AA83CD606E3EB5BE60108A1D9AC4ECB5517A (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.String UnityEngine.Vector4::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_mF2D17142EBD75E91BC718B3E347F614AC45E9040 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8F825BEC75A119B6CDDA0985A3F7BA3DEA8AD5B2 (U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * __this, const RuntimeMethod* method);
// UnityEngine.LightType UnityEngine.Light::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_type_mDBBEC33D93952330EED5B02B15865C59D5C355A0 (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mCBEC26CC920C0D87DF6E25417533923E26CB6DFC (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___l0, DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7 * ___dir1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mACAC5E823E243A53EDD2A01CF857DD16C3FDBE2A (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___l0, Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B * ___cookie1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m135DF5CF6CBECA4CBA0AC71F9CDEEF8DE25606DB (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * __this, DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7 * ___light0, Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B * ___cookie1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mB11D8F3B35F96E176A89517A25CD1A54DCBD7D6E (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___l0, PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E * ___point1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m4E8BEBD383D5F6F1A1EDFEC763A718A7271C22A6 (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * __this, PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E * ___light0, Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B * ___cookie1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mB1572C38F682F043180745B7A231FBE07CD205E4 (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___l0, SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D * ___spot1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mC9948FAC4A191C99E3E7D94677B7CFD241857C86 (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * __this, SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D * ___light0, Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B * ___cookie1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mEABF77895D51E1CA5FD380682539C3DD3FC8A91C (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___l0, RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985 * ___rect1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.RectangleLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mA0DF9747C6AD308EAAF2A9530B4225A3D65BB092 (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * __this, RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985 * ___light0, Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B * ___cookie1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m93B350DDA0CB5B624054835BAF46C177472E9212 (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___l0, DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D * ___disc1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DiscLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB96C3F3E00F10DD0806BD3DB93B58C2299D59E94 (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * __this, DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D * ___light0, Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B * ___cookie1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mF600D612DE9A1CE4355C61317F6173E1AAEFBD57 (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * __this, int32_t ___lightInstanceID0, const RuntimeMethod* method);
// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::get_MessageTypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9 (MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * __this, const RuntimeMethod* method);
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0 (Guid_t  ___a0, Guid_t  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
inline void UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF *, const RuntimeMethod*))UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>::.ctor()
inline void UnityEvent_1__ctor_mC7E63F58C7EFC8E8747E3619B7564A7325F03D3B (UnityEvent_1_t5380899C55F3CD7FD1CD64F13EE5E1E4B11D602B * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5380899C55F3CD7FD1CD64F13EE5E1E4B11D602B *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mF80313305B9CD2AD39B621E1CEC5C7DFDFFBDE66 (Guid_t * __this, String_t* ___g0, const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageEvent__ctor_mE4D70D8837C51E422C9A40C3F8F34ACB9AB572BB (MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.Text.EncoderReplacementFallback::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderReplacementFallback__ctor_m07299910DC3D3F6B9F8F37A4ADD40A500F97D1D4 (EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418 * __this, String_t* ___replacement0, const RuntimeMethod* method);
// System.Void System.Text.DecoderReplacementFallback::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderReplacementFallback__ctor_m7E6C273B2682E373C787568EB0BB0B2E4B6C2253 (DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130 * __this, String_t* ___replacement0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.Int32,System.Text.EncoderFallback,System.Text.DecoderFallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_GetEncoding_m4DC46FF0C923994EDEE21980037198E27A75E4F2 (int32_t ___codepage0, EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback1, DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback2, const RuntimeMethod* method);
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF32Encoding__ctor_mCC6CB31807AE3B57FAF941B59D72D7BA10CFB1FD (UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * __this, bool ___bigEndian0, bool ___byteOrderMark1, bool ___throwOnInvalidCharacters2, const RuntimeMethod* method);
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeEncoding__ctor_m8D0BFF0DBB175D7E590674E31343E8C72701FC7C (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * __this, bool ___bigEndian0, bool ___byteOrderMark1, bool ___throwOnInvalidBytes2, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mD752778085A353529AF03841383E5603FE556449 (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * __this, bool ___encoderShouldEmitUTF8Identifier0, bool ___throwOnInvalidBytes1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte[],System.Text.Encoding>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UnhandledExceptionHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB628041C94E761F86F2A26819A038D6BC59E324D (U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF * __this, const RuntimeMethod* method);
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * UnhandledExceptionEventArgs_get_ExceptionObject_mCC83AA77B4F250C371EEE194025341F757724E90_inline (UnhandledExceptionEventArgs_tFA66D5AA8F6337DEF8E2B494B3B8C377C9FDB885 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_0 = ((SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var))->get_s_Active_0();
		V_0 = (bool)((((RuntimeObject*)(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_2 = (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 *)il2cpp_codegen_object_new(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures__ctor_m0612F2A9F55682A7255B3B276E9BAFCFC0CB4EF4(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var))->set_s_Active_0(L_2);
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_3 = ((SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var))->get_s_Active_0();
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::set_active(UnityEngine.Rendering.SupportedRenderingFeatures)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_set_active_m3BC49234CD45C5EFAE64E319D5198CA159143F54 (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportedRenderingFeatures_set_active_m3BC49234CD45C5EFAE64E319D5198CA159143F54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var))->set_s_Active_0(L_0);
		return;
	}
}
// UnityEngine.Rendering.SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_defaultMixedLightingModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7B53835BDDAF009835F9A0907BC59E4E88C71D9C (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CdefaultMixedLightingModesU3Ek__BackingField_2();
		return L_0;
	}
}
// UnityEngine.Rendering.SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_mixedLightingModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_mE4A171C47A4A685E49F2F382AA51C556B48EE58C (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CmixedLightingModesU3Ek__BackingField_3();
		return L_0;
	}
}
// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapBakeTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_mAF3B22ACCE625D1C45F411D30C2874E8A847605E (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3ClightmapBakeTypesU3Ek__BackingField_4();
		return L_0;
	}
}
// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapsModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m69B5455BF172B258A0A2DB6F52846E8934AD048A (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3ClightmapsModesU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlighten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_mA4BDBEBFE0E8F1C161D7BE28B328E6D6E36720A9 (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CenlightenU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_rendersUIOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m8E56255490C51999C7B14F30CD072E49E2C39B4E (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CrendersUIOverlayU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::FallbackMixedLightingModeByRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackMixedLightingModeByRef_m517CBD3BBD91EEA5D20CD5979DF8841FE0DBEDAC (intptr_t ___fallbackModePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportedRenderingFeatures_FallbackMixedLightingModeByRef_m517CBD3BBD91EEA5D20CD5979DF8841FE0DBEDAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ___fallbackModePtr0;
		void* L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t*)L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_2 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7B53835BDDAF009835F9A0907BC59E4E88C71D9C_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_4 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = SupportedRenderingFeatures_get_mixedLightingModes_mE4A171C47A4A685E49F2F382AA51C556B48EE58C_inline(L_4, /*hidden argument*/NULL);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_6 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7B53835BDDAF009835F9A0907BC59E4E88C71D9C_inline(L_6, /*hidden argument*/NULL);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_8 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7B53835BDDAF009835F9A0907BC59E4E88C71D9C_inline(L_8, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_5&(int32_t)L_7))) == ((int32_t)L_9))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
	}

IL_0038:
	{
		V_1 = (bool)G_B3_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_11 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7B53835BDDAF009835F9A0907BC59E4E88C71D9C_inline(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_004e;
	}

IL_004e:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)4)))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005e;
	}

IL_0054:
	{
		int32_t* L_15 = V_0;
		*((int32_t*)L_15) = (int32_t)2;
		goto IL_0063;
	}

IL_0059:
	{
		int32_t* L_16 = V_0;
		*((int32_t*)L_16) = (int32_t)1;
		goto IL_0063;
	}

IL_005e:
	{
		int32_t* L_17 = V_0;
		*((int32_t*)L_17) = (int32_t)0;
		goto IL_0063;
	}

IL_0063:
	{
		goto IL_008a;
	}

IL_0065:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		bool L_18 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m8AFE3C9D450B1A6E52A31EA84C1B8F626AAC0CD0(2, /*hidden argument*/NULL);
		V_3 = L_18;
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int32_t* L_20 = V_0;
		*((int32_t*)L_20) = (int32_t)2;
		goto IL_008a;
	}

IL_0075:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		bool L_21 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m8AFE3C9D450B1A6E52A31EA84C1B8F626AAC0CD0(1, /*hidden argument*/NULL);
		V_4 = L_21;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		int32_t* L_23 = V_0;
		*((int32_t*)L_23) = (int32_t)1;
		goto IL_008a;
	}

IL_0087:
	{
		int32_t* L_24 = V_0;
		*((int32_t*)L_24) = (int32_t)0;
	}

IL_008a:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine.MixedLightingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m8AFE3C9D450B1A6E52A31EA84C1B8F626AAC0CD0 (int32_t ___mixedMode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportedRenderingFeatures_IsMixedLightingModeSupported_m8AFE3C9D450B1A6E52A31EA84C1B8F626AAC0CD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___mixedMode0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline((&L_1), (void*)(void*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mC13FADD4B8DCEB26F58C6F5DD9D7899A621F9828(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mC13FADD4B8DCEB26F58C6F5DD9D7899A621F9828 (int32_t ___mixedMode0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mC13FADD4B8DCEB26F58C6F5DD9D7899A621F9828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool* G_B4_0 = NULL;
	bool* G_B3_0 = NULL;
	bool* G_B10_0 = NULL;
	bool* G_B6_0 = NULL;
	bool* G_B5_0 = NULL;
	bool* G_B8_0 = NULL;
	bool* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	bool* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	bool* G_B11_1 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr1;
		void* L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (bool*)L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		bool L_2 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_m8BBA40E9CBAFFD8B176F3812C36DD31D9D60BBEA(1, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool* L_4 = V_0;
		*((int8_t*)L_4) = (int8_t)0;
		goto IL_005b;
	}

IL_001b:
	{
		bool* L_5 = V_0;
		int32_t L_6 = ___mixedMode0;
		G_B3_0 = L_5;
		if (L_6)
		{
			G_B4_0 = L_5;
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_7 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = SupportedRenderingFeatures_get_mixedLightingModes_mE4A171C47A4A685E49F2F382AA51C556B48EE58C_inline(L_7, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
		if ((((int32_t)((int32_t)((int32_t)L_8&(int32_t)1))) == ((int32_t)1)))
		{
			G_B10_0 = G_B3_0;
			goto IL_0059;
		}
	}

IL_002e:
	{
		int32_t L_9 = ___mixedMode0;
		G_B5_0 = G_B4_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			G_B6_0 = G_B4_0;
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_10 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = SupportedRenderingFeatures_get_mixedLightingModes_mE4A171C47A4A685E49F2F382AA51C556B48EE58C_inline(L_10, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if ((((int32_t)((int32_t)((int32_t)L_11&(int32_t)2))) == ((int32_t)2)))
		{
			G_B10_0 = G_B5_0;
			goto IL_0059;
		}
	}

IL_0041:
	{
		int32_t L_12 = ___mixedMode0;
		G_B7_0 = G_B6_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			G_B8_0 = G_B6_0;
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_13 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = SupportedRenderingFeatures_get_mixedLightingModes_mE4A171C47A4A685E49F2F382AA51C556B48EE58C_inline(L_13, /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)((int32_t)((int32_t)L_14&(int32_t)4))) == ((int32_t)4))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0057:
	{
		G_B11_0 = G_B9_0;
		G_B11_1 = G_B9_1;
		goto IL_005a;
	}

IL_0059:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_005a:
	{
		*((int8_t*)G_B11_1) = (int8_t)G_B11_0;
	}

IL_005b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_m8BBA40E9CBAFFD8B176F3812C36DD31D9D60BBEA (int32_t ___bakeType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportedRenderingFeatures_IsLightmapBakeTypeSupported_m8BBA40E9CBAFFD8B176F3812C36DD31D9D60BBEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___bakeType0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline((&L_1), (void*)(void*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mB6F953153B328DBFD1F7E444D155F8C53ABCD876(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mB6F953153B328DBFD1F7E444D155F8C53ABCD876 (int32_t ___bakeType0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mB6F953153B328DBFD1F7E444D155F8C53ABCD876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	{
		intptr_t L_0 = ___isSupportedPtr1;
		void* L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (bool*)L_1;
		int32_t L_2 = ___bakeType0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		bool L_4 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_m8BBA40E9CBAFFD8B176F3812C36DD31D9D60BBEA(2, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_6 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = SupportedRenderingFeatures_get_mixedLightingModes_mE4A171C47A4A685E49F2F382AA51C556B48EE58C_inline(L_6, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		V_3 = (bool)G_B4_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		bool* L_9 = V_0;
		*((int8_t*)L_9) = (int8_t)0;
		goto IL_0064;
	}

IL_0035:
	{
	}

IL_0036:
	{
		bool* L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_11 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = SupportedRenderingFeatures_get_lightmapBakeTypes_mAF3B22ACCE625D1C45F411D30C2874E8A847605E_inline(L_11, /*hidden argument*/NULL);
		int32_t L_13 = ___bakeType0;
		int32_t L_14 = ___bakeType0;
		*((int8_t*)L_10) = (int8_t)((((int32_t)((int32_t)((int32_t)L_12&(int32_t)L_13))) == ((int32_t)L_14))? 1 : 0);
		int32_t L_15 = ___bakeType0;
		if ((!(((uint32_t)L_15) == ((uint32_t)4))))
		{
			goto IL_005a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_16 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_17 = SupportedRenderingFeatures_get_enlighten_mA4BDBEBFE0E8F1C161D7BE28B328E6D6E36720A9_inline(L_16, /*hidden argument*/NULL);
		G_B10_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B10_0 = 0;
	}

IL_005b:
	{
		V_4 = (bool)G_B10_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		bool* L_19 = V_0;
		*((int8_t*)L_19) = (int8_t)0;
	}

IL_0064:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapsModeSupportedByRef(UnityEngine.LightmapsMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapsModeSupportedByRef_m3477F21B073DD73F183FAD40A8EEF53843A8A581 (int32_t ___mode0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportedRenderingFeatures_IsLightmapsModeSupportedByRef_m3477F21B073DD73F183FAD40A8EEF53843A8A581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr1;
		void* L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_3 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = SupportedRenderingFeatures_get_lightmapsModes_m69B5455BF172B258A0A2DB6F52846E8934AD048A_inline(L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___mode0;
		int32_t L_6 = ___mode0;
		*((int8_t*)L_2) = (int8_t)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)L_5))) == ((int32_t)L_6))? 1 : 0);
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapperSupportedByRef(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapperSupportedByRef_mEAFB23042E154953C780501A57D605F76510BB11 (int32_t ___lightmapper0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportedRenderingFeatures_IsLightmapperSupportedByRef_mEAFB23042E154953C780501A57D605F76510BB11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	bool* G_B3_0 = NULL;
	int32_t G_B4_0 = 0;
	bool* G_B4_1 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr1;
		void* L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		int32_t L_3 = ___lightmapper0;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_4 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = SupportedRenderingFeatures_get_enlighten_mA4BDBEBFE0E8F1C161D7BE28B328E6D6E36720A9_inline(L_4, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (!L_5)
		{
			G_B3_0 = G_B1_0;
			goto IL_001b;
		}
	}

IL_0018:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_001c:
	{
		*((int8_t*)G_B4_1) = (int8_t)G_B4_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsUIOverlayRenderedBySRP(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsUIOverlayRenderedBySRP_m829585DA31B1BECD1349A02B69657B1D38D2DDC3 (intptr_t ___isSupportedPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportedRenderingFeatures_IsUIOverlayRenderedBySRP_m829585DA31B1BECD1349A02B69657B1D38D2DDC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr0;
		void* L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_3 = SupportedRenderingFeatures_get_active_mE16AFBB742C413071F2DB87563826A90A93EA04F(/*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = SupportedRenderingFeatures_get_rendersUIOverlay_m8E56255490C51999C7B14F30CD072E49E2C39B4E_inline(L_3, /*hidden argument*/NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::FallbackLightmapperByRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackLightmapperByRef_mD2BB8B58F329170010CB9B3BF72794755218046A (intptr_t ___lightmapperPtr0, const RuntimeMethod* method)
{
	int32_t* V_0 = NULL;
	{
		intptr_t L_0 = ___lightmapperPtr0;
		void* L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t*)L_1;
		int32_t* L_2 = V_0;
		*((int32_t*)L_2) = (int32_t)1;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_m0612F2A9F55682A7255B3B276E9BAFCFC0CB4EF4 (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportedRenderingFeatures__ctor_m0612F2A9F55682A7255B3B276E9BAFCFC0CB4EF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CreflectionProbeModesU3Ek__BackingField_1(0);
		__this->set_U3CdefaultMixedLightingModesU3Ek__BackingField_2(0);
		__this->set_U3CmixedLightingModesU3Ek__BackingField_3(7);
		__this->set_U3ClightmapBakeTypesU3Ek__BackingField_4(7);
		__this->set_U3ClightmapsModesU3Ek__BackingField_5(1);
		__this->set_U3CenlightenU3Ek__BackingField_6((bool)1);
		__this->set_U3ClightProbeProxyVolumesU3Ek__BackingField_7((bool)1);
		__this->set_U3CmotionVectorsU3Ek__BackingField_8((bool)1);
		__this->set_U3CreceiveShadowsU3Ek__BackingField_9((bool)1);
		__this->set_U3CreflectionProbesU3Ek__BackingField_10((bool)1);
		__this->set_U3CrendererPriorityU3Ek__BackingField_11((bool)0);
		__this->set_U3CterrainDetailUnsupportedU3Ek__BackingField_12((bool)0);
		__this->set_U3CoverridesEnvironmentLightingU3Ek__BackingField_14((bool)0);
		__this->set_U3CoverridesFogU3Ek__BackingField_15((bool)0);
		__this->set_U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_16((bool)0);
		__this->set_U3CoverridesOtherLightingSettingsU3Ek__BackingField_17((bool)0);
		__this->set_U3CeditableMaterialRenderQueueU3Ek__BackingField_18((bool)1);
		__this->set_U3CoverridesLODBiasU3Ek__BackingField_19((bool)0);
		__this->set_U3CoverridesMaximumLODLevelU3Ek__BackingField_20((bool)0);
		__this->set_U3CrendererProbesU3Ek__BackingField_21((bool)1);
		__this->set_U3CparticleSystemInstancingU3Ek__BackingField_22((bool)1);
		__this->set_U3CoverridesShadowmaskU3Ek__BackingField_23((bool)0);
		__this->set_U3CoverrideShadowmaskMessageU3Ek__BackingField_24(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__cctor_mCC9E6E14A59B708435BCF2B25BE36943EC590E28 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportedRenderingFeatures__cctor_mCC9E6E14A59B708435BCF2B25BE36943EC590E28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * L_0 = (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 *)il2cpp_codegen_object_new(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures__ctor_m0612F2A9F55682A7255B3B276E9BAFCFC0CB4EF4(L_0, /*hidden argument*/NULL);
		((SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54_il2cpp_TypeInfo_var))->set_s_Active_0(L_0);
		return;
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
// System.Boolean UnityEngine.SystemInfo::IsValidEnumValue(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_IsValidEnumValue_mDF4AFDCB30A42032742988AD9BC5E0E00EFA86C8 (Enum_t23B90B40F60E677A8025267341651C94AE079CDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SystemInfo_IsValidEnumValue_mDF4AFDCB30A42032742988AD9BC5E0E00EFA86C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Enum_t23B90B40F60E677A8025267341651C94AE079CDA * L_0 = ___value0;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		Enum_t23B90B40F60E677A8025267341651C94AE079CDA * L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		bool L_3 = Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96(L_1, L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_001c;
	}

IL_0018:
	{
		V_1 = (bool)1;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean UnityEngine.SystemInfo::SupportsTextureFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsTextureFormat_mE7DA9DC2B167CB7E9A864924C8772307F1A2F0B9 (int32_t ___format0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SystemInfo_SupportsTextureFormat_mE7DA9DC2B167CB7E9A864924C8772307F1A2F0B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___format0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = SystemInfo_IsValidEnumValue_mDF4AFDCB30A42032742988AD9BC5E0E00EFA86C8((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_5, _stringLiteral2C858C708A53B482CEA9BA62F9D7A0CC6A5E3F09, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, SystemInfo_SupportsTextureFormat_mE7DA9DC2B167CB7E9A864924C8772307F1A2F0B9_RuntimeMethod_var);
	}

IL_001e:
	{
		int32_t L_6 = ___format0;
		bool L_7 = SystemInfo_SupportsTextureFormatNative_m1514BFE543D7EE39CEF43B429B52E2EC20AB8E75(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean UnityEngine.SystemInfo::SupportsTextureFormatNative(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsTextureFormatNative_m1514BFE543D7EE39CEF43B429B52E2EC20AB8E75 (int32_t ___format0, const RuntimeMethod* method)
{
	typedef bool (*SystemInfo_SupportsTextureFormatNative_m1514BFE543D7EE39CEF43B429B52E2EC20AB8E75_ftn) (int32_t);
	static SystemInfo_SupportsTextureFormatNative_m1514BFE543D7EE39CEF43B429B52E2EC20AB8E75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_SupportsTextureFormatNative_m1514BFE543D7EE39CEF43B429B52E2EC20AB8E75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::SupportsTextureFormatNative(UnityEngine.TextureFormat)");
	bool retVal = _il2cpp_icall_func(___format0);
	return retVal;
}
// System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_IsFormatSupported_m03EDA316B42377504BA47B256EB094F8A54BC75C (int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method)
{
	typedef bool (*SystemInfo_IsFormatSupported_m03EDA316B42377504BA47B256EB094F8A54BC75C_ftn) (int32_t, int32_t);
	static SystemInfo_IsFormatSupported_m03EDA316B42377504BA47B256EB094F8A54BC75C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_IsFormatSupported_m03EDA316B42377504BA47B256EB094F8A54BC75C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)");
	bool retVal = _il2cpp_icall_func(___format0, ___usage1);
	return retVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetCompatibleFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_GetCompatibleFormat_m02B5C5B1F3836661A92F3C83E44B66729C03B228 (int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method)
{
	typedef int32_t (*SystemInfo_GetCompatibleFormat_m02B5C5B1F3836661A92F3C83E44B66729C03B228_ftn) (int32_t, int32_t);
	static SystemInfo_GetCompatibleFormat_m02B5C5B1F3836661A92F3C83E44B66729C03B228_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_GetCompatibleFormat_m02B5C5B1F3836661A92F3C83E44B66729C03B228_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::GetCompatibleFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)");
	int32_t retVal = _il2cpp_icall_func(___format0, ___usage1);
	return retVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetGraphicsFormat(UnityEngine.Experimental.Rendering.DefaultFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_GetGraphicsFormat_mE36FE85F87F085503FEAA34112E454E9F2AFEF55 (int32_t ___format0, const RuntimeMethod* method)
{
	typedef int32_t (*SystemInfo_GetGraphicsFormat_mE36FE85F87F085503FEAA34112E454E9F2AFEF55_ftn) (int32_t);
	static SystemInfo_GetGraphicsFormat_mE36FE85F87F085503FEAA34112E454E9F2AFEF55_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_GetGraphicsFormat_mE36FE85F87F085503FEAA34112E454E9F2AFEF55_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::GetGraphicsFormat(UnityEngine.Experimental.Rendering.DefaultFormat)");
	int32_t retVal = _il2cpp_icall_func(___format0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] UnityEngine.TextAsset::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method)
{
	typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F_ftn) (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *);
	static TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextAsset::get_bytes()");
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F(__this, /*hidden argument*/NULL);
		String_t* L_1 = TextAsset_DecodeString_m3CD8D6865DCE58592AE76360F4DB856A6962FE13(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.TextAsset::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_ToString_m55E5177185AA59560459F579E36C03CF1971EC57 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.TextAsset::DecodeString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_DecodeString_m3CD8D6865DCE58592AE76360F4DB856A6962FE13 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextAsset_DecodeString_m3CD8D6865DCE58592AE76360F4DB856A6962FE13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_10 = NULL;
	String_t* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	String_t* V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)NULL;
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var);
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_0 = ((EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields*)il2cpp_codegen_static_fields_for(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var))->get_encodingLookup_0();
		NullCheck(L_0);
		V_2 = (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_3 = 0;
		goto IL_00ad;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var);
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_1 = ((EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields*)il2cpp_codegen_static_fields_for(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var))->get_encodingLookup_0();
		int32_t L_2 = V_3;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = KeyValuePair_2_get_Key_mE3B6053863D44C5F1D341E3608D33EA07D9AF00F_inline((KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), /*hidden argument*/KeyValuePair_2_get_Key_mE3B6053863D44C5F1D341E3608D33EA07D9AF00F_RuntimeMethod_var);
		V_4 = L_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_4;
		NullCheck(L_4);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___bytes0;
		NullCheck(L_5);
		int32_t L_6 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))) < ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_00a8;
		}
	}
	{
		V_6 = 0;
		goto IL_0061;
	}

IL_0041:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_4;
		int32_t L_9 = V_6;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bytes0;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_7 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_005a;
		}
	}
	{
		V_1 = (-1);
	}

IL_005a:
	{
		int32_t L_17 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_18 = V_6;
		int32_t L_19 = V_1;
		V_8 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_8;
		if (L_20)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_21 = V_1;
		V_9 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_00a9;
	}

IL_0078:
	{
	}

IL_0079:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var);
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_23 = ((EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields*)il2cpp_codegen_static_fields_for(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var))->get_encodingLookup_0();
		int32_t L_24 = V_3;
		NullCheck(L_23);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_25 = KeyValuePair_2_get_Value_mC8998BD9202FEE7FE0D2F5C2C3DDE2A3B2E3CAE2_inline((KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), /*hidden argument*/KeyValuePair_2_get_Value_mC8998BD9202FEE7FE0D2F5C2C3DDE2A3B2E3CAE2_RuntimeMethod_var);
		V_10 = L_25;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_26 = V_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = ___bytes0;
		int32_t L_28 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = ___bytes0;
		NullCheck(L_29);
		int32_t L_30 = V_1;
		NullCheck(L_26);
		String_t* L_31 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(31 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, L_28, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))), (int32_t)L_30)));
		V_11 = L_31;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_32 = V_10;
		V_0 = L_32;
		goto IL_00ba;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a1;
		throw e;
	}

CATCH_00a1:
	{ // begin catch(System.Object)
		goto IL_00a6;
	} // end catch (depth: 1)

IL_00a6:
	{
	}

IL_00a8:
	{
	}

IL_00a9:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00ad:
	{
		int32_t L_34 = V_3;
		int32_t L_35 = V_2;
		V_12 = (bool)((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_12;
		if (L_36)
		{
			goto IL_0014;
		}
	}

IL_00ba:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_37 = V_0;
		V_13 = (bool)((((RuntimeObject*)(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)L_37) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_38 = V_13;
		if (!L_38)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_39 = ((EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields*)il2cpp_codegen_static_fields_for(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var))->get_targetEncoding_1();
		V_0 = L_39;
		V_1 = 0;
	}

IL_00ce:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_40 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = ___bytes0;
		int32_t L_42 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = ___bytes0;
		NullCheck(L_43);
		int32_t L_44 = V_1;
		NullCheck(L_40);
		String_t* L_45 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(31 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, L_42, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))), (int32_t)L_44)));
		V_14 = L_45;
		goto IL_00df;
	}

IL_00df:
	{
		String_t* L_46 = V_14;
		return L_46;
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
// System.Void UnityEngine.Texture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture__ctor_mA6FE9CC0AF05A99FADCEF0BED2FB0C95571AAF4A (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture__ctor_mA6FE9CC0AF05A99FADCEF0BED2FB0C95571AAF4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object__ctor_m4DCF5CDB32C2C69290894101A81F473865169279(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture::set_width(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_width_m6BCD23D97A9883DE0FB34E6FF48883F6C09D9F8F (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture_set_width_m6BCD23D97A9883DE0FB34E6FF48883F6C09D9F8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Texture_set_width_m6BCD23D97A9883DE0FB34E6FF48883F6C09D9F8F_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Texture::set_height(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_height_mAC3CA245CB260972C0537919C451DBF3BA1A4554 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture_set_height_mAC3CA245CB260972C0537919C451DBF3BA1A4554_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Texture_set_height_mAC3CA245CB260972C0537919C451DBF3BA1A4554_RuntimeMethod_var);
	}
}
// System.Boolean UnityEngine.Texture::ValidateFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture_ValidateFormat_mC3C7A3FE51CA18357ABE027958BF97D3C6675D39 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___format0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture_ValidateFormat_mC3C7A3FE51CA18357ABE027958BF97D3C6675D39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___format0;
		bool L_1 = SystemInfo_SupportsTextureFormat_mE7DA9DC2B167CB7E9A864924C8772307F1A2F0B9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0060;
	}

IL_0010:
	{
		int32_t L_3 = ___format0;
		bool L_4 = GraphicsFormatUtility_IsCompressedTextureFormat_m740C48D113EFDF97CD6EB48308B486F68C03CF82(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject * L_6 = Box(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var, (&___format0));
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		___format0 = *(int32_t*)UnBox(L_6);
		String_t* L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral53C1FDDFB27F4AC3390BB680F6C9973557316267, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8(L_8, __this, /*hidden argument*/NULL);
		V_1 = (bool)1;
		goto IL_0060;
	}

IL_003d:
	{
		RuntimeObject * L_9 = Box(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var, (&___format0));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		___format0 = *(int32_t*)UnBox(L_9);
		String_t* L_11 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral393D29E55DA6AB694C34E4CD55DD01405ABE2979, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199(L_11, __this, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_0060;
	}

IL_0060:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Boolean UnityEngine.Texture::ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture_ValidateFormat_mB721DB544C78FC025FC3D3F85AD705D54F1B52CE (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture_ValidateFormat_mB721DB544C78FC025FC3D3F85AD705D54F1B52CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___format0;
		int32_t L_1 = ___usage1;
		bool L_2 = SystemInfo_IsFormatSupported_m03EDA316B42377504BA47B256EB094F8A54BC75C(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0041;
	}

IL_0011:
	{
		RuntimeObject * L_4 = Box(GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_il2cpp_TypeInfo_var, (&___format0));
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		___format0 = *(int32_t*)UnBox(L_4);
		RuntimeObject * L_6 = Box(FormatUsage_t98D974BA17DF860A91D96AEBF446A2E9BF914336_il2cpp_TypeInfo_var, (&___usage1));
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		___usage1 = *(int32_t*)UnBox(L_6);
		String_t* L_8 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralD874F42C13E37C2DC1439129B007C88EBE826695, L_5, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199(L_8, __this, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_0041;
	}

IL_0041:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.Texture::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture__cctor_m6474E45E076B9A176073F458843BAC631033F2B7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture__cctor_m6474E45E076B9A176073F458843BAC631033F2B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields*)il2cpp_codegen_static_fields_for(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var))->set_GenerateAllMips_4((-1));
		return;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2DArray_Internal_CreateImpl_m5B8B806393D443E6F0CB49AB019C8E9A1C8644B1 (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___mipCount4, int32_t ___format5, int32_t ___flags6, const RuntimeMethod* method)
{
	typedef bool (*Texture2DArray_Internal_CreateImpl_m5B8B806393D443E6F0CB49AB019C8E9A1C8644B1_ftn) (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
	static Texture2DArray_Internal_CreateImpl_m5B8B806393D443E6F0CB49AB019C8E9A1C8644B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2DArray_Internal_CreateImpl_m5B8B806393D443E6F0CB49AB019C8E9A1C8644B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)");
	bool retVal = _il2cpp_icall_func(___mono0, ___w1, ___h2, ___d3, ___mipCount4, ___format5, ___flags6);
	return retVal;
}
// System.Void UnityEngine.Texture2DArray::Internal_Create(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DArray_Internal_Create_m5DD4264F3965FBE126FAA447C79876C22D36D39C (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___mipCount4, int32_t ___format5, int32_t ___flags6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2DArray_Internal_Create_m5DD4264F3965FBE126FAA447C79876C22D36D39C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * L_0 = ___mono0;
		int32_t L_1 = ___w1;
		int32_t L_2 = ___h2;
		int32_t L_3 = ___d3;
		int32_t L_4 = ___mipCount4;
		int32_t L_5 = ___format5;
		int32_t L_6 = ___flags6;
		bool L_7 = Texture2DArray_Internal_CreateImpl_m5B8B806393D443E6F0CB49AB019C8E9A1C8644B1(L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0022;
		}
	}
	{
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_9 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var);
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_9, _stringLiteralAEEADD39FAC5E5FBA4DB890FD04D7348FC618A7D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, Texture2DArray_Internal_Create_m5DD4264F3965FBE126FAA447C79876C22D36D39C_RuntimeMethod_var);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.DefaultFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DArray__ctor_mAE2D5B259CE352E6F4F10A28FDDCE52B771672B2 (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___depth2;
		int32_t L_3 = ___format3;
		int32_t L_4 = SystemInfo_GetGraphicsFormat_mE36FE85F87F085503FEAA34112E454E9F2AFEF55(L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___flags4;
		Texture2DArray__ctor_m139056CD509EAC819F9713F6A2CAE801D49CA13F(__this, L_0, L_1, L_2, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DArray__ctor_m139056CD509EAC819F9713F6A2CAE801D49CA13F (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2DArray__ctor_m139056CD509EAC819F9713F6A2CAE801D49CA13F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___depth2;
		int32_t L_3 = ___format3;
		int32_t L_4 = ___flags4;
		IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields*)il2cpp_codegen_static_fields_for(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var))->get_GenerateAllMips_4();
		Texture2DArray__ctor_mB19D8E34783F95713A23A0F06F63EF1B1613E9C5(__this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DArray__ctor_mB19D8E34783F95713A23A0F06F63EF1B1613E9C5 (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, int32_t ___mipCount5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2DArray__ctor_mB19D8E34783F95713A23A0F06F63EF1B1613E9C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		Texture__ctor_mA6FE9CC0AF05A99FADCEF0BED2FB0C95571AAF4A(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___format3;
		bool L_1 = Texture_ValidateFormat_mB721DB544C78FC025FC3D3F85AD705D54F1B52CE(__this, L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___width0;
		int32_t L_4 = ___height1;
		int32_t L_5 = ___depth2;
		int32_t L_6 = ___mipCount5;
		int32_t L_7 = ___format3;
		int32_t L_8 = ___flags4;
		Texture2DArray_Internal_Create_m5DD4264F3965FBE126FAA447C79876C22D36D39C(__this, L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DArray__ctor_mEE6D4AD1D7469894FA16627A222EDC34647F6DB3 (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, int32_t ___mipCount4, bool ___linear5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2DArray__ctor_mEE6D4AD1D7469894FA16627A222EDC34647F6DB3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		Texture__ctor_mA6FE9CC0AF05A99FADCEF0BED2FB0C95571AAF4A(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___textureFormat3;
		bool L_1 = Texture_ValidateFormat_mC3C7A3FE51CA18357ABE027958BF97D3C6675D39(__this, L_0, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_004e;
	}

IL_0019:
	{
		int32_t L_3 = ___textureFormat3;
		bool L_4 = ___linear5;
		int32_t L_5 = GraphicsFormatUtility_GetGraphicsFormat_mF9AFEB31DE7E63FC76D6A99AE31A108491A9F232(L_3, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = ___mipCount4;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = 1;
	}

IL_002f:
	{
		V_1 = G_B5_0;
		int32_t L_7 = ___textureFormat3;
		bool L_8 = GraphicsFormatUtility_IsCrunchFormat_mB31D5C0C0D337A3B00D1AED3A7E036CD52540F66(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10|(int32_t)((int32_t)64)));
	}

IL_0040:
	{
		int32_t L_11 = ___width0;
		int32_t L_12 = ___height1;
		int32_t L_13 = ___depth2;
		int32_t L_14 = ___mipCount4;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		Texture2DArray_Internal_Create_m5DD4264F3965FBE126FAA447C79876C22D36D39C(__this, L_11, L_12, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DArray__ctor_m4772A79C577E6E246301F31D86FE6F150B1B68E2 (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, bool ___mipChain4, bool ___linear5, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = 0;
	int32_t G_B2_3 = 0;
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	int32_t G_B1_2 = 0;
	int32_t G_B1_3 = 0;
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * G_B1_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = 0;
	int32_t G_B3_4 = 0;
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * G_B3_5 = NULL;
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___depth2;
		int32_t L_3 = ___textureFormat3;
		bool L_4 = ___mipChain4;
		G_B1_0 = L_3;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		G_B1_4 = __this;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			G_B2_4 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_000e:
	{
		bool L_5 = ___linear5;
		NullCheck(G_B3_5);
		Texture2DArray__ctor_mEE6D4AD1D7469894FA16627A222EDC34647F6DB3(G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DArray__ctor_mED6E22E57F51628D68F219E5C01FF01A265CE386 (Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, bool ___mipChain4, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = 0;
	int32_t G_B2_3 = 0;
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	int32_t G_B1_2 = 0;
	int32_t G_B1_3 = 0;
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * G_B1_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = 0;
	int32_t G_B3_4 = 0;
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * G_B3_5 = NULL;
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___depth2;
		int32_t L_3 = ___textureFormat3;
		bool L_4 = ___mipChain4;
		G_B1_0 = L_3;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		G_B1_4 = __this;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			G_B2_4 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_000e:
	{
		NullCheck(G_B3_5);
		Texture2DArray__ctor_mEE6D4AD1D7469894FA16627A222EDC34647F6DB3(G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, (bool)0, /*hidden argument*/NULL);
		return;
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
// System.Boolean UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture3D_Internal_CreateImpl_m41E3DE82535685BDE643C82AB65722CCB98E7C20 (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___mipCount4, int32_t ___format5, int32_t ___flags6, const RuntimeMethod* method)
{
	typedef bool (*Texture3D_Internal_CreateImpl_m41E3DE82535685BDE643C82AB65722CCB98E7C20_ftn) (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
	static Texture3D_Internal_CreateImpl_m41E3DE82535685BDE643C82AB65722CCB98E7C20_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture3D_Internal_CreateImpl_m41E3DE82535685BDE643C82AB65722CCB98E7C20_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)");
	bool retVal = _il2cpp_icall_func(___mono0, ___w1, ___h2, ___d3, ___mipCount4, ___format5, ___flags6);
	return retVal;
}
// System.Void UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D_Internal_Create_m65B50261584E685D8375F5398311C549271ED1B6 (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___mipCount4, int32_t ___format5, int32_t ___flags6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture3D_Internal_Create_m65B50261584E685D8375F5398311C549271ED1B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * L_0 = ___mono0;
		int32_t L_1 = ___w1;
		int32_t L_2 = ___h2;
		int32_t L_3 = ___d3;
		int32_t L_4 = ___mipCount4;
		int32_t L_5 = ___format5;
		int32_t L_6 = ___flags6;
		bool L_7 = Texture3D_Internal_CreateImpl_m41E3DE82535685BDE643C82AB65722CCB98E7C20(L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0022;
		}
	}
	{
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_9 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var);
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_9, _stringLiteral3101ED7ACD48624A3ECC70BC8CA746903A32B589, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, Texture3D_Internal_Create_m65B50261584E685D8375F5398311C549271ED1B6_RuntimeMethod_var);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.DefaultFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D__ctor_mA422DEB7F88AA34806E6AA2D91258AA093F3C3AE (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___depth2;
		int32_t L_3 = ___format3;
		int32_t L_4 = SystemInfo_GetGraphicsFormat_mE36FE85F87F085503FEAA34112E454E9F2AFEF55(L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___flags4;
		Texture3D__ctor_m666A8D01B0E3B7773C7CDAB624D69E16331CFA36(__this, L_0, L_1, L_2, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D__ctor_m666A8D01B0E3B7773C7CDAB624D69E16331CFA36 (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture3D__ctor_m666A8D01B0E3B7773C7CDAB624D69E16331CFA36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___depth2;
		int32_t L_3 = ___format3;
		int32_t L_4 = ___flags4;
		IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields*)il2cpp_codegen_static_fields_for(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var))->get_GenerateAllMips_4();
		Texture3D__ctor_m6DC8372EBD1146127A4CE86F3E65930ABAB6539D(__this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D__ctor_m6DC8372EBD1146127A4CE86F3E65930ABAB6539D (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, int32_t ___mipCount5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture3D__ctor_m6DC8372EBD1146127A4CE86F3E65930ABAB6539D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		Texture__ctor_mA6FE9CC0AF05A99FADCEF0BED2FB0C95571AAF4A(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___format3;
		bool L_1 = Texture_ValidateFormat_mB721DB544C78FC025FC3D3F85AD705D54F1B52CE(__this, L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___width0;
		int32_t L_4 = ___height1;
		int32_t L_5 = ___depth2;
		int32_t L_6 = ___mipCount5;
		int32_t L_7 = ___format3;
		int32_t L_8 = ___flags4;
		Texture3D_Internal_Create_m65B50261584E685D8375F5398311C549271ED1B6(__this, L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D__ctor_m7AE9A6F7E67FE89DEA087647FB3375343D997F4C (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, int32_t ___mipCount4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture3D__ctor_m7AE9A6F7E67FE89DEA087647FB3375343D997F4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		Texture__ctor_mA6FE9CC0AF05A99FADCEF0BED2FB0C95571AAF4A(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___textureFormat3;
		bool L_1 = Texture_ValidateFormat_mC3C7A3FE51CA18357ABE027958BF97D3C6675D39(__this, L_0, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_004a;
	}

IL_0019:
	{
		int32_t L_3 = ___textureFormat3;
		int32_t L_4 = GraphicsFormatUtility_GetGraphicsFormat_mF9AFEB31DE7E63FC76D6A99AE31A108491A9F232(L_3, (bool)0, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = ___mipCount4;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 1;
	}

IL_002b:
	{
		V_1 = G_B5_0;
		int32_t L_6 = ___textureFormat3;
		bool L_7 = GraphicsFormatUtility_IsCrunchFormat_mB31D5C0C0D337A3B00D1AED3A7E036CD52540F66(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9|(int32_t)((int32_t)64)));
	}

IL_003c:
	{
		int32_t L_10 = ___width0;
		int32_t L_11 = ___height1;
		int32_t L_12 = ___depth2;
		int32_t L_13 = ___mipCount4;
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		Texture3D_Internal_Create_m65B50261584E685D8375F5398311C549271ED1B6(__this, L_10, L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D__ctor_m2B875ADAA935AC50C758ECEBA69F13172FD620FC (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, bool ___mipChain4, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = 0;
	int32_t G_B2_3 = 0;
	Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	int32_t G_B1_2 = 0;
	int32_t G_B1_3 = 0;
	Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * G_B1_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = 0;
	int32_t G_B3_4 = 0;
	Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * G_B3_5 = NULL;
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___depth2;
		int32_t L_3 = ___textureFormat3;
		bool L_4 = ___mipChain4;
		G_B1_0 = L_3;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		G_B1_4 = __this;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			G_B2_4 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_000e:
	{
		NullCheck(G_B3_5);
		Texture3D__ctor_m7AE9A6F7E67FE89DEA087647FB3375343D997F4C(G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  TextureMixerPlayable_GetHandle_m44A48E52180084F5A93942EA0AFA454C9DFBFD40 (TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  TextureMixerPlayable_GetHandle_m44A48E52180084F5A93942EA0AFA454C9DFBFD40_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405 * _thisAdjusted = reinterpret_cast<TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405 *>(__this + _offset);
	return TextureMixerPlayable_GetHandle_m44A48E52180084F5A93942EA0AFA454C9DFBFD40(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m49E1B77DF4F13F35321494AC6B5330538D0A1980 (TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405 * __this, TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureMixerPlayable_Equals_m49E1B77DF4F13F35321494AC6B5330538D0A1980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = TextureMixerPlayable_GetHandle_m44A48E52180084F5A93942EA0AFA454C9DFBFD40((TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = TextureMixerPlayable_GetHandle_m44A48E52180084F5A93942EA0AFA454C9DFBFD40((TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool TextureMixerPlayable_Equals_m49E1B77DF4F13F35321494AC6B5330538D0A1980_AdjustorThunk (RuntimeObject * __this, TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405 * _thisAdjusted = reinterpret_cast<TextureMixerPlayable_tFB2B863C89A2EF9E78112907CE52AAA2E299F405 *>(__this + _offset);
	return TextureMixerPlayable_Equals_m49E1B77DF4F13F35321494AC6B5330538D0A1980(_thisAdjusted, ___other0, method);
}
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
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method)
{
	typedef float (*Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290_ftn) ();
	static Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.TrackedReference
IL2CPP_EXTERN_C void TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke(const TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514& unmarshaled, TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke_back(const TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_pinvoke& marshaled, TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
IL2CPP_EXTERN_C void TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_pinvoke_cleanup(TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
IL2CPP_EXTERN_C void TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_com(const TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514& unmarshaled, TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_com_back(const TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_com& marshaled, TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
IL2CPP_EXTERN_C void TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshal_com_cleanup(TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Transform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform__ctor_m629D1F6D054AD8FA5BD74296A23FCA93BEB76803 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method)
{
	{
		Component__ctor_m0B00FA207EB3E560B78938D8AD877DB2BC1E3722(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Transform_get_position_Injected_m43CE3FC8FB3C52896D709B07EB77340407800C13(__this, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		Transform_set_position_Injected_m634DE2302555154065001583E6080CC48D58A602(__this, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Transform_get_rotation_Injected_m1F756C98851F36F25BFBAC3401B67A4D2F176DF1(__this, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method)
{
	{
		Transform_set_rotation_Injected_m9ACF0891D219140A329411F33858C7B0A026407F(__this, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Transform_get_localRotation_Injected_mCF48B92BAD51A015698EFE3973CD2F595048E74B(__this, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method)
{
	{
		Transform_set_localRotation_Injected_m19EF26CC5E0F8331297D3FB17EFFC7FD217A9FCA(__this, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___eulers0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___eulers0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___eulers0;
		float L_5 = L_4.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = ___relativeTo1;
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)1))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_9, L_10, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(__this, L_11, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0036:
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_14, L_15, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_16, L_17, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_12, L_18, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(__this, L_19, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method)
{
	{
		float L_0 = ___xAngle0;
		float L_1 = ___yAngle1;
		float L_2 = ___zAngle2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378(__this, L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05_ftn) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *);
	static Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259 * L_0 = (Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259 *)il2cpp_codegen_object_new(Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259_il2cpp_TypeInfo_var);
		Enumerator__ctor_m052C22273F1D789E58A09606D5EE5E87ABC2C91B(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C_ftn) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, int32_t);
	static Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * retVal = _il2cpp_icall_func(__this, ___index0);
	return retVal;
}
// System.Void UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_get_position_Injected_m43CE3FC8FB3C52896D709B07EB77340407800C13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Transform_get_position_Injected_m43CE3FC8FB3C52896D709B07EB77340407800C13_ftn) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static Transform_get_position_Injected_m43CE3FC8FB3C52896D709B07EB77340407800C13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_position_Injected_m43CE3FC8FB3C52896D709B07EB77340407800C13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_Injected_m634DE2302555154065001583E6080CC48D58A602 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value0, const RuntimeMethod* method)
{
	typedef void (*Transform_set_position_Injected_m634DE2302555154065001583E6080CC48D58A602_ftn) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static Transform_set_position_Injected_m634DE2302555154065001583E6080CC48D58A602_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_position_Injected_m634DE2302555154065001583E6080CC48D58A602_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_get_rotation_Injected_m1F756C98851F36F25BFBAC3401B67A4D2F176DF1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Transform_get_rotation_Injected_m1F756C98851F36F25BFBAC3401B67A4D2F176DF1_ftn) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static Transform_get_rotation_Injected_m1F756C98851F36F25BFBAC3401B67A4D2F176DF1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_rotation_Injected_m1F756C98851F36F25BFBAC3401B67A4D2F176DF1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_Injected_m9ACF0891D219140A329411F33858C7B0A026407F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Transform_set_rotation_Injected_m9ACF0891D219140A329411F33858C7B0A026407F_ftn) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static Transform_set_rotation_Injected_m9ACF0891D219140A329411F33858C7B0A026407F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_rotation_Injected_m9ACF0891D219140A329411F33858C7B0A026407F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Transform::get_localRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_get_localRotation_Injected_mCF48B92BAD51A015698EFE3973CD2F595048E74B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Transform_get_localRotation_Injected_mCF48B92BAD51A015698EFE3973CD2F595048E74B_ftn) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static Transform_get_localRotation_Injected_mCF48B92BAD51A015698EFE3973CD2F595048E74B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_localRotation_Injected_mCF48B92BAD51A015698EFE3973CD2F595048E74B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_localRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_Injected_m19EF26CC5E0F8331297D3FB17EFFC7FD217A9FCA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Transform_set_localRotation_Injected_m19EF26CC5E0F8331297D3FB17EFFC7FD217A9FCA_ftn) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static Transform_set_localRotation_Injected_m19EF26CC5E0F8331297D3FB17EFFC7FD217A9FCA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_localRotation_Injected_m19EF26CC5E0F8331297D3FB17EFFC7FD217A9FCA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UnhandledExceptionHandler::RegisterUECatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnhandledExceptionHandler_RegisterUECatcher_m3A92AB19701D52AE35F525E9518DAD6763D66A93 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnhandledExceptionHandler_RegisterUECatcher_m3A92AB19701D52AE35F525E9518DAD6763D66A93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * G_B2_0 = NULL;
	AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * G_B2_1 = NULL;
	UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * G_B1_0 = NULL;
	AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * G_B1_1 = NULL;
	{
		AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * L_0 = AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_il2cpp_TypeInfo_var);
		UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * L_1 = ((U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_il2cpp_TypeInfo_var);
		U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF * L_3 = ((U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * L_4 = (UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 *)il2cpp_codegen_object_new(UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64_il2cpp_TypeInfo_var);
		UnhandledExceptionEventHandler__ctor_mE6B0B21833515D1B7627DB2DCB6CF045E5E1B691(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterUECatcherU3Eb__0_0_mB2E6DD6B9C72FA3D5DB8D311DB281F272A587278_RuntimeMethod_var), /*hidden argument*/NULL);
		UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * L_5 = L_4;
		((U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		AppDomain_add_UnhandledException_mCF60CDF3EFDFC0C7757CE33C59B3C4B59948FB9E(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		return;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_Invoke_mFFF1FFE59D8285F8A81350E6D5C4D791F44F6AC9 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_BeginInvoke_m67AAC6F5871162346CBCCA0CA51AA38307A4ABB8 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_EndInvoke_mC02B54511B4220CF6D1B37F14BF07D522E91786B (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_FindMethod_Impl_m763FB43F24EF4A092E26FAE6F6DF561CF360475A (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_FindMethod_Impl_m763FB43F24EF4A092E26FAE6F6DF561CF360475A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)0);
		MethodInfo_t * L_3 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		MethodInfo_t * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_GetDelegate_m7AD1450601F49B957A87161BE6D14020720A1A56 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_GetDelegate_m7AD1450601F49B957A87161BE6D14020720A1A56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_2 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)il2cpp_codegen_object_new(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		InvokableCall__ctor_mB755E9394048D1920AA344EA3B3905810042E992(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_CallsDirty_2((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * L_0 = (InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 *)il2cpp_codegen_object_new(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m986F4056CA5480D44854152DB768E031AF95C5D8(L_0, /*hidden argument*/NULL);
		__this->set_m_Calls_0(L_0);
		PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * L_1 = (PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC *)il2cpp_codegen_object_new(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m0F94D4591DB6C4D6C7B997FA45A39C680610B1E0(L_1, /*hidden argument*/NULL);
		__this->set_m_PersistentCalls_1(L_1);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m4E84FB82333E5AA5812095E536810C4BCAF55727 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_mA1BAB2B28C0E4A62BA06FEF5FCAD8A67C3449472 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m85DA5AEA84F8C32D2FDF5DD58D9B7EF704B7B238(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_FindMethod_m665F2360483EC2BE2D190C6EFA4A624FB8722089 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * ___call0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventBase_FindMethod_m665F2360483EC2BE2D190C6EFA4A624FB8722089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	bool V_2 = false;
	MethodInfo_t * V_3 = NULL;
	Type_t * G_B3_0 = NULL;
	Type_t * G_B2_0 = NULL;
	Type_t * G_B7_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * L_2 = ___call0;
		NullCheck(L_2);
		ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27 * L_3 = PersistentCall_get_arguments_m9FDD073B5551520F0FF4A672C60E237CADBC3435(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_mAA84D93F6FE66B3422F4A99D794BCCA11882DE35(L_3, /*hidden argument*/NULL);
		bool L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * L_7 = ___call0;
		NullCheck(L_7);
		ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27 * L_8 = PersistentCall_get_arguments_m9FDD073B5551520F0FF4A672C60E237CADBC3435(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_mAA84D93F6FE66B3422F4A99D794BCCA11882DE35(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = il2cpp_codegen_get_type(Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var, L_9, (bool)0, UnityEventBase_FindMethod_m665F2360483EC2BE2D190C6EFA4A624FB8722089_RuntimeMethod_var);
		Type_t * L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_0042;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_12 = { reinterpret_cast<intptr_t> (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_12, /*hidden argument*/NULL);
		G_B3_0 = L_13;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * L_14 = ___call0;
		NullCheck(L_14);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_15 = PersistentCall_get_target_mE1268D2B40A4618C5E318D439F37022B969A6115(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_005f;
		}
	}
	{
		PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * L_17 = ___call0;
		NullCheck(L_17);
		String_t* L_18 = PersistentCall_get_targetAssemblyTypeName_m2F53F996EA6BFFDFCDF1D10B6361DE2A98DD9113(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19 = il2cpp_codegen_get_type(Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var, L_18, (bool)0, UnityEventBase_FindMethod_m665F2360483EC2BE2D190C6EFA4A624FB8722089_RuntimeMethod_var);
		G_B7_0 = L_19;
		goto IL_006a;
	}

IL_005f:
	{
		PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * L_20 = ___call0;
		NullCheck(L_20);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_21 = PersistentCall_get_target_mE1268D2B40A4618C5E318D439F37022B969A6115(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Type_t * L_22 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_21, /*hidden argument*/NULL);
		G_B7_0 = L_22;
	}

IL_006a:
	{
		V_1 = G_B7_0;
		PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * L_23 = ___call0;
		NullCheck(L_23);
		String_t* L_24 = PersistentCall_get_methodName_m249643D059927A05051B73309FCEAC6A6C9F9C88(L_23, /*hidden argument*/NULL);
		Type_t * L_25 = V_1;
		PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * L_26 = ___call0;
		NullCheck(L_26);
		int32_t L_27 = PersistentCall_get_mode_m7041C70D7CA9CC2D7FCB5D31C81E9C519AF1FEB8(L_26, /*hidden argument*/NULL);
		Type_t * L_28 = V_0;
		MethodInfo_t * L_29 = UnityEventBase_FindMethod_m9F887E46F769E2C1D0CFE3C71F98892F9C461025(__this, L_24, L_25, L_27, L_28, /*hidden argument*/NULL);
		V_3 = L_29;
		goto IL_0082;
	}

IL_0082:
	{
		MethodInfo_t * L_30 = V_3;
		return L_30;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Type,UnityEngine.Events.PersistentListenerMode,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_FindMethod_m9F887E46F769E2C1D0CFE3C71F98892F9C461025 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, String_t* ___name0, Type_t * ___listenerType1, int32_t ___mode2, Type_t * ___argumentType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventBase_FindMethod_m9F887E46F769E2C1D0CFE3C71F98892F9C461025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MethodInfo_t * V_1 = NULL;
	Type_t * G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B10_2 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B10_3 = NULL;
	String_t* G_B10_4 = NULL;
	Type_t * G_B10_5 = NULL;
	Type_t * G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B9_2 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B9_3 = NULL;
	String_t* G_B9_4 = NULL;
	Type_t * G_B9_5 = NULL;
	{
		int32_t L_0 = ___mode2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0038;
			}
			case 2:
			{
				goto IL_00bf;
			}
			case 3:
			{
				goto IL_0068;
			}
			case 4:
			{
				goto IL_004b;
			}
			case 5:
			{
				goto IL_00a2;
			}
			case 6:
			{
				goto IL_0085;
			}
		}
	}
	{
		goto IL_00e2;
	}

IL_002a:
	{
		String_t* L_2 = ___name0;
		Type_t * L_3 = ___listenerType1;
		MethodInfo_t * L_4 = VirtFuncInvoker2< MethodInfo_t *, String_t*, Type_t * >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Type) */, __this, L_2, L_3);
		V_1 = L_4;
		goto IL_00e6;
	}

IL_0038:
	{
		Type_t * L_5 = ___listenerType1;
		String_t* L_6 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_7 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)0);
		MethodInfo_t * L_8 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36(L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_00e6;
	}

IL_004b:
	{
		Type_t * L_9 = ___listenerType1;
		String_t* L_10 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_11 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_12 = L_11;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_14);
		MethodInfo_t * L_15 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36(L_9, L_10, L_12, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_00e6;
	}

IL_0068:
	{
		Type_t * L_16 = ___listenerType1;
		String_t* L_17 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_18 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_19 = L_18;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_21);
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36(L_16, L_17, L_19, /*hidden argument*/NULL);
		V_1 = L_22;
		goto IL_00e6;
	}

IL_0085:
	{
		Type_t * L_23 = ___listenerType1;
		String_t* L_24 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_25 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_26 = L_25;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_27 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_28 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_28);
		MethodInfo_t * L_29 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36(L_23, L_24, L_26, /*hidden argument*/NULL);
		V_1 = L_29;
		goto IL_00e6;
	}

IL_00a2:
	{
		Type_t * L_30 = ___listenerType1;
		String_t* L_31 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_32 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_33 = L_32;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_34 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_35 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_35);
		MethodInfo_t * L_36 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36(L_30, L_31, L_33, /*hidden argument*/NULL);
		V_1 = L_36;
		goto IL_00e6;
	}

IL_00bf:
	{
		Type_t * L_37 = ___listenerType1;
		String_t* L_38 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_39 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_40 = L_39;
		Type_t * L_41 = ___argumentType3;
		Type_t * L_42 = L_41;
		G_B9_0 = L_42;
		G_B9_1 = 0;
		G_B9_2 = L_40;
		G_B9_3 = L_40;
		G_B9_4 = L_38;
		G_B9_5 = L_37;
		if (L_42)
		{
			G_B10_0 = L_42;
			G_B10_1 = 0;
			G_B10_2 = L_40;
			G_B10_3 = L_40;
			G_B10_4 = L_38;
			G_B10_5 = L_37;
			goto IL_00d9;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_43, /*hidden argument*/NULL);
		G_B10_0 = L_44;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00d9:
	{
		NullCheck(G_B10_2);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (Type_t *)G_B10_0);
		MethodInfo_t * L_45 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36(G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/NULL);
		V_1 = L_45;
		goto IL_00e6;
	}

IL_00e2:
	{
		V_1 = (MethodInfo_t *)NULL;
		goto IL_00e6;
	}

IL_00e6:
	{
		MethodInfo_t * L_46 = V_1;
		return L_46;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_DirtyPersistentCalls_m85DA5AEA84F8C32D2FDF5DD58D9B7EF704B7B238 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method)
{
	{
		InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * L_0 = __this->get_m_Calls_0();
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m9A59E6161F8E42120439B76FE952A17DA742443C(L_0, /*hidden argument*/NULL);
		__this->set_m_CallsDirty_2((bool)1);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RebuildPersistentCallsIfNeeded_m1FF3E4C46BB16B554103FAAAF3BBCE52C991D21F (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_CallsDirty_2();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * L_2 = __this->get_m_PersistentCalls_1();
		InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * L_3 = __this->get_m_Calls_0();
		NullCheck(L_2);
		PersistentCallGroup_Initialize_m162FC343BA2C41CBBB6358D624CBD2CED9468833(L_2, L_3, __this, /*hidden argument*/NULL);
		__this->set_m_CallsDirty_2((bool)0);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * ___call0, const RuntimeMethod* method)
{
	{
		InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * L_0 = __this->get_m_Calls_0();
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1 = ___call0;
		NullCheck(L_0);
		InvokableCallList_AddListener_m07F4E145332E2059D570D8300CB422F56F6B0BF1(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	{
		InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * L_0 = __this->get_m_Calls_0();
		RuntimeObject * L_1 = ___targetObj0;
		MethodInfo_t * L_2 = ___method1;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_mDE659068D9590D54D00436CCBDB3D27DCD263549(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method)
{
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m1FF3E4C46BB16B554103FAAAF3BBCE52C991D21F(__this, /*hidden argument*/NULL);
		InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * L_0 = __this->get_m_Calls_0();
		NullCheck(L_0);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = InvokableCallList_PrepareInvoke_mE340D329F5FC08EA77FC0F3662FF5E5BB85AE0B1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityEventBase_ToString_m0A3BBFEC8C23E044D52502CE201FE82EEF60A8E7 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventBase_ToString_m0A3BBFEC8C23E044D52502CE201FE82EEF60A8E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = Object_ToString_m6EEDE9678ACEB962C586D13EC873DE2948668B06(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		String_t* L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36 (Type_t * ___objectType0, String_t* ___functionName1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	bool V_1 = false;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_5 = NULL;
	int32_t V_6 = 0;
	ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * V_7 = NULL;
	Type_t * V_8 = NULL;
	Type_t * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	MethodInfo_t * V_12 = NULL;
	bool V_13 = false;
	int32_t G_B14_0 = 0;
	{
		goto IL_0091;
	}

IL_0006:
	{
		Type_t * L_0 = ___objectType0;
		String_t* L_1 = ___functionName1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = ___argumentTypes2;
		NullCheck(L_0);
		MethodInfo_t * L_3 = Type_GetMethod_m69EE86B5A87244C925333CCF1B6D6B9BCFED8A89(L_0, L_1, ((int32_t)60), (Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 *)NULL, L_2, (ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B*)(ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B*)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(MethodInfo_t *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0088;
		}
	}
	{
		MethodInfo_t * L_6 = V_0;
		NullCheck(L_6);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_7 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
		V_2 = L_7;
		V_3 = (bool)1;
		V_4 = 0;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_8 = V_2;
		V_5 = L_8;
		V_6 = 0;
		goto IL_0073;
	}

IL_0032:
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_9 = V_5;
		int32_t L_10 = V_6;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_7 = L_12;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_13 = ___argumentTypes2;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Type_t * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_8 = L_16;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_17 = V_7;
		NullCheck(L_17);
		Type_t * L_18 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_17);
		V_9 = L_18;
		Type_t * L_19 = V_8;
		NullCheck(L_19);
		bool L_20 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_19, /*hidden argument*/NULL);
		Type_t * L_21 = V_9;
		NullCheck(L_21);
		bool L_22 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_21, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_20) == ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_3;
		V_10 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_10;
		if (!L_24)
		{
			goto IL_0066;
		}
	}
	{
		goto IL_007b;
	}

IL_0066:
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		int32_t L_26 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0073:
	{
		int32_t L_27 = V_6;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_28 = V_5;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_0032;
		}
	}

IL_007b:
	{
		bool L_29 = V_3;
		V_11 = L_29;
		bool L_30 = V_11;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_31 = V_0;
		V_12 = L_31;
		goto IL_00b3;
	}

IL_0087:
	{
	}

IL_0088:
	{
		Type_t * L_32 = ___objectType0;
		NullCheck(L_32);
		Type_t * L_33 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_32);
		___objectType0 = L_33;
	}

IL_0091:
	{
		Type_t * L_34 = ___objectType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_35 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_35, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_34) == ((RuntimeObject*)(Type_t *)L_36)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_37 = ___objectType0;
		G_B14_0 = ((!(((RuntimeObject*)(Type_t *)L_37) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B14_0 = 0;
	}

IL_00a5:
	{
		V_13 = (bool)G_B14_0;
		bool L_38 = V_13;
		if (L_38)
		{
			goto IL_0006;
		}
	}
	{
		V_12 = (MethodInfo_t *)NULL;
		goto IL_00b3;
	}

IL_00b3:
	{
		MethodInfo_t * L_39 = V_12;
		return L_39;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Events.UnityEventTools::TidyAssemblyTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityEventTools_TidyAssemblyTypeName_m7ABD7C25EA8BF24C586CD9BD637421A12D8C5B44 (String_t* ___assemblyTypeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventTools_TidyAssemblyTypeName_m7ABD7C25EA8BF24C586CD9BD637421A12D8C5B44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B13_0 = 0;
	{
		String_t* L_0 = ___assemblyTypeName0;
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_3 = ___assemblyTypeName0;
		V_3 = L_3;
		goto IL_00d2;
	}

IL_0012:
	{
		V_0 = ((int32_t)2147483647LL);
		String_t* L_4 = ___assemblyTypeName0;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_4, _stringLiteralF23E728301722ADFB4013CAFB98300BDB22AE4D6, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_4 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_10 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0039:
	{
		String_t* L_11 = ___assemblyTypeName0;
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_11, _stringLiteral098A172DEA459360162609211F3572251217DFE4, /*hidden argument*/NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_17 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_15, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_005a:
	{
		String_t* L_18 = ___assemblyTypeName0;
		NullCheck(L_18);
		int32_t L_19 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_18, _stringLiteral6B48F4683F01C4D3007AF697B43017699B0D495E, /*hidden argument*/NULL);
		V_1 = L_19;
		int32_t L_20 = V_1;
		V_6 = (bool)((((int32_t)((((int32_t)L_20) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_22 = V_1;
		int32_t L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_24 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_22, L_23, /*hidden argument*/NULL);
		V_0 = L_24;
	}

IL_007b:
	{
		int32_t L_25 = V_0;
		V_7 = (bool)((((int32_t)((((int32_t)L_25) == ((int32_t)((int32_t)2147483647LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_0096;
		}
	}
	{
		String_t* L_27 = ___assemblyTypeName0;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		String_t* L_29 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_27, 0, L_28, /*hidden argument*/NULL);
		___assemblyTypeName0 = L_29;
	}

IL_0096:
	{
		String_t* L_30 = ___assemblyTypeName0;
		NullCheck(L_30);
		int32_t L_31 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_30, _stringLiteralEB8D80CAAEEA45EB1896A03486B82F32A82622C3, /*hidden argument*/NULL);
		V_1 = L_31;
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) == ((int32_t)(-1))))
		{
			goto IL_00b3;
		}
	}
	{
		String_t* L_33 = ___assemblyTypeName0;
		NullCheck(L_33);
		bool L_34 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_33, _stringLiteral9B8F64EE075510D6F35C002ED590FD5A7BE00B34, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_34));
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B13_0 = 0;
	}

IL_00b4:
	{
		V_8 = (bool)G_B13_0;
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_00ce;
		}
	}
	{
		String_t* L_36 = ___assemblyTypeName0;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		String_t* L_38 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_36, 0, L_37, /*hidden argument*/NULL);
		String_t* L_39 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_38, _stringLiteralD6343EA158ACCD33CE0C95B0C5BD499231DEA80B, /*hidden argument*/NULL);
		___assemblyTypeName0 = L_39;
	}

IL_00ce:
	{
		String_t* L_40 = ___assemblyTypeName0;
		V_3 = L_40;
		goto IL_00d2;
	}

IL_00d2:
	{
		String_t* L_41 = V_3;
		return L_41;
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
// System.Void UnityEngine.UnityException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_m8E5C592F5F76B6385D4EFDC2C28AA93B020279E7 (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityException__ctor_m8E5C592F5F76B6385D4EFDC2C28AA93B020279E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, _stringLiteralA34FFC54E682CB6088DC765006892669E0B3C5A5, /*hidden argument*/NULL);
		Exception_set_HResult_mB9E603303A0678B32684B0EEC144334BAB0E6392_inline(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8 (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_mB9E603303A0678B32684B0EEC144334BAB0E6392_inline(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_m00AA4E67E35F95220B5A1C46C9B59AF4ED0D6274 (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityException__ctor_m00AA4E67E35F95220B5A1C46C9B59AF4ED0D6274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___context1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0CD24092BF55B8EDE25AED989ACADB80298EF917(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLog_m7DF2A8AB78591F20C87B8947A22D2C845F207A20 (String_t* ___s0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___s0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0012;
	}

IL_000b:
	{
		String_t* L_2 = ___s0;
		UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F (String_t* ___s0, const RuntimeMethod* method)
{
	typedef void (*UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F_ftn) (String_t*);
	static UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)");
	_il2cpp_icall_func(___s0);
}
// System.Void UnityEngine.UnityLogWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_Init_m84D1792BF114717225B36DD1AA45DC1201BA77FE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityLogWriter_Init_m84D1792BF114717225B36DD1AA45DC1201BA77FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D * L_0 = (UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D *)il2cpp_codegen_object_new(UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D_il2cpp_TypeInfo_var);
		UnityLogWriter__ctor_mB7AF0B7C8C546F210699D5F3AA23F370F1963A25(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		Console_SetOut_m5496747868AA56C75F16C326E5C282C204FFCCCA(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::Write(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_Write_m26CB2B40367CCA97725387637F0457998DED9230 (UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&___value0), /*hidden argument*/NULL);
		UnityLogWriter_WriteStringToUnityLog_m7DF2A8AB78591F20C87B8947A22D2C845F207A20(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_Write_m256BEE6E2FB31EEFCD721BFEE676653E9CD00AD1 (UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		UnityLogWriter_WriteStringToUnityLog_m7DF2A8AB78591F20C87B8947A22D2C845F207A20(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::Write(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_Write_m28FD8721A9896EE519A36770139213E697C57372 (UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___buffer0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		String_t* L_3 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_0, L_1, L_2, /*hidden argument*/NULL);
		UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter__ctor_mB7AF0B7C8C546F210699D5F3AA23F370F1963A25 (UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityLogWriter__ctor_mB7AF0B7C8C546F210699D5F3AA23F370F1963A25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var);
		TextWriter__ctor_m9C6FF4B9607BA4D452BECA38EA8F7E1499A13A6C(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.UnitySynchronizationContext::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_mF71A02778FCC672CC2FE4F329D9D6C66C96F70CF (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, int32_t ___mainThreadID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext__ctor_mF71A02778FCC672CC2FE4F329D9D6C66C96F70CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_0 = (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *)il2cpp_codegen_object_new(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_il2cpp_TypeInfo_var);
		List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45(L_0, ((int32_t)20), /*hidden argument*/List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_RuntimeMethod_var);
		__this->set_m_CurrentFrameWork_1(L_0);
		__this->set_m_TrackedCount_3(0);
		SynchronizationContext__ctor_mBFA5A0DA5DAD6FD0001098E970759A1F90A03391(__this, /*hidden argument*/NULL);
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_1 = (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *)il2cpp_codegen_object_new(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_il2cpp_TypeInfo_var);
		List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45(L_1, ((int32_t)20), /*hidden argument*/List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_RuntimeMethod_var);
		__this->set_m_AsyncWorkQueue_0(L_1);
		int32_t L_2 = ___mainThreadID0;
		__this->set_m_MainThreadID_2(L_2);
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::.ctor(System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext_WorkRequest>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m266FAB5B25698C86EC1AC37CE4BBA1FA244BB4FC (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * ___queue0, int32_t ___mainThreadID1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext__ctor_m266FAB5B25698C86EC1AC37CE4BBA1FA244BB4FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_0 = (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *)il2cpp_codegen_object_new(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_il2cpp_TypeInfo_var);
		List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45(L_0, ((int32_t)20), /*hidden argument*/List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_RuntimeMethod_var);
		__this->set_m_CurrentFrameWork_1(L_0);
		__this->set_m_TrackedCount_3(0);
		SynchronizationContext__ctor_mBFA5A0DA5DAD6FD0001098E970759A1F90A03391(__this, /*hidden argument*/NULL);
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_1 = ___queue0;
		__this->set_m_AsyncWorkQueue_0(L_1);
		int32_t L_2 = ___mainThreadID1;
		__this->set_m_MainThreadID_2(L_2);
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::Send(System.Threading.SendOrPostCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Send_mEDA081A69B18358B9239E2A46E570466E5FA77F7 (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_Send_mEDA081A69B18358B9239E2A46E570466E5FA77F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * V_1 = NULL;
	List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_m_MainThreadID_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_4 = ___callback0;
		RuntimeObject * L_5 = ___state1;
		NullCheck(L_4);
		SendOrPostCallback_Invoke_m352534ED0E61440A793944CC44809F666BBC1461(L_4, L_5, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0023:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_6 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_6, (bool)0, /*hidden argument*/NULL);
		V_1 = L_6;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_7 = __this->get_m_AsyncWorkQueue_0();
			V_2 = L_7;
			List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_8 = V_2;
			Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_8, /*hidden argument*/NULL);
		}

IL_003a:
		try
		{ // begin try (depth: 2)
			List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_9 = __this->get_m_AsyncWorkQueue_0();
			SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_10 = ___callback0;
			RuntimeObject * L_11 = ___state1;
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_12 = V_1;
			WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_13;
			memset((&L_13), 0, sizeof(L_13));
			WorkRequest__ctor_m13C7B4A89E47F4B97ED9B786DB99849DBC2B5603((&L_13), L_10, L_11, L_12, /*hidden argument*/NULL);
			NullCheck(L_9);
			List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557(L_9, L_13, /*hidden argument*/List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557_RuntimeMethod_var);
			IL2CPP_LEAVE(0x5A, FINALLY_0052);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0052;
		}

FINALLY_0052:
		{ // begin finally (depth: 2)
			List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_14 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_14, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(82)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(82)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x5A, IL_005a)
		}

IL_005a:
		{
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_15 = V_1;
			NullCheck(L_15);
			VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_15);
			IL2CPP_LEAVE(0x6F, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		{
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_16 = V_1;
			if (!L_16)
			{
				goto IL_006e;
			}
		}

IL_0067:
		{
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_17 = V_1;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
		}

IL_006e:
		{
			IL2CPP_END_FINALLY(100)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
	}

IL_006f:
	{
	}

IL_0070:
	{
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Post_mE3277DB5A0DCB461E497EC7B9C13850D4E7AB076 (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_Post_mE3277DB5A0DCB461E497EC7B9C13850D4E7AB076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_0 = __this->get_m_AsyncWorkQueue_0();
		V_0 = L_0;
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_2 = __this->get_m_AsyncWorkQueue_0();
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_3 = ___callback0;
		RuntimeObject * L_4 = ___state1;
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_5;
		memset((&L_5), 0, sizeof(L_5));
		WorkRequest__ctor_m13C7B4A89E47F4B97ED9B786DB99849DBC2B5603((&L_5), L_3, L_4, (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)NULL, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557(L_2, L_5, /*hidden argument*/List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557_RuntimeMethod_var);
		IL2CPP_LEAVE(0x2F, FINALLY_0027);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_6 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(39)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Threading.SynchronizationContext UnityEngine.UnitySynchronizationContext::CreateCopy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * UnitySynchronizationContext_CreateCopy_mBB5F2E7947732680B0715AD92187E89211AE5E61 (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_CreateCopy_mBB5F2E7947732680B0715AD92187E89211AE5E61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * V_0 = NULL;
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_0 = __this->get_m_AsyncWorkQueue_0();
		int32_t L_1 = __this->get_m_MainThreadID_2();
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_2 = (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 *)il2cpp_codegen_object_new(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var);
		UnitySynchronizationContext__ctor_m266FAB5B25698C86EC1AC37CE4BBA1FA244BB4FC(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::Exec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Exec_mC89E49BFB922E69AAE753887480031A142016F81 (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_Exec_mC89E49BFB922E69AAE753887480031A142016F81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * V_0 = NULL;
	WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_0 = __this->get_m_AsyncWorkQueue_0();
		V_0 = L_0;
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_2 = __this->get_m_CurrentFrameWork_1();
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_3 = __this->get_m_AsyncWorkQueue_0();
		NullCheck(L_2);
		List_1_AddRange_m2D7540B01275552CA127202F40536B5D5831A907(L_2, L_3, /*hidden argument*/List_1_AddRange_m2D7540B01275552CA127202F40536B5D5831A907_RuntimeMethod_var);
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_4 = __this->get_m_AsyncWorkQueue_0();
		NullCheck(L_4);
		List_1_Clear_m38FF3BFEF5EF5F96F6B84F59AEC29C695C4CFD4E(L_4, /*hidden argument*/List_1_Clear_m38FF3BFEF5EF5F96F6B84F59AEC29C695C4CFD4E_RuntimeMethod_var);
		IL2CPP_LEAVE(0x39, FINALLY_0031);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_5 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		goto IL_005f;
	}

IL_003b:
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_6 = __this->get_m_CurrentFrameWork_1();
		NullCheck(L_6);
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_7 = List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_inline(L_6, 0, /*hidden argument*/List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_RuntimeMethod_var);
		V_1 = L_7;
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_8 = __this->get_m_CurrentFrameWork_1();
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_9 = V_1;
		NullCheck(L_8);
		List_1_Remove_m5CE622FEE2BD41D0769D74CDDAD0EA55C07A2025(L_8, L_9, /*hidden argument*/List_1_Remove_m5CE622FEE2BD41D0769D74CDDAD0EA55C07A2025_RuntimeMethod_var);
		WorkRequest_Invoke_m1C292B7297918C5F2DBE70971895FE8D5C33AA20((WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 *)(&V_1), /*hidden argument*/NULL);
	}

IL_005f:
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_10 = __this->get_m_CurrentFrameWork_1();
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_inline(L_10, /*hidden argument*/List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.UnitySynchronizationContext::HasPendingTasks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnitySynchronizationContext_HasPendingTasks_mBA93E72DC46200231B7ABCFB5F22FB0617A1B1EA (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_HasPendingTasks_mBA93E72DC46200231B7ABCFB5F22FB0617A1B1EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_0 = __this->get_m_AsyncWorkQueue_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_inline(L_0, /*hidden argument*/List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = __this->get_m_TrackedCount_3();
		G_B3_0 = ((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::InitializeSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_InitializeSynchronizationContext_mB581D86F8675566DC3A885C15DC5B9A7B8D42CD4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_InitializeSynchronizationContext_mB581D86F8675566DC3A885C15DC5B9A7B8D42CD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_0, /*hidden argument*/NULL);
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_2 = (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 *)il2cpp_codegen_object_new(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var);
		UnitySynchronizationContext__ctor_mF71A02778FCC672CC2FE4F329D9D6C66C96F70CF(L_2, L_1, /*hidden argument*/NULL);
		SynchronizationContext_SetSynchronizationContext_m0307B8FDCDC2A4D2C25B7DB20CF60B00E72CE04B(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::ExecuteTasks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_ExecuteTasks_m323E27C0CD442B806D966D024725D9809563E0DD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_ExecuteTasks_m323E27C0CD442B806D966D024725D9809563E0DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * V_0 = NULL;
	bool V_1 = false;
	{
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942(/*hidden argument*/NULL);
		V_0 = ((UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 *)IsInstSealed((RuntimeObject*)L_0, UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var));
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_3 = V_0;
		NullCheck(L_3);
		UnitySynchronizationContext_Exec_mC89E49BFB922E69AAE753887480031A142016F81(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.UnitySynchronizationContext::ExecutePendingTasks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnitySynchronizationContext_ExecutePendingTasks_m7FD629962A8BA72CB2F51583DC393A8FDA672DBC (int64_t ___millisecondsTimeout0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_ExecutePendingTasks_m7FD629962A8BA72CB2F51583DC393A8FDA672DBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * V_0 = NULL;
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942(/*hidden argument*/NULL);
		V_0 = ((UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 *)IsInstSealed((RuntimeObject*)L_0, UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var));
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_1 = V_0;
		V_2 = (bool)((((RuntimeObject*)(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0062;
	}

IL_0019:
	{
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_3 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_4 = V_1;
		NullCheck(L_4);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_4, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_0028:
	{
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_5 = V_1;
		NullCheck(L_5);
		int64_t L_6 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_5, /*hidden argument*/NULL);
		int64_t L_7 = ___millisecondsTimeout0;
		V_4 = (bool)((((int64_t)L_6) > ((int64_t)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_0056;
	}

IL_003b:
	{
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_9 = V_0;
		NullCheck(L_9);
		UnitySynchronizationContext_Exec_mC89E49BFB922E69AAE753887480031A142016F81(L_9, /*hidden argument*/NULL);
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(1, /*hidden argument*/NULL);
	}

IL_004a:
	{
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = UnitySynchronizationContext_HasPendingTasks_mBA93E72DC46200231B7ABCFB5F22FB0617A1B1EA(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		bool L_12 = V_5;
		if (L_12)
		{
			goto IL_0028;
		}
	}

IL_0056:
	{
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = UnitySynchronizationContext_HasPendingTasks_mBA93E72DC46200231B7ABCFB5F22FB0617A1B1EA(L_13, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0062;
	}

IL_0062:
	{
		bool L_15 = V_3;
		return L_15;
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
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9 (void* ___memory0, int32_t ___allocator1, const RuntimeMethod* method)
{
	typedef void (*UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9_ftn) (void*, int32_t);
	static UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9_ftn)il2cpp_codegen_resolve_icall ("Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)");
	_il2cpp_icall_func(___memory0, ___allocator1);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method)
{
	typedef void (*UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B_ftn) (void*, void*, int64_t);
	static UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B_ftn)il2cpp_codegen_resolve_icall ("Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)");
	_il2cpp_icall_func(___destination0, ___source1, ___size2);
}
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
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline(_thisAdjusted, ___x0, ___y1, method);
}
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_0);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = VirtFuncInvoker0< NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * >::Invoke(14 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_0);
		String_t* L_2 = Vector2_ToString_m503AFEA3F57B8529C047FF93C2E72126C5591C23((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)__this, (String_t*)NULL, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	return Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840(_thisAdjusted, method);
}
// System.String UnityEngine.Vector2::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m503AFEA3F57B8529C047FF93C2E72126C5591C23 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_ToString_m503AFEA3F57B8529C047FF93C2E72126C5591C23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___format0;
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		___format0 = _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
	}

IL_0012:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		float* L_5 = __this->get_address_of_x_0();
		String_t* L_6 = ___format0;
		RuntimeObject* L_7 = ___formatProvider1;
		String_t* L_8 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_5, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_4;
		float* L_10 = __this->get_address_of_y_1();
		String_t* L_11 = ___format0;
		RuntimeObject* L_12 = ___formatProvider1;
		String_t* L_13 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		String_t* L_14 = UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_9, /*hidden argument*/NULL);
		V_1 = L_14;
		goto IL_0045;
	}

IL_0045:
	{
		String_t* L_15 = V_1;
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* Vector2_ToString_m503AFEA3F57B8529C047FF93C2E72126C5591C23_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	return Vector2_ToString_m503AFEA3F57B8529C047FF93C2E72126C5591C23(_thisAdjusted, ___format0, ___formatProvider1, method);
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		int32_t L_1 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_1();
		int32_t L_3 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	return Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___other0;
		bool L_3 = Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)__this, ((*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)UnBox(L_2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	return Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___other0;
		float L_2 = L_1.get_x_0();
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___other0;
		float L_5 = L_4.get_y_1();
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_AdjustorThunk (RuntimeObject * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	return Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline(_thisAdjusted, ___other0, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.Vector2::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__cctor_m64DC76912D71BE91E6A3B2D15D63452E2B3AD6EC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2__cctor_m64DC76912D71BE91E6A3B2D15D63452E2B3AD6EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_zeroVector_2(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_oneVector_3(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (0.0f), (1.0f), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_upVector_4(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_downVector_5(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), (-1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_leftVector_6(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), (1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_rightVector_7(L_5);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_positiveInfinityVector_8(L_6);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_negativeInfinityVector_9(L_7);
		return;
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
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___target1;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___current0;
		float L_3 = L_2.get_x_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___target1;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___current0;
		float L_7 = L_6.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___target1;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___current0;
		float L_11 = L_10.get_z_4();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)))), (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_26 = sqrt((((double)((double)L_25))));
		V_4 = (((float)((float)L_26)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = ___current0;
		float L_28 = L_27.get_x_2();
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = ___current0;
		float L_33 = L_32.get_y_3();
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = ___current0;
		float L_38 = L_37.get_z_4();
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_42), ((float)il2cpp_codegen_add((float)L_28, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_29/(float)L_30)), (float)L_31)))), ((float)il2cpp_codegen_add((float)L_33, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_34/(float)L_35)), (float)L_36)))), ((float)il2cpp_codegen_add((float)L_38, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_39/(float)L_40)), (float)L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = V_6;
		return L_43;
	}
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline(_thisAdjusted, ___x0, ___y1, ___z2, method);
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_2();
		int32_t L_1 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_3();
		int32_t L_3 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_2, /*hidden argument*/NULL);
		float* L_4 = __this->get_address_of_z_4();
		int32_t L_5 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	return Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___other0;
		bool L_3 = Vector3_Equals_mA92800CD98ED6A42DD7C55C5DB22DAB4DEAA6397((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this, ((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	return Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_mA92800CD98ED6A42DD7C55C5DB22DAB4DEAA6397 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___other0;
		float L_2 = L_1.get_x_2();
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___other0;
		float L_5 = L_4.get_y_3();
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___other0;
		float L_8 = L_7.get_z_4();
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool Vector3_Equals_mA92800CD98ED6A42DD7C55C5DB22DAB4DEAA6397_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	return Vector3_Equals_mA92800CD98ED6A42DD7C55C5DB22DAB4DEAA6397(_thisAdjusted, ___other0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		float L_1 = Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___value0;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	return Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5(_thisAdjusted, method);
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___vector0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_12 = sqrt((((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))))))));
		V_0 = (((float)((float)L_12)));
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_x_2();
		float L_1 = __this->get_x_2();
		float L_2 = __this->get_y_3();
		float L_3 = __this->get_y_3();
		float L_4 = __this->get_z_4();
		float L_5 = __this->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_6 = sqrt((((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))))))));
		V_0 = (((float)((float)L_6)));
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	return Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->get_zeroVector_5();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)))), (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_0);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = VirtFuncInvoker0< NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * >::Invoke(14 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_0);
		String_t* L_2 = Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this, (String_t*)NULL, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	return Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318(_thisAdjusted, method);
}
// System.String UnityEngine.Vector3::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___format0;
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		___format0 = _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
	}

IL_0012:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		float* L_5 = __this->get_address_of_x_2();
		String_t* L_6 = ___format0;
		RuntimeObject* L_7 = ___formatProvider1;
		String_t* L_8 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_5, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_4;
		float* L_10 = __this->get_address_of_y_3();
		String_t* L_11 = ___format0;
		RuntimeObject* L_12 = ___formatProvider1;
		String_t* L_13 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_9;
		float* L_15 = __this->get_address_of_z_4();
		String_t* L_16 = ___format0;
		RuntimeObject* L_17 = ___formatProvider1;
		String_t* L_18 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_15, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
		String_t* L_19 = UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9(_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E, L_14, /*hidden argument*/NULL);
		V_1 = L_19;
		goto IL_0055;
	}

IL_0055:
	{
		String_t* L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C  String_t* Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	return Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414(_thisAdjusted, ___format0, ___formatProvider1, method);
}
// System.Void UnityEngine.Vector3::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__cctor_m1630C6F57B6D41EFCDFC7A10F52A4D2448BFB2E7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3__cctor_m1630C6F57B6D41EFCDFC7A10F52A4D2448BFB2E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_zeroVector_5(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_oneVector_6(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_upVector_7(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_downVector_8(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_leftVector_9(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_rightVector_10(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_forwardVector_11(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_backVector_12(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_positiveInfinityVector_13(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_negativeInfinityVector_14(L_9);
		return;
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
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___z2;
		__this->set_z_2(L_2);
		float L_3 = ___w3;
		__this->set_w_3(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2(_thisAdjusted, ___x0, ___y1, ___z2, ___w3, method);
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_mCA7B312F8CA141F6F25BABDDF406F3D2BDD5E895 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		int32_t L_1 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_1();
		int32_t L_3 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_2, /*hidden argument*/NULL);
		float* L_4 = __this->get_address_of_z_2();
		int32_t L_5 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_4, /*hidden argument*/NULL);
		float* L_6 = __this->get_address_of_w_3();
		int32_t L_7 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t Vector4_GetHashCode_mCA7B312F8CA141F6F25BABDDF406F3D2BDD5E895_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	return Vector4_GetHashCode_mCA7B312F8CA141F6F25BABDDF406F3D2BDD5E895(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___other0;
		bool L_3 = Vector4_Equals_m0919D35807550372D1748193EB31E4C5E406AE61_inline((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)__this, ((*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)UnBox(L_2, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	return Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Vector4::Equals(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_m0919D35807550372D1748193EB31E4C5E406AE61 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0 = __this->get_x_0();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___other0;
		float L_2 = L_1.get_x_0();
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_003b;
		}
	}
	{
		float L_3 = __this->get_y_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___other0;
		float L_5 = L_4.get_y_1();
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		float L_6 = __this->get_z_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7 = ___other0;
		float L_8 = L_7.get_z_2();
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		float L_9 = __this->get_w_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___other0;
		float L_11 = L_10.get_w_3();
		G_B5_0 = ((((float)L_9) == ((float)L_11))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C  bool Vector4_Equals_m0919D35807550372D1748193EB31E4C5E406AE61_AdjustorThunk (RuntimeObject * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	return Vector4_Equals_m0919D35807550372D1748193EB31E4C5E406AE61_inline(_thisAdjusted, ___other0, method);
}
// System.String UnityEngine.Vector4::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_mF2D17142EBD75E91BC718B3E347F614AC45E9040 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_ToString_mF2D17142EBD75E91BC718B3E347F614AC45E9040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_0);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = VirtFuncInvoker0< NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * >::Invoke(14 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_0);
		String_t* L_2 = Vector4_ToString_m0EC6AA83CD606E3EB5BE60108A1D9AC4ECB5517A((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)__this, (String_t*)NULL, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* Vector4_ToString_mF2D17142EBD75E91BC718B3E347F614AC45E9040_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	return Vector4_ToString_mF2D17142EBD75E91BC718B3E347F614AC45E9040(_thisAdjusted, method);
}
// System.String UnityEngine.Vector4::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m0EC6AA83CD606E3EB5BE60108A1D9AC4ECB5517A (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_ToString_m0EC6AA83CD606E3EB5BE60108A1D9AC4ECB5517A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___format0;
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		___format0 = _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
	}

IL_0012:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		float* L_5 = __this->get_address_of_x_0();
		String_t* L_6 = ___format0;
		RuntimeObject* L_7 = ___formatProvider1;
		String_t* L_8 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_5, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_4;
		float* L_10 = __this->get_address_of_y_1();
		String_t* L_11 = ___format0;
		RuntimeObject* L_12 = ___formatProvider1;
		String_t* L_13 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_9;
		float* L_15 = __this->get_address_of_z_2();
		String_t* L_16 = ___format0;
		RuntimeObject* L_17 = ___formatProvider1;
		String_t* L_18 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_15, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_14;
		float* L_20 = __this->get_address_of_w_3();
		String_t* L_21 = ___format0;
		RuntimeObject* L_22 = ___formatProvider1;
		String_t* L_23 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_20, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_23);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_23);
		String_t* L_24 = UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9(_stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05, L_19, /*hidden argument*/NULL);
		V_1 = L_24;
		goto IL_0065;
	}

IL_0065:
	{
		String_t* L_25 = V_1;
		return L_25;
	}
}
IL2CPP_EXTERN_C  String_t* Vector4_ToString_m0EC6AA83CD606E3EB5BE60108A1D9AC4ECB5517A_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	return Vector4_ToString_m0EC6AA83CD606E3EB5BE60108A1D9AC4ECB5517A(_thisAdjusted, ___format0, ___formatProvider1, method);
}
// System.Void UnityEngine.Vector4::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__cctor_m35F167F24C48A767EAD837754896B5A5178C078A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4__cctor_m35F167F24C48A767EAD837754896B5A5178C078A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var))->set_zeroVector_4(L_0);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_1), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var))->set_oneVector_5(L_1);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_2), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var))->set_positiveInfinityVector_6(L_2);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_3), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var))->set_negativeInfinityVector_7(L_3);
		return;
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
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke(const WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013& unmarshaled, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke_back(const WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke& marshaled, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke_cleanup(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_com(const WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013& unmarshaled, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_com_back(const WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com& marshaled, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_com_cleanup(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.LowLevel.Unsafe.WriteAccessRequiredAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteAccessRequiredAttribute__ctor_m832267CA67398C994C2B666B00253CD9959610B9 (WriteAccessRequiredAttribute_t801D798894A40E3789DE39CC4BE0D3B04B852DCA * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke(const YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF& unmarshaled, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke_back(const YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke& marshaled, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke_cleanup(YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_com(const YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF& unmarshaled, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_com_back(const YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com& marshaled, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_com_cleanup(YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.YieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstruction__ctor_mD8203310B47F2C36BED3EEC00CA1944C9D941AEF (YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___condition0' to native representation
	char* ____condition0_marshaled = NULL;
	____condition0_marshaled = il2cpp_codegen_marshal_string(___condition0);

	// Marshaling of parameter '___stackTrace1' to native representation
	char* ____stackTrace1_marshaled = NULL;
	____stackTrace1_marshaled = il2cpp_codegen_marshal_string(___stackTrace1);

	// Native function invocation
	il2cppPInvokeFunc(____condition0_marshaled, ____stackTrace1_marshaled, ___type2);

	// Marshaling cleanup of parameter '___condition0' native representation
	il2cpp_codegen_marshal_free(____condition0_marshaled);
	____condition0_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace1' native representation
	il2cpp_codegen_marshal_free(____stackTrace1_marshaled);
	____stackTrace1_marshaled = NULL;

}
// System.Void UnityEngine.Application_LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_mB5F165ECC180A20258EF4EFF589D88FB9F9E9C57 (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Application_LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback_Invoke_m5503AB0FDB4D9D1A8FFE13283321AF278B7F6C4E (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___condition0, ___stackTrace1, ___type2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___condition0, ___stackTrace1, ___type2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, ___condition0, ___stackTrace1, ___type2);
					else
						GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, ___condition0, ___stackTrace1, ___type2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___condition0, ___stackTrace1, ___type2);
					else
						VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___condition0, ___stackTrace1, ___type2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___stackTrace1) - 1), ___type2, targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___condition0, ___stackTrace1, ___type2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___condition0, ___stackTrace1, ___type2);
					else
						GenericVirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___condition0, ___stackTrace1, ___type2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___condition0, ___stackTrace1, ___type2);
					else
						VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___condition0, ___stackTrace1, ___type2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___condition0) - 1), ___stackTrace1, ___type2, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___condition0, ___stackTrace1, ___type2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___condition0, ___stackTrace1, ___type2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Application_LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallback_BeginInvoke_m346CFB69BAB75EF96F9EBA2B3C312A1AD1D4147F (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogCallback_BeginInvoke_m346CFB69BAB75EF96F9EBA2B3C312A1AD1D4147F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___condition0;
	__d_args[1] = ___stackTrace1;
	__d_args[2] = Box(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773_il2cpp_TypeInfo_var, &___type2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Application_LogCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback_EndInvoke_m940C8D1C936259607F04EA27DA8FBB2828FC9280 (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240 (LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Application_LowMemoryCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowMemoryCallback__ctor_m91C04CE7D7A323B50CA6A73B23949639E1EA53C3 (LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Application_LowMemoryCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowMemoryCallback_Invoke_mDF9C72A7F7CD34CC8FAED88642864AE193742437 (LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Application_LowMemoryCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowMemoryCallback_BeginInvoke_mF446F2B2F047BC877D3819B38D1CB0AFC4C4D953 (LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Application_LowMemoryCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowMemoryCallback_EndInvoke_mB653B34015F110168720FED3201FDD6D2B235212 (LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  DelegatePInvokeWrapper_OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB (OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * __this, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A * ___rendererGroup0, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  ___cullingContext1, const RuntimeMethod* method)
{


	typedef JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (DEFAULT_CALL *PInvokeFunc)(BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshaled_pinvoke*, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___rendererGroup0' to native representation
	BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshaled_pinvoke ____rendererGroup0_marshaled = {};
	if (___rendererGroup0 != NULL)
	{
		BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke(*___rendererGroup0, ____rendererGroup0_marshaled);
	}

	// Native function invocation
	JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  returnValue = il2cppPInvokeFunc(___rendererGroup0 != NULL ? (&____rendererGroup0_marshaled) : NULL, ___cullingContext1);

	// Marshaling cleanup of parameter '___rendererGroup0' native representation
	if ((&____rendererGroup0_marshaled) != NULL)
	{
		BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshal_pinvoke_cleanup(____rendererGroup0_marshaled);
	}

	return returnValue;
}
// System.Void UnityEngine.Rendering.BatchRendererGroup_OnPerformCulling::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPerformCulling__ctor_m1862F8A67E8CA14A19B80DE61BBC1881DF945E9F (OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup_OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  OnPerformCulling_Invoke_m804E8422831E63707E5582FBBBFEF08E8A100525 (OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * __this, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A * ___rendererGroup0, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  ___cullingContext1, const RuntimeMethod* method)
{
	JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*FunctionPointerType) (BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___rendererGroup0, ___cullingContext1, targetMethod);
			}
			else
			{
				// closed
				typedef JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*FunctionPointerType) (void*, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___rendererGroup0, ___cullingContext1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(targetMethod, ___rendererGroup0, ___cullingContext1);
					else
						result = GenericVirtFuncInvoker1< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(targetMethod, ___rendererGroup0, ___cullingContext1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___rendererGroup0, ___cullingContext1);
					else
						result = VirtFuncInvoker1< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___rendererGroup0, ___cullingContext1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___cullingContext1) - 1), targetMethod);
				}
				typedef JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*FunctionPointerType) (BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___rendererGroup0, ___cullingContext1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(targetMethod, targetThis, ___rendererGroup0, ___cullingContext1);
					else
						result = GenericVirtFuncInvoker2< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(targetMethod, targetThis, ___rendererGroup0, ___cullingContext1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rendererGroup0, ___cullingContext1);
					else
						result = VirtFuncInvoker2< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rendererGroup0, ___cullingContext1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*FunctionPointerType) (RuntimeObject*, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___rendererGroup0) - 1), ___cullingContext1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*FunctionPointerType) (BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___rendererGroup0, ___cullingContext1, targetMethod);
				}
				else
				{
					typedef JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*FunctionPointerType) (void*, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___rendererGroup0, ___cullingContext1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Rendering.BatchRendererGroup_OnPerformCulling::BeginInvoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPerformCulling_BeginInvoke_mAF6E29B6BAC52D4DCAD0C87B8C6939B94566EAA1 (OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * __this, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A * ___rendererGroup0, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  ___cullingContext1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPerformCulling_BeginInvoke_mAF6E29B6BAC52D4DCAD0C87B8C6939B94566EAA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___rendererGroup0;
	__d_args[1] = Box(BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66_il2cpp_TypeInfo_var, &___cullingContext1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup_OnPerformCulling::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  OnPerformCulling_EndInvoke_m643216ACF662C78BD6F98E09FA5AA45F92E2F9F0 (OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 *)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.BeforeRenderHelper/OrderBlock
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke(const OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2& unmarshaled, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke& marshaled)
{
	marshaled.___order_0 = unmarshaled.get_order_0();
	marshaled.___callback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_callback_1()));
}
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke_back(const OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke& marshaled, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_order_temp_0 = 0;
	unmarshaled_order_temp_0 = marshaled.___order_0;
	unmarshaled.set_order_0(unmarshaled_order_temp_0);
	unmarshaled.set_callback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099>(marshaled.___callback_1, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.BeforeRenderHelper/OrderBlock
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke_cleanup(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.BeforeRenderHelper/OrderBlock
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_com(const OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2& unmarshaled, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com& marshaled)
{
	marshaled.___order_0 = unmarshaled.get_order_0();
	marshaled.___callback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_callback_1()));
}
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_com_back(const OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com& marshaled, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_order_temp_0 = 0;
	unmarshaled_order_temp_0 = marshaled.___order_0;
	unmarshaled.set_order_0(unmarshaled_order_temp_0);
	unmarshaled.set_callback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099>(marshaled.___callback_1, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.BeforeRenderHelper/OrderBlock
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_com_cleanup(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Camera_CameraCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback__ctor_m6E26A220911F56F3E8936DDD217ED76A15B1915E (CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Camera_CameraCallback::Invoke(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback_Invoke_m52ACC6D0C6BA5A247A24DB9C63D4340B2EF97B24 (CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___cam0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cam0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___cam0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___cam0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___cam0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___cam0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___cam0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(targetMethod, targetThis, ___cam0);
					else
						GenericVirtActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(targetMethod, targetThis, ___cam0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cam0);
					else
						VirtActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cam0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___cam0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___cam0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___cam0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Camera_CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraCallback_BeginInvoke_m7DD0D3DB7F6ACCBFE090C1E2EEE9BBD065A0925D (CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Camera_CameraCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback_EndInvoke_m2CF9596F172FF401AAF5A606BE966E3D08F62DB9 (CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0 (StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0 * __this, CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  ___sphere0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___sphere0);

}
// System.Void UnityEngine.CullingGroup_StateChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChanged__ctor_mBBB5FB739CB1D1206034FFDE998AE8342CC5C0C2 (StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.CullingGroup_StateChanged::Invoke(UnityEngine.CullingGroupEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChanged_Invoke_m6CD13C3770E1EB709C4B125F69F7E4CE6539814D (StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0 * __this, CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  ___sphere0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sphere0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sphere0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  >::Invoke(targetMethod, targetThis, ___sphere0);
					else
						GenericVirtActionInvoker1< CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  >::Invoke(targetMethod, targetThis, ___sphere0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sphere0);
					else
						VirtActionInvoker1< CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sphere0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___sphere0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___sphere0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sphere0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.CullingGroup_StateChanged::BeginInvoke(UnityEngine.CullingGroupEvent,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateChanged_BeginInvoke_m70DAA3720650BA61CA34446A5E19736213E82D4D (StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0 * __this, CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  ___sphere0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StateChanged_BeginInvoke_m70DAA3720650BA61CA34446A5E19736213E82D4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C_il2cpp_TypeInfo_var, &___sphere0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.CullingGroup_StateChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChanged_EndInvoke_m742AAC097C6A02605BF7FB6AA283CA24C021ED65 (StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 (DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Display_DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplaysUpdatedDelegate__ctor_mE01841FD1E938AA63EF9D1153CB40E44543A78BE (DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Display_DisplaysUpdatedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplaysUpdatedDelegate_Invoke_mBABCF33A27A4E0A5FBC06AECECA79FBF4293E7F9 (DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Display_DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DisplaysUpdatedDelegate_BeginInvoke_m42DDA570D68BFAD055E2FEBB75FBE79EFEE2752F (DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Display_DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplaysUpdatedDelegate_EndInvoke_mBE00DC8335AF5142275DCCE3C5CEBC4ED0F60937 (DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
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
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2A00D547FF8F6F8A03666B4737BB9A0620719987 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m2A00D547FF8F6F8A03666B4737BB9A0620719987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * L_0 = (U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 *)il2cpp_codegen_object_new(U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8F825BEC75A119B6CDDA0985A3F7BA3DEA8AD5B2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8F825BEC75A119B6CDDA0985A3F7BA3DEA8AD5B2 (U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping_<>c::<.cctor>b__7_0(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__7_0_m84A19BB5BB12263A1E3C52F1B351E3A24BE546C7 (U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * __this, LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* ___requests0, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  ___lightsOutput1, const RuntimeMethod* method)
{
	DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985  V_3;
	memset((&V_3), 0, sizeof(V_3));
	DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B  V_5;
	memset((&V_5), 0, sizeof(V_5));
	LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Light_tA2F349FE839781469A0344CF6039B51512394275 * V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7 ));
		il2cpp_codegen_initobj((&V_1), sizeof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E ));
		il2cpp_codegen_initobj((&V_2), sizeof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D ));
		il2cpp_codegen_initobj((&V_3), sizeof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985 ));
		il2cpp_codegen_initobj((&V_4), sizeof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D ));
		il2cpp_codegen_initobj((&V_5), sizeof(Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B ));
		il2cpp_codegen_initobj((&V_6), sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 ));
		V_7 = 0;
		goto IL_0142;
	}

IL_0041:
	{
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_0 = ___requests0;
		int32_t L_1 = V_7;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_8 = L_3;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_4 = V_8;
		NullCheck(L_4);
		int32_t L_5 = Light_get_type_mDBBEC33D93952330EED5B02B15865C59D5C355A0(L_4, /*hidden argument*/NULL);
		V_9 = L_5;
		int32_t L_6 = V_9;
		switch (L_6)
		{
			case 0:
			{
				goto IL_00b8;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_0096;
			}
			case 3:
			{
				goto IL_00da;
			}
			case 4:
			{
				goto IL_00fc;
			}
		}
	}
	{
		goto IL_011e;
	}

IL_0071:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_7 = V_8;
		LightmapperUtils_Extract_mCBEC26CC920C0D87DF6E25417533923E26CB6DFC(L_7, (DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7 *)(&V_0), /*hidden argument*/NULL);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_8 = V_8;
		LightmapperUtils_Extract_mACAC5E823E243A53EDD2A01CF857DD16C3FDBE2A(L_8, (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		LightDataGI_Init_m135DF5CF6CBECA4CBA0AC71F9CDEEF8DE25606DB((LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)(&V_6), (DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7 *)(&V_0), (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_0096:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_9 = V_8;
		LightmapperUtils_Extract_mB11D8F3B35F96E176A89517A25CD1A54DCBD7D6E(L_9, (PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E *)(&V_1), /*hidden argument*/NULL);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_10 = V_8;
		LightmapperUtils_Extract_mACAC5E823E243A53EDD2A01CF857DD16C3FDBE2A(L_10, (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		LightDataGI_Init_m4E8BEBD383D5F6F1A1EDFEC763A718A7271C22A6((LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)(&V_6), (PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E *)(&V_1), (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_00b8:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_11 = V_8;
		LightmapperUtils_Extract_mB1572C38F682F043180745B7A231FBE07CD205E4(L_11, (SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D *)(&V_2), /*hidden argument*/NULL);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_12 = V_8;
		LightmapperUtils_Extract_mACAC5E823E243A53EDD2A01CF857DD16C3FDBE2A(L_12, (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		LightDataGI_Init_mC9948FAC4A191C99E3E7D94677B7CFD241857C86((LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)(&V_6), (SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D *)(&V_2), (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_00da:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_13 = V_8;
		LightmapperUtils_Extract_mEABF77895D51E1CA5FD380682539C3DD3FC8A91C(L_13, (RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985 *)(&V_3), /*hidden argument*/NULL);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_14 = V_8;
		LightmapperUtils_Extract_mACAC5E823E243A53EDD2A01CF857DD16C3FDBE2A(L_14, (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		LightDataGI_Init_mA0DF9747C6AD308EAAF2A9530B4225A3D65BB092((LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)(&V_6), (RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985 *)(&V_3), (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_00fc:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_15 = V_8;
		LightmapperUtils_Extract_m93B350DDA0CB5B624054835BAF46C177472E9212(L_15, (DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D *)(&V_4), /*hidden argument*/NULL);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_16 = V_8;
		LightmapperUtils_Extract_mACAC5E823E243A53EDD2A01CF857DD16C3FDBE2A(L_16, (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		LightDataGI_Init_mB96C3F3E00F10DD0806BD3DB93B58C2299D59E94((LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)(&V_6), (DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D *)(&V_4), (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_011e:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_17 = V_8;
		NullCheck(L_17);
		int32_t L_18 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_17, /*hidden argument*/NULL);
		LightDataGI_InitNoBake_mF600D612DE9A1CE4355C61317F6173E1AAEFBD57((LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)(&V_6), L_18, /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_012f:
	{
		int32_t L_19 = V_7;
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_20 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 , ((NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 *)(&___lightsOutput1))->___m_Buffer_0, L_19, (L_20));
		int32_t L_21 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0142:
	{
		int32_t L_22 = V_7;
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_23 = ___requests0;
		NullCheck(L_23);
		V_10 = (bool)((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))? 1 : 0);
		bool L_24 = V_10;
		if (L_24)
		{
			goto IL_0041;
		}
	}
	{
		return;
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
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping_RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_m47823FBD9D2EE4ABA5EE8D889BBBC0783FB10A42 (RequestLightsDelegate_t48C36AFA6015405AE4069BB1F3623AF3BC51FDA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping_RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m8BC0D55744A3FA2E75444AC72B3D3E4FB858BECB (RequestLightsDelegate_t48C36AFA6015405AE4069BB1F3623AF3BC51FDA0 * __this, LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* ___requests0, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  ___lightsOutput1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___requests0, ___lightsOutput1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___requests0, ___lightsOutput1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(targetMethod, ___requests0, ___lightsOutput1);
					else
						GenericVirtActionInvoker1< NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(targetMethod, ___requests0, ___lightsOutput1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___requests0, ___lightsOutput1);
					else
						VirtActionInvoker1< NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___requests0, ___lightsOutput1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___lightsOutput1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___requests0, ___lightsOutput1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(targetMethod, targetThis, ___requests0, ___lightsOutput1);
					else
						GenericVirtActionInvoker2< LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(targetMethod, targetThis, ___requests0, ___lightsOutput1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___requests0, ___lightsOutput1);
					else
						VirtActionInvoker2< LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___requests0, ___lightsOutput1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___requests0) - 1), ___lightsOutput1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___requests0, ___lightsOutput1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___requests0, ___lightsOutput1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Experimental.GlobalIllumination.Lightmapping_RequestLightsDelegate::BeginInvoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RequestLightsDelegate_BeginInvoke_m75482E3D4E28205DCB4A202F5C144CB7C95622A6 (RequestLightsDelegate_t48C36AFA6015405AE4069BB1F3623AF3BC51FDA0 * __this, LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* ___requests0, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  ___lightsOutput1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RequestLightsDelegate_BeginInvoke_m75482E3D4E28205DCB4A202F5C144CB7C95622A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___requests0;
	__d_args[1] = Box(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2_il2cpp_TypeInfo_var, &___lightsOutput1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping_RequestLightsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate_EndInvoke_mA1FF787B6F3182ACF6157D13F9A84AFCBB66EE60 (RequestLightsDelegate_t48C36AFA6015405AE4069BB1F3623AF3BC51FDA0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
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
IL2CPP_EXTERN_C  PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  DelegatePInvokeWrapper_CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 (CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * __this, PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  (DEFAULT_CALL *PInvokeFunc)(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  returnValue = il2cppPInvokeFunc(___graph0, ____name1_marshaled);

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

	return returnValue;
}
// System.Void UnityEngine.Playables.PlayableBinding_CreateOutputMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m944A1B790F35F52E108EF2CC13BA02BD8DE62EB3 (CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding_CreateOutputMethod::Invoke(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  CreateOutputMethod_Invoke_mFD551E15D9A6FD8B2C70A2CC96AAD0D2D9D3D109 (CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * __this, PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  (*FunctionPointerType) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graph0, ___name1, targetMethod);
			}
			else
			{
				// closed
				typedef PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  (*FunctionPointerType) (void*, PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graph0, ___name1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 , PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t* >::Invoke(targetMethod, targetThis, ___graph0, ___name1);
					else
						result = GenericVirtFuncInvoker2< PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 , PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t* >::Invoke(targetMethod, targetThis, ___graph0, ___name1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 , PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graph0, ___name1);
					else
						result = VirtFuncInvoker2< PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 , PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graph0, ___name1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graph0) - 1), ___name1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___graph0) - 1), ___name1, targetMethod);
				}
				else
				{
					typedef PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  (*FunctionPointerType) (void*, PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graph0, ___name1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Playables.PlayableBinding_CreateOutputMethod::BeginInvoke(UnityEngine.Playables.PlayableGraph,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateOutputMethod_BeginInvoke_m082AE47F9DFBF0C1787081D2D628E0E5CECCBFF1 (CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * __this, PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, String_t* ___name1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreateOutputMethod_BeginInvoke_m082AE47F9DFBF0C1787081D2D628E0E5CECCBFF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A_il2cpp_TypeInfo_var, &___graph0);
	__d_args[1] = ___name1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding_CreateOutputMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  CreateOutputMethod_EndInvoke_mAA7AE5BF9E6A38C081A972827A16497ACA9FA9CE (CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection_<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m66E5B9C72A27F0645F9854522ACE087CE32A5EEE (U3CU3Ec__DisplayClass12_0_tC029C4F11E384EFEF6FD86B7BEC83D295D098769 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection_<>c__DisplayClass12_0::<Register>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CRegisterU3Eb__0_m27C1416BAD7AF0A1BF83339C8A03865A6487B234 (U3CU3Ec__DisplayClass12_0_tC029C4F11E384EFEF6FD86B7BEC83D295D098769 * __this, MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass12_0_U3CRegisterU3Eb__0_m27C1416BAD7AF0A1BF83339C8A03865A6487B234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * L_0 = ___x0;
		NullCheck(L_0);
		Guid_t  L_1 = MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9(L_0, /*hidden argument*/NULL);
		Guid_t  L_2 = __this->get_messageId_0();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_3 = Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection_<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m75A8930EBA7C6BF81519358930656DAA2FBDDEDB (U3CU3Ec__DisplayClass13_0_t1A8EBE4E3370D09549DE4FD59077B3A7AEAD0C54 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection_<>c__DisplayClass13_0::<Unregister>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CUnregisterU3Eb__0_mBA34804D7BB1B4FFE45D077BBB07BFA81C8DCB00 (U3CU3Ec__DisplayClass13_0_t1A8EBE4E3370D09549DE4FD59077B3A7AEAD0C54 * __this, MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_0_U3CUnregisterU3Eb__0_mBA34804D7BB1B4FFE45D077BBB07BFA81C8DCB00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * L_0 = ___x0;
		NullCheck(L_0);
		Guid_t  L_1 = MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9(L_0, /*hidden argument*/NULL);
		Guid_t  L_2 = __this->get_messageId_0();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_3 = Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection_<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m2B215926A23E33037D754DFAFDF8459D82243683 (U3CU3Ec__DisplayClass20_0_tEA47E236E3FCEC75772DAF52911B35E8F14766DD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection_<>c__DisplayClass20_0::<BlockUntilRecvMsg>b__0(UnityEngine.Networking.PlayerConnection.MessageEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CBlockUntilRecvMsgU3Eb__0_m1D6C3976419CFCE0B612D04C135A985707C215E2 (U3CU3Ec__DisplayClass20_0_tEA47E236E3FCEC75772DAF52911B35E8F14766DD * __this, MessageEventArgs_t6905F6AA12A37C5A38BBCB907E9215622364DCCA * ___args0, const RuntimeMethod* method)
{
	{
		__this->set_msgReceived_0((bool)1);
		return;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mEB8DB2BFDA9F6F083E77F1EC1CE3F4861CD1815A (U3CU3Ec__DisplayClass6_0_t96633FB6A2AE351A4A3FCDF89D10891DA07AD54F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_<>c__DisplayClass6_0::<InvokeMessageIdSubscribers>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CInvokeMessageIdSubscribersU3Eb__0_mEF5D5DFC8F7C2CEC86378AC3BBD40E80A1D9C615 (U3CU3Ec__DisplayClass6_0_t96633FB6A2AE351A4A3FCDF89D10891DA07AD54F * __this, MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass6_0_U3CInvokeMessageIdSubscribersU3Eb__0_mEF5D5DFC8F7C2CEC86378AC3BBD40E80A1D9C615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * L_0 = ___x0;
		NullCheck(L_0);
		Guid_t  L_1 = MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9(L_0, /*hidden argument*/NULL);
		Guid_t  L_2 = __this->get_messageId_0();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_3 = Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m97B67DA8AA306A160A790CCDD869669878DDB7F3 (U3CU3Ec__DisplayClass7_0_t7C625D285CBB757F88C0232D12D88EDABF06EB60 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_<>c__DisplayClass7_0::<AddAndCreate>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3CAddAndCreateU3Eb__0_mAA3D205F35F7BE200A5DDD14099F56312FBED909 (U3CU3Ec__DisplayClass7_0_t7C625D285CBB757F88C0232D12D88EDABF06EB60 * __this, MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass7_0_U3CAddAndCreateU3Eb__0_mAA3D205F35F7BE200A5DDD14099F56312FBED909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * L_0 = ___x0;
		NullCheck(L_0);
		Guid_t  L_1 = MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9(L_0, /*hidden argument*/NULL);
		Guid_t  L_2 = __this->get_messageId_0();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_3 = Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m18AC0B2825D7BB04F59DC800DFF74D45921A28FA (U3CU3Ec__DisplayClass8_0_tE64E7CAC5415DCD425D14A6062600087CC872B93 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_<>c__DisplayClass8_0::<UnregisterManagedCallback>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CUnregisterManagedCallbackU3Eb__0_m70805C4CE0F8DD258CC3975A8C90313A0A609BE3 (U3CU3Ec__DisplayClass8_0_tE64E7CAC5415DCD425D14A6062600087CC872B93 * __this, MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass8_0_U3CUnregisterManagedCallbackU3Eb__0_m70805C4CE0F8DD258CC3975A8C90313A0A609BE3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * L_0 = ___x0;
		NullCheck(L_0);
		Guid_t  L_1 = MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9(L_0, /*hidden argument*/NULL);
		Guid_t  L_2 = __this->get_messageId_0();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_3 = Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_ConnectionChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionChangeEvent__ctor_m95EBD8B5EA1C4A14A5F2B71CEE1A2C18C73DB0A1 (ConnectionChangeEvent_tCA1C8C14171C72EC394EF45450D69C1585067BDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionChangeEvent__ctor_m95EBD8B5EA1C4A14A5F2B71CEE1A2C18C73DB0A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF(__this, /*hidden argument*/UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_RuntimeMethod_var);
		return;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageEvent__ctor_mE4D70D8837C51E422C9A40C3F8F34ACB9AB572BB (MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageEvent__ctor_mE4D70D8837C51E422C9A40C3F8F34ACB9AB572BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mC7E63F58C7EFC8E8747E3619B7564A7325F03D3B(__this, /*hidden argument*/UnityEvent_1__ctor_mC7E63F58C7EFC8E8747E3619B7564A7325F03D3B_RuntimeMethod_var);
		return;
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
// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageTypeSubscribers::get_MessageTypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9 (MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * __this, const RuntimeMethod* method)
{
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = __this->get_m_messageTypeId_0();
		Guid_t  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Guid__ctor_mF80313305B9CD2AD39B621E1CEC5C7DFDFFBDE66((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Guid_t  L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageTypeSubscribers::set_MessageTypeId(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageTypeSubscribers_set_MessageTypeId_m7125FF3E71F4E678644F056A4DC5C29EFB749762 (MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&___value0), /*hidden argument*/NULL);
		__this->set_m_messageTypeId_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents_MessageTypeSubscribers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageTypeSubscribers__ctor_mA51A6D3E38DBAA5B8237BAB1688F669F24982F29 (MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageTypeSubscribers__ctor_mA51A6D3E38DBAA5B8237BAB1688F669F24982F29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_subscriberCount_1(0);
		MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B * L_0 = (MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B *)il2cpp_codegen_object_new(MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B_il2cpp_TypeInfo_var);
		MessageEvent__ctor_mE4D70D8837C51E422C9A40C3F8F34ACB9AB572BB(L_0, /*hidden argument*/NULL);
		__this->set_messageCallback_2(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem_UpdateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319 (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem_UpdateFunction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction_Invoke_mB17C55B92FAECE51078028F59A9F1EAC2016B1AD (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.LowLevel.PlayerLoopSystem_UpdateFunction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateFunction_BeginInvoke_m1EB0935AB72A286D153ACEBD0E5D66BB38BD6799 (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem_UpdateFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction_EndInvoke_mB4BC0AA40E9C83274116DF6467D72DD4902DA624 (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.RectTransform_ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReapplyDrivenProperties__ctor_mD584B5E4A07E3D025352EA0BAE9B10FE5C13A583 (ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.RectTransform_ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReapplyDrivenProperties_Invoke_m5B39EC5205C3910AC09DCF378EAA2D8E99391636 (ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___driven0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___driven0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___driven0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___driven0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___driven0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___driven0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___driven0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___driven0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * >::Invoke(targetMethod, targetThis, ___driven0);
					else
						GenericVirtActionInvoker1< RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * >::Invoke(targetMethod, targetThis, ___driven0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___driven0);
					else
						VirtActionInvoker1< RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___driven0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___driven0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___driven0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___driven0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.RectTransform_ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReapplyDrivenProperties_BeginInvoke_mC7625A8FDFF392D73C7828526490DCB88FD87232 (ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___driven0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___driven0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.RectTransform_ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReapplyDrivenProperties_EndInvoke_m89A593999C130CA23515BF8A9C02DDE5B39ECF67 (ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
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
// System.Void UnityEngine.TextAsset_EncodingUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncodingUtility__cctor_m6BADEB7670563CC438C10AF259028A7FF06AD65F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncodingUtility__cctor_m6BADEB7670563CC438C10AF259028A7FF06AD65F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_0 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_1 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_2 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_3 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_4 = NULL;
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 System.Text.Encoding::get_CodePage() */, L_0);
		EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418 * L_2 = (EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418 *)il2cpp_codegen_object_new(EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418_il2cpp_TypeInfo_var);
		EncoderReplacementFallback__ctor_m07299910DC3D3F6B9F8F37A4ADD40A500F97D1D4(L_2, _stringLiteralB8F710F417E2D96E747683BF53A8CA9BB6B9648C, /*hidden argument*/NULL);
		DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130 * L_3 = (DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130 *)il2cpp_codegen_object_new(DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130_il2cpp_TypeInfo_var);
		DecoderReplacementFallback__ctor_m7E6C273B2682E373C787568EB0BB0B2E4B6C2253(L_3, _stringLiteralB8F710F417E2D96E747683BF53A8CA9BB6B9648C, /*hidden argument*/NULL);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_4 = Encoding_GetEncoding_m4DC46FF0C923994EDEE21980037198E27A75E4F2(L_1, L_2, L_3, /*hidden argument*/NULL);
		((EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields*)il2cpp_codegen_static_fields_for(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var))->set_targetEncoding_1(L_4);
		UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * L_5 = (UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 *)il2cpp_codegen_object_new(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014_il2cpp_TypeInfo_var);
		UTF32Encoding__ctor_mCC6CB31807AE3B57FAF941B59D72D7BA10CFB1FD(L_5, (bool)1, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * L_6 = (UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 *)il2cpp_codegen_object_new(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014_il2cpp_TypeInfo_var);
		UTF32Encoding__ctor_mCC6CB31807AE3B57FAF941B59D72D7BA10CFB1FD(L_6, (bool)0, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_1 = L_6;
		UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * L_7 = (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)il2cpp_codegen_object_new(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var);
		UnicodeEncoding__ctor_m8D0BFF0DBB175D7E590674E31343E8C72701FC7C(L_7, (bool)1, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_2 = L_7;
		UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * L_8 = (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)il2cpp_codegen_object_new(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var);
		UnicodeEncoding__ctor_m8D0BFF0DBB175D7E590674E31343E8C72701FC7C(L_8, (bool)0, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_3 = L_8;
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_9 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mD752778085A353529AF03841383E5603FE556449(L_9, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_4 = L_9;
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_10 = (KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7*)(KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7*)SZArrayNew(KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7_il2cpp_TypeInfo_var, (uint32_t)5);
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_11 = L_10;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Byte[] System.Text.Encoding::GetPreamble() */, L_12);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_14 = V_0;
		KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  L_15;
		memset((&L_15), 0, sizeof(L_15));
		KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E((&L_15), L_13, L_14, /*hidden argument*/KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E_RuntimeMethod_var);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B )L_15);
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_16 = L_11;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_17 = V_1;
		NullCheck(L_17);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Byte[] System.Text.Encoding::GetPreamble() */, L_17);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_19 = V_1;
		KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E((&L_20), L_18, L_19, /*hidden argument*/KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E_RuntimeMethod_var);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B )L_20);
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_21 = L_16;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_22 = V_2;
		NullCheck(L_22);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Byte[] System.Text.Encoding::GetPreamble() */, L_22);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_24 = V_2;
		KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  L_25;
		memset((&L_25), 0, sizeof(L_25));
		KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E((&L_25), L_23, L_24, /*hidden argument*/KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E_RuntimeMethod_var);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B )L_25);
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_26 = L_21;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_27 = V_3;
		NullCheck(L_27);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Byte[] System.Text.Encoding::GetPreamble() */, L_27);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_29 = V_3;
		KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  L_30;
		memset((&L_30), 0, sizeof(L_30));
		KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E((&L_30), L_28, L_29, /*hidden argument*/KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E_RuntimeMethod_var);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B )L_30);
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_31 = L_26;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_32 = V_4;
		NullCheck(L_32);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Byte[] System.Text.Encoding::GetPreamble() */, L_32);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_34 = V_4;
		KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  L_35;
		memset((&L_35), 0, sizeof(L_35));
		KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E((&L_35), L_33, L_34, /*hidden argument*/KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E_RuntimeMethod_var);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(4), (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B )L_35);
		((EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields*)il2cpp_codegen_static_fields_for(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var))->set_encodingLookup_0(L_31);
		return;
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
// System.Void UnityEngine.Transform_Enumerator::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m052C22273F1D789E58A09606D5EE5E87ABC2C91B (Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___outer0, const RuntimeMethod* method)
{
	{
		__this->set_currentIndex_1((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___outer0;
		__this->set_outer_0(L_0);
		return;
	}
}
// System.Object UnityEngine.Transform_Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m1CFECBB7AC3EACD05A11CC6848AE7A94A8123E9F (Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_outer_0();
		int32_t L_1 = __this->get_currentIndex_1();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Transform_Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m346F9A121D9E89ADBA8296E6A7EF8763C5B58A14 (Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_outer_0();
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_currentIndex_1();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		int32_t L_3 = V_1;
		__this->set_currentIndex_1(L_3);
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		goto IL_0024;
	}

IL_0024:
	{
		bool L_6 = V_2;
		return L_6;
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
// System.Void UnityEngine.UnhandledExceptionHandler_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5B3F5B8A2DD74DC42F3E777C1FDD1C880EFA95BA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m5B3F5B8A2DD74DC42F3E777C1FDD1C880EFA95BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF * L_0 = (U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF *)il2cpp_codegen_object_new(U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB628041C94E761F86F2A26819A038D6BC59E324D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB628041C94E761F86F2A26819A038D6BC59E324D (U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler_<>c::<RegisterUECatcher>b__0_0(System.Object,System.UnhandledExceptionEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterUECatcherU3Eb__0_0_mB2E6DD6B9C72FA3D5DB8D311DB281F272A587278 (U3CU3Ec_t2E3508EBEE2B43EC58CD7343CEBA1A7D59A4BFFF * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_tFA66D5AA8F6337DEF8E2B494B3B8C377C9FDB885 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterUECatcherU3Eb__0_0_mB2E6DD6B9C72FA3D5DB8D311DB281F272A587278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnhandledExceptionEventArgs_tFA66D5AA8F6337DEF8E2B494B3B8C377C9FDB885 * L_0 = ___e1;
		NullCheck(L_0);
		RuntimeObject * L_1 = UnhandledExceptionEventArgs_get_ExceptionObject_mCC83AA77B4F250C371EEE194025341F757724E90_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IsInstClass((RuntimeObject*)L_1, Exception_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
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
// Conversion methods for marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke(const WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393& unmarshaled, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL);
}
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke_back(const WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke& marshaled, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393& unmarshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke_cleanup(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_com(const WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393& unmarshaled, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com& marshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL);
}
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_com_back(const WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com& marshaled, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393& unmarshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_com_cleanup(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.UnitySynchronizationContext_WorkRequest::.ctor(System.Threading.SendOrPostCallback,System.Object,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkRequest__ctor_m13C7B4A89E47F4B97ED9B786DB99849DBC2B5603 (WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * __this, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___callback0, RuntimeObject * ___state1, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___waitHandle2, const RuntimeMethod* method)
{
	{
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_0 = ___callback0;
		__this->set_m_DelagateCallback_0(L_0);
		RuntimeObject * L_1 = ___state1;
		__this->set_m_DelagateState_1(L_1);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_2 = ___waitHandle2;
		__this->set_m_WaitHandle_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkRequest__ctor_m13C7B4A89E47F4B97ED9B786DB99849DBC2B5603_AdjustorThunk (RuntimeObject * __this, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___callback0, RuntimeObject * ___state1, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___waitHandle2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * _thisAdjusted = reinterpret_cast<WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 *>(__this + _offset);
	WorkRequest__ctor_m13C7B4A89E47F4B97ED9B786DB99849DBC2B5603(_thisAdjusted, ___callback0, ___state1, ___waitHandle2, method);
}
// System.Void UnityEngine.UnitySynchronizationContext_WorkRequest::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkRequest_Invoke_m1C292B7297918C5F2DBE70971895FE8D5C33AA20 (WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorkRequest_Invoke_m1C292B7297918C5F2DBE70971895FE8D5C33AA20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_0 = __this->get_m_DelagateCallback_0();
		RuntimeObject * L_1 = __this->get_m_DelagateState_1();
		NullCheck(L_0);
		SendOrPostCallback_Invoke_m352534ED0E61440A793944CC44809F666BBC1461(L_0, L_1, /*hidden argument*/NULL);
		goto IL_0023;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0017;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		Exception_t * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(L_2, /*hidden argument*/NULL);
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_3 = __this->get_m_WaitHandle_2();
		V_1 = (bool)((!(((RuntimeObject*)(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_5 = __this->get_m_WaitHandle_2();
		NullCheck(L_5);
		EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_5, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void WorkRequest_Invoke_m1C292B7297918C5F2DBE70971895FE8D5C33AA20_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * _thisAdjusted = reinterpret_cast<WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 *>(__this + _offset);
	WorkRequest_Invoke_m1C292B7297918C5F2DBE70971895FE8D5C33AA20(_thisAdjusted, method);
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7B53835BDDAF009835F9A0907BC59E4E88C71D9C_inline (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CdefaultMixedLightingModesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_mE4A171C47A4A685E49F2F382AA51C556B48EE58C_inline (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CmixedLightingModesU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method)
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_mAF3B22ACCE625D1C45F411D30C2874E8A847605E_inline (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3ClightmapBakeTypesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_mA4BDBEBFE0E8F1C161D7BE28B328E6D6E36720A9_inline (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CenlightenU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m69B5455BF172B258A0A2DB6F52846E8934AD048A_inline (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3ClightmapsModesU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m8E56255490C51999C7B14F30CD072E49E2C39B4E_inline (SupportedRenderingFeatures_t751F1D338419E1CFAF4A3F7CE61B52075D72AF54 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CrendersUIOverlayU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_mB9E603303A0678B32684B0EEC144334BAB0E6392_inline (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__HResult_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___other0;
		float L_2 = L_1.get_x_0();
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___other0;
		float L_5 = L_4.get_y_1();
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854UnityEngine_CoreModule1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___vector0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_12 = sqrt((((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))))))));
		V_0 = (((float)((float)L_12)));
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m0919D35807550372D1748193EB31E4C5E406AE61_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0 = __this->get_x_0();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___other0;
		float L_2 = L_1.get_x_0();
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_003b;
		}
	}
	{
		float L_3 = __this->get_y_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___other0;
		float L_5 = L_4.get_y_1();
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		float L_6 = __this->get_z_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7 = ___other0;
		float L_8 = L_7.get_z_2();
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		float L_9 = __this->get_w_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___other0;
		float L_11 = L_10.get_w_3();
		G_B5_0 = ((((float)L_9) == ((float)L_11))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * UnhandledExceptionEventArgs_get_ExceptionObject_mCC83AA77B4F250C371EEE194025341F757724E90_inline (UnhandledExceptionEventArgs_tFA66D5AA8F6337DEF8E2B494B3B8C377C9FDB885 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__Exception_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_gshared_inline (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* L_2 = (WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F*)__this->get__items_1();
		int32_t L_3 = ___index0;
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_gshared_inline (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
