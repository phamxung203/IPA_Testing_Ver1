﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>
struct CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB;
// System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>
struct CacheDict_2_tAFE0E408BD366174E0892EAB041D22C18AD3F2AC;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.WeakReference>>
struct Dictionary_2_t697CE563C099F86A8194F2BE7E5D47AA6EA83E65;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
// System.Func`2<System.Type,System.Type>
struct Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_t28EB8E755FDBFBDE88574629581245F2CF1F5FC1;
// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression>
struct IReadOnlyList_1_tB86476F62FBF3BB3389F17E0FFB65836DD3F2F65;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6;
// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Object>
struct TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D;
// System.Dynamic.Utils.CacheDict`2/Entry<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>[]
struct EntryU5BU5D_tFF2ADFB6137CF26442B1916B632BCFDF52B3EDF8;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Dynamic.DynamicMetaObject[]
struct DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Dynamic.BindingRestrictions
struct BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424;
// System.Linq.Expressions.BlockExpression
struct BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Dynamic.DynamicMetaObject
struct DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825;
// System.Dynamic.DynamicMetaObjectBinder
struct DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF;
// System.Exception
struct Exception_t;
// System.Dynamic.ExpandoClass
struct ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19;
// System.Dynamic.ExpandoObject
struct ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590;
// System.Dynamic.GetMemberBinder
struct GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3;
// System.Linq.Expressions.IArgumentProvider
struct IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Linq.Expressions.IParameterProvider
struct IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C;
// System.Linq.Expressions.IndexExpression
struct IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Linq.Expressions.LabelTarget
struct LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Dynamic.SetMemberBinder
struct SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51
struct U3CGetExpandoEnumeratorU3Ed__51_t421D8F375E4578DE15A8E3481A5E74CAFE0E06F2;
// System.Dynamic.ExpandoObject/ExpandoData
struct ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA;
// System.Dynamic.ExpandoObject/MetaExpando
struct MetaExpando_t98113C7B14DB22EC1F72692FB6F87FCF34EB947F;
// System.Dynamic.Utils.TypeUtils/<>c
struct U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E;
// System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6
struct U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018;
IL2CPP_EXTERN_C String_t* _stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59;
IL2CPP_EXTERN_C String_t* _stringLiteral471543834C9A5ADAA79EDD06EDCBA5930B3CB3F4;
IL2CPP_EXTERN_C String_t* _stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5;
IL2CPP_EXTERN_C String_t* _stringLiteral656DE8865223883D9C605D63606CD7138CF8CAD3;
IL2CPP_EXTERN_C String_t* _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF;
IL2CPP_EXTERN_C String_t* _stringLiteralB6E90C09E43FB002DA629508AC300A0750320118;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CacheDict_2_TryGetValue_m6CBD87FAA759A05435AEFD9D93587B5D418ECE63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CacheDict_2__ctor_mB7ADF1F2EDACF1FACE85871B31627E2AA1C936E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CacheDict_2_set_Item_mF8EE28322B73E55CB990D05DF380380AD8176E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_RemoveFirst_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m4B6727B4DCB60C3A0E390CDC1C6C0A3A878F2041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_RequiresNotNull_m04A5009D6D6E22EC255AED2147373282D3C4A76A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_Requires_mB75206C24EAACC2AF630A8FC9BFE87D772BE7529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisType_t_TisType_t_mA23DABAE3023E25FB205F89A2D1F1DBE6576E51F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionUtils_ValidateArgumentCount_m153AE9D01D3A9E720D2D275F99ED44289C7EFC3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionVisitor_VisitAndConvert_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3E32E159FAD0579791C006186CD0161EADE1834F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeUtils_ValidateType_mE94AD3C043E2FE6C32BBA6C1FC60D29CB2063AEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDynamicMemberNamesU3Ed__6_System_Collections_IEnumerator_Reset_m81F91648E75E3466F9AA3F77101ACD24F93F5DA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetExpandoEnumeratorU3Ed__51_MoveNext_mFFF751389F9F81B4F23262CD8554B940493821C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetExpandoEnumeratorU3Ed__51_System_Collections_IEnumerator_Reset_m9BA7A5F6B7D8695A07164C20F7F29EE071FB426F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__44_0_m2BD6021A86F56FAF62819F3E8E5C646C33189C84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__44_1_mEC47DD3839EE48CD21585CB1ECD92E8D26693755_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MulticastDelegate_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeArray_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50;
struct ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F;
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>
struct CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB  : public RuntimeObject
{
	// System.Int32 System.Dynamic.Utils.CacheDict`2::_mask
	int32_t ____mask_0;
	// System.Dynamic.Utils.CacheDict`2/Entry<TKey,TValue>[] System.Dynamic.Utils.CacheDict`2::_entries
	EntryU5BU5D_tFF2ADFB6137CF26442B1916B632BCFDF52B3EDF8* ____entries_1;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0985298E3928118182D9E60D8C7A51F84FE0D710  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.CallSiteBinder
struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> System.Runtime.CompilerServices.CallSiteBinder::Cache
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___Cache_0;
};

// System.Dynamic.Utils.CollectionExtensions
struct CollectionExtensions_t12AA86DB09D1442F1691A1B1F4F35ADE1604514D  : public RuntimeObject
{
};

// System.Dynamic.Utils.ContractUtils
struct ContractUtils_tFD5BFE68866F22438D49EF2D69CC0BE6FFF726EC  : public RuntimeObject
{
};

// System.Dynamic.DynamicMetaObject
struct DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825  : public RuntimeObject
{
	// System.Object System.Dynamic.DynamicMetaObject::_value
	RuntimeObject* ____value_2;
	// System.Linq.Expressions.Expression System.Dynamic.DynamicMetaObject::<Expression>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CExpressionU3Ek__BackingField_3;
	// System.Dynamic.BindingRestrictions System.Dynamic.DynamicMetaObject::<Restrictions>k__BackingField
	BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* ___U3CRestrictionsU3Ek__BackingField_4;
};

// System.Dynamic.ExpandoClass
struct ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19  : public RuntimeObject
{
	// System.String[] System.Dynamic.ExpandoClass::_keys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____keys_0;
	// System.Int32 System.Dynamic.ExpandoClass::_hashCode
	int32_t ____hashCode_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.WeakReference>> System.Dynamic.ExpandoClass::_transitions
	Dictionary_2_t697CE563C099F86A8194F2BE7E5D47AA6EA83E65* ____transitions_2;
};

// System.Dynamic.ExpandoObject
struct ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012  : public RuntimeObject
{
	// System.Object System.Dynamic.ExpandoObject::LockObject
	RuntimeObject* ___LockObject_5;
	// System.Dynamic.ExpandoObject/ExpandoData System.Dynamic.ExpandoObject::_data
	ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* ____data_6;
	// System.Int32 System.Dynamic.ExpandoObject::_count
	int32_t ____count_7;
	// System.ComponentModel.PropertyChangedEventHandler System.Dynamic.ExpandoObject::_propertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ____propertyChanged_9;
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

// System.Dynamic.Utils.ExpressionUtils
struct ExpressionUtils_t840E12569E851470D21F9784B859DD4F07235F35  : public RuntimeObject
{
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// System.Dynamic.Utils.ExpressionVisitorUtils
struct ExpressionVisitorUtils_t8A120490A8DBD35DFD55CDCD34E7813634CE421E  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Dynamic.Utils.TypeExtensions
struct TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470  : public RuntimeObject
{
};

// System.Dynamic.Utils.TypeUtils
struct TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Dynamic.ExpandoObject/ExpandoData
struct ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA  : public RuntimeObject
{
	// System.Dynamic.ExpandoClass System.Dynamic.ExpandoObject/ExpandoData::Class
	ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* ___Class_1;
	// System.Object[] System.Dynamic.ExpandoObject/ExpandoData::_dataArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____dataArray_2;
	// System.Int32 System.Dynamic.ExpandoObject/ExpandoData::_version
	int32_t ____version_3;
};

// System.Dynamic.Utils.TypeUtils/<>c
struct U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E  : public RuntimeObject
{
};

// System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6
struct U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9  : public RuntimeObject
{
	// System.Int32 System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Dynamic.ExpandoObject/MetaExpando System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<>4__this
	MetaExpando_t98113C7B14DB22EC1F72692FB6F87FCF34EB947F* ___U3CU3E4__this_3;
	// System.Dynamic.ExpandoObject/ExpandoData System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<expandoData>5__2
	ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* ___U3CexpandoDataU3E5__2_4;
	// System.Dynamic.ExpandoClass System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<klass>5__3
	ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* ___U3CklassU3E5__3_5;
	// System.Int32 System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<i>5__4
	int32_t ___U3CiU3E5__4_6;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6  : public ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E
{
};

// System.Linq.Expressions.BlockExpression
struct BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Dynamic.DynamicMetaObjectBinder
struct DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF  : public CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Linq.Expressions.IndexExpression
struct IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.IndexExpression::_arguments
	RuntimeObject* ____arguments_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.IndexExpression::<Object>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CObjectU3Ek__BackingField_4;
	// System.Reflection.PropertyInfo System.Linq.Expressions.IndexExpression::<Indexer>k__BackingField
	PropertyInfo_t* ___U3CIndexerU3Ek__BackingField_5;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// System.Linq.Expressions.MemberExpression
struct MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::<Expression>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CExpressionU3Ek__BackingField_3;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct __StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE__padding[1024];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_t6F11AA913DFF35D8B33057BABEFEF1EA9B976881 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t6F11AA913DFF35D8B33057BABEFEF1EA9B976881__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t121506E42A9F4B673CDCF2FDFF169D68811BB731 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t121506E42A9F4B673CDCF2FDFF169D68811BB731__padding[256];
	};
};

// System.Dynamic.ExpandoObject/MetaExpando
struct MetaExpando_t98113C7B14DB22EC1F72692FB6F87FCF34EB947F  : public DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825
{
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Linq.Expressions.ExpressionType
struct ExpressionType_tAA03F259DBEAA7B62E085C620D7B879FAA696B25 
{
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___2;
};

// System.Reflection.GenericParameterAttributes
struct GenericParameterAttributes_tD73CDB8C95D60038AA80DC4557D460B32FB6378F 
{
	// System.Int32 System.Reflection.GenericParameterAttributes::value__
	int32_t ___value___2;
};

// System.Dynamic.GetMemberBinder
struct GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3  : public DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF
{
	// System.String System.Dynamic.GetMemberBinder::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Boolean System.Dynamic.GetMemberBinder::<IgnoreCase>k__BackingField
	bool ___U3CIgnoreCaseU3Ek__BackingField_3;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.Reflection.ParameterAttributes
struct ParameterAttributes_tDAEC8B3C5986B042F8F9B0845505D0FC15F92E68 
{
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Dynamic.SetMemberBinder
struct SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F  : public DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF
{
	// System.String System.Dynamic.SetMemberBinder::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Boolean System.Dynamic.SetMemberBinder::<IgnoreCase>k__BackingField
	bool ___U3CIgnoreCaseU3Ek__BackingField_3;
};

// System.TypeCode
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;
};

// System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51
struct U3CGetExpandoEnumeratorU3Ed__51_t421D8F375E4578DE15A8E3481A5E74CAFE0E06F2  : public RuntimeObject
{
	// System.Int32 System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51::<>2__current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___U3CU3E2__current_1;
	// System.Dynamic.ExpandoObject System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51::<>4__this
	ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012* ___U3CU3E4__this_2;
	// System.Int32 System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51::version
	int32_t ___version_3;
	// System.Dynamic.ExpandoObject/ExpandoData System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51::data
	ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* ___data_4;
	// System.Int32 System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51::<i>5__2
	int32_t ___U3CiU3E5__2_5;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Type System.Linq.Expressions.UnaryExpression::<Type>k__BackingField
	Type_t* ___U3CTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.UnaryExpression::<NodeType>k__BackingField
	int32_t ___U3CNodeTypeU3Ek__BackingField_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::<Operand>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3COperandU3Ek__BackingField_5;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::<Method>k__BackingField
	MethodInfo_t* ___U3CMethodU3Ek__BackingField_6;
};

// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,System.Type>
struct Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>

// System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0985298E3928118182D9E60D8C7A51F84FE0D710_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::0270BFF41CB170C33C20788C368CB1B5A66B0FD0B98D638A827B783537583821
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___0270BFF41CB170C33C20788C368CB1B5A66B0FD0B98D638A827B783537583821_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::09FDC69AA887AC8D36E0C8284C7B1D53E580E4880B72A67FF80D7E38317115D9
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___09FDC69AA887AC8D36E0C8284C7B1D53E580E4880B72A67FF80D7E38317115D9_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::0F4764044BF2E91EFEFAF3D4F1E81C10A2B7F0F45305489925CFC01198CF45B5
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___0F4764044BF2E91EFEFAF3D4F1E81C10A2B7F0F45305489925CFC01198CF45B5_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::15A0E7628178B3FE6546E9B60F35E2B1C4864E020B16376866F38F72C74B45A9
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___15A0E7628178B3FE6546E9B60F35E2B1C4864E020B16376866F38F72C74B45A9_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::4CF8DC711CD3210D673D86981355E2609233025ED22E4DC7A1F9B8E75ADE35F4
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___4CF8DC711CD3210D673D86981355E2609233025ED22E4DC7A1F9B8E75ADE35F4_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::783FB0A44BE7670EB6EC170CF7F16BB2B6F23F4964B87B60C4EB506C7C6A286D
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___783FB0A44BE7670EB6EC170CF7F16BB2B6F23F4964B87B60C4EB506C7C6A286D_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::914FCE8DC82DA59038745B264F743222527FBAE2E4A28E71C89760B7E3DBBA67
	__StaticArrayInitTypeSizeU3D120_t6F11AA913DFF35D8B33057BABEFEF1EA9B976881 ___914FCE8DC82DA59038745B264F743222527FBAE2E4A28E71C89760B7E3DBBA67_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::93631B0726F6FE6629DAA743EE51B49F4477ED07391B68EEEA0672A4A90018AA
	__StaticArrayInitTypeSizeU3D256_t121506E42A9F4B673CDCF2FDFF169D68811BB731 ___93631B0726F6FE6629DAA743EE51B49F4477ED07391B68EEEA0672A4A90018AA_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::C2D8E5EED6CBEBD8625FC18F81486A7733C04F9B0129FFBE974C68B90308B4F2
	__StaticArrayInitTypeSizeU3D256_t121506E42A9F4B673CDCF2FDFF169D68811BB731 ___C2D8E5EED6CBEBD8625FC18F81486A7733C04F9B0129FFBE974C68B90308B4F2_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::C40A9A77EE05E10AF16DA9D1781A2053159EA8570ADA03637BB5FE3D076C9F89
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___C40A9A77EE05E10AF16DA9D1781A2053159EA8570ADA03637BB5FE3D076C9F89_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::E8058399671D13082C35B6B3CE7F9E282507EDD458CCFDD3BAD9F35D90016F62
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___E8058399671D13082C35B6B3CE7F9E282507EDD458CCFDD3BAD9F35D90016F62_10;
};

// <PrivateImplementationDetails>

// System.Reflection.Binder

// System.Reflection.Binder

// System.Dynamic.Utils.CollectionExtensions

// System.Dynamic.Utils.CollectionExtensions

// System.Dynamic.Utils.ContractUtils

// System.Dynamic.Utils.ContractUtils

// System.Dynamic.DynamicMetaObject
struct DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_StaticFields
{
	// System.Dynamic.DynamicMetaObject[] System.Dynamic.DynamicMetaObject::EmptyMetaObjects
	DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* ___EmptyMetaObjects_0;
	// System.Object System.Dynamic.DynamicMetaObject::s_noValueSentinel
	RuntimeObject* ___s_noValueSentinel_1;
};

// System.Dynamic.DynamicMetaObject

// System.Dynamic.ExpandoClass
struct ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19_StaticFields
{
	// System.Dynamic.ExpandoClass System.Dynamic.ExpandoClass::Empty
	ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* ___Empty_3;
};

// System.Dynamic.ExpandoClass

// System.Dynamic.ExpandoObject
struct ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_StaticFields
{
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::s_expandoTryGetValue
	MethodInfo_t* ___s_expandoTryGetValue_0;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::s_expandoTrySetValue
	MethodInfo_t* ___s_expandoTrySetValue_1;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::s_expandoTryDeleteValue
	MethodInfo_t* ___s_expandoTryDeleteValue_2;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::s_expandoPromoteClass
	MethodInfo_t* ___s_expandoPromoteClass_3;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::s_expandoCheckVersion
	MethodInfo_t* ___s_expandoCheckVersion_4;
	// System.Object System.Dynamic.ExpandoObject::Uninitialized
	RuntimeObject* ___Uninitialized_8;
};

// System.Dynamic.ExpandoObject

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.Expression

// System.Dynamic.Utils.ExpressionUtils

// System.Dynamic.Utils.ExpressionUtils

// System.Linq.Expressions.ExpressionVisitor

// System.Linq.Expressions.ExpressionVisitor

// System.Dynamic.Utils.ExpressionVisitorUtils

// System.Dynamic.Utils.ExpressionVisitorUtils

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Dynamic.Utils.TypeExtensions
struct TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]> System.Dynamic.Utils.TypeExtensions::s_paramInfoCache
	CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* ___s_paramInfoCache_0;
};

// System.Dynamic.Utils.TypeExtensions

// System.Dynamic.Utils.TypeUtils
struct TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_StaticFields
{
	// System.Type[] System.Dynamic.Utils.TypeUtils::s_arrayAssignableInterfaces
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_arrayAssignableInterfaces_0;
};

// System.Dynamic.Utils.TypeUtils

// System.Dynamic.ExpandoObject/ExpandoData
struct ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA_StaticFields
{
	// System.Dynamic.ExpandoObject/ExpandoData System.Dynamic.ExpandoObject/ExpandoData::Empty
	ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* ___Empty_0;
};

// System.Dynamic.ExpandoObject/ExpandoData

// System.Dynamic.Utils.TypeUtils/<>c
struct U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_StaticFields
{
	// System.Dynamic.Utils.TypeUtils/<>c System.Dynamic.Utils.TypeUtils/<>c::<>9
	U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* ___U3CU3E9_0;
};

// System.Dynamic.Utils.TypeUtils/<>c

// System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6

// System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>

// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>

// System.Linq.Expressions.BlockExpression

// System.Linq.Expressions.BlockExpression

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Dynamic.DynamicMetaObjectBinder

// System.Dynamic.DynamicMetaObjectBinder

// System.Linq.Expressions.IndexExpression

// System.Linq.Expressions.IndexExpression

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Linq.Expressions.LambdaExpression

// System.Linq.Expressions.LambdaExpression

// System.Linq.Expressions.MemberExpression

// System.Linq.Expressions.MemberExpression

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Linq.Expressions.ParameterExpression

// System.Linq.Expressions.ParameterExpression

// System.Reflection.ParameterModifier

// System.Reflection.ParameterModifier

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// System.Dynamic.ExpandoObject/MetaExpando

// System.Dynamic.ExpandoObject/MetaExpando

// System.Reflection.BindingFlags

// System.Reflection.BindingFlags

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Linq.Expressions.ExpressionType

// System.Linq.Expressions.ExpressionType

// System.Reflection.GenericParameterAttributes

// System.Reflection.GenericParameterAttributes

// System.Dynamic.GetMemberBinder

// System.Dynamic.GetMemberBinder

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Dynamic.SetMemberBinder

// System.Dynamic.SetMemberBinder

// System.TypeCode

// System.TypeCode

// System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51

// System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Linq.Expressions.UnaryExpression

// System.Linq.Expressions.UnaryExpression

// System.Func`2<System.Type,System.Boolean>

// System.Func`2<System.Type,System.Boolean>

// System.Func`2<System.Type,System.Type>

// System.Func`2<System.Type,System.Type>

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotSupportedException

// System.NotSupportedException

// System.Reflection.TypeInfo

// System.Reflection.TypeInfo

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Dynamic.DynamicMetaObject[]
struct DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50  : public RuntimeArray
{
	ALIGN_FIELD (8) DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* m_Items[1];

	inline DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F  : public RuntimeArray
{
	ALIGN_FIELD (8) Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* m_Items[1];

	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 m_Items[1];

	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265  : public RuntimeArray
{
	ALIGN_FIELD (8) MethodInfo_t* m_Items[1];

	inline MethodInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Object>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF_gshared (TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_list, const RuntimeMethod* method) ;
// T[] System.Dynamic.Utils.CollectionExtensions::RemoveFirst<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* CollectionExtensions_RemoveFirst_TisRuntimeObject_m760AFDF94515B7D47D1E5E5943B86520B23BD175_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) ;
// T System.Linq.Expressions.ExpressionVisitor::VisitAndConvert<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExpressionVisitor_VisitAndConvert_TisRuntimeObject_m2CBDAC468B5B84C29FF143386D1833A9B333C931_gshared (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, RuntimeObject* ___0_node, String_t* ___1_callerName, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CacheDict_2_TryGetValue_m1745B71A31F178EE944CFDF5A54B2C1CBD036723_gshared (CacheDict_2_tAFE0E408BD366174E0892EAB041D22C18AD3F2AC* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheDict_2_set_Item_m2332E7168EBC56DD2EAC292ACB237E49FCABAFC6_gshared (CacheDict_2_tAFE0E408BD366174E0892EAB041D22C18AD3F2AC* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheDict_2__ctor_m77F28EED3C1E538CE7A82191571240B6FDEA27D3_gshared (CacheDict_2_tAFE0E408BD366174E0892EAB041D22C18AD3F2AC* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___0_source, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_selector, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Dynamic.ExpandoObject System.Dynamic.ExpandoObject/MetaExpando::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012* MetaExpando_get_Value_m8502960E2C7AA3672CC548F37F90F2BE399D490C (MetaExpando_t98113C7B14DB22EC1F72692FB6F87FCF34EB947F* __this, const RuntimeMethod* method) ;
// System.Object System.Dynamic.ExpandoObject/ExpandoData::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExpandoData_get_Item_mF687556304D0E8E41028233208324FAC0B99C289 (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String[] System.Dynamic.ExpandoClass::get_Keys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ExpandoClass_get_Keys_m55EC5F3748234BC40E15450CD7FC5EE8A48DBBF0_inline (ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDynamicMemberNamesU3Ed__6__ctor_m79BECB7611E0CB01AAE9626E4EB54EC9D6A2A4A9 (U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.String> System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDynamicMemberNamesU3Ed__6_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m5F8FDA6C7A6A44A55B296900C1C2F17330B28D91 (U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void System.Dynamic.ExpandoObject/ExpandoData::set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpandoData_set_Item_m8501AD0E9E01A180766D975E93C62DF00B1D4B9B (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Dynamic.ExpandoObject/ExpandoData::.ctor(System.Dynamic.ExpandoClass,System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpandoData__ctor_m0EEF00D9C71938EF634FE2A107AA30F575681574 (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* __this, ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* ___0_klass, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, int32_t ___2_version, const RuntimeMethod* method) ;
// System.Int32 System.Dynamic.ExpandoObject/ExpandoData::GetAlignedSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExpandoData_GetAlignedSize_mD0F48F36E3F61021049E7CDFC253A4A479C260DD (int32_t ___0_len, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Void System.Dynamic.ExpandoObject/ExpandoData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpandoData__ctor_m0E363F65577A5E7BCA68C1FBA12AC6A5E6B00214 (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Dynamic.ExpandoObject/ExpandoData::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ExpandoData_get_Version_m944EB58E8724C277C1AD92AFA342545AFA008DB3_inline (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* __this, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::CollectionModifiedWhileEnumerating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_CollectionModifiedWhileEnumerating_mEDB37219E6150E51BF062F67A5D55C27C236E23C (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, String_t*, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Dynamic.DynamicMetaObjectBinder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMetaObjectBinder__ctor_m59E3851B1A634034DB43CBE9659FB3F08A158497 (DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF* __this, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.ContractUtils::RequiresNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D (RuntimeObject* ___0_value, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.ContractUtils::Requires(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_Requires_mB75206C24EAACC2AF630A8FC9BFE87D772BE7529 (bool ___0_precondition, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::InvalidArgumentValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_InvalidArgumentValue_mEBBFA0C366F51C661A8CE2F747DB02756C6A0131 (String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.String System.Dynamic.Utils.ContractUtils::GetParamName(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_GetParamName_m94C928068CC1A0476FCB841ED75D4D27945692C6 (String_t* ___0_paramName, int32_t ___1_index, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Reflection.ParameterInfo[] System.Dynamic.Utils.ExpressionUtils::GetParametersForValidation(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ExpressionUtils_GetParametersForValidation_mFFB410DB5C7D53811684948F6C976F9779815FC1 (MethodBase_t* ___0_method, int32_t ___1_nodeKind, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared)(__this, method);
}
// System.Void System.Dynamic.Utils.ExpressionUtils::ValidateArgumentCount(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType,System.Int32,System.Reflection.ParameterInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B (MethodBase_t* ___0_method, int32_t ___1_nodeKind, int32_t ___2_count, ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___3_pis, const RuntimeMethod* method) ;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>::get_Item(System.Int32)
inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502 (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared)(__this, ___0_index, method);
}
// System.Linq.Expressions.Expression System.Dynamic.Utils.ExpressionUtils::ValidateOneArgument(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Reflection.ParameterInfo,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC (MethodBase_t* ___0_method, int32_t ___1_nodeKind, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___2_arguments, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___3_pi, String_t* ___4_methodParamName, String_t* ___5_argumentParamName, int32_t ___6_index, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>::.ctor(T[])
inline void TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6* __this, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6*, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*, const RuntimeMethod*))TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF_gshared)(__this, ___0_list, method);
}
// System.Exception System.Linq.Expressions.Error::IncorrectNumberOfConstructorArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_IncorrectNumberOfConstructorArguments_mB402B889D59FCE6DDCCA0B70A6DCFFD26994E85B (const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::IncorrectNumberOfLambdaArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_IncorrectNumberOfLambdaArguments_m93DE868DD7B895857F995D11811BA9069A43B993 (const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::IncorrectNumberOfMethodCallArguments(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_IncorrectNumberOfMethodCallArguments_m7DE65BB947C3DB563F0467A52A70C7A9DF1016F2 (RuntimeObject* ___0_p0, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ContractUtils_get_Unreachable_m792F83C753CCE84550E4F0442CDC49B978FD0CE6 (const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.ExpressionUtils::RequiresCanRead(System.Linq.Expressions.Expression,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_expression, String_t* ___1_paramName, int32_t ___2_idx, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.TypeUtils::ValidateType(System.Type,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3 (Type_t* ___0_type, String_t* ___1_paramName, bool ___2_allowByRef, bool ___3_allowPointer, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::AreReferenceAssignable(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177 (Type_t* ___0_dest, Type_t* ___1_src, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.ExpressionUtils::TryQuote(System.Type,System.Linq.Expressions.Expression&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionUtils_TryQuote_m2569827EBCA2825EB31C09C67F0FB52024428F33 (Type_t* ___0_parameterType, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** ___1_argument, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::ExpressionTypeDoesNotMatchConstructorParameter(System.Object,System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_ExpressionTypeDoesNotMatchConstructorParameter_m790D783BBA8D453BC3A047A2F404C3C8EAEEEEAD (RuntimeObject* ___0_p0, RuntimeObject* ___1_p1, String_t* ___2_paramName, int32_t ___3_index, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::ExpressionTypeDoesNotMatchParameter(System.Object,System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_ExpressionTypeDoesNotMatchParameter_m8203FE7A82A70A041CFD6D1D4159444A48D6A8E2 (RuntimeObject* ___0_p0, RuntimeObject* ___1_p1, String_t* ___2_paramName, int32_t ___3_index, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::ExpressionTypeDoesNotMatchMethodParameter(System.Object,System.Object,System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_ExpressionTypeDoesNotMatchMethodParameter_m2B66A5924549FE5DEE8E15BFA4781B7B65C5E157 (RuntimeObject* ___0_p0, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, String_t* ___3_paramName, int32_t ___4_index, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.ContractUtils::RequiresNotNull(System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_RequiresNotNull_m04A5009D6D6E22EC255AED2147373282D3C4A76A (RuntimeObject* ___0_value, String_t* ___1_paramName, int32_t ___2_index, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Linq.Expressions.IndexExpression::get_Indexer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyInfo_t* IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline (IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B (PropertyInfo_t* ___0_left, PropertyInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::ExpressionMustBeReadable(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_ExpressionMustBeReadable_mC99E7EEDF1E84C216B563542F4A5C3EFCC7446DF (String_t* ___0_paramName, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104 (MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* __this, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsSameOrSubclass(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsSameOrSubclass_m2753DDA9DCAF3CEEAFD39F275CAF99AD40AC50A9 (Type_t* ___0_type, Type_t* ___1_subType, const RuntimeMethod* method) ;
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Quote(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* Expression_Quote_m2B99356D1FBD5641CF7E5021321CCAD4E6930272 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_expression, const RuntimeMethod* method) ;
// System.Reflection.ParameterInfo[] System.Dynamic.Utils.TypeExtensions::GetParametersCached(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* TypeExtensions_GetParametersCached_mD2B9864864929FEFA691059A59077A7E491A8141 (MethodBase_t* ___0_method, const RuntimeMethod* method) ;
// T[] System.Dynamic.Utils.CollectionExtensions::RemoveFirst<System.Reflection.ParameterInfo>(T[])
inline ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* CollectionExtensions_RemoveFirst_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m4B6727B4DCB60C3A0E390CDC1C6C0A3A878F2041 (ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___0_array, const RuntimeMethod* method)
{
	return ((  ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* (*) (ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C*, const RuntimeMethod*))CollectionExtensions_RemoveFirst_TisRuntimeObject_m760AFDF94515B7D47D1E5E5943B86520B23BD175_gshared)(___0_array, method);
}
// System.Exception System.Linq.Expressions.Error::InvalidProgram()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_InvalidProgram_m2100DCBDFB43E64790FE65D7DDFA771AC1F334DA (const RuntimeMethod* method) ;
// T System.Linq.Expressions.ExpressionVisitor::VisitAndConvert<System.Linq.Expressions.ParameterExpression>(T,System.String)
inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ExpressionVisitor_VisitAndConvert_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3E32E159FAD0579791C006186CD0161EADE1834F (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_node, String_t* ___1_callerName, const RuntimeMethod* method)
{
	return ((  ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, String_t*, const RuntimeMethod*))ExpressionVisitor_VisitAndConvert_TisRuntimeObject_m2CBDAC468B5B84C29FF143386D1833A9B333C931_gshared)(__this, ___0_node, ___1_callerName, method);
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562 (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___2_binder, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___3_types, ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364* ___4_modifiers, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeExtensions::MatchesArgumentTypes(System.Reflection.MethodInfo,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_MatchesArgumentTypes_m660A719C4A3A1615382A75417726F309F29C57B6 (MethodInfo_t* ___0_mi, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_argTypes, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsConstructor_m98801B34512C9B8DEC1589F1C8C9B3DFC8807575 (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.TypeCode System.Type::GetTypeCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>::TryGetValue(TKey,TValue&)
inline bool CacheDict_2_TryGetValue_m6CBD87FAA759A05435AEFD9D93587B5D418ECE63 (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* __this, MethodBase_t* ___0_key, ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB*, MethodBase_t*, ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C**, const RuntimeMethod*))CacheDict_2_TryGetValue_m1745B71A31F178EE944CFDF5A54B2C1CBD036723_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>::set_Item(TKey,TValue)
inline void CacheDict_2_set_Item_mF8EE28322B73E55CB990D05DF380380AD8176E5D (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* __this, MethodBase_t* ___0_key, ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB*, MethodBase_t*, ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C*, const RuntimeMethod*))CacheDict_2_set_Item_m2332E7168EBC56DD2EAC292ACB237E49FCABAFC6_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>::.ctor(System.Int32)
inline void CacheDict_2__ctor_mB7ADF1F2EDACF1FACE85871B31627E2AA1C936E6 (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB*, int32_t, const RuntimeMethod*))CacheDict_2__ctor_m77F28EED3C1E538CE7A82191571240B6FDEA27D3_gshared)(__this, ___0_size, method);
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Type System.Dynamic.Utils.TypeUtils::GetNonNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.TypeCode System.Dynamic.Utils.TypeExtensions::GetTypeCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNumeric(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNumeric_m1DFA79766A316CA6F9A9BCFFCAFF39B5EDCF6AB2 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsBool(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsBool_m1054E233E80393FD9A55E76FA3A9E891A796A496 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC (Type_t* __this, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::AreEquivalent(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65 (Type_t* ___0_t1, Type_t* ___1_t2, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsConvertible(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsConvertible_mD78E462EF22D75033D4D9318EB498CA9B210453E (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsLegalExplicitVariantDelegateConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsLegalExplicitVariantDelegateConversion_mDBF7A0751745C4EB5CD168F09D3D76332F70117B (Type_t* ___0_source, Type_t* ___1_dest, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::StrictHasReferenceConversionTo(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_StrictHasReferenceConversionTo_mC9594BCC1A40FA47B71DDD7A7AF890A24A114445 (Type_t* ___0_source, Type_t* ___1_dest, bool ___2_skipNonArray, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsSealed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsSealed_m6B652265DCEF64250FD2A173C50BD889467A58E4 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::HasArrayToInterfaceConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasArrayToInterfaceConversion_mC69EE2DEF583985E8822964D19E2533E9E9F5F3A (Type_t* ___0_source, Type_t* ___1_dest, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::HasInterfaceToArrayConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasInterfaceToArrayConversion_mCC7DC19083AFD44B5CBCCDE39F3A2F1772BBD0C3 (Type_t* ___0_source, Type_t* ___1_dest, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitReferenceConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitReferenceConversion_m72031537214B8B0E3D99B3815AB7AD774A673A82 (Type_t* ___0_source, Type_t* ___1_destination, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsDelegate(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsDelegate_mD03BA63283B1855B331BD4D01ABF93A4A9A95602 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsInvariant(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsInvariant_m7081A56EB27994579EE0B13213A15FE1D6613CA6 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsCovariant(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsCovariant_m4220EE5D4CB85F8039AEFA3AE3641334A7506BA0 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::HasReferenceConversionTo(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasReferenceConversionTo_m4BBDBC19498CDAEBA70C7173EBFEE23474BBFC28 (Type_t* ___0_source, Type_t* ___1_dest, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsContravariant(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsContravariant_m2B4BA44C74B4FC62D7B6D7CF667AFC025F46ACBF (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitNumericConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitNumericConversion_m2181B6491D1132F62B72BDC8938B16728DACBB21 (Type_t* ___0_source, Type_t* ___1_destination, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitBoxingConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitBoxingConversion_mCD588DEB51CB41E65A7EFFC0F86EDCDBC8E4876B (Type_t* ___0_source, Type_t* ___1_destination, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitNullableConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitNullableConversion_mE9012B508EA2BE0EADFDC6DB24613BB45F468FAC (Type_t* ___0_source, Type_t* ___1_destination, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeUtils::FindConversionOperator(System.Reflection.MethodInfo[],System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888 (MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* ___0_methods, Type_t* ___1_typeFrom, Type_t* ___2_typeTo, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitlyConvertibleTo(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitlyConvertibleTo_mA53F5E133A932AEDA05CC17DEBBF40482F6C146D (Type_t* ___0_source, Type_t* ___1_destination, const RuntimeMethod* method) ;
// System.Type System.Dynamic.Utils.TypeUtils::FindGenericType(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeUtils_FindGenericType_mC7491078249941694D5B66BC007D0CDB02DC7CED (Type_t* ___0_definition, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeExtensions::GetAnyStaticMethodValidated(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeExtensions_GetAnyStaticMethodValidated_m19BFEC3B36D0B1D436A9D5832DA06D670DAC81BA (Type_t* ___0_type, String_t* ___1_name, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___2_types, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsSpecialName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsSpecialName_m80B62916B5B899408084AE6FC8B3D396FCF2B56C (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::ValidateType(System.Type,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_ValidateType_mE94AD3C043E2FE6C32BBA6C1FC60D29CB2063AEB (Type_t* ___0_type, String_t* ___1_paramName, int32_t ___2_index, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::TypeMustNotBeByRef(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_TypeMustNotBeByRef_mC9A42A8B7A5F20813A4A3A0626BD8E4760FBFC0F (String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPointer_mC8AAAFEC4E4CEA59DAD0032B85D1BB224763278B (Type_t* __this, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::TypeMustNotBePointer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_TypeMustNotBePointer_mC8B6202CADBE91A5A33B51B02D67B073157E5AB8 (String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::TypeContainsGenericParameters(System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_TypeContainsGenericParameters_m9469425747709B1D67698F586F698A5069A543FC (RuntimeObject* ___0_p0, String_t* ___1_paramName, int32_t ___2_index, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::TypeIsGeneric(System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_TypeIsGeneric_mBF50410FCB13BFC4ABC9988B318BB1F6866DBD72 (RuntimeObject* ___0_p0, String_t* ___1_paramName, int32_t ___2_index, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74 (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8 (RuntimeObject* ___0_source, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// System.Void System.Func`2<System.Type,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1697902B5A575D059320FCB1AD0B049A34A5FC77 (Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Type,System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisType_t_TisType_t_mA23DABAE3023E25FB205F89A2D1F1DBE6576E51F (RuntimeObject* ___0_source, Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___0_source, ___1_selector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Void System.Dynamic.Utils.TypeUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1D47C37129713530A6B1FE13BCB381295704FD22 (U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDynamicMemberNamesU3Ed__6__ctor_m79BECB7611E0CB01AAE9626E4EB54EC9D6A2A4A9 (U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDynamicMemberNamesU3Ed__6_System_IDisposable_Dispose_m6178FF7A69E382A07027AD023320E7F230569B8E (U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetDynamicMemberNamesU3Ed__6_MoveNext_mD9C5C9D04F5D91D03246BA9436FF7DF404A888A5 (U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MetaExpando_t98113C7B14DB22EC1F72692FB6F87FCF34EB947F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MetaExpando_t98113C7B14DB22EC1F72692FB6F87FCF34EB947F* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0082;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		MetaExpando_t98113C7B14DB22EC1F72692FB6F87FCF34EB947F* L_4 = V_1;
		NullCheck(L_4);
		ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012* L_5;
		L_5 = MetaExpando_get_Value_m8502960E2C7AA3672CC548F37F90F2BE399D490C(L_4, NULL);
		NullCheck(L_5);
		ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* L_6 = L_5->____data_6;
		__this->___U3CexpandoDataU3E5__2_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexpandoDataU3E5__2_4), (void*)L_6);
		ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* L_7 = __this->___U3CexpandoDataU3E5__2_4;
		NullCheck(L_7);
		ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* L_8 = L_7->___Class_1;
		__this->___U3CklassU3E5__3_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CklassU3E5__3_5), (void*)L_8);
		__this->___U3CiU3E5__4_6 = 0;
		goto IL_0099;
	}

IL_0049:
	{
		ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* L_9 = __this->___U3CexpandoDataU3E5__2_4;
		int32_t L_10 = __this->___U3CiU3E5__4_6;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = ExpandoData_get_Item_mF687556304D0E8E41028233208324FAC0B99C289(L_9, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_il2cpp_TypeInfo_var);
		RuntimeObject* L_12 = ((ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_StaticFields*)il2cpp_codegen_static_fields_for(ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_il2cpp_TypeInfo_var))->___Uninitialized_8;
		if ((((RuntimeObject*)(RuntimeObject*)L_11) == ((RuntimeObject*)(RuntimeObject*)L_12)))
		{
			goto IL_0089;
		}
	}
	{
		ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* L_13 = __this->___U3CklassU3E5__3_5;
		NullCheck(L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14;
		L_14 = ExpandoClass_get_Keys_m55EC5F3748234BC40E15450CD7FC5EE8A48DBBF0_inline(L_13, NULL);
		int32_t L_15 = __this->___U3CiU3E5__4_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0082:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0089:
	{
		int32_t L_18 = __this->___U3CiU3E5__4_6;
		V_2 = L_18;
		int32_t L_19 = V_2;
		__this->___U3CiU3E5__4_6 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0099:
	{
		int32_t L_20 = __this->___U3CiU3E5__4_6;
		ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* L_21 = __this->___U3CklassU3E5__3_5;
		NullCheck(L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22;
		L_22 = ExpandoClass_get_Keys_m55EC5F3748234BC40E15450CD7FC5EE8A48DBBF0_inline(L_21, NULL);
		NullCheck(L_22);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}
}
// System.String System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CGetDynamicMemberNamesU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_mD803C7BBBE63EA1F3B9CD0D5996E6A8A3CAA3DB1 (U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDynamicMemberNamesU3Ed__6_System_Collections_IEnumerator_Reset_m81F91648E75E3466F9AA3F77101ACD24F93F5DA0 (U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetDynamicMemberNamesU3Ed__6_System_Collections_IEnumerator_Reset_m81F91648E75E3466F9AA3F77101ACD24F93F5DA0_RuntimeMethod_var)));
	}
}
// System.Object System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDynamicMemberNamesU3Ed__6_System_Collections_IEnumerator_get_Current_m93965CE8E6AB26BDABDCBFA228A7463656E9EC41 (U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDynamicMemberNamesU3Ed__6_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m5F8FDA6C7A6A44A55B296900C1C2F17330B28D91 (U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* L_3 = (U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9*)il2cpp_codegen_object_new(U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetDynamicMemberNamesU3Ed__6__ctor_m79BECB7611E0CB01AAE9626E4EB54EC9D6A2A4A9(L_3, 0, NULL);
		V_0 = L_3;
		U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* L_4 = V_0;
		MetaExpando_t98113C7B14DB22EC1F72692FB6F87FCF34EB947F* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDynamicMemberNamesU3Ed__6_System_Collections_IEnumerable_GetEnumerator_mE8C00328CC7AF5E3147EFFF78EF33173DCD8A1F5 (U3CGetDynamicMemberNamesU3Ed__6_t733F2DF2C0B4F3EB9BD54E9CCB43A0FF61E12BB9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetDynamicMemberNamesU3Ed__6_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m5F8FDA6C7A6A44A55B296900C1C2F17330B28D91(__this, NULL);
		return L_0;
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
// System.Object System.Dynamic.ExpandoObject/ExpandoData::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExpandoData_get_Item_mF687556304D0E8E41028233208324FAC0B99C289 (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____dataArray_2;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void System.Dynamic.ExpandoObject/ExpandoData::set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpandoData_set_Item_m8501AD0E9E01A180766D975E93C62DF00B1D4B9B (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____dataArray_2;
		int32_t L_2 = ___0_index;
		RuntimeObject* L_3 = ___1_value;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (RuntimeObject*)L_3);
		return;
	}
}
// System.Int32 System.Dynamic.ExpandoObject/ExpandoData::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExpandoData_get_Version_m944EB58E8724C277C1AD92AFA342545AFA008DB3 (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_3;
		return L_0;
	}
}
// System.Int32 System.Dynamic.ExpandoObject/ExpandoData::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExpandoData_get_Length_m41A172B2D3BFCC209FD1C8892FFEA5C929FBDC01 (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____dataArray_2;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// System.Void System.Dynamic.ExpandoObject/ExpandoData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpandoData__ctor_m0E363F65577A5E7BCA68C1FBA12AC6A5E6B00214 (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19_il2cpp_TypeInfo_var);
		ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* L_0 = ((ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19_StaticFields*)il2cpp_codegen_static_fields_for(ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19_il2cpp_TypeInfo_var))->___Empty_3;
		__this->___Class_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Class_1), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		__this->____dataArray_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dataArray_2), (void*)L_1);
		return;
	}
}
// System.Void System.Dynamic.ExpandoObject/ExpandoData::.ctor(System.Dynamic.ExpandoClass,System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpandoData__ctor_m0EEF00D9C71938EF634FE2A107AA30F575681574 (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* __this, ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* ___0_klass, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, int32_t ___2_version, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* L_0 = ___0_klass;
		__this->___Class_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Class_1), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_data;
		__this->____dataArray_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dataArray_2), (void*)L_1);
		int32_t L_2 = ___2_version;
		__this->____version_3 = L_2;
		return;
	}
}
// System.Dynamic.ExpandoObject/ExpandoData System.Dynamic.ExpandoObject/ExpandoData::UpdateClass(System.Dynamic.ExpandoClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* ExpandoData_UpdateClass_mC6E0BE48FFFD35F493746192D129799EFEA1B095 (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* __this, ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* ___0_newClass, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____dataArray_2;
		NullCheck(L_0);
		ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* L_1 = ___0_newClass;
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = ExpandoClass_get_Keys_m55EC5F3748234BC40E15450CD7FC5EE8A48DBBF0_inline(L_1, NULL);
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_003a;
		}
	}
	{
		ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* L_3 = ___0_newClass;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = ExpandoClass_get_Keys_m55EC5F3748234BC40E15450CD7FC5EE8A48DBBF0_inline(L_3, NULL);
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_StaticFields*)il2cpp_codegen_static_fields_for(ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_il2cpp_TypeInfo_var))->___Uninitialized_8;
		ExpandoData_set_Item_m8501AD0E9E01A180766D975E93C62DF00B1D4B9B(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1)), L_5, NULL);
		ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* L_6 = ___0_newClass;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____dataArray_2;
		int32_t L_8 = __this->____version_3;
		ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* L_9 = (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA*)il2cpp_codegen_object_new(ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ExpandoData__ctor_m0EEF00D9C71938EF634FE2A107AA30F575681574(L_9, L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_003a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____dataArray_2;
		NullCheck(L_10);
		V_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* L_11 = ___0_newClass;
		NullCheck(L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = ExpandoClass_get_Keys_m55EC5F3748234BC40E15450CD7FC5EE8A48DBBF0_inline(L_11, NULL);
		NullCheck(L_12);
		il2cpp_codegen_runtime_class_init_inline(ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = ExpandoData_GetAlignedSize_mD0F48F36E3F61021049E7CDFC253A4A479C260DD(((int32_t)(((RuntimeArray*)L_12)->max_length)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_1 = L_14;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = __this->____dataArray_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = __this->____dataArray_2;
		NullCheck(L_17);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, 0, ((int32_t)(((RuntimeArray*)L_17)->max_length)), NULL);
		ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* L_18 = ___0_newClass;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_1;
		int32_t L_20 = __this->____version_3;
		ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* L_21 = (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA*)il2cpp_codegen_object_new(ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		ExpandoData__ctor_m0EEF00D9C71938EF634FE2A107AA30F575681574(L_21, L_18, L_19, L_20, NULL);
		ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* L_22 = L_21;
		int32_t L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_il2cpp_TypeInfo_var);
		RuntimeObject* L_24 = ((ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_StaticFields*)il2cpp_codegen_static_fields_for(ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_il2cpp_TypeInfo_var))->___Uninitialized_8;
		NullCheck(L_22);
		ExpandoData_set_Item_m8501AD0E9E01A180766D975E93C62DF00B1D4B9B(L_22, L_23, L_24, NULL);
		return L_22;
	}
}
// System.Int32 System.Dynamic.ExpandoObject/ExpandoData::GetAlignedSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExpandoData_GetAlignedSize_mD0F48F36E3F61021049E7CDFC253A4A479C260DD (int32_t ___0_len, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_len;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 7))&((int32_t)-8)));
	}
}
// System.Void System.Dynamic.ExpandoObject/ExpandoData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpandoData__cctor_m1A52B2702FDE3C3D001B92C310F25A46AD80D836 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* L_0 = (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA*)il2cpp_codegen_object_new(ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExpandoData__ctor_m0E363F65577A5E7BCA68C1FBA12AC6A5E6B00214(L_0, NULL);
		((ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA_StaticFields*)il2cpp_codegen_static_fields_for(ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA_il2cpp_TypeInfo_var))->___Empty_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA_StaticFields*)il2cpp_codegen_static_fields_for(ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA_il2cpp_TypeInfo_var))->___Empty_0), (void*)L_0);
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
// System.Void System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetExpandoEnumeratorU3Ed__51__ctor_m2995AD242F23DA972637B4BA3E14365BBF04EA57 (U3CGetExpandoEnumeratorU3Ed__51_t421D8F375E4578DE15A8E3481A5E74CAFE0E06F2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetExpandoEnumeratorU3Ed__51_System_IDisposable_Dispose_m05EC75DB85FD668ED015FFE1BD83607477645D83 (U3CGetExpandoEnumeratorU3Ed__51_t421D8F375E4578DE15A8E3481A5E74CAFE0E06F2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetExpandoEnumeratorU3Ed__51_MoveNext_mFFF751389F9F81B4F23262CD8554B940493821C4 (U3CGetExpandoEnumeratorU3Ed__51_t421D8F375E4578DE15A8E3481A5E74CAFE0E06F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		__this->___U3CiU3E5__2_5 = 0;
		goto IL_00b1;
	}

IL_002d:
	{
		ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012* L_4 = V_1;
		NullCheck(L_4);
		ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* L_5 = L_4->____data_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ExpandoData_get_Version_m944EB58E8724C277C1AD92AFA342545AFA008DB3_inline(L_5, NULL);
		int32_t L_7 = __this->___version_3;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_004e;
		}
	}
	{
		ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* L_8 = __this->___data_4;
		ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012* L_9 = V_1;
		NullCheck(L_9);
		ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* L_10 = L_9->____data_6;
		if ((((RuntimeObject*)(ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA*)L_8) == ((RuntimeObject*)(ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA*)L_10)))
		{
			goto IL_0054;
		}
	}

IL_004e:
	{
		Exception_t* L_11;
		L_11 = Error_CollectionModifiedWhileEnumerating_mEDB37219E6150E51BF062F67A5D55C27C236E23C(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetExpandoEnumeratorU3Ed__51_MoveNext_mFFF751389F9F81B4F23262CD8554B940493821C4_RuntimeMethod_var)));
	}

IL_0054:
	{
		ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* L_12 = __this->___data_4;
		int32_t L_13 = __this->___U3CiU3E5__2_5;
		NullCheck(L_12);
		RuntimeObject* L_14;
		L_14 = ExpandoData_get_Item_mF687556304D0E8E41028233208324FAC0B99C289(L_12, L_13, NULL);
		V_2 = L_14;
		RuntimeObject* L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_StaticFields*)il2cpp_codegen_static_fields_for(ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_il2cpp_TypeInfo_var))->___Uninitialized_8;
		if ((((RuntimeObject*)(RuntimeObject*)L_15) == ((RuntimeObject*)(RuntimeObject*)L_16)))
		{
			goto IL_00a1;
		}
	}
	{
		ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* L_17 = __this->___data_4;
		NullCheck(L_17);
		ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* L_18 = L_17->___Class_1;
		NullCheck(L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19;
		L_19 = ExpandoClass_get_Keys_m55EC5F3748234BC40E15450CD7FC5EE8A48DBBF0_inline(L_18, NULL);
		int32_t L_20 = __this->___U3CiU3E5__2_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		RuntimeObject* L_23 = V_2;
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_24;
		memset((&L_24), 0, sizeof(L_24));
		KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB((&L_24), L_22, L_23, /*hidden argument*/KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		__this->___U3CU3E2__current_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00a1:
	{
		int32_t L_25 = __this->___U3CiU3E5__2_5;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__2_5 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00b1:
	{
		int32_t L_27 = __this->___U3CiU3E5__2_5;
		ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* L_28 = __this->___data_4;
		NullCheck(L_28);
		ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* L_29 = L_28->___Class_1;
		NullCheck(L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30;
		L_30 = ExpandoClass_get_Keys_m55EC5F3748234BC40E15450CD7FC5EE8A48DBBF0_inline(L_29, NULL);
		NullCheck(L_30);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_002d;
		}
	}
	{
		return (bool)0;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 U3CGetExpandoEnumeratorU3Ed__51_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_get_Current_m44398DA52FE726FDA5C7D02C329FDF313643AF24 (U3CGetExpandoEnumeratorU3Ed__51_t421D8F375E4578DE15A8E3481A5E74CAFE0E06F2* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetExpandoEnumeratorU3Ed__51_System_Collections_IEnumerator_Reset_m9BA7A5F6B7D8695A07164C20F7F29EE071FB426F (U3CGetExpandoEnumeratorU3Ed__51_t421D8F375E4578DE15A8E3481A5E74CAFE0E06F2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetExpandoEnumeratorU3Ed__51_System_Collections_IEnumerator_Reset_m9BA7A5F6B7D8695A07164C20F7F29EE071FB426F_RuntimeMethod_var)));
	}
}
// System.Object System.Dynamic.ExpandoObject/<GetExpandoEnumerator>d__51::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetExpandoEnumeratorU3Ed__51_System_Collections_IEnumerator_get_Current_mF2CC9749BBDB269EF71DFAB45D9B98B96F44D5DC (U3CGetExpandoEnumeratorU3Ed__51_t421D8F375E4578DE15A8E3481A5E74CAFE0E06F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_0 = __this->___U3CU3E2__current_1;
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
// System.Void System.Dynamic.GetMemberBinder::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetMemberBinder__ctor_m3CB795552FE62FB770DE0F3926E152CB4BFAC298 (GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* __this, String_t* ___0_name, bool ___1_ignoreCase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		DynamicMetaObjectBinder__ctor_m59E3851B1A634034DB43CBE9659FB3F08A158497(__this, NULL);
		String_t* L_0 = ___0_name;
		ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D(L_0, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
		String_t* L_1 = ___0_name;
		__this->___U3CNameU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_2), (void*)L_1);
		bool L_2 = ___1_ignoreCase;
		__this->___U3CIgnoreCaseU3Ek__BackingField_3 = L_2;
		return;
	}
}
// System.Type System.Dynamic.GetMemberBinder::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* GetMemberBinder_get_ReturnType_mD748A6E425627C16A1301C8E1A986EE66763431B (GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// System.String System.Dynamic.GetMemberBinder::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GetMemberBinder_get_Name_mCE0671772897ED1E0575E3BE2C06CAB8D52019C4 (GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Boolean System.Dynamic.GetMemberBinder::get_IgnoreCase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GetMemberBinder_get_IgnoreCase_mB2924A5209BB108C50B5DDB5C8B2C781F34631CD (GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIgnoreCaseU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.GetMemberBinder::FallbackGetMember(System.Dynamic.DynamicMetaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* GetMemberBinder_FallbackGetMember_m6AC5102EA17E2896DF5227F6E74531A31B547BB8 (GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* __this, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* ___0_target, const RuntimeMethod* method) 
{
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_0 = ___0_target;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_1;
		L_1 = VirtualFuncInvoker2< DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* >::Invoke(9 /* System.Dynamic.DynamicMetaObject System.Dynamic.GetMemberBinder::FallbackGetMember(System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject) */, __this, L_0, (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*)NULL);
		return L_1;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.GetMemberBinder::Bind(System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* GetMemberBinder_Bind_m828800B687840C97258F5436108E56A1DF843A24 (GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* __this, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* ___0_target, DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_0 = ___0_target;
		ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D(L_0, _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018, NULL);
		DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* L_1 = ___1_args;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* L_2 = ___1_args;
		NullCheck(L_2);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_2)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		ContractUtils_Requires_mB75206C24EAACC2AF630A8FC9BFE87D772BE7529((bool)G_B3_0, _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_3 = ___0_target;
		NullCheck(L_3);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_4;
		L_4 = VirtualFuncInvoker1< DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* >::Invoke(4 /* System.Dynamic.DynamicMetaObject System.Dynamic.DynamicMetaObject::BindGetMember(System.Dynamic.GetMemberBinder) */, L_3, __this);
		return L_4;
	}
}
// System.Boolean System.Dynamic.GetMemberBinder::get_IsStandardBinder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GetMemberBinder_get_IsStandardBinder_mC6324C5D7ED3F6E2B1B0CD79D6018D357ECBA8C0 (GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
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
// System.Void System.Dynamic.SetMemberBinder::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMemberBinder__ctor_m57A59B263345A045AC30EECAE7D683B535FDCF56 (SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* __this, String_t* ___0_name, bool ___1_ignoreCase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		DynamicMetaObjectBinder__ctor_m59E3851B1A634034DB43CBE9659FB3F08A158497(__this, NULL);
		String_t* L_0 = ___0_name;
		ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D(L_0, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
		String_t* L_1 = ___0_name;
		__this->___U3CNameU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_2), (void*)L_1);
		bool L_2 = ___1_ignoreCase;
		__this->___U3CIgnoreCaseU3Ek__BackingField_3 = L_2;
		return;
	}
}
// System.Type System.Dynamic.SetMemberBinder::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SetMemberBinder_get_ReturnType_m1B666777E222CF89FD95D49CE206E0CE99781B24 (SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// System.String System.Dynamic.SetMemberBinder::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SetMemberBinder_get_Name_mE683668DE73BFB110F155E377E26B506960A7B42 (SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Boolean System.Dynamic.SetMemberBinder::get_IgnoreCase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetMemberBinder_get_IgnoreCase_m41897B494A2B432A9D7C437C9C54AC51853E33AB (SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIgnoreCaseU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.SetMemberBinder::Bind(System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* SetMemberBinder_Bind_mCAF0208776FF893B7208DA476BEC495E54E9CAEF (SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* __this, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* ___0_target, DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132);
		s_Il2CppMethodInitialized = true;
	}
	DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* V_0 = NULL;
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_0 = ___0_target;
		ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D(L_0, _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018, NULL);
		DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* L_1 = ___1_args;
		ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D((RuntimeObject*)L_1, _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132, NULL);
		DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* L_2 = ___1_args;
		NullCheck(L_2);
		ContractUtils_Requires_mB75206C24EAACC2AF630A8FC9BFE87D772BE7529((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)1))? 1 : 0), _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132, NULL);
		DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* L_3 = ___1_args;
		NullCheck(L_3);
		int32_t L_4 = 0;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_6 = V_0;
		ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D(L_6, _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_7 = ___0_target;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_8 = V_0;
		NullCheck(L_7);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_9;
		L_9 = VirtualFuncInvoker2< DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* >::Invoke(5 /* System.Dynamic.DynamicMetaObject System.Dynamic.DynamicMetaObject::BindSetMember(System.Dynamic.SetMemberBinder,System.Dynamic.DynamicMetaObject) */, L_7, __this, L_8);
		return L_9;
	}
}
// System.Boolean System.Dynamic.SetMemberBinder::get_IsStandardBinder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetMemberBinder_get_IsStandardBinder_mD7B17074A21A3C0F082AE6A7C91464B7103A7B38 (SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.SetMemberBinder::FallbackSetMember(System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* SetMemberBinder_FallbackSetMember_m074FFAB938AAFA601F0CA3D252F797FD8365A52B (SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* __this, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* ___0_target, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* ___1_value, const RuntimeMethod* method) 
{
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_0 = ___0_target;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_1 = ___1_value;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_2;
		L_2 = VirtualFuncInvoker3< DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* >::Invoke(9 /* System.Dynamic.DynamicMetaObject System.Dynamic.SetMemberBinder::FallbackSetMember(System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject) */, __this, L_0, L_1, (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*)NULL);
		return L_2;
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
// System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ContractUtils_get_Unreachable_m792F83C753CCE84550E4F0442CDC49B978FD0CE6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral656DE8865223883D9C605D63606CD7138CF8CAD3);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, _stringLiteral656DE8865223883D9C605D63606CD7138CF8CAD3, NULL);
		return L_0;
	}
}
// System.Void System.Dynamic.Utils.ContractUtils::Requires(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_Requires_mB75206C24EAACC2AF630A8FC9BFE87D772BE7529 (bool ___0_precondition, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_precondition;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___1_paramName;
		Exception_t* L_2;
		L_2 = Error_InvalidArgumentValue_mEBBFA0C366F51C661A8CE2F747DB02756C6A0131(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_Requires_mB75206C24EAACC2AF630A8FC9BFE87D772BE7529_RuntimeMethod_var)));
	}

IL_000a:
	{
		return;
	}
}
// System.Void System.Dynamic.Utils.ContractUtils::RequiresNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D (RuntimeObject* ___0_value, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___1_paramName;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D_RuntimeMethod_var)));
	}

IL_000a:
	{
		return;
	}
}
// System.Void System.Dynamic.Utils.ContractUtils::RequiresNotNull(System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_RequiresNotNull_m04A5009D6D6E22EC255AED2147373282D3C4A76A (RuntimeObject* ___0_value, String_t* ___1_paramName, int32_t ___2_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___1_paramName;
		int32_t L_2 = ___2_index;
		String_t* L_3;
		L_3 = ContractUtils_GetParamName_m94C928068CC1A0476FCB841ED75D4D27945692C6(L_1, L_2, NULL);
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_RequiresNotNull_m04A5009D6D6E22EC255AED2147373282D3C4A76A_RuntimeMethod_var)));
	}

IL_0010:
	{
		return;
	}
}
// System.String System.Dynamic.Utils.ContractUtils::GetParamName(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_GetParamName_m94C928068CC1A0476FCB841ED75D4D27945692C6 (String_t* ___0_paramName, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral471543834C9A5ADAA79EDD06EDCBA5930B3CB3F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___1_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		String_t* L_1 = ___0_paramName;
		return L_1;
	}

IL_0006:
	{
		String_t* L_2 = ___0_paramName;
		int32_t L_3 = ___1_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral471543834C9A5ADAA79EDD06EDCBA5930B3CB3F4, L_2, L_5, NULL);
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
// System.Void System.Dynamic.Utils.ExpressionUtils::ValidateArgumentTypes(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_ValidateArgumentTypes_m27DF2570474545CCD73C32B4901488DE8280907A (MethodBase_t* ___0_method, int32_t ___1_nodeKind, ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** ___2_arguments, String_t* ___3_methodParamName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_4 = NULL;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_5 = NULL;
	int32_t V_6 = 0;
	{
		MethodBase_t* L_0 = ___0_method;
		int32_t L_1 = ___1_nodeKind;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_2;
		L_2 = ExpressionUtils_GetParametersForValidation_mFFB410DB5C7D53811684948F6C976F9779815FC1(L_0, L_1, NULL);
		V_0 = L_2;
		MethodBase_t* L_3 = ___0_method;
		int32_t L_4 = ___1_nodeKind;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** L_5 = ___2_arguments;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_6 = *((ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E**)L_5);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F(L_6, ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F_RuntimeMethod_var);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_8 = V_0;
		ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B(L_3, L_4, L_7, L_8, NULL);
		V_1 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)NULL;
		V_2 = 0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_9 = V_0;
		NullCheck(L_9);
		V_3 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		goto IL_0089;
	}

IL_0021:
	{
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** L_10 = ___2_arguments;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_11 = *((ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E**)L_10);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_13;
		L_13 = ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502(L_11, L_12, ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var);
		V_4 = L_13;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		MethodBase_t* L_18 = ___0_method;
		int32_t L_19 = ___1_nodeKind;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_20 = V_4;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_21 = V_5;
		String_t* L_22 = ___3_methodParamName;
		int32_t L_23 = V_2;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC(L_18, L_19, L_20, L_21, L_22, _stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5, L_23, NULL);
		V_4 = L_24;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_25 = V_1;
		if (L_25)
		{
			goto IL_007d;
		}
	}
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_26 = V_4;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** L_27 = ___2_arguments;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_28 = *((ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E**)L_27);
		int32_t L_29 = V_2;
		NullCheck(L_28);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_30;
		L_30 = ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502(L_28, L_29, ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var);
		if ((((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_26) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_30)))
		{
			goto IL_007d;
		}
	}
	{
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** L_31 = ___2_arguments;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_32 = *((ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E**)L_31);
		NullCheck(L_32);
		int32_t L_33;
		L_33 = ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F(L_32, ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F_RuntimeMethod_var);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_34 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)L_33);
		V_1 = L_34;
		V_6 = 0;
		goto IL_0078;
	}

IL_0065:
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_35 = V_1;
		int32_t L_36 = V_6;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** L_37 = ___2_arguments;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_38 = *((ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E**)L_37);
		int32_t L_39 = V_6;
		NullCheck(L_38);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_40;
		L_40 = ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502(L_38, L_39, ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_40);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_40);
		int32_t L_41 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0078:
	{
		int32_t L_42 = V_6;
		int32_t L_43 = V_2;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0065;
		}
	}

IL_007d:
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_44 = V_1;
		if (!L_44)
		{
			goto IL_0085;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_45 = V_1;
		int32_t L_46 = V_2;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_47 = V_4;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_47);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_47);
	}

IL_0085:
	{
		int32_t L_48 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0089:
	{
		int32_t L_49 = V_2;
		int32_t L_50 = V_3;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0021;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_51 = V_1;
		if (!L_51)
		{
			goto IL_0098;
		}
	}
	{
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** L_52 = ___2_arguments;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_53 = V_1;
		TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6* L_54 = (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6*)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD(L_54, L_53, TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var);
		*((RuntimeObject**)L_52) = (RuntimeObject*)L_54;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_52, (void*)(RuntimeObject*)L_54);
	}

IL_0098:
	{
		return;
	}
}
// System.Void System.Dynamic.Utils.ExpressionUtils::ValidateArgumentCount(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType,System.Int32,System.Reflection.ParameterInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B (MethodBase_t* ___0_method, int32_t ___1_nodeKind, int32_t ___2_count, ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___3_pis, const RuntimeMethod* method) 
{
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_0 = ___3_pis;
		NullCheck(L_0);
		int32_t L_1 = ___2_count;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)L_1)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_2 = ___1_nodeKind;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)17))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___1_nodeKind;
		if ((((int32_t)L_3) == ((int32_t)6)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = ___1_nodeKind;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_003a;
	}

IL_0016:
	{
		int32_t L_5 = ___1_nodeKind;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)31))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_6 = ___1_nodeKind;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)50))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_003a;
	}

IL_0022:
	{
		Exception_t* L_7;
		L_7 = Error_IncorrectNumberOfConstructorArguments_mB402B889D59FCE6DDCCA0B70A6DCFFD26994E85B(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B_RuntimeMethod_var)));
	}

IL_0028:
	{
		Exception_t* L_8;
		L_8 = Error_IncorrectNumberOfLambdaArguments_m93DE868DD7B895857F995D11811BA9069A43B993(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B_RuntimeMethod_var)));
	}

IL_002e:
	{
		MethodBase_t* L_9 = ___0_method;
		Exception_t* L_10;
		L_10 = Error_IncorrectNumberOfMethodCallArguments_m7DE65BB947C3DB563F0467A52A70C7A9DF1016F2(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B_RuntimeMethod_var)));
	}

IL_003a:
	{
		Exception_t* L_11;
		L_11 = ContractUtils_get_Unreachable_m792F83C753CCE84550E4F0442CDC49B978FD0CE6(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B_RuntimeMethod_var)));
	}

IL_0040:
	{
		return;
	}
}
// System.Linq.Expressions.Expression System.Dynamic.Utils.ExpressionUtils::ValidateOneArgument(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Reflection.ParameterInfo,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC (MethodBase_t* ___0_method, int32_t ___1_nodeKind, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___2_arguments, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___3_pi, String_t* ___4_methodParamName, String_t* ___5_argumentParamName, int32_t ___6_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = ___2_arguments;
		String_t* L_1 = ___5_argumentParamName;
		int32_t L_2 = ___6_index;
		ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2(L_0, L_1, L_2, NULL);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_3 = ___3_pi;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_3);
		V_0 = L_4;
		Type_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4(L_5, NULL);
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		Type_t* L_7 = V_0;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_7);
		V_0 = L_8;
	}

IL_0020:
	{
		Type_t* L_9 = V_0;
		String_t* L_10 = ___4_methodParamName;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3(L_9, L_10, (bool)1, (bool)1, NULL);
		Type_t* L_11 = V_0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_12 = ___2_arguments;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_12);
		bool L_14;
		L_14 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_11, L_13, NULL);
		if (L_14)
		{
			goto IL_0098;
		}
	}
	{
		Type_t* L_15 = V_0;
		bool L_16;
		L_16 = ExpressionUtils_TryQuote_m2569827EBCA2825EB31C09C67F0FB52024428F33(L_15, (&___2_arguments), NULL);
		if (L_16)
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_17 = ___1_nodeKind;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)17))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = ___1_nodeKind;
		if ((((int32_t)L_18) == ((int32_t)6)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_19 = ___1_nodeKind;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)17))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0092;
	}

IL_0052:
	{
		int32_t L_20 = ___1_nodeKind;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)31))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_21 = ___1_nodeKind;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)50))))
		{
			goto IL_0080;
		}
	}
	{
		goto IL_0092;
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = ___2_arguments;
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_22);
		Type_t* L_24 = V_0;
		String_t* L_25 = ___5_argumentParamName;
		int32_t L_26 = ___6_index;
		Exception_t* L_27;
		L_27 = Error_ExpressionTypeDoesNotMatchConstructorParameter_m790D783BBA8D453BC3A047A2F404C3C8EAEEEEAD(L_23, L_24, L_25, L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC_RuntimeMethod_var)));
	}

IL_006f:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_28 = ___2_arguments;
		NullCheck(L_28);
		Type_t* L_29;
		L_29 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_28);
		Type_t* L_30 = V_0;
		String_t* L_31 = ___5_argumentParamName;
		int32_t L_32 = ___6_index;
		Exception_t* L_33;
		L_33 = Error_ExpressionTypeDoesNotMatchParameter_m8203FE7A82A70A041CFD6D1D4159444A48D6A8E2(L_29, L_30, L_31, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC_RuntimeMethod_var)));
	}

IL_0080:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_34 = ___2_arguments;
		NullCheck(L_34);
		Type_t* L_35;
		L_35 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_34);
		Type_t* L_36 = V_0;
		MethodBase_t* L_37 = ___0_method;
		String_t* L_38 = ___5_argumentParamName;
		int32_t L_39 = ___6_index;
		Exception_t* L_40;
		L_40 = Error_ExpressionTypeDoesNotMatchMethodParameter_m2B66A5924549FE5DEE8E15BFA4781B7B65C5E157(L_35, L_36, L_37, L_38, L_39, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC_RuntimeMethod_var)));
	}

IL_0092:
	{
		Exception_t* L_41;
		L_41 = ContractUtils_get_Unreachable_m792F83C753CCE84550E4F0442CDC49B978FD0CE6(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC_RuntimeMethod_var)));
	}

IL_0098:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_42 = ___2_arguments;
		return L_42;
	}
}
// System.Void System.Dynamic.Utils.ExpressionUtils::RequiresCanRead(System.Linq.Expressions.Expression,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_RequiresCanRead_m987D536D13A2587408F6DAB1396A94B702CE887F (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_expression, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = ___0_expression;
		String_t* L_1 = ___1_paramName;
		ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2(L_0, L_1, (-1), NULL);
		return;
	}
}
// System.Void System.Dynamic.Utils.ExpressionUtils::RequiresCanRead(System.Linq.Expressions.Expression,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_expression, String_t* ___1_paramName, int32_t ___2_idx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = ___0_expression;
		String_t* L_1 = ___1_paramName;
		int32_t L_2 = ___2_idx;
		ContractUtils_RequiresNotNull_m04A5009D6D6E22EC255AED2147373282D3C4A76A(L_0, L_1, L_2, NULL);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_3 = ___0_expression;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, L_3);
		V_2 = L_4;
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)23))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)55)))))
		{
			goto IL_006d;
		}
	}
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_7 = ___0_expression;
		V_0 = ((IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347*)CastclassSealed((RuntimeObject*)L_7, IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347_il2cpp_TypeInfo_var));
		IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347* L_8 = V_0;
		NullCheck(L_8);
		PropertyInfo_t* L_9;
		L_9 = IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline(L_8, NULL);
		bool L_10;
		L_10 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_9, (PropertyInfo_t*)NULL, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347* L_11 = V_0;
		NullCheck(L_11);
		PropertyInfo_t* L_12;
		L_12 = IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline(L_11, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_12);
		if (L_13)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_14 = ___1_paramName;
		int32_t L_15 = ___2_idx;
		Exception_t* L_16;
		L_16 = Error_ExpressionMustBeReadable_mC99E7EEDF1E84C216B563542F4A5C3EFCC7446DF(L_14, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2_RuntimeMethod_var)));
	}

IL_0043:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17 = ___0_expression;
		NullCheck(((MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89*)CastclassClass((RuntimeObject*)L_17, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var)));
		MemberInfo_t* L_18;
		L_18 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(((MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89*)CastclassClass((RuntimeObject*)L_17, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var)), NULL);
		V_1 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_18, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t* L_19 = V_1;
		bool L_20;
		L_20 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_19, (PropertyInfo_t*)NULL, NULL);
		if (!L_20)
		{
			goto IL_006d;
		}
	}
	{
		PropertyInfo_t* L_21 = V_1;
		NullCheck(L_21);
		bool L_22;
		L_22 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_21);
		if (L_22)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_23 = ___1_paramName;
		int32_t L_24 = ___2_idx;
		Exception_t* L_25;
		L_25 = Error_ExpressionMustBeReadable_mC99E7EEDF1E84C216B563542F4A5C3EFCC7446DF(L_23, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2_RuntimeMethod_var)));
	}

IL_006d:
	{
		return;
	}
}
// System.Boolean System.Dynamic.Utils.ExpressionUtils::TryQuote(System.Type,System.Linq.Expressions.Expression&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionUtils_TryQuote_m2569827EBCA2825EB31C09C67F0FB52024428F33 (Type_t* ___0_parameterType, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** ___1_argument, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___0_parameterType;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TypeUtils_IsSameOrSubclass_m2753DDA9DCAF3CEEAFD39F275CAF99AD40AC50A9(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Type_t* L_4 = ___0_parameterType;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** L_5 = ___1_argument;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_6 = *((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785**)L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(112 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_4, L_6);
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** L_8 = ___1_argument;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** L_9 = ___1_argument;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_10 = *((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785**)L_9);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_11;
		L_11 = Expression_Quote_m2B99356D1FBD5641CF7E5021321CCAD4E6930272(L_10, NULL);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_11);
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Reflection.ParameterInfo[] System.Dynamic.Utils.ExpressionUtils::GetParametersForValidation(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ExpressionUtils_GetParametersForValidation_mFFB410DB5C7D53811684948F6C976F9779815FC1 (MethodBase_t* ___0_method, int32_t ___1_nodeKind, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionExtensions_RemoveFirst_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m4B6727B4DCB60C3A0E390CDC1C6C0A3A878F2041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	{
		MethodBase_t* L_0 = ___0_method;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1;
		L_1 = TypeExtensions_GetParametersCached_mD2B9864864929FEFA691059A59077A7E491A8141(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___1_nodeKind;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_0013;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3 = V_0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_4;
		L_4 = CollectionExtensions_RemoveFirst_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m4B6727B4DCB60C3A0E390CDC1C6C0A3A878F2041(L_3, CollectionExtensions_RemoveFirst_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m4B6727B4DCB60C3A0E390CDC1C6C0A3A878F2041_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0013:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Dynamic.Utils.ExpressionUtils::ValidateArgumentCount(System.Linq.Expressions.LambdaExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_ValidateArgumentCount_m153AE9D01D3A9E720D2D275F99ED44289C7EFC3D (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* ___0_lambda, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_0 = ___0_lambda;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Linq.Expressions.IParameterProvider::get_ParameterCount() */, IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var, L_0);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)65535))))
		{
			goto IL_0013;
		}
	}
	{
		Exception_t* L_2;
		L_2 = Error_InvalidProgram_m2100DCBDFB43E64790FE65D7DDFA771AC1F334DA(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateArgumentCount_m153AE9D01D3A9E720D2D275F99ED44289C7EFC3D_RuntimeMethod_var)));
	}

IL_0013:
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
// System.Linq.Expressions.Expression[] System.Dynamic.Utils.ExpressionVisitorUtils::VisitBlockExpressions(System.Linq.Expressions.ExpressionVisitor,System.Linq.Expressions.BlockExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ExpressionVisitorUtils_VisitBlockExpressions_mDB6BB94861DEA88403B2167804369B5A70C2B2F5 (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* ___0_visitor, BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* ___1_block, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_3 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_4 = NULL;
	int32_t V_5 = 0;
	{
		V_0 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)NULL;
		V_1 = 0;
		BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* L_0 = ___1_block;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 System.Linq.Expressions.BlockExpression::get_ExpressionCount() */, L_0);
		V_2 = L_1;
		goto IL_0059;
	}

IL_000d:
	{
		BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* L_2 = ___1_block;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_4;
		L_4 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, int32_t >::Invoke(10 /* System.Linq.Expressions.Expression System.Linq.Expressions.BlockExpression::GetExpression(System.Int32) */, L_2, L_3);
		V_3 = L_4;
		ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* L_5 = ___0_visitor;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_6 = V_3;
		NullCheck(L_5);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_7;
		L_7 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, L_5, L_6);
		V_4 = L_7;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0028;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_9 = V_0;
		int32_t L_10 = V_1;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_11 = V_4;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_11);
		goto IL_0055;
	}

IL_0028:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_12 = V_4;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_13 = V_3;
		if ((((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_12) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_13)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_14 = V_2;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_15 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)L_14);
		V_0 = L_15;
		V_5 = 0;
		goto IL_004b;
	}

IL_0039:
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_16 = V_0;
		int32_t L_17 = V_5;
		BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* L_18 = ___1_block;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_20;
		L_20 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, int32_t >::Invoke(10 /* System.Linq.Expressions.Expression System.Linq.Expressions.BlockExpression::GetExpression(System.Int32) */, L_18, L_19);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_20);
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_004b:
	{
		int32_t L_22 = V_5;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_24 = V_0;
		int32_t L_25 = V_1;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_26 = V_4;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_26);
	}

IL_0055:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0059:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_000d;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_30 = V_0;
		return L_30;
	}
}
// System.Linq.Expressions.ParameterExpression[] System.Dynamic.Utils.ExpressionVisitorUtils::VisitParameters(System.Linq.Expressions.ExpressionVisitor,System.Linq.Expressions.IParameterProvider,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ExpressionVisitorUtils_VisitParameters_m14CFF903DC14270555C38421EFC8423357797316 (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* ___0_visitor, RuntimeObject* ___1_nodes, String_t* ___2_callerName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionVisitor_VisitAndConvert_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3E32E159FAD0579791C006186CD0161EADE1834F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_3 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_4 = NULL;
	int32_t V_5 = 0;
	{
		V_0 = (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL;
		V_1 = 0;
		RuntimeObject* L_0 = ___1_nodes;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Linq.Expressions.IParameterProvider::get_ParameterCount() */, IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var, L_0);
		V_2 = L_1;
		goto IL_005a;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___1_nodes;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_4;
		L_4 = InterfaceFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(0 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.IParameterProvider::GetParameter(System.Int32) */, IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var, L_2, L_3);
		V_3 = L_4;
		ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* L_5 = ___0_visitor;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_6 = V_3;
		String_t* L_7 = ___2_callerName;
		NullCheck(L_5);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = ExpressionVisitor_VisitAndConvert_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3E32E159FAD0579791C006186CD0161EADE1834F(L_5, L_6, L_7, ExpressionVisitor_VisitAndConvert_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3E32E159FAD0579791C006186CD0161EADE1834F_RuntimeMethod_var);
		V_4 = L_8;
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0029;
		}
	}
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_10 = V_0;
		int32_t L_11 = V_1;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_12 = V_4;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_12);
		goto IL_0056;
	}

IL_0029:
	{
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_13 = V_4;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_14 = V_3;
		if ((((RuntimeObject*)(ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_13) == ((RuntimeObject*)(ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_14)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_15 = V_2;
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_16 = (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)SZArrayNew(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_0 = L_16;
		V_5 = 0;
		goto IL_004c;
	}

IL_003a:
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_17 = V_0;
		int32_t L_18 = V_5;
		RuntimeObject* L_19 = ___1_nodes;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_21;
		L_21 = InterfaceFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(0 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.IParameterProvider::GetParameter(System.Int32) */, IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var, L_19, L_20);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_21);
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_004c:
	{
		int32_t L_23 = V_5;
		int32_t L_24 = V_1;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_003a;
		}
	}
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_25 = V_0;
		int32_t L_26 = V_1;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_27 = V_4;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_27);
	}

IL_0056:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_005a:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_000d;
		}
	}
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_31 = V_0;
		return L_31;
	}
}
// System.Linq.Expressions.Expression[] System.Dynamic.Utils.ExpressionVisitorUtils::VisitArguments(System.Linq.Expressions.ExpressionVisitor,System.Linq.Expressions.IArgumentProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ExpressionVisitorUtils_VisitArguments_m5135CCB761020C2B55B5EA46FE54B1068A572AA4 (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* ___0_visitor, RuntimeObject* ___1_nodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_3 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_4 = NULL;
	int32_t V_5 = 0;
	{
		V_0 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)NULL;
		V_1 = 0;
		RuntimeObject* L_0 = ___1_nodes;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Linq.Expressions.IArgumentProvider::get_ArgumentCount() */, IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var, L_0);
		V_2 = L_1;
		goto IL_0059;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___1_nodes;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_4;
		L_4 = InterfaceFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, int32_t >::Invoke(0 /* System.Linq.Expressions.Expression System.Linq.Expressions.IArgumentProvider::GetArgument(System.Int32) */, IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var, L_2, L_3);
		V_3 = L_4;
		ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* L_5 = ___0_visitor;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_6 = V_3;
		NullCheck(L_5);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_7;
		L_7 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, L_5, L_6);
		V_4 = L_7;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0028;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_9 = V_0;
		int32_t L_10 = V_1;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_11 = V_4;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_11);
		goto IL_0055;
	}

IL_0028:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_12 = V_4;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_13 = V_3;
		if ((((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_12) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_13)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_14 = V_2;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_15 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)L_14);
		V_0 = L_15;
		V_5 = 0;
		goto IL_004b;
	}

IL_0039:
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_16 = V_0;
		int32_t L_17 = V_5;
		RuntimeObject* L_18 = ___1_nodes;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_20;
		L_20 = InterfaceFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, int32_t >::Invoke(0 /* System.Linq.Expressions.Expression System.Linq.Expressions.IArgumentProvider::GetArgument(System.Int32) */, IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var, L_18, L_19);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_20);
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_004b:
	{
		int32_t L_22 = V_5;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_24 = V_0;
		int32_t L_25 = V_1;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_26 = V_4;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_26);
	}

IL_0055:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0059:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_000d;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_30 = V_0;
		return L_30;
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
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeExtensions::GetAnyStaticMethodValidated(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeExtensions_GetAnyStaticMethodValidated_m19BFEC3B36D0B1D436A9D5832DA06D670DAC81BA (Type_t* ___0_type, String_t* ___1_name, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___2_types, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	{
		Type_t* L_0 = ___0_type;
		String_t* L_1 = ___1_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ___2_types;
		NullCheck(L_0);
		MethodInfo_t* L_3;
		L_3 = Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562(L_0, L_1, ((int32_t)58), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, L_2, (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*)NULL, NULL);
		V_0 = L_3;
		MethodInfo_t* L_4 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = ___2_types;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = TypeExtensions_MatchesArgumentTypes_m660A719C4A3A1615382A75417726F309F29C57B6(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0018;
		}
	}
	{
		return (MethodInfo_t*)NULL;
	}

IL_0018:
	{
		MethodInfo_t* L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Dynamic.Utils.TypeExtensions::MatchesArgumentTypes(System.Reflection.MethodInfo,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_MatchesArgumentTypes_m660A719C4A3A1615382A75417726F309F29C57B6 (MethodInfo_t* ___0_mi, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_argTypes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		MethodInfo_t* L_0 = ___0_mi;
		bool L_1;
		L_1 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_0, (MethodInfo_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		MethodInfo_t* L_2 = ___0_mi;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3;
		L_3 = TypeExtensions_GetParametersCached_mD2B9864864929FEFA691059A59077A7E491A8141(L_2, NULL);
		V_0 = L_3;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_4 = V_0;
		NullCheck(L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = ___1_argTypes;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		V_1 = 0;
		goto IL_0038;
	}

IL_0020:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_9);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = ___1_argTypes;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Type_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_10, L_14, NULL);
		if (L_15)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)1;
	}
}
// System.Type System.Dynamic.Utils.TypeExtensions::GetReturnType(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeExtensions_GetReturnType_mC3B12960522DA69BE1BD6B0E196133BD59929104 (MethodBase_t* ___0_mi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0 = ___0_mi;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodBase_get_IsConstructor_m98801B34512C9B8DEC1589F1C8C9B3DFC8807575(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		MethodBase_t* L_2 = ___0_mi;
		NullCheck(((MethodInfo_t*)CastclassClass((RuntimeObject*)L_2, MethodInfo_t_il2cpp_TypeInfo_var)));
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(39 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, ((MethodInfo_t*)CastclassClass((RuntimeObject*)L_2, MethodInfo_t_il2cpp_TypeInfo_var)));
		return L_3;
	}

IL_0014:
	{
		MethodBase_t* L_4 = ___0_mi;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_4);
		return L_5;
	}
}
// System.TypeCode System.Dynamic.Utils.TypeExtensions::GetTypeCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466(L_0, NULL);
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] System.Dynamic.Utils.TypeExtensions::GetParametersCached(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* TypeExtensions_GetParametersCached_mD2B9864864929FEFA691059A59077A7E491A8141 (MethodBase_t* ___0_method, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2_TryGetValue_m6CBD87FAA759A05435AEFD9D93587B5D418ECE63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2_set_Item_mF8EE28322B73E55CB990D05DF380380AD8176E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* V_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_1 = NULL;
	Type_t* G_B3_0 = NULL;
	Type_t* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* L_0 = ((TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var))->___s_paramInfoCache_0;
		V_0 = L_0;
		CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* L_1 = V_0;
		MethodBase_t* L_2 = ___0_method;
		NullCheck(L_1);
		bool L_3;
		L_3 = CacheDict_2_TryGetValue_m6CBD87FAA759A05435AEFD9D93587B5D418ECE63(L_1, L_2, (&V_1), CacheDict_2_TryGetValue_m6CBD87FAA759A05435AEFD9D93587B5D418ECE63_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		MethodBase_t* L_4 = ___0_method;
		NullCheck(L_4);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_5;
		L_5 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_4);
		V_1 = L_5;
		MethodBase_t* L_6 = ___0_method;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_6);
		Type_t* L_8 = L_7;
		G_B2_0 = L_8;
		if (L_8)
		{
			G_B3_0 = L_8;
			goto IL_0025;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_002d;
	}

IL_0025:
	{
		NullCheck(G_B3_0);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsCollectible() */, G_B3_0);
		G_B4_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_002d:
	{
		if (!G_B4_0)
		{
			goto IL_0037;
		}
	}
	{
		CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* L_10 = V_0;
		MethodBase_t* L_11 = ___0_method;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_12 = V_1;
		NullCheck(L_10);
		CacheDict_2_set_Item_mF8EE28322B73E55CB990D05DF380380AD8176E5D(L_10, L_11, L_12, CacheDict_2_set_Item_mF8EE28322B73E55CB990D05DF380380AD8176E5D_RuntimeMethod_var);
	}

IL_0037:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_13 = V_1;
		return L_13;
	}
}
// System.Void System.Dynamic.Utils.TypeExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeExtensions__cctor_m0F364DE486F72C0E269E59B71A9E0C3F7E4E089C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2__ctor_mB7ADF1F2EDACF1FACE85871B31627E2AA1C936E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* L_0 = (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB*)il2cpp_codegen_object_new(CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CacheDict_2__ctor_mB7ADF1F2EDACF1FACE85871B31627E2AA1C936E6(L_0, ((int32_t)75), CacheDict_2__ctor_mB7ADF1F2EDACF1FACE85871B31627E2AA1C936E6_RuntimeMethod_var);
		((TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var))->___s_paramInfoCache_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var))->___s_paramInfoCache_0), (void*)L_0);
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
// System.Type System.Dynamic.Utils.TypeUtils::GetNonNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		return L_2;
	}

IL_000a:
	{
		Type_t* L_3 = ___0_type;
		NullCheck(L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4;
		L_4 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(49 /* System.Type[] System.Type::GetGenericArguments() */, L_3);
		NullCheck(L_4);
		int32_t L_5 = 0;
		Type_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// System.Type System.Dynamic.Utils.TypeUtils::GetNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeUtils_GetNullableType_m46BA587AC30A0ACC936F891B68C8D64EA95B178E (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_0, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0(L_2, NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		Type_t* L_8 = ___0_type;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_8);
		NullCheck(L_5);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(119 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_5, L_7);
		return L_9;
	}

IL_002a:
	{
		Type_t* L_10 = ___0_type;
		return L_10;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Type::get_IsConstructedGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_5, NULL);
		return L_6;
	}

IL_001e:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNullableOrReferenceType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNullableOrReferenceType_m95B6B1A27EAF4BFDF6FD0ACAAAD420350D8CDBBD (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)1;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsBool(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsBool_m1054E233E80393FD9A55E76FA3A9E891A796A496 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNumeric(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNumeric_m1DFA79766A316CA6F9A9BCFFCAFF39B5EDCF6AB2 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		___0_type = L_1;
		Type_t* L_2 = ___0_type;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(68 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		Type_t* L_4 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 4))) <= ((uint32_t)((int32_t)10)))))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)1;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsInteger(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsInteger_m6D52BF0DC44BC06DFDF3E534A6A5C10175BDD22F (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		___0_type = L_1;
		Type_t* L_2 = ___0_type;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(68 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		Type_t* L_4 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 5))) <= ((uint32_t)7))))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)1;
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsArithmetic(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsArithmetic_mD3B02EF9C11FA03AAE5C99F33D58895AF101ABF5 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		___0_type = L_1;
		Type_t* L_2 = ___0_type;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(68 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		Type_t* L_4 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 7))) <= ((uint32_t)7))))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)1;
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsUnsignedInt(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsUnsignedInt_m1279B112EEC2CBA4B180DA08EB6B018C17682186 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		___0_type = L_1;
		Type_t* L_2 = ___0_type;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(68 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		Type_t* L_4 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 8)))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_0037;
			}
			case 2:
			{
				goto IL_0035;
			}
			case 3:
			{
				goto IL_0037;
			}
			case 4:
			{
				goto IL_0035;
			}
		}
	}
	{
		goto IL_0037;
	}

IL_0035:
	{
		return (bool)1;
	}

IL_0037:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsIntegerOrBool(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsIntegerOrBool_mF6BDDCDDB415256B88DED25072181DCD58BC58EF (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		___0_type = L_1;
		Type_t* L_2 = ___0_type;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(68 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		Type_t* L_4 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 5))) <= ((uint32_t)7))))
		{
			goto IL_0023;
		}
	}

IL_0021:
	{
		return (bool)1;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNumericOrBool(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNumericOrBool_m83754455F7993200F9EC07EB2B70E2D60428F65C (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = TypeUtils_IsNumeric_m1DFA79766A316CA6F9A9BCFFCAFF39B5EDCF6AB2(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TypeUtils_IsBool_m1054E233E80393FD9A55E76FA3A9E891A796A496(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)1;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsValidInstanceType(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsValidInstanceType_m6C54585680A426F50CC88D5E48694339BE3A6DD0 (MemberInfo_t* ___0_member, Type_t* ___1_instanceType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	bool V_3 = false;
	{
		MemberInfo_t* L_0 = ___0_member;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		Type_t* L_3 = ___1_instanceType;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		Type_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, (Type_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		Type_t* L_7 = ___1_instanceType;
		NullCheck(L_7);
		bool L_8;
		L_8 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_7, NULL);
		if (!L_8)
		{
			goto IL_00af;
		}
	}
	{
		Type_t* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		Type_t* L_13 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0050;
		}
	}
	{
		return (bool)1;
	}

IL_0050:
	{
		Type_t* L_17 = ___1_instanceType;
		NullCheck(L_17);
		bool L_18;
		L_18 = VirtualFuncInvoker0< bool >::Invoke(68 /* System.Boolean System.Type::get_IsEnum() */, L_17);
		if (!L_18)
		{
			goto IL_006c;
		}
	}
	{
		Type_t* L_19 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_006c;
		}
	}
	{
		return (bool)1;
	}

IL_006c:
	{
		Type_t* L_23 = V_0;
		NullCheck(L_23);
		bool L_24;
		L_24 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_23, NULL);
		if (!L_24)
		{
			goto IL_00af;
		}
	}
	{
		Type_t* L_25 = ___1_instanceType;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_26;
		L_26 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_25, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(136 /* System.Collections.Generic.IEnumerable`1<System.Type> System.Reflection.TypeInfo::get_ImplementedInterfaces() */, L_26);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var, L_27);
		V_1 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a5:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_29 = V_1;
					if (!L_29)
					{
						goto IL_00ae;
					}
				}
				{
					RuntimeObject* L_30 = V_1;
					NullCheck(L_30);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
				}

IL_00ae:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009b_1;
			}

IL_0087_1:
			{
				RuntimeObject* L_31 = V_1;
				NullCheck(L_31);
				Type_t* L_32;
				L_32 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var, L_31);
				V_2 = L_32;
				Type_t* L_33 = V_0;
				Type_t* L_34 = V_2;
				il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
				bool L_35;
				L_35 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_33, L_34, NULL);
				if (!L_35)
				{
					goto IL_009b_1;
				}
			}
			{
				V_3 = (bool)1;
				goto IL_00b1;
			}

IL_009b_1:
			{
				RuntimeObject* L_36 = V_1;
				NullCheck(L_36);
				bool L_37;
				L_37 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_36);
				if (L_37)
				{
					goto IL_0087_1;
				}
			}
			{
				goto IL_00af;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		return (bool)0;
	}

IL_00b1:
	{
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::HasIdentityPrimitiveOrNullableConversionTo(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasIdentityPrimitiveOrNullableConversionTo_m4F6E8EFD0BFFED585D49E438A72CB090A070C812 (Type_t* ___0_source, Type_t* ___1_dest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_source;
		Type_t* L_1 = ___1_dest;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		Type_t* L_3 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0(L_3, NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		Type_t* L_5 = ___1_dest;
		Type_t* L_6 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_6, NULL);
		bool L_8;
		L_8 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)1;
	}

IL_0023:
	{
		Type_t* L_9 = ___1_dest;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0(L_9, NULL);
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		Type_t* L_11 = ___0_source;
		Type_t* L_12 = ___1_dest;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_12, NULL);
		bool L_14;
		L_14 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_003b;
		}
	}
	{
		return (bool)1;
	}

IL_003b:
	{
		Type_t* L_15 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = TypeUtils_IsConvertible_mD78E462EF22D75033D4D9318EB498CA9B210453E(L_15, NULL);
		if (!L_16)
		{
			goto IL_0084;
		}
	}
	{
		Type_t* L_17 = ___1_dest;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = TypeUtils_IsConvertible_mD78E462EF22D75033D4D9318EB498CA9B210453E(L_17, NULL);
		if (!L_18)
		{
			goto IL_0084;
		}
	}
	{
		Type_t* L_19 = ___1_dest;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_20, L_22, NULL);
		if (L_23)
		{
			goto IL_0082;
		}
	}
	{
		Type_t* L_24 = ___0_source;
		NullCheck(L_24);
		bool L_25;
		L_25 = VirtualFuncInvoker0< bool >::Invoke(68 /* System.Boolean System.Type::get_IsEnum() */, L_24);
		if (!L_25)
		{
			goto IL_0080;
		}
	}
	{
		Type_t* L_26 = ___0_source;
		NullCheck(L_26);
		Type_t* L_27;
		L_27 = VirtualFuncInvoker0< Type_t* >::Invoke(114 /* System.Type System.Type::GetEnumUnderlyingType() */, L_26);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		return L_30;
	}

IL_0080:
	{
		return (bool)0;
	}

IL_0082:
	{
		return (bool)1;
	}

IL_0084:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::HasReferenceConversionTo(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasReferenceConversionTo_m4BBDBC19498CDAEBA70C7173EBFEE23474BBFC28 (Type_t* ___0_source, Type_t* ___1_dest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		Type_t* L_0 = ___0_source;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		Type_t* L_4 = ___1_dest;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0026;
		}
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		Type_t* L_8 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_8, NULL);
		V_0 = L_9;
		Type_t* L_10 = ___1_dest;
		Type_t* L_11;
		L_11 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_10, NULL);
		V_1 = L_11;
		Type_t* L_12 = V_0;
		Type_t* L_13 = V_1;
		NullCheck(L_12);
		bool L_14;
		L_14 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_12, L_13);
		if (!L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (bool)1;
	}

IL_003f:
	{
		Type_t* L_15 = V_1;
		Type_t* L_16 = V_0;
		NullCheck(L_15);
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_16);
		if (!L_17)
		{
			goto IL_004a;
		}
	}
	{
		return (bool)1;
	}

IL_004a:
	{
		Type_t* L_18 = ___0_source;
		NullCheck(L_18);
		bool L_19;
		L_19 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_18, NULL);
		if (L_19)
		{
			goto IL_005a;
		}
	}
	{
		Type_t* L_20 = ___1_dest;
		NullCheck(L_20);
		bool L_21;
		L_21 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_20, NULL);
		if (!L_21)
		{
			goto IL_005c;
		}
	}

IL_005a:
	{
		return (bool)1;
	}

IL_005c:
	{
		Type_t* L_22 = ___0_source;
		Type_t* L_23 = ___1_dest;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = TypeUtils_IsLegalExplicitVariantDelegateConversion_mDBF7A0751745C4EB5CD168F09D3D76332F70117B(L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)1;
	}

IL_0067:
	{
		Type_t* L_25 = ___0_source;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_25, NULL);
		if (L_26)
		{
			goto IL_0077;
		}
	}
	{
		Type_t* L_27 = ___1_dest;
		NullCheck(L_27);
		bool L_28;
		L_28 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_27, NULL);
		if (!L_28)
		{
			goto IL_0080;
		}
	}

IL_0077:
	{
		Type_t* L_29 = ___0_source;
		Type_t* L_30 = ___1_dest;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = TypeUtils_StrictHasReferenceConversionTo_mC9594BCC1A40FA47B71DDD7A7AF890A24A114445(L_29, L_30, (bool)1, NULL);
		return L_31;
	}

IL_0080:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::StrictHasReferenceConversionTo(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_StrictHasReferenceConversionTo_mC9594BCC1A40FA47B71DDD7A7AF890A24A114445 (Type_t* ___0_source, Type_t* ___1_dest, bool ___2_skipNonArray, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}

IL_0000:
	{
		bool L_0 = ___2_skipNonArray;
		if (L_0)
		{
			goto IL_0064;
		}
	}
	{
		Type_t* L_1 = ___0_source;
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		Type_t* L_3 = ___1_dest;
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_3, NULL);
		if (!((int32_t)((int32_t)L_2|(int32_t)L_4)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		Type_t* L_5 = ___0_source;
		Type_t* L_6 = ___1_dest;
		NullCheck(L_5);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_5, L_6);
		if (L_7)
		{
			goto IL_0026;
		}
	}
	{
		Type_t* L_8 = ___1_dest;
		Type_t* L_9 = ___0_source;
		NullCheck(L_8);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_9);
		if (!L_10)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		return (bool)1;
	}

IL_0028:
	{
		Type_t* L_11 = ___0_source;
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_11, NULL);
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		Type_t* L_13 = ___1_dest;
		NullCheck(L_13);
		bool L_14;
		L_14 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_13, NULL);
		if (L_14)
		{
			goto IL_0048;
		}
	}
	{
		Type_t* L_15 = ___1_dest;
		NullCheck(L_15);
		bool L_16;
		L_16 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_15, NULL);
		if (!L_16)
		{
			goto IL_0064;
		}
	}
	{
		Type_t* L_17 = ___1_dest;
		NullCheck(L_17);
		bool L_18;
		L_18 = Type_get_IsSealed_m6B652265DCEF64250FD2A173C50BD889467A58E4(L_17, NULL);
		if (L_18)
		{
			goto IL_0064;
		}
	}

IL_0048:
	{
		return (bool)1;
	}

IL_004a:
	{
		Type_t* L_19 = ___1_dest;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_19, NULL);
		if (!L_20)
		{
			goto IL_0064;
		}
	}
	{
		Type_t* L_21 = ___0_source;
		NullCheck(L_21);
		bool L_22;
		L_22 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_21, NULL);
		if (!L_22)
		{
			goto IL_0064;
		}
	}
	{
		Type_t* L_23 = ___0_source;
		NullCheck(L_23);
		bool L_24;
		L_24 = Type_get_IsSealed_m6B652265DCEF64250FD2A173C50BD889467A58E4(L_23, NULL);
		if (L_24)
		{
			goto IL_0064;
		}
	}
	{
		return (bool)1;
	}

IL_0064:
	{
		Type_t* L_25 = ___0_source;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_25, NULL);
		if (!L_26)
		{
			goto IL_00b2;
		}
	}
	{
		Type_t* L_27 = ___1_dest;
		NullCheck(L_27);
		bool L_28;
		L_28 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_27, NULL);
		if (!L_28)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t* L_29 = ___0_source;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 System.Type::GetArrayRank() */, L_29);
		Type_t* L_31 = ___1_dest;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 System.Type::GetArrayRank() */, L_31);
		if ((!(((uint32_t)L_30) == ((uint32_t)L_32))))
		{
			goto IL_0090;
		}
	}
	{
		Type_t* L_33 = ___0_source;
		NullCheck(L_33);
		bool L_34;
		L_34 = VirtualFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Type::get_IsSZArray() */, L_33);
		Type_t* L_35 = ___1_dest;
		NullCheck(L_35);
		bool L_36;
		L_36 = VirtualFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Type::get_IsSZArray() */, L_35);
		if ((((int32_t)L_34) == ((int32_t)L_36)))
		{
			goto IL_0092;
		}
	}

IL_0090:
	{
		return (bool)0;
	}

IL_0092:
	{
		Type_t* L_37 = ___0_source;
		NullCheck(L_37);
		Type_t* L_38;
		L_38 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_37);
		___0_source = L_38;
		Type_t* L_39 = ___1_dest;
		NullCheck(L_39);
		Type_t* L_40;
		L_40 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_39);
		___1_dest = L_40;
		___2_skipNonArray = (bool)0;
		goto IL_0000;
	}

IL_00aa:
	{
		Type_t* L_41 = ___0_source;
		Type_t* L_42 = ___1_dest;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = TypeUtils_HasArrayToInterfaceConversion_mC69EE2DEF583985E8822964D19E2533E9E9F5F3A(L_41, L_42, NULL);
		return L_43;
	}

IL_00b2:
	{
		Type_t* L_44 = ___1_dest;
		NullCheck(L_44);
		bool L_45;
		L_45 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_44, NULL);
		if (!L_45)
		{
			goto IL_00d6;
		}
	}
	{
		Type_t* L_46 = ___0_source;
		Type_t* L_47 = ___1_dest;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = TypeUtils_HasInterfaceToArrayConversion_mCC7DC19083AFD44B5CBCCDE39F3A2F1772BBD0C3(L_46, L_47, NULL);
		if (!L_48)
		{
			goto IL_00c5;
		}
	}
	{
		return (bool)1;
	}

IL_00c5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		Type_t* L_51 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = TypeUtils_IsImplicitReferenceConversion_m72031537214B8B0E3D99B3815AB7AD774A673A82(L_50, L_51, NULL);
		return L_52;
	}

IL_00d6:
	{
		Type_t* L_53 = ___0_source;
		Type_t* L_54 = ___1_dest;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = TypeUtils_IsLegalExplicitVariantDelegateConversion_mDBF7A0751745C4EB5CD168F09D3D76332F70117B(L_53, L_54, NULL);
		return L_55;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::HasArrayToInterfaceConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasArrayToInterfaceConversion_mC69EE2DEF583985E8822964D19E2533E9E9F5F3A (Type_t* ___0_source, Type_t* ___1_dest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	Type_t* V_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t* V_4 = NULL;
	{
		Type_t* L_0 = ___0_source;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Type::get_IsSZArray() */, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Type_t* L_2 = ___1_dest;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Type_t* L_4 = ___1_dest;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		Type_t* L_6 = ___1_dest;
		NullCheck(L_6);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7;
		L_7 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(49 /* System.Type[] System.Type::GetGenericArguments() */, L_6);
		V_0 = L_7;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		Type_t* L_9 = ___1_dest;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_9);
		V_1 = L_10;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = ((TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var))->___s_arrayAssignableInterfaces_0;
		V_2 = L_11;
		V_3 = 0;
		goto IL_005d;
	}

IL_003a:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Type_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		Type_t* L_16 = V_1;
		Type_t* L_17 = V_4;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_0059;
		}
	}
	{
		Type_t* L_19 = ___0_source;
		NullCheck(L_19);
		Type_t* L_20;
		L_20 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_19);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 0;
		Type_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = TypeUtils_StrictHasReferenceConversionTo_mC9594BCC1A40FA47B71DDD7A7AF890A24A114445(L_20, L_23, (bool)0, NULL);
		return L_24;
	}

IL_0059:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005d:
	{
		int32_t L_26 = V_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_27 = V_2;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::HasInterfaceToArrayConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasInterfaceToArrayConversion_mCC7DC19083AFD44B5CBCCDE39F3A2F1772BBD0C3 (Type_t* ___0_source, Type_t* ___1_dest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	Type_t* V_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t* V_4 = NULL;
	{
		Type_t* L_0 = ___1_dest;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Type::get_IsSZArray() */, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Type_t* L_2 = ___0_source;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Type_t* L_4 = ___0_source;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		Type_t* L_6 = ___0_source;
		NullCheck(L_6);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7;
		L_7 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(49 /* System.Type[] System.Type::GetGenericArguments() */, L_6);
		V_0 = L_7;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		Type_t* L_9 = ___0_source;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_9);
		V_1 = L_10;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = ((TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var))->___s_arrayAssignableInterfaces_0;
		V_2 = L_11;
		V_3 = 0;
		goto IL_005d;
	}

IL_003a:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Type_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		Type_t* L_16 = V_1;
		Type_t* L_17 = V_4;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_0059;
		}
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 0;
		Type_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Type_t* L_22 = ___1_dest;
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_22);
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = TypeUtils_StrictHasReferenceConversionTo_mC9594BCC1A40FA47B71DDD7A7AF890A24A114445(L_21, L_23, (bool)0, NULL);
		return L_24;
	}

IL_0059:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005d:
	{
		int32_t L_26 = V_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_27 = V_2;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsCovariant(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsCovariant_m4220EE5D4CB85F8039AEFA3AE3641334A7506BA0 (Type_t* ___0_t, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_t;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(51 /* System.Reflection.GenericParameterAttributes System.Type::get_GenericParameterAttributes() */, L_0);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_1&1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsContravariant(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsContravariant_m2B4BA44C74B4FC62D7B6D7CF667AFC025F46ACBF (Type_t* ___0_t, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_t;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(51 /* System.Reflection.GenericParameterAttributes System.Type::get_GenericParameterAttributes() */, L_0);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_1&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsInvariant(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsInvariant_m7081A56EB27994579EE0B13213A15FE1D6613CA6 (Type_t* ___0_t, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_t;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(51 /* System.Reflection.GenericParameterAttributes System.Type::get_GenericParameterAttributes() */, L_0);
		return (bool)((((int32_t)((int32_t)((int32_t)L_1&3))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsDelegate(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsDelegate_mD03BA63283B1855B331BD4D01ABF93A4A9A95602 (Type_t* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MulticastDelegate_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_t;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (MulticastDelegate_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(20 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_0, L_2);
		return L_3;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsLegalExplicitVariantDelegateConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsLegalExplicitVariantDelegateConversion_mDBF7A0751745C4EB5CD168F09D3D76332F70117B (Type_t* ___0_source, Type_t* ___1_dest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_3 = NULL;
	int32_t V_4 = 0;
	Type_t* V_5 = NULL;
	Type_t* V_6 = NULL;
	Type_t* V_7 = NULL;
	{
		Type_t* L_0 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = TypeUtils_IsDelegate_mD03BA63283B1855B331BD4D01ABF93A4A9A95602(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Type_t* L_2 = ___1_dest;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TypeUtils_IsDelegate_mD03BA63283B1855B331BD4D01ABF93A4A9A95602(L_2, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		Type_t* L_4 = ___0_source;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		Type_t* L_6 = ___1_dest;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_6);
		if (L_7)
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		return (bool)0;
	}

IL_0022:
	{
		Type_t* L_8 = ___0_source;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_8);
		V_0 = L_9;
		Type_t* L_10 = ___1_dest;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_10);
		Type_t* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0039:
	{
		Type_t* L_14 = V_0;
		NullCheck(L_14);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_15;
		L_15 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(49 /* System.Type[] System.Type::GetGenericArguments() */, L_14);
		V_1 = L_15;
		Type_t* L_16 = ___0_source;
		NullCheck(L_16);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_17;
		L_17 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(49 /* System.Type[] System.Type::GetGenericArguments() */, L_16);
		V_2 = L_17;
		Type_t* L_18 = ___1_dest;
		NullCheck(L_18);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(49 /* System.Type[] System.Type::GetGenericArguments() */, L_18);
		V_3 = L_19;
		V_4 = 0;
		goto IL_00b4;
	}

IL_0053:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = V_2;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Type_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = L_23;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_24 = V_3;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Type_t* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = L_27;
		Type_t* L_28 = V_5;
		Type_t* L_29 = V_6;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_28, L_29, NULL);
		if (L_30)
		{
			goto IL_00ae;
		}
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_31 = V_1;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Type_t* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_7 = L_34;
		Type_t* L_35 = V_7;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = TypeUtils_IsInvariant_m7081A56EB27994579EE0B13213A15FE1D6613CA6(L_35, NULL);
		if (!L_36)
		{
			goto IL_007b;
		}
	}
	{
		return (bool)0;
	}

IL_007b:
	{
		Type_t* L_37 = V_7;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = TypeUtils_IsCovariant_m4220EE5D4CB85F8039AEFA3AE3641334A7506BA0(L_37, NULL);
		if (!L_38)
		{
			goto IL_0091;
		}
	}
	{
		Type_t* L_39 = V_5;
		Type_t* L_40 = V_6;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = TypeUtils_HasReferenceConversionTo_m4BBDBC19498CDAEBA70C7173EBFEE23474BBFC28(L_39, L_40, NULL);
		if (L_41)
		{
			goto IL_00ae;
		}
	}
	{
		return (bool)0;
	}

IL_0091:
	{
		Type_t* L_42 = V_7;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = TypeUtils_IsContravariant_m2B4BA44C74B4FC62D7B6D7CF667AFC025F46ACBF(L_42, NULL);
		if (!L_43)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t* L_44 = V_5;
		NullCheck(L_44);
		bool L_45;
		L_45 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_44, NULL);
		if (L_45)
		{
			goto IL_00ac;
		}
	}
	{
		Type_t* L_46 = V_6;
		NullCheck(L_46);
		bool L_47;
		L_47 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_46, NULL);
		if (!L_47)
		{
			goto IL_00ae;
		}
	}

IL_00ac:
	{
		return (bool)0;
	}

IL_00ae:
	{
		int32_t L_48 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00b4:
	{
		int32_t L_49 = V_4;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_50 = V_1;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsConvertible(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsConvertible_mD78E462EF22D75033D4D9318EB498CA9B210453E (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		___0_type = L_1;
		Type_t* L_2 = ___0_type;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(68 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		Type_t* L_4 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 3))) <= ((uint32_t)((int32_t)11)))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)1;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::HasReferenceEquality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasReferenceEquality_m153555F70F9B163ED5A1B6188CD0A274A6D564D6 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_left;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		Type_t* L_2 = ___1_right;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return (bool)0;
	}

IL_0012:
	{
		Type_t* L_4 = ___0_left;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_4, NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		Type_t* L_6 = ___1_right;
		NullCheck(L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_6, NULL);
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		Type_t* L_8 = ___0_left;
		Type_t* L_9 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_8, L_9, NULL);
		if (L_10)
		{
			goto IL_0033;
		}
	}
	{
		Type_t* L_11 = ___1_right;
		Type_t* L_12 = ___0_left;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_11, L_12, NULL);
		return L_13;
	}

IL_0033:
	{
		return (bool)1;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::HasBuiltInEqualityOperator(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasBuiltInEqualityOperator_m5920F8C695F30A0234A53BEF20429F34E075047A (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		Type_t* L_0 = ___0_left;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Type_t* L_2 = ___1_right;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		Type_t* L_4 = ___1_right;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_4, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		Type_t* L_6 = ___0_left;
		NullCheck(L_6);
		bool L_7;
		L_7 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_6, NULL);
		if (L_7)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}

IL_0024:
	{
		Type_t* L_8 = ___0_left;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_8, NULL);
		if (L_9)
		{
			goto IL_0048;
		}
	}
	{
		Type_t* L_10 = ___1_right;
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_10, NULL);
		if (L_11)
		{
			goto IL_0048;
		}
	}
	{
		Type_t* L_12 = ___0_left;
		Type_t* L_13 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_12, L_13, NULL);
		if (L_14)
		{
			goto IL_0046;
		}
	}
	{
		Type_t* L_15 = ___1_right;
		Type_t* L_16 = ___0_left;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0048;
		}
	}

IL_0046:
	{
		return (bool)1;
	}

IL_0048:
	{
		Type_t* L_18 = ___0_left;
		Type_t* L_19 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_18, L_19, NULL);
		if (L_20)
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0053:
	{
		Type_t* L_21 = ___0_left;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_21, NULL);
		V_0 = L_22;
		Type_t* L_23 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (L_26)
		{
			goto IL_007b;
		}
	}
	{
		Type_t* L_27 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = TypeUtils_IsNumeric_m1DFA79766A316CA6F9A9BCFFCAFF39B5EDCF6AB2(L_27, NULL);
		if (L_28)
		{
			goto IL_007b;
		}
	}
	{
		Type_t* L_29 = V_0;
		NullCheck(L_29);
		bool L_30;
		L_30 = VirtualFuncInvoker0< bool >::Invoke(68 /* System.Boolean System.Type::get_IsEnum() */, L_29);
		return L_30;
	}

IL_007b:
	{
		return (bool)1;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitlyConvertibleTo(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitlyConvertibleTo_mA53F5E133A932AEDA05CC17DEBBF40482F6C146D (Type_t* ___0_source, Type_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_source;
		Type_t* L_1 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_3 = ___0_source;
		Type_t* L_4 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = TypeUtils_IsImplicitNumericConversion_m2181B6491D1132F62B72BDC8938B16728DACBB21(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_6 = ___0_source;
		Type_t* L_7 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TypeUtils_IsImplicitReferenceConversion_m72031537214B8B0E3D99B3815AB7AD774A673A82(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_9 = ___0_source;
		Type_t* L_10 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = TypeUtils_IsImplicitBoxingConversion_mCD588DEB51CB41E65A7EFFC0F86EDCDBC8E4876B(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_12 = ___0_source;
		Type_t* L_13 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = TypeUtils_IsImplicitNullableConversion_mE9012B508EA2BE0EADFDC6DB24613BB45F468FAC(L_12, L_13, NULL);
		return L_14;
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeUtils::GetUserDefinedCoercionMethod(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeUtils_GetUserDefinedCoercionMethod_mC0A484382922762AF98C5700E67037358A8F77BB (Type_t* ___0_convertFrom, Type_t* ___1_convertToType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_4 = NULL;
	MethodInfo_t* G_B11_0 = NULL;
	MethodInfo_t* G_B8_0 = NULL;
	MethodInfo_t* G_B9_0 = NULL;
	MethodInfo_t* G_B10_0 = NULL;
	{
		Type_t* L_0 = ___0_convertFrom;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = ___1_convertToType;
		Type_t* L_3;
		L_3 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_2, NULL);
		V_1 = L_3;
		Type_t* L_4 = V_0;
		NullCheck(L_4);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_5;
		L_5 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, int32_t >::Invoke(97 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_4, ((int32_t)56));
		V_2 = L_5;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_6 = V_2;
		Type_t* L_7 = ___0_convertFrom;
		Type_t* L_8 = ___1_convertToType;
		MethodInfo_t* L_9;
		L_9 = TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888(L_6, L_7, L_8, NULL);
		V_3 = L_9;
		MethodInfo_t* L_10 = V_3;
		bool L_11;
		L_11 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_10, (MethodInfo_t*)NULL, NULL);
		if (!L_11)
		{
			goto IL_002b;
		}
	}
	{
		MethodInfo_t* L_12 = V_3;
		return L_12;
	}

IL_002b:
	{
		Type_t* L_13 = V_1;
		NullCheck(L_13);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_14;
		L_14 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, int32_t >::Invoke(97 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_13, ((int32_t)56));
		V_4 = L_14;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_15 = V_4;
		Type_t* L_16 = ___0_convertFrom;
		Type_t* L_17 = ___1_convertToType;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		MethodInfo_t* L_18;
		L_18 = TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888(L_15, L_16, L_17, NULL);
		V_3 = L_18;
		MethodInfo_t* L_19 = V_3;
		bool L_20;
		L_20 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_19, (MethodInfo_t*)NULL, NULL);
		if (!L_20)
		{
			goto IL_004a;
		}
	}
	{
		MethodInfo_t* L_21 = V_3;
		return L_21;
	}

IL_004a:
	{
		Type_t* L_22 = V_0;
		Type_t* L_23 = ___0_convertFrom;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_005e;
		}
	}
	{
		Type_t* L_25 = V_1;
		Type_t* L_26 = ___1_convertToType;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_25, L_26, NULL);
		if (!L_27)
		{
			goto IL_005e;
		}
	}
	{
		return (MethodInfo_t*)NULL;
	}

IL_005e:
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_28 = V_2;
		Type_t* L_29 = V_0;
		Type_t* L_30 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		MethodInfo_t* L_31;
		L_31 = TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888(L_28, L_29, L_30, NULL);
		MethodInfo_t* L_32 = L_31;
		G_B8_0 = L_32;
		if (L_32)
		{
			G_B11_0 = L_32;
			goto IL_008c;
		}
	}
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_33 = V_4;
		Type_t* L_34 = V_0;
		Type_t* L_35 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		MethodInfo_t* L_36;
		L_36 = TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888(L_33, L_34, L_35, NULL);
		MethodInfo_t* L_37 = L_36;
		G_B9_0 = L_37;
		if (L_37)
		{
			G_B11_0 = L_37;
			goto IL_008c;
		}
	}
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_38 = V_2;
		Type_t* L_39 = V_0;
		Type_t* L_40 = ___1_convertToType;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		MethodInfo_t* L_41;
		L_41 = TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888(L_38, L_39, L_40, NULL);
		MethodInfo_t* L_42 = L_41;
		G_B10_0 = L_42;
		if (L_42)
		{
			G_B11_0 = L_42;
			goto IL_008c;
		}
	}
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_43 = V_4;
		Type_t* L_44 = V_0;
		Type_t* L_45 = ___1_convertToType;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		MethodInfo_t* L_46;
		L_46 = TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888(L_43, L_44, L_45, NULL);
		G_B11_0 = L_46;
	}

IL_008c:
	{
		return G_B11_0;
	}
}
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeUtils::FindConversionOperator(System.Reflection.MethodInfo[],System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888 (MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* ___0_methods, Type_t* ___1_typeFrom, Type_t* ___2_typeTo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6E90C09E43FB002DA629508AC300A0750320118);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_0 = NULL;
	int32_t V_1 = 0;
	MethodInfo_t* V_2 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_3 = NULL;
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_0 = ___0_methods;
		V_0 = L_0;
		V_1 = 0;
		goto IL_005f;
	}

IL_0006:
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		MethodInfo_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		MethodInfo_t* L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59, NULL);
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		MethodInfo_t* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralB6E90C09E43FB002DA629508AC300A0750320118, NULL);
		if (!L_10)
		{
			goto IL_005b;
		}
	}

IL_002e:
	{
		MethodInfo_t* L_11 = V_2;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = VirtualFuncInvoker0< Type_t* >::Invoke(39 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_11);
		Type_t* L_13 = ___2_typeTo;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_005b;
		}
	}
	{
		MethodInfo_t* L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_16;
		L_16 = TypeExtensions_GetParametersCached_mD2B9864864929FEFA691059A59077A7E491A8141(L_15, NULL);
		V_3 = L_16;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_17 = V_3;
		NullCheck(L_17);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) == ((uint32_t)1))))
		{
			goto IL_005b;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = 0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_20);
		Type_t* L_22 = ___1_typeFrom;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_005b;
		}
	}
	{
		MethodInfo_t* L_24 = V_2;
		return L_24;
	}

IL_005b:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005f:
	{
		int32_t L_26 = V_1;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		return (MethodInfo_t*)NULL;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitNumericConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitNumericConversion_m2181B6491D1132F62B72BDC8938B16728DACBB21 (Type_t* ___0_source, Type_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Type_t* L_0 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = ___1_destination;
		int32_t L_3;
		L_3 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 4)))
		{
			case 0:
			{
				goto IL_00cd;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_0073;
			}
			case 3:
			{
				goto IL_007b;
			}
			case 4:
			{
				goto IL_00a4;
			}
			case 5:
			{
				goto IL_00ad;
			}
			case 6:
			{
				goto IL_00bb;
			}
			case 7:
			{
				goto IL_00c4;
			}
			case 8:
			{
				goto IL_00c4;
			}
			case 9:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_00db;
	}

IL_0043:
	{
		int32_t L_5 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, 7)))
		{
			case 0:
			{
				goto IL_0071;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_0071;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_0071;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_0071;
			}
			case 7:
			{
				goto IL_0071;
			}
			case 8:
			{
				goto IL_0071;
			}
		}
	}
	{
		goto IL_00db;
	}

IL_0071:
	{
		return (bool)1;
	}

IL_0073:
	{
		int32_t L_6 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 7))) <= ((uint32_t)8))))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)1;
	}

IL_007b:
	{
		int32_t L_7 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_00a2;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00a2;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00a2;
			}
			case 5:
			{
				goto IL_00a2;
			}
			case 6:
			{
				goto IL_00a2;
			}
		}
	}
	{
		goto IL_00db;
	}

IL_00a2:
	{
		return (bool)1;
	}

IL_00a4:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)9)))) <= ((uint32_t)6))))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)1;
	}

IL_00ad:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)11))))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, ((int32_t)13)))) <= ((uint32_t)2))))
		{
			goto IL_00db;
		}
	}

IL_00b9:
	{
		return (bool)1;
	}

IL_00bb:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, ((int32_t)11)))) <= ((uint32_t)4))))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)1;
	}

IL_00c4:
	{
		int32_t L_12 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, ((int32_t)13)))) <= ((uint32_t)2))))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)1;
	}

IL_00cd:
	{
		int32_t L_13 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, 8))) <= ((uint32_t)7))))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)1;
	}

IL_00d5:
	{
		int32_t L_14 = V_1;
		return (bool)((((int32_t)L_14) == ((int32_t)((int32_t)14)))? 1 : 0);
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitReferenceConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitReferenceConversion_m72031537214B8B0E3D99B3815AB7AD774A673A82 (Type_t* ___0_source, Type_t* ___1_destination, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___1_destination;
		Type_t* L_1 = ___0_source;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitBoxingConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitBoxingConversion_mCD588DEB51CB41E65A7EFFC0F86EDCDBC8E4876B (Type_t* ___0_source, Type_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_source;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_0, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_2 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_0047;
		}
	}
	{
		Type_t* L_6 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}

IL_002c:
	{
		Type_t* L_10 = ___0_source;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(68 /* System.Boolean System.Type::get_IsEnum() */, L_10);
		if (!L_11)
		{
			goto IL_0045;
		}
	}
	{
		Type_t* L_12 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		return L_15;
	}

IL_0045:
	{
		return (bool)0;
	}

IL_0047:
	{
		return (bool)1;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitNullableConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitNullableConversion_mE9012B508EA2BE0EADFDC6DB24613BB45F468FAC (Type_t* ___0_source, Type_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Type_t* L_2 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_2, NULL);
		Type_t* L_4 = ___1_destination;
		Type_t* L_5;
		L_5 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_4, NULL);
		bool L_6;
		L_6 = TypeUtils_IsImplicitlyConvertibleTo_mA53F5E133A932AEDA05CC17DEBBF40482F6C146D(L_3, L_5, NULL);
		return L_6;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Type System.Dynamic.Utils.TypeUtils::FindGenericType(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeUtils_FindGenericType_mC7491078249941694D5B66BC007D0CDB02DC7CED (Type_t* ___0_definition, Type_t* ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	{
		goto IL_006d;
	}

IL_0002:
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Type::get_IsConstructedGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Type_t* L_2 = ___1_type;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		Type_t* L_4 = ___0_definition;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		Type_t* L_6 = ___1_type;
		return L_6;
	}

IL_001a:
	{
		Type_t* L_7 = ___0_definition;
		NullCheck(L_7);
		bool L_8;
		L_8 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_7, NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Type_t* L_9 = ___1_type;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_10;
		L_10 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_9, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(136 /* System.Collections.Generic.IEnumerable`1<System.Type> System.Reflection.TypeInfo::get_ImplementedInterfaces() */, L_10);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var, L_11);
		V_0 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_13 = V_0;
					if (!L_13)
					{
						goto IL_0064;
					}
				}
				{
					RuntimeObject* L_14 = V_0;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_0064:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0051_1;
			}

IL_0035_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck(L_15);
				Type_t* L_16;
				L_16 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var, L_15);
				V_1 = L_16;
				Type_t* L_17 = ___0_definition;
				Type_t* L_18 = V_1;
				il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
				Type_t* L_19;
				L_19 = TypeUtils_FindGenericType_mC7491078249941694D5B66BC007D0CDB02DC7CED(L_17, L_18, NULL);
				V_2 = L_19;
				Type_t* L_20 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_21;
				L_21 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_20, (Type_t*)NULL, NULL);
				if (!L_21)
				{
					goto IL_0051_1;
				}
			}
			{
				Type_t* L_22 = V_2;
				V_3 = L_22;
				goto IL_0084;
			}

IL_0051_1:
			{
				RuntimeObject* L_23 = V_0;
				NullCheck(L_23);
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_0035_1;
				}
			}
			{
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		Type_t* L_25 = ___1_type;
		NullCheck(L_25);
		Type_t* L_26;
		L_26 = VirtualFuncInvoker0< Type_t* >::Invoke(109 /* System.Type System.Type::get_BaseType() */, L_25);
		___1_type = L_26;
	}

IL_006d:
	{
		Type_t* L_27 = ___1_type;
		if (!L_27)
		{
			goto IL_0082;
		}
	}
	{
		Type_t* L_28 = ___1_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_0002;
		}
	}

IL_0082:
	{
		return (Type_t*)NULL;
	}

IL_0084:
	{
		Type_t* L_32 = V_3;
		return L_32;
	}
}
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeUtils::GetBooleanOperator(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeUtils_GetBooleanOperator_m044025C7C745B557718CD00498EA82C1E9D526AC (Type_t* ___0_type, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;

IL_0000:
	{
		Type_t* L_0 = ___0_type;
		String_t* L_1 = ___1_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Type_t* L_4 = ___0_type;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		MethodInfo_t* L_5;
		L_5 = TypeExtensions_GetAnyStaticMethodValidated_m19BFEC3B36D0B1D436A9D5832DA06D670DAC81BA(L_0, L_1, L_3, NULL);
		V_0 = L_5;
		MethodInfo_t* L_6 = V_0;
		bool L_7;
		L_7 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_6, (MethodInfo_t*)NULL, NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		MethodInfo_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = MethodBase_get_IsSpecialName_m80B62916B5B899408084AE6FC8B3D396FCF2B56C(L_8, NULL);
		if (!L_9)
		{
			goto IL_002d;
		}
	}
	{
		MethodInfo_t* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_10);
		if (L_11)
		{
			goto IL_002d;
		}
	}
	{
		MethodInfo_t* L_12 = V_0;
		return L_12;
	}

IL_002d:
	{
		Type_t* L_13 = ___0_type;
		NullCheck(L_13);
		Type_t* L_14;
		L_14 = VirtualFuncInvoker0< Type_t* >::Invoke(109 /* System.Type System.Type::get_BaseType() */, L_13);
		___0_type = L_14;
		Type_t* L_15 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_15, (Type_t*)NULL, NULL);
		if (L_16)
		{
			goto IL_0000;
		}
	}
	{
		return (MethodInfo_t*)NULL;
	}
}
// System.Type System.Dynamic.Utils.TypeUtils::GetNonRefType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeUtils_GetNonRefType_m3740C139BE8675E516C3ED1E7E993FBCCE971863 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		return L_2;
	}

IL_000a:
	{
		Type_t* L_3 = ___0_type;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_3);
		return L_4;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::AreEquivalent(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65 (Type_t* ___0_t1, Type_t* ___1_t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_t1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Type_t* L_2 = ___0_t1;
		Type_t* L_3 = ___1_t2;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(113 /* System.Boolean System.Type::IsEquivalentTo(System.Type) */, L_2, L_3);
		return L_4;
	}

IL_0011:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::AreReferenceAssignable(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177 (Type_t* ___0_dest, Type_t* ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_dest;
		Type_t* L_1 = ___1_src;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		Type_t* L_3 = ___0_dest;
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_3, NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		Type_t* L_5 = ___1_src;
		NullCheck(L_5);
		bool L_6;
		L_6 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_5, NULL);
		if (L_6)
		{
			goto IL_0023;
		}
	}
	{
		Type_t* L_7 = ___0_dest;
		Type_t* L_8 = ___1_src;
		NullCheck(L_7);
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_8);
		return L_9;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsSameOrSubclass(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsSameOrSubclass_m2753DDA9DCAF3CEEAFD39F275CAF99AD40AC50A9 (Type_t* ___0_type, Type_t* ___1_subType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_type;
		Type_t* L_1 = ___1_subType;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		Type_t* L_3 = ___1_subType;
		Type_t* L_4 = ___0_type;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(20 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_3, L_4);
		return L_5;
	}

IL_0011:
	{
		return (bool)1;
	}
}
// System.Void System.Dynamic.Utils.TypeUtils::ValidateType(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtils_ValidateType_mC8CEE431D520D99DDED2BC1D2694781E3F273D3A (Type_t* ___0_type, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_type;
		String_t* L_1 = ___1_paramName;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3(L_0, L_1, (bool)0, (bool)0, NULL);
		return;
	}
}
// System.Void System.Dynamic.Utils.TypeUtils::ValidateType(System.Type,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3 (Type_t* ___0_type, String_t* ___1_paramName, bool ___2_allowByRef, bool ___3_allowPointer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_type;
		String_t* L_1 = ___1_paramName;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TypeUtils_ValidateType_mE94AD3C043E2FE6C32BBA6C1FC60D29CB2063AEB(L_0, L_1, (-1), NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		bool L_3 = ___2_allowByRef;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		Type_t* L_4 = ___0_type;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4(L_4, NULL);
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_6 = ___1_paramName;
		Exception_t* L_7;
		L_7 = Error_TypeMustNotBeByRef_mC9A42A8B7A5F20813A4A3A0626BD8E4760FBFC0F(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_8 = ___3_allowPointer;
		if (L_8)
		{
			goto IL_002e;
		}
	}
	{
		Type_t* L_9 = ___0_type;
		NullCheck(L_9);
		bool L_10;
		L_10 = Type_get_IsPointer_mC8AAAFEC4E4CEA59DAD0032B85D1BB224763278B(L_9, NULL);
		if (!L_10)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_11 = ___1_paramName;
		Exception_t* L_12;
		L_12 = Error_TypeMustNotBePointer_mC8B6202CADBE91A5A33B51B02D67B073157E5AB8(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3_RuntimeMethod_var)));
	}

IL_002e:
	{
		return;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::ValidateType(System.Type,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_ValidateType_mE94AD3C043E2FE6C32BBA6C1FC60D29CB2063AEB (Type_t* ___0_type, String_t* ___1_paramName, int32_t ___2_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* G_B6_0 = NULL;
	{
		Type_t* L_0 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		Type_t* L_4 = ___0_type;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_4);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		Type_t* L_6 = ___0_type;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_6);
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		Type_t* L_8 = ___0_type;
		String_t* L_9 = ___1_paramName;
		int32_t L_10 = ___2_index;
		Exception_t* L_11;
		L_11 = Error_TypeContainsGenericParameters_m9469425747709B1D67698F586F698A5069A543FC(L_8, L_9, L_10, NULL);
		G_B6_0 = L_11;
		goto IL_0036;
	}

IL_002e:
	{
		Type_t* L_12 = ___0_type;
		String_t* L_13 = ___1_paramName;
		int32_t L_14 = ___2_index;
		Exception_t* L_15;
		L_15 = Error_TypeIsGeneric_mBF50410FCB13BFC4ABC9988B318BB1F6866DBD72(L_12, L_13, L_14, NULL);
		G_B6_0 = L_15;
	}

IL_0036:
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(G_B6_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeUtils_ValidateType_mE94AD3C043E2FE6C32BBA6C1FC60D29CB2063AEB_RuntimeMethod_var)));
	}

IL_0037:
	{
		return (bool)1;
	}
}
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeUtils::GetInvokeMethod(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeUtils_GetInvokeMethod_m62AB477BF6415EEB6F7108534BAB598CA9CDCA02 (Type_t* ___0_delegateType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_delegateType;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_0, _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2, ((int32_t)52), NULL);
		return L_1;
	}
}
// System.Void System.Dynamic.Utils.TypeUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtils__cctor_mB36C11550B01FFEAF9FC7B99967577D97A50C2ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisType_t_TisType_t_mA23DABAE3023E25FB205F89A2D1F1DBE6576E51F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__44_0_m2BD6021A86F56FAF62819F3E8E5C646C33189C84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__44_1_mEC47DD3839EE48CD21585CB1ECD92E8D26693755_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2;
		L_2 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(111 /* System.Type[] System.Type::GetInterfaces() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var);
		U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* L_3 = ((U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_4 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__44_0_m2BD6021A86F56FAF62819F3E8E5C646C33189C84_RuntimeMethod_var), NULL);
		RuntimeObject* L_5;
		L_5 = Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8((RuntimeObject*)L_2, L_4, Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* L_6 = ((U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD* L_7 = (Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD*)il2cpp_codegen_object_new(Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_m1697902B5A575D059320FCB1AD0B049A34A5FC77(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__44_1_mEC47DD3839EE48CD21585CB1ECD92E8D26693755_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisType_t_TisType_t_mA23DABAE3023E25FB205F89A2D1F1DBE6576E51F(L_5, L_7, Enumerable_Select_TisType_t_TisType_t_mA23DABAE3023E25FB205F89A2D1F1DBE6576E51F_RuntimeMethod_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9;
		L_9 = Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89(L_8, Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var);
		((TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var))->___s_arrayAssignableInterfaces_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var))->___s_arrayAssignableInterfaces_0), (void*)L_9);
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
// System.Void System.Dynamic.Utils.TypeUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2FDD430879029E78453E21DB26F2A00DE0196692 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* L_0 = (U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E*)il2cpp_codegen_object_new(U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1D47C37129713530A6B1FE13BCB381295704FD22(L_0, NULL);
		((U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.Dynamic.Utils.TypeUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1D47C37129713530A6B1FE13BCB381295704FD22 (U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils/<>c::<.cctor>b__44_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__44_0_m2BD6021A86F56FAF62819F3E8E5C646C33189C84 (U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* __this, Type_t* ___0_i, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_i;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		return L_1;
	}
}
// System.Type System.Dynamic.Utils.TypeUtils/<>c::<.cctor>b__44_1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CU3Ec_U3C_cctorU3Eb__44_1_mEC47DD3839EE48CD21585CB1ECD92E8D26693755 (U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* __this, Type_t* ___0_i, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_i;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_0);
		return L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ExpandoClass_get_Keys_m55EC5F3748234BC40E15450CD7FC5EE8A48DBBF0_inline (ExpandoClass_t524164F888FFC60A2C71686D3F448F706D3CDF19* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____keys_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ExpandoData_get_Version_m944EB58E8724C277C1AD92AFA342545AFA008DB3_inline (ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyInfo_t* IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline (IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___U3CIndexerU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
