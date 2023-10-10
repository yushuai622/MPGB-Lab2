﻿#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A;
struct BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IDictionaryU5BU5D_t604DB404DAEF595B12A45890E1D58CF8FF54116C;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
struct ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F;
struct BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B;
struct BaseTree_t93C88620BBC74C7117CD89A87723D83057772909;
struct BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC;
struct BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6;
struct CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B;
struct CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2;
struct CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF;
struct CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A;
struct CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1;
struct CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F;
struct ConsoleCancelEventHandler_t7E25E018B7944F60BD34AE7F32E119F34DCEA053;
struct DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct Exception_t;
struct FailedPredicateException_t7647268B6372BADB40830A6445086CF953B910D5;
struct HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E;
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
struct ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct IToken_t620DE9D086BA75DE074EF126922C24743D268A42;
struct ITokenSource_t7B8A9A88E1B36AA6B44922BBAB5AD6DAF4F22C57;
struct ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047;
struct ITree_t701625166D49E7918A0615A08F20EA8219135176;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE;
struct MethodInfo_t;
struct MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D;
struct MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F;
struct MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1;
struct MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7;
struct MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B;
struct MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036;
struct NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849;
struct ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035;
struct RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55;
struct RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0;
struct RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
struct UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E;
struct HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B;
struct KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64;
struct ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C;

IL2CPP_EXTERN_C RuntimeClass* BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseTree_t93C88620BBC74C7117CD89A87723D83057772909_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FailedPredicateException_t7647268B6372BADB40830A6445086CF953B910D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITokenSource_t7B8A9A88E1B36AA6B44922BBAB5AD6DAF4F22C57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral010FD1A4E7CFE170E6B749B2D8B6E689C923A6F1;
IL2CPP_EXTERN_C String_t* _stringLiteral028C74A0DB1E632B4407A7E6DCFFFBD9B074CF39;
IL2CPP_EXTERN_C String_t* _stringLiteral02B0B24969585DD39673A5765009AF30D6D2E538;
IL2CPP_EXTERN_C String_t* _stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469;
IL2CPP_EXTERN_C String_t* _stringLiteral068F71F7A557397093A781E1521F2E89FC1A116E;
IL2CPP_EXTERN_C String_t* _stringLiteral0DE550D00484E81C95E34B74340AAC5C93E738D6;
IL2CPP_EXTERN_C String_t* _stringLiteral0F33453EE0F85707619E21D32FDB0D7D909DF122;
IL2CPP_EXTERN_C String_t* _stringLiteral11BBE02CC103A1E73ED5F67A3DD726585A1CBA5C;
IL2CPP_EXTERN_C String_t* _stringLiteral1B57723A0AECC89D299D8A1001FED28ABB58509F;
IL2CPP_EXTERN_C String_t* _stringLiteral1E47D32175F4D9BAB39319CCD9FE626B7445E745;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral2606E7B2ED7D70E7FDA31F81CA448C719E23E536;
IL2CPP_EXTERN_C String_t* _stringLiteral268F6D4451955E93860C23D82818D63A9F987F01;
IL2CPP_EXTERN_C String_t* _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral2A1AEDB5CAEE8E90D62850F6BDC43033E49619F2;
IL2CPP_EXTERN_C String_t* _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100;
IL2CPP_EXTERN_C String_t* _stringLiteral2E17E19787A8E4C68AF47C8C58B4F88730743736;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral459B1E9592507DEB4EB3B07B39793CA93C67A3B0;
IL2CPP_EXTERN_C String_t* _stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1;
IL2CPP_EXTERN_C String_t* _stringLiteral5344162BAF253B06CDAC1B2EC90C6B5A8233C777;
IL2CPP_EXTERN_C String_t* _stringLiteral56626DE0EFD91D9DFE7EAC03BEA17A2B3DDA87DA;
IL2CPP_EXTERN_C String_t* _stringLiteral572FF46D3B9511AD8D3805B2824FB1339FD57103;
IL2CPP_EXTERN_C String_t* _stringLiteral5AE6F45871669BB25CC574BBF0A2C2201C4F7B7B;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5C95E0D0E98D3DD213552AD10BE8E81AA339A450;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteral67BDD04DFC424EFEBF0D139BB53B98B27AB2A5F1;
IL2CPP_EXTERN_C String_t* _stringLiteral6836D94586B3887F0DB2295A1C064F27F99A5DE2;
IL2CPP_EXTERN_C String_t* _stringLiteral696D2E96A654F212949DF20C24EA9CE3495AFA27;
IL2CPP_EXTERN_C String_t* _stringLiteral6B4494BD6F11C452454C855BB3BEC40FBCE30246;
IL2CPP_EXTERN_C String_t* _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral776C7FDE238457F8357FDF71D2BE4203F194B5D8;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral78A4A39F1613CF57ABBD54EBBD31811CC088F731;
IL2CPP_EXTERN_C String_t* _stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB5A72888DBC6EACBDA745AEF7C34A44085ECD4;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral7FF7BFD48B5116970DBD1DBF8800870DDBAF5C0F;
IL2CPP_EXTERN_C String_t* _stringLiteral831E78D748882CC97BD9765EB1675D24CE94B470;
IL2CPP_EXTERN_C String_t* _stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral89613337171E9DEFA7887E7F72F841FC8CD2A91D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1;
IL2CPP_EXTERN_C String_t* _stringLiteralA037E63CFA2C247B31B0B97D99D6BAF5418D6796;
IL2CPP_EXTERN_C String_t* _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4;
IL2CPP_EXTERN_C String_t* _stringLiteralB4C806C39305FD572A99C388DB132BCFFB866300;
IL2CPP_EXTERN_C String_t* _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
IL2CPP_EXTERN_C String_t* _stringLiteralB672AC300BB7EC71FCB5654BA90363C9A37A0087;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2EC8D8B53A3AA7BF79DEF31EB6943C932CE10DE;
IL2CPP_EXTERN_C String_t* _stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC;
IL2CPP_EXTERN_C String_t* _stringLiteralC433421D84928768AA8C58FA51C38B423E100127;
IL2CPP_EXTERN_C String_t* _stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B9A3E6B4E5DD6E90D566B3DE5E6FD733060F58;
IL2CPP_EXTERN_C String_t* _stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284;
IL2CPP_EXTERN_C String_t* _stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C;
IL2CPP_EXTERN_C String_t* _stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD9CF256B478BDF53420854CC509AB9C76BD6842C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB38643AD57CD8AD5D44FF10AFEC78B1EA05C2E2;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralDC86DAA27565F3C4B534F244D9F1CBFE024D7EAE;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE57A52EEA6A5FF8543FFE4D8ACA937ACCD7C5458;
IL2CPP_EXTERN_C String_t* _stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379;
IL2CPP_EXTERN_C String_t* _stringLiteralECD4CB8C5D196C86050FD2C960761F6FA892771D;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF269882C28438C0C37FD3291D5FEFE33D1D2C112;
IL2CPP_EXTERN_C String_t* _stringLiteralF69DA5EB0BBCF119F35BBA6BB5AF87157B85B1BA;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C String_t* _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27;
IL2CPP_EXTERN_C String_t* _stringLiteralFE6D7C0828400A663B0542D323AD5ADC39004047;
IL2CPP_EXTERN_C const RuntimeMethod* BaseRecognizer_RecoverFromMismatchedToken_m597FE584AABCAA3C6A299CC07EFF17865BDDFBD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseTree_AddChild_mE1812AA9A902D4E415B5BA551CC58E931F7F096C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitSet_Clone_m7705A1E1936D52211ABE64652D16995764BBD028_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DFA_NoViableAlt_m8E03223AE4AA80BC012B1A8839E92C251065D2E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashListEnumerator_MoveNext_m0951BFFFD00BD7B9FB8893C1AD2615492A9C5F4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashListEnumerator_Reset_m05371E0A8845F182918036B789782609A2AACD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashListEnumerator_get_Current_mFFEA5D74E030010A78A43A2C6B4E60D18868E552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashListEnumerator_get_Entry_m95CC04072816723D5C4D6084A461EF6C2326B338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashListEnumerator_get_Key_mC881C107D02F93542494756DED272B4DF5084091_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashListEnumerator_get_Value_m841A520B22EC84D8EFAD3AC14211FFC153AA4F57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_MatchRange_mFD3938618A029EA02074DD8C93C890F2BA062343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_Match_m2531BB7CD74811277E38C4F83B4CCCCA22DC7E7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_Match_m9709AF44AED1D39EA5ABB719AC29F37C99BBE7A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuleReturnScope_set_Start_m963093F8EBC010F402465E30420D1FD0371C4F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuleReturnScope_set_Stop_m2316D4C9BDE31872A431B4629C5FC7E9B007F760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuleReturnScope_set_Tree_m61FF6DB27BAE052BB5D21C9D8C9A1E547E8B8EE3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A;
struct BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IDictionaryU5BU5D_t604DB404DAEF595B12A45890E1D58CF8FF54116C;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tCAA40B4F3E8EB56A62A48B6B46E98F72D33EE072 
{
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___data;
	int32_t ___n;
	int32_t ___p;
	int32_t ___line;
	int32_t ___charPositionInLine;
	int32_t ___markDepth;
	RuntimeObject* ___markers;
	int32_t ___lastMarker;
};
struct BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B  : public RuntimeObject
{
	RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___state;
};
struct BaseTree_t93C88620BBC74C7117CD89A87723D83057772909  : public RuntimeObject
{
	RuntimeObject* ___children;
};
struct BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC  : public RuntimeObject
{
	int32_t ___uniqueNodeID;
};
struct BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6  : public RuntimeObject
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___bits;
};
struct CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B  : public RuntimeObject
{
	int32_t ___p;
	int32_t ___line;
	int32_t ___charPositionInLine;
};
struct CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF  : public RuntimeObject
{
	int32_t ___type;
	int32_t ___line;
	int32_t ___charPositionInLine;
	int32_t ___channel;
	RuntimeObject* ___input;
	String_t* ___text;
	int32_t ___index;
	int32_t ___start;
	int32_t ___stop;
};
struct CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A  : public RuntimeObject
{
	RuntimeObject* ___tokenSource;
	RuntimeObject* ___tokens;
	RuntimeObject* ___channelOverrideMap;
	HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* ___discardSet;
	int32_t ___channel;
	bool ___discardOffChannelTokens;
	int32_t ___lastMarker;
	int32_t ___p;
};
struct Console_t5EDF9498D011BD48287171978EDBBA6964829C3E  : public RuntimeObject
{
};
struct DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F  : public RuntimeObject
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___eot;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___eof;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___min;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___max;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___accept;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___special;
	Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* ___transition;
	int32_t ___decisionNumber;
	SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* ___specialStateTransitionHandler;
	BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* ___recognizer;
};
struct HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E  : public RuntimeObject
{
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____dictionary;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____insertionOrderList;
	int32_t ____version;
};
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets;
	int32_t ____count;
	int32_t ____occupancy;
	int32_t ____loadsize;
	float ____loadFactor;
	int32_t ____version;
	bool ____isWriterInProgress;
	RuntimeObject* ____keys;
	RuntimeObject* ____values;
	RuntimeObject* ____keycomparer;
	RuntimeObject* ____syncRoot;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0  : public RuntimeObject
{
	BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* ___following;
	int32_t ___followingStackPointer;
	bool ___errorRecovery;
	int32_t ___lastErrorIndex;
	bool ___failed;
	int32_t ___syntaxErrors;
	int32_t ___backtracking;
	IDictionaryU5BU5D_t604DB404DAEF595B12A45890E1D58CF8FF54116C* ___ruleMemo;
	RuntimeObject* ___token;
	int32_t ___tokenStartCharIndex;
	int32_t ___tokenStartLine;
	int32_t ___tokenStartCharPositionInLine;
	int32_t ___channel;
	int32_t ___type;
	String_t* ___text;
};
struct RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B  : public RuntimeObject
{
	HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* ____hashList;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____orderList;
	int32_t ____mode;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64  : public RuntimeObject
{
	HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* ____hashList;
};
struct ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C  : public RuntimeObject
{
	HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* ____hashList;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1  : public BaseTree_t93C88620BBC74C7117CD89A87723D83057772909
{
	int32_t ___startIndex;
	int32_t ___stopIndex;
	RuntimeObject* ___token;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___parent;
	int32_t ___childIndex;
};
struct CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F  : public BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC
{
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE  : public BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B
{
	RuntimeObject* ___input;
};
struct Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849  : public BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B
{
	RuntimeObject* ___input;
};
struct ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035  : public RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2
{
	RuntimeObject* ___start;
	RuntimeObject* ___stop;
};
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine;
	String_t* ___CoreNewLineStr;
	RuntimeObject* ____internalFormatProvider;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
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
struct CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2  : public CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1
{
	RuntimeObject* ___input;
	RuntimeObject* ___start;
	RuntimeObject* ___stop;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___trappedException;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55  : public Exception_t
{
	RuntimeObject* ___input;
	int32_t ___index;
	RuntimeObject* ___token;
	RuntimeObject* ___node;
	int32_t ___c;
	int32_t ___line;
	int32_t ___charPositionInLine;
	bool ___approximateLineInfo;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02  : public RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55
{
	int32_t ___decisionNumber;
};
struct FailedPredicateException_t7647268B6372BADB40830A6445086CF953B910D5  : public RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55
{
	String_t* ___ruleName;
	String_t* ___predicateText;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F  : public RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55
{
	int32_t ___a;
	int32_t ___b;
};
struct MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1  : public RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55
{
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___expecting;
};
struct MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7  : public RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55
{
	int32_t ___expecting;
};
struct MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B  : public RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55
{
	int32_t ___expecting;
};
struct NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC  : public RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55
{
	String_t* ___grammarDecisionDescription;
	int32_t ___decisionNumber;
	int32_t ___stateNumber;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E  : public MulticastDelegate_t
{
};
struct MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D  : public MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1
{
};
struct MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036  : public MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7
{
	RuntimeObject* ___inserted;
};
struct UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383  : public MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7
{
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_StaticFields
{
	String_t* ___NEXT_TOKEN_RULE_NAME;
};
struct BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_StaticFields
{
	int32_t ___MOD_MASK;
};
struct Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_StaticFields
{
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___stdout;
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___stderr;
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___stdin;
	bool ___IsRunningOnAndroid;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___inputEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___outputEncoding;
	ConsoleCancelEventHandler_t7E25E018B7944F60BD34AE7F32E119F34DCEA053* ___cancel_event;
};
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields
{
	int32_t ___MIN_TOKEN_TYPE;
	int32_t ___EOF;
	RuntimeObject* ___EOF_TOKEN;
	RuntimeObject* ___INVALID_TOKEN;
	RuntimeObject* ___SKIP_TOKEN;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
struct Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A  : public RuntimeArray
{
	ALIGN_FIELD (8) Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* m_Items[1];

	inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct IDictionaryU5BU5D_t604DB404DAEF595B12A45890E1D58CF8FF54116C  : public RuntimeArray
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
struct BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588  : public RuntimeArray
{
	ALIGN_FIELD (8) BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* m_Items[1];

	inline BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashListEnumerator__ctor_mB536933C6F0E9616845FE97B0F87E04BB5EE4F62 (HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B* __this, HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* ___0_hashList, int32_t ___1_mode, const RuntimeMethod* method) ;
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
inline void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mCB787906A76DD4E38D8DB638777CFE7A163C1296 (ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C* __this, HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* ___0_hashList, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mBEC4F1ECB815FABCAF91B41FE5E50756763F3F71 (KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* __this, HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* ___0_hashList, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashList_get_Item_mE6329F3B955C375DF3A684E78BB9A14433F750F1 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_mD107FDB306D8FF4CDC8AF74F604AEE8ECC58B6C7 (KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashList_get_IsSynchronized_m8DA13ED9D47E0BE7DE2C9A26CAD224BDE67D8FB1 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashList_get_Count_m323B59F1DB3780FBCB52F2C7020DB190F4838DF4 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_CopyKeysTo_mBD8D33881DDE7DCA57DA8601C29929BA3846C4E8 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashList_get_SyncRoot_m7F74213B6AA9A464BAA83F3B2C9E7B659707B162 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_CopyValuesTo_m9305B1967C26D2E4C9F76D01C58D53ECD86DFDE7 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m70D980F27F5C788DEE57F4A7958F831AAED7990D (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, String_t* ___0_message, Exception_t* ___1_inner, RuntimeObject* ___2_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException_ExtractInformationFromTreeNodeStream_mE7B4290CF045BB4F96B68F3A5E5DD2FC8CEA93C3 (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, RuntimeObject* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_m5B378A324216AAA7529462F6C80B92DC0DD004E4 (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, int32_t ___0_type, String_t* ___1_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonErrorNode__ctor_m721EE235C10A1BC98ED3AD8211980CA711B35E03 (CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2* __this, RuntimeObject* ___0_input, RuntimeObject* ___1_start, RuntimeObject* ___2_stop, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___3_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m40F93CBFC9DD9E4F9F94B57A2D29FC77C275D0F9 (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MissingTokenException_get_MissingType_mA67E34404F3038563111102F4428E8917908AEA7 (MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9 (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnwantedTokenException_get_UnexpectedToken_m6BBA9AE0241A5672D271915005C3402AD55F5E6B_inline (UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m333F7053371ADDD87ED32F45659B7230D9DB2B35 (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, RuntimeObject* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeAdaptor__ctor_m91216E0EB32B0119A266B0A678A18CC441D60F17 (BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree__ctor_m9BBF12D742E39E6AB8F68D47E5DB68CC882A37DF (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_inline (SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* __this, DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* ___0_dfa, int32_t ___1_s, RuntimeObject* ___2_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA_NoViableAlt_m8E03223AE4AA80BC012B1A8839E92C251065D2E5 (DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* __this, int32_t ___0_s, RuntimeObject* ___1_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1 (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* __this, String_t* ___0_grammarDecisionDescription, int32_t ___1_decisionNumber, int32_t ___2_stateNumber, RuntimeObject* ___3_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* DFA_UnpackEncodedString_mF49858628102B6B81A6A29FBFED81943351CB57C (String_t* ___0_encodedString, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizerSharedState__ctor_m15A6D7A25E2A244035839024D7A03AF8BBDB5630 (RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedTokenException_get_Expecting_m23F654E59D314B73009CA2220DBF30B93C886B43_inline (MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Node_mF9017E74E9C1676B91BA3B92682C2370C1ABA345_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Line_mCF2F4576F154C8738C51851743302742941DE8F7_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_CharPositionInLine_m27A503034EEA24F46F5061A077DBB7F7B3F84A5A_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* Console_get_Error_m0132A8360914E80AD6EEF7A353BC1C75A29AE4BF_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseRecognizer_MismatchIsUnwantedToken_mC87345C4C8D97FBBEE5861D243F945DB18431FB6 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RuntimeObject* ___0_input, int32_t ___1_ttype, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnwantedTokenException__ctor_mF40523A59DD1847F23D54B24EF8783701657D79A (UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383* __this, int32_t ___0_expecting, RuntimeObject* ___1_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseRecognizer_MismatchIsMissingToken_mEFC3B2FC68EA45440158A45E3D3B0C025232E6B1 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RuntimeObject* ___0_input, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___1_follow, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingTokenException__ctor_m1A868C308A09D526E0128AE2237D092D3D11FEDB (MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036* __this, int32_t ___0_expecting, RuntimeObject* ___1_input, RuntimeObject* ___2_inserted, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTokenException__ctor_m9CEA55630C253FF02BE448D3FDCBC53B9433F2F0 (MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* __this, int32_t ___0_expecting, RuntimeObject* ___1_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__ctor_mEBC6F38329924CC3592C6C3C7E668252227F0AFF (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_m917A4F3068BD1B0D6F482B46DD600B638455BCC7 (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, int32_t ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m656B28E89732A1E6E837BD1433899105F0D3F9E5 (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m03C410D375A5BE99E9F9CEA8CDEC3F326F6D55B6 (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, RuntimeObject* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__ctor_m89B9CA6D2666DDB548E3D35BD18C92C05F332D70 (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, int32_t ___0_nbits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet_SetSize_mA8C03827A54EACBC3CF857F274952711D3C582CF (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, int32_t ___0_nwords, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitSet_WordNumber_m5874E6BFE415F2C5A8187B709A0DB07310AB9C14 (int32_t ___0_bit, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitSet_BitMask_m6D3EC6D03A7B98F5D5D33B6F1AB1E970F201B6D3 (int32_t ___0_bitNumber, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseTree_get_Children_m4BFF76AB0911C01D66555175399C10CA6F022D1C_inline (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTokenException__ctor_mEB1D641F6860C5381D2D4BF4E140643B0F7B8168 (MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedSetException__ctor_mA55442968852FE2A4BE38627DABEED01A57B764E (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_m1896802BFE995C01D0331380FA3FB24C21A257E7 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_m7F1EE5D983A174EEDC315B30CB8D40992468ECAC (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___0_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_Reset_m1BCCB93F4B484CBC862B17E5D0F796C76EB03973 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_m78782A6AC6EC6C48071957BFFEA810F80B579124 (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, RuntimeObject* ___0_input, int32_t ___1_type, int32_t ___2_channel, int32_t ___3_start, int32_t ___4_stop, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedRangeException__ctor_m72505ACB0157E02D7E7EC1E4DC124F093C3E645A (MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* __this, int32_t ___0_a, int32_t ___1_b, RuntimeObject* ___2_input, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Char_m9D0DDF8D55FE6E996FEB4FEC29B102535F9C526A_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_GetCharErrorDisplay_m1425AB18E2A4A0C7EAF9D923D46B8FA390779BAA (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, int32_t ___0_c, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedRangeException_get_A_m22C232FC1702EF312637EA813E487BE0AB0E134D_inline (MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedRangeException_get_B_mA8D3F9336F9646553207DF18AADD152ECEF36357_inline (MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRecognizer_GetErrorMessage_m0BE8FCB0FDC9E8744ACB54A082DF3DC455A4CE85 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___0_e, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tokenNames, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m8270C8361D2796C5C4659D441829CAFEEFBAC91C (Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharStreamState__ctor_mC01B54CC1529B72E480BACE306D22C51B4AEC993 (CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleReturnScope__ctor_m5D6A8AFA6864551D0E669074293F2003DBB500A6 (RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream__ctor_mFBE1F326852574C92472BA62489865B4B7529EA2 (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashList_Contains_mB70166AD9E278B7615B022910DDF0C73692A3305 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashList_get_IsReadOnly_mC2E5D241019E6E330D2CF13CFE73946A5DFD6858 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____dictionary;
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(33, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashList_GetEnumerator_m4E0D5C576CB0BCAF43795593EDAC770F7EA9AD48 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B* L_0 = (HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B*)il2cpp_codegen_object_new(HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B_il2cpp_TypeInfo_var);
		HashListEnumerator__ctor_mB536933C6F0E9616845FE97B0F87E04BB5EE4F62(L_0, __this, 2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashList_get_Item_mE6329F3B955C375DF3A684E78BB9A14433F750F1 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____dictionary;
		RuntimeObject* L_1 = ___0_key;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_set_Item_m18DA78273F807E5A6FD2184BA328E638398F2D20 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____dictionary;
		RuntimeObject* L_1 = ___0_key;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(26, L_0, L_1);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = __this->____dictionary;
		RuntimeObject* L_4 = ___0_key;
		RuntimeObject* L_5 = ___1_value;
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30, L_3, L_4, L_5);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_7 = __this->____insertionOrderList;
		RuntimeObject* L_8 = ___0_key;
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_7, L_8, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
	}

IL_002c:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_Remove_mCCF57F1D39ABF3CDAFDEA6024934B8D63E102152 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____dictionary;
		RuntimeObject* L_1 = ___0_key;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(39, L_0, L_1);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = __this->____insertionOrderList;
		RuntimeObject* L_3 = ___0_key;
		bool L_4;
		L_4 = List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7(L_2, L_3, List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_RuntimeMethod_var);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashList_Contains_mB70166AD9E278B7615B022910DDF0C73692A3305 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____dictionary;
		RuntimeObject* L_1 = ___0_key;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(26, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_Clear_m18E0D2FA8B3C5CEDD89C8CBAD942B0BEDC86FD93 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____dictionary;
		VirtualActionInvoker0::Invoke(24, L_0);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = __this->____insertionOrderList;
		List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_inline(L_1, List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_RuntimeMethod_var);
		int32_t L_2 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_2, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashList_get_Values_mEC42CE302C816EF459AD6F728EA9A2ADAB9A034D (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C* L_0 = (ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C*)il2cpp_codegen_object_new(ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C_il2cpp_TypeInfo_var);
		ValueCollection__ctor_mCB787906A76DD4E38D8DB638777CFE7A163C1296(L_0, __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_Add_m8D589877E0786BB220015EBDDD68730F84D40C76 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____dictionary;
		RuntimeObject* L_1 = ___0_key;
		RuntimeObject* L_2 = ___1_value;
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23, L_0, L_1, L_2);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = __this->____insertionOrderList;
		RuntimeObject* L_4 = ___0_key;
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_3, L_4, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashList_get_Keys_mA08637E5A31650FD2B681EFF4527D98AFECED5F9 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* L_0 = (KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64*)il2cpp_codegen_object_new(KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64_il2cpp_TypeInfo_var);
		KeyCollection__ctor_mBEC4F1ECB815FABCAF91B41FE5E50756763F3F71(L_0, __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashList_get_IsFixedSize_mA7283F7E6BCFB3FD7E99030895FF3A8F54E24F3A (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____dictionary;
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(34, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashList_get_IsSynchronized_m8DA13ED9D47E0BE7DE2C9A26CAD224BDE67D8FB1 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____dictionary;
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(35, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashList_get_Count_m323B59F1DB3780FBCB52F2C7020DB190F4838DF4 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____dictionary;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(41, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_CopyTo_mA16F3BC5D240D7C26885A6E281F64B656F16C6FD (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->____insertionOrderList;
		int32_t L_1;
		L_1 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_0, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0050;
	}

IL_0010:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = __this->____insertionOrderList;
		int32_t L_3 = V_1;
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_2, L_3, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = __this->____dictionary;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6 = __this->____insertionOrderList;
		int32_t L_7 = V_1;
		RuntimeObject* L_8;
		L_8 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_6, L_7, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29, L_5, L_8);
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&V_2), L_4, L_9, NULL);
		RuntimeArray* L_10 = ___0_array;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_11 = V_2;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_12 = L_11;
		RuntimeObject* L_13 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_12);
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_10, L_13, L_15, NULL);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0050:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashList_get_SyncRoot_m7F74213B6AA9A464BAA83F3B2C9E7B659707B162 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____dictionary;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(40, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashList_System_Collections_IEnumerable_GetEnumerator_m43FF729AC4A7E83270176A006293912FA68DE978 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B* L_0 = (HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B*)il2cpp_codegen_object_new(HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B_il2cpp_TypeInfo_var);
		HashListEnumerator__ctor_mB536933C6F0E9616845FE97B0F87E04BB5EE4F62(L_0, __this, 2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_CopyKeysTo_mBD8D33881DDE7DCA57DA8601C29929BA3846C4E8 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->____insertionOrderList;
		int32_t L_1;
		L_1 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_0, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_002c;
	}

IL_0010:
	{
		RuntimeArray* L_2 = ___0_array;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = __this->____insertionOrderList;
		int32_t L_4 = V_1;
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_3, L_4, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		int32_t L_6 = ___1_index;
		int32_t L_7 = L_6;
		___1_index = ((int32_t)il2cpp_codegen_add(L_7, 1));
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_2, L_5, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002c:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_CopyValuesTo_m9305B1967C26D2E4C9F76D01C58D53ECD86DFDE7 (HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->____insertionOrderList;
		int32_t L_1;
		L_1 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_0, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0037;
	}

IL_0010:
	{
		RuntimeArray* L_2 = ___0_array;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = __this->____dictionary;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = __this->____insertionOrderList;
		int32_t L_5 = V_1;
		RuntimeObject* L_6;
		L_6 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_4, L_5, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29, L_3, L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9 = L_8;
		___1_index = ((int32_t)il2cpp_codegen_add(L_9, 1));
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_2, L_7, L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0010;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashListEnumerator__ctor_mB536933C6F0E9616845FE97B0F87E04BB5EE4F62 (HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B* __this, HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* ___0_hashList, int32_t ___1_mode, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = ___0_hashList;
		__this->____hashList = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hashList), (void*)L_0);
		int32_t L_1 = ___1_mode;
		__this->____mode = L_1;
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_2 = ___0_hashList;
		int32_t L_3 = L_2->____version;
		__this->____version = L_3;
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_4 = ___0_hashList;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = L_4->____insertionOrderList;
		__this->____orderList = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____orderList), (void*)L_5);
		__this->____index = 0;
		__this->____key = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____key), (void*)NULL);
		__this->____value = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashListEnumerator_get_Key_mC881C107D02F93542494756DED272B4DF5084091 (HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashListEnumerator_get_Key_mC881C107D02F93542494756DED272B4DF5084091_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____key;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashListEnumerator_get_Value_m841A520B22EC84D8EFAD3AC14211FFC153AA4F57 (HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashListEnumerator_get_Value_m841A520B22EC84D8EFAD3AC14211FFC153AA4F57_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____value;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB HashListEnumerator_get_Entry_m95CC04072816723D5C4D6084A461EF6C2326B338 (HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashListEnumerator_get_Entry_m95CC04072816723D5C4D6084A461EF6C2326B338_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____key;
		RuntimeObject* L_3 = __this->____value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_4;
		memset((&L_4), 0, sizeof(L_4));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_4), L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashListEnumerator_Reset_m05371E0A8845F182918036B789782609A2AACD3A (HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_1 = __this->____hashList;
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashListEnumerator_Reset_m05371E0A8845F182918036B789782609A2AACD3A_RuntimeMethod_var)));
	}

IL_001e:
	{
		__this->____index = 0;
		__this->____key = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____key), (void*)NULL);
		__this->____value = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashListEnumerator_get_Current_mFFEA5D74E030010A78A43A2C6B4E60D18868E552 (HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashListEnumerator_get_Current_mFFEA5D74E030010A78A43A2C6B4E60D18868E552_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = __this->____mode;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_3 = __this->____key;
		return L_3;
	}

IL_0022:
	{
		int32_t L_4 = __this->____mode;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_5 = __this->____value;
		return L_5;
	}

IL_0032:
	{
		RuntimeObject* L_6 = __this->____key;
		RuntimeObject* L_7 = __this->____value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_6, L_7, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9 = L_8;
		RuntimeObject* L_10 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashListEnumerator_MoveNext_m0951BFFFD00BD7B9FB8893C1AD2615492A9C5F4A (HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____version;
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_1 = __this->____hashList;
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashListEnumerator_MoveNext_m0951BFFFD00BD7B9FB8893C1AD2615492A9C5F4A_RuntimeMethod_var)));
	}

IL_001e:
	{
		int32_t L_4 = __this->____index;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = __this->____orderList;
		int32_t L_6;
		L_6 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_5, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		if ((((int32_t)L_4) >= ((int32_t)L_6)))
		{
			goto IL_006f;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_7 = __this->____orderList;
		int32_t L_8 = __this->____index;
		RuntimeObject* L_9;
		L_9 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_7, L_8, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		__this->____key = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____key), (void*)L_9);
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_10 = __this->____hashList;
		RuntimeObject* L_11 = __this->____key;
		RuntimeObject* L_12;
		L_12 = HashList_get_Item_mE6329F3B955C375DF3A684E78BB9A14433F750F1(L_10, L_11, NULL);
		__this->____value = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value), (void*)L_12);
		int32_t L_13 = __this->____index;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return (bool)1;
	}

IL_006f:
	{
		__this->____key = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____key), (void*)NULL);
		return (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mBEC4F1ECB815FABCAF91B41FE5E50756763F3F71 (KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* __this, HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* ___0_hashList, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = ___0_hashList;
		__this->____hashList = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hashList), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyCollection_ToString_m6EF59F9DFC67DF2DFB4A9BB13C4DC4F4913C315C (KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_3 = __this->____hashList;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = L_3->____insertionOrderList;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0044;
	}

IL_0022:
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		StringBuilder_t* L_6 = V_0;
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0032:
	{
		StringBuilder_t* L_8 = V_0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = V_1;
		int32_t L_10 = V_2;
		RuntimeObject* L_11;
		L_11 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_9, L_10, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_8, L_11, NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0044:
	{
		int32_t L_14 = V_2;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_15 = V_1;
		int32_t L_16;
		L_16 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_15, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0022;
		}
	}
	{
		StringBuilder_t* L_17 = V_0;
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		StringBuilder_t* L_19 = V_0;
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_19);
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyCollection_Equals_m3798B59389580FA8FDCF88FF6EA3B809C4BBC361 (KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_o;
		if (!((KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64*)IsInstSealed((RuntimeObject*)L_0, KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		RuntimeObject* L_1 = ___0_o;
		V_0 = ((KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64*)CastclassSealed((RuntimeObject*)L_1, KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64_il2cpp_TypeInfo_var));
		int32_t L_2;
		L_2 = KeyCollection_get_Count_mD107FDB306D8FF4CDC8AF74F604AEE8ECC58B6C7(__this, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* L_3 = V_0;
		int32_t L_4;
		L_4 = KeyCollection_get_Count_mD107FDB306D8FF4CDC8AF74F604AEE8ECC58B6C7(L_3, NULL);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}

IL_0024:
	{
		int32_t L_5;
		L_5 = KeyCollection_get_Count_mD107FDB306D8FF4CDC8AF74F604AEE8ECC58B6C7(__this, NULL);
		KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* L_6 = V_0;
		int32_t L_7;
		L_7 = KeyCollection_get_Count_mD107FDB306D8FF4CDC8AF74F604AEE8ECC58B6C7(L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0092;
		}
	}
	{
		V_1 = 0;
		goto IL_0089;
	}

IL_0036:
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_8 = __this->____hashList;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = L_8->____insertionOrderList;
		int32_t L_10 = V_1;
		RuntimeObject* L_11;
		L_11 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_9, L_10, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* L_12 = V_0;
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_13 = L_12->____hashList;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_14 = L_13->____insertionOrderList;
		int32_t L_15 = V_1;
		RuntimeObject* L_16;
		L_16 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_14, L_15, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		if ((((RuntimeObject*)(RuntimeObject*)L_11) == ((RuntimeObject*)(RuntimeObject*)L_16)))
		{
			goto IL_0083;
		}
	}
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_17 = __this->____hashList;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_18 = L_17->____insertionOrderList;
		int32_t L_19 = V_1;
		RuntimeObject* L_20;
		L_20 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_18, L_19, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* L_21 = V_0;
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_22 = L_21->____hashList;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_23 = L_22->____insertionOrderList;
		int32_t L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_23, L_24, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		bool L_26;
		L_26 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_20, L_25);
		if (!L_26)
		{
			goto IL_0085;
		}
	}

IL_0083:
	{
		return (bool)1;
	}

IL_0085:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0089:
	{
		int32_t L_28 = V_1;
		int32_t L_29;
		L_29 = KeyCollection_get_Count_mD107FDB306D8FF4CDC8AF74F604AEE8ECC58B6C7(__this, NULL);
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0036;
		}
	}

IL_0092:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_GetHashCode_mD940C678421CB01A077879CB9AA2CDD4E0D8C32A (KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* __this, const RuntimeMethod* method) 
{
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = __this->____hashList;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = L_0->____insertionOrderList;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyCollection_get_IsSynchronized_m27BFEDBF51864490EB6206382893841FABD7256B (KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* __this, const RuntimeMethod* method) 
{
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = __this->____hashList;
		bool L_1;
		L_1 = HashList_get_IsSynchronized_m8DA13ED9D47E0BE7DE2C9A26CAD224BDE67D8FB1(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_mD107FDB306D8FF4CDC8AF74F604AEE8ECC58B6C7 (KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* __this, const RuntimeMethod* method) 
{
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = __this->____hashList;
		int32_t L_1;
		L_1 = HashList_get_Count_m323B59F1DB3780FBCB52F2C7020DB190F4838DF4(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection_CopyTo_mA1CFF3899A3D96A604E56BF30F16EFA386904E9C (KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = __this->____hashList;
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		HashList_CopyKeysTo_mBD8D33881DDE7DCA57DA8601C29929BA3846C4E8(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyCollection_get_SyncRoot_mDDDFA69AD4AB86E23AA4E6BB59BE5FF445291C20 (KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* __this, const RuntimeMethod* method) 
{
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = __this->____hashList;
		RuntimeObject* L_1;
		L_1 = HashList_get_SyncRoot_m7F74213B6AA9A464BAA83F3B2C9E7B659707B162(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyCollection_GetEnumerator_m1C8BB38168677C98666114609D6337C34E0D6C58 (KeyCollection_tE29FEB342FBD7F1063C789EA338953D236D99B64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = __this->____hashList;
		HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B* L_1 = (HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B*)il2cpp_codegen_object_new(HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B_il2cpp_TypeInfo_var);
		HashListEnumerator__ctor_mB536933C6F0E9616845FE97B0F87E04BB5EE4F62(L_1, L_0, 0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mCB787906A76DD4E38D8DB638777CFE7A163C1296 (ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C* __this, HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* ___0_hashList, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = ___0_hashList;
		__this->____hashList = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hashList), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueCollection_ToString_m45A7EB6B63519683EA7CAA7BE575CB2F0A52DC83 (ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	StringBuilder_t* G_B3_0 = NULL;
	StringBuilder_t* G_B2_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	StringBuilder_t* G_B4_1 = NULL;
	StringBuilder_t* G_B7_0 = NULL;
	StringBuilder_t* G_B6_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	StringBuilder_t* G_B8_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_3 = __this->____hashList;
		HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B* L_4 = (HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B*)il2cpp_codegen_object_new(HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B_il2cpp_TypeInfo_var);
		HashListEnumerator__ctor_mB536933C6F0E9616845FE97B0F87E04BB5EE4F62(L_4, L_3, 1, NULL);
		V_1 = L_4;
		RuntimeObject* L_5 = V_1;
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
		if (!L_6)
		{
			goto IL_0075;
		}
	}
	{
		StringBuilder_t* L_7 = V_0;
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
		G_B2_0 = L_7;
	}
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
		G_B4_0 = L_11;
		G_B4_1 = G_B2_0;
		goto IL_003d;
	}

IL_0038:
	{
		G_B4_0 = ((RuntimeObject*)(_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174));
		G_B4_1 = G_B3_0;
	}

IL_003d:
	{
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(G_B4_1, G_B4_0, NULL);
		goto IL_006d;
	}

IL_0045:
	{
		StringBuilder_t* L_13 = V_0;
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_1;
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
		if (!L_17)
		{
			G_B7_0 = L_15;
			goto IL_0062;
		}
		G_B6_0 = L_15;
	}
	{
		RuntimeObject* L_18 = V_1;
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
		G_B8_0 = L_19;
		G_B8_1 = G_B6_0;
		goto IL_0067;
	}

IL_0062:
	{
		G_B8_0 = ((RuntimeObject*)(_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174));
		G_B8_1 = G_B7_0;
	}

IL_0067:
	{
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(G_B8_1, G_B8_0, NULL);
	}

IL_006d:
	{
		RuntimeObject* L_21 = V_1;
		bool L_22;
		L_22 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
		if (L_22)
		{
			goto IL_0045;
		}
	}

IL_0075:
	{
		StringBuilder_t* L_23 = V_0;
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		StringBuilder_t* L_25 = V_0;
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_25);
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_get_IsSynchronized_m1FAFD93EFD02B11F2643E9393389EC9D78E7266B (ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C* __this, const RuntimeMethod* method) 
{
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = __this->____hashList;
		bool L_1;
		L_1 = HashList_get_IsSynchronized_m8DA13ED9D47E0BE7DE2C9A26CAD224BDE67D8FB1(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_mF26F237C72389533FF9128227F1C4F382C33D2CB (ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C* __this, const RuntimeMethod* method) 
{
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = __this->____hashList;
		int32_t L_1;
		L_1 = HashList_get_Count_m323B59F1DB3780FBCB52F2C7020DB190F4838DF4(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m26B8CF0AC389C0F96938E7E2822014483A8A67AD (ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = __this->____hashList;
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		HashList_CopyValuesTo_m9305B1967C26D2E4C9F76D01C58D53ECD86DFDE7(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_get_SyncRoot_mD09E73CD368F402ADCDA8AA996872FC53661BB1F (ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C* __this, const RuntimeMethod* method) 
{
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = __this->____hashList;
		RuntimeObject* L_1;
		L_1 = HashList_get_SyncRoot_m7F74213B6AA9A464BAA83F3B2C9E7B659707B162(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_GetEnumerator_m248453B543D79607D3F0C029FDFCA27C4F3551AD (ValueCollection_t06AE00E39ECBCB12B3201EB7867BC09A66B2739C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_0 = __this->____hashList;
		HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B* L_1 = (HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B*)il2cpp_codegen_object_new(HashListEnumerator_t9D594A091376FA6DA40B3275EFADACAD5AC2BC7B_il2cpp_TypeInfo_var);
		HashListEnumerator__ctor_mB536933C6F0E9616845FE97B0F87E04BB5EE4F62(L_1, L_0, 1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m656B28E89732A1E6E837BD1433899105F0D3F9E5 (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		RecognitionException__ctor_m70D980F27F5C788DEE57F4A7958F831AAED7990D(__this, (String_t*)NULL, (Exception_t*)NULL, (RuntimeObject*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_mBC97080D22543F9B12719E704A0C90AF84597A43 (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		RecognitionException__ctor_m70D980F27F5C788DEE57F4A7958F831AAED7990D(__this, L_0, (Exception_t*)NULL, (RuntimeObject*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m03C410D375A5BE99E9F9CEA8CDEC3F326F6D55B6 (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_input;
		RecognitionException__ctor_m70D980F27F5C788DEE57F4A7958F831AAED7990D(__this, (String_t*)NULL, (Exception_t*)NULL, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m70D980F27F5C788DEE57F4A7958F831AAED7990D (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, String_t* ___0_message, Exception_t* ___1_inner, RuntimeObject* ___2_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		RuntimeObject* L_2 = ___2_input;
		__this->___input = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input), (void*)L_2);
		RuntimeObject* L_3 = ___2_input;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_3);
		__this->___index = L_4;
		RuntimeObject* L_5 = ___2_input;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_5, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_6 = ___2_input;
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), 1);
		__this->___token = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token), (void*)L_7);
		RuntimeObject* L_8 = __this->___token;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_8);
		__this->___line = L_9;
		RuntimeObject* L_10 = __this->___token;
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_10);
		__this->___charPositionInLine = L_11;
	}

IL_0057:
	{
		RuntimeObject* L_12 = ___2_input;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_12, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var)))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_13 = ___2_input;
		RecognitionException_ExtractInformationFromTreeNodeStream_mE7B4290CF045BB4F96B68F3A5E5DD2FC8CEA93C3(__this, L_13, NULL);
		return;
	}

IL_0067:
	{
		RuntimeObject* L_14 = ___2_input;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_14, ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var)))
		{
			goto IL_009f;
		}
	}
	{
		RuntimeObject* L_15 = ___2_input;
		int32_t L_16;
		L_16 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_15, 1);
		__this->___c = L_16;
		RuntimeObject* L_17 = ___2_input;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_17, ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var)));
		__this->___line = L_18;
		RuntimeObject* L_19 = ___2_input;
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_19, ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var)));
		__this->___charPositionInLine = L_20;
		return;
	}

IL_009f:
	{
		RuntimeObject* L_21 = ___2_input;
		int32_t L_22;
		L_22 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_21, 1);
		__this->___c = L_22;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___token;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Node_mF9017E74E9C1676B91BA3B92682C2370C1ABA345 (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___node;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Char_m9D0DDF8D55FE6E996FEB4FEC29B102535F9C526A (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___c;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionException_get_CharPositionInLine_m27A503034EEA24F46F5061A077DBB7F7B3F84A5A (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___charPositionInLine;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Line_mCF2F4576F154C8738C51851743302742941DE8F7 (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___line;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionException_get_UnexpectedType_mA18004E0B4484F3AD7425AD1200446CCE0E98499 (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->___input;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = __this->___token;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___input;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var)))
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_4 = __this->___input;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_4, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = __this->___node;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(5, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_7, L_8);
		return L_9;
	}

IL_0046:
	{
		int32_t L_10 = __this->___c;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException_ExtractInformationFromTreeNodeStream_mE7B4290CF045BB4F96B68F3A5E5DD2FC8CEA93C3 (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		RuntimeObject* L_0 = ___0_input;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(1, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, L_1, 1);
		__this->___node = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___node), (void*)L_2);
		RuntimeObject* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		RuntimeObject* L_5 = V_1;
		RuntimeObject* L_6 = __this->___node;
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_5, L_6);
		V_2 = L_7;
		RuntimeObject* L_8 = V_2;
		if (!L_8)
		{
			goto IL_00b0;
		}
	}
	{
		RuntimeObject* L_9 = V_2;
		__this->___token = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token), (void*)L_9);
		RuntimeObject* L_10 = V_2;
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_10);
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		V_3 = (-1);
		RuntimeObject* L_12 = V_0;
		int32_t L_13 = V_3;
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(1, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, L_12, L_13);
		V_4 = L_14;
		goto IL_0092;
	}

IL_004b:
	{
		RuntimeObject* L_15 = V_1;
		RuntimeObject* L_16 = V_4;
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_15, L_16);
		V_5 = L_17;
		RuntimeObject* L_18 = V_5;
		if (!L_18)
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject* L_19 = V_5;
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_19);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject* L_21 = V_5;
		int32_t L_22;
		L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_21);
		__this->___line = L_22;
		RuntimeObject* L_23 = V_5;
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_23);
		__this->___charPositionInLine = L_24;
		__this->___approximateLineInfo = (bool)1;
		return;
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		RuntimeObject* L_26 = V_0;
		int32_t L_27 = V_3;
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(1, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, L_26, L_27);
		V_4 = L_28;
	}

IL_0092:
	{
		RuntimeObject* L_29 = V_4;
		if (L_29)
		{
			goto IL_004b;
		}
	}
	{
		return;
	}

IL_0097:
	{
		RuntimeObject* L_30 = V_2;
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_30);
		__this->___line = L_31;
		RuntimeObject* L_32 = V_2;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_32);
		__this->___charPositionInLine = L_33;
		return;
	}

IL_00b0:
	{
		RuntimeObject* L_34 = __this->___node;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_34, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var)))
		{
			goto IL_010d;
		}
	}
	{
		RuntimeObject* L_35 = __this->___node;
		int32_t L_36;
		L_36 = InterfaceFuncInvoker0< int32_t >::Invoke(6, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_35, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var)));
		__this->___line = L_36;
		RuntimeObject* L_37 = __this->___node;
		int32_t L_38;
		L_38 = InterfaceFuncInvoker0< int32_t >::Invoke(7, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_37, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var)));
		__this->___charPositionInLine = L_38;
		RuntimeObject* L_39 = __this->___node;
		if (!((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)IsInstClass((RuntimeObject*)L_39, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_40 = __this->___node;
		RuntimeObject* L_41;
		L_41 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(31, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_40, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		__this->___token = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token), (void*)L_41);
		return;
	}

IL_010d:
	{
		RuntimeObject* L_42 = V_1;
		RuntimeObject* L_43 = __this->___node;
		int32_t L_44;
		L_44 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(5, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_42, L_43);
		V_6 = L_44;
		RuntimeObject* L_45 = V_1;
		RuntimeObject* L_46 = __this->___node;
		String_t* L_47;
		L_47 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_45, L_46);
		V_7 = L_47;
		int32_t L_48 = V_6;
		String_t* L_49 = V_7;
		CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* L_50 = (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF*)il2cpp_codegen_object_new(CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		CommonToken__ctor_m5B378A324216AAA7529462F6C80B92DC0DD004E4(L_50, L_48, L_49, NULL);
		__this->___token = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token), (void*)L_50);
	}

IL_0138:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseTreeAdaptor_GetNilNode_mB1513C118859993407B935C64A4371B85F3BD0CA (BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(19, __this, (RuntimeObject*)NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseTreeAdaptor_ErrorNode_m54E06B497EEFD1862A54EBC6F48494542F32AE17 (BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC* __this, RuntimeObject* ___0_input, RuntimeObject* ___1_start, RuntimeObject* ___2_stop, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___3_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_input;
		RuntimeObject* L_1 = ___1_start;
		RuntimeObject* L_2 = ___2_stop;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_3 = ___3_e;
		CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2* L_4 = (CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2*)il2cpp_codegen_object_new(CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2_il2cpp_TypeInfo_var);
		CommonErrorNode__ctor_m721EE235C10A1BC98ED3AD8211980CA711B35E03(L_4, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeAdaptor_AddChild_mD99728CA5129ABFEA829D895174F3140752E3951 (BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC* __this, RuntimeObject* ___0_t, RuntimeObject* ___1_child, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___1_child;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2 = ___0_t;
		RuntimeObject* L_3 = ___1_child;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(9, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_3, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var)));
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseTreeAdaptor_RulePostProcessing_m4D52E652BC4D1EBF4EFB9E731559FA40156F314A (BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC* __this, RuntimeObject* ___0_root, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_root;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(3, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		V_0 = (RuntimeObject*)NULL;
		goto IL_003d;
	}

IL_001e:
	{
		RuntimeObject* L_6 = V_0;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(8, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, L_8, 0);
		V_0 = L_9;
		RuntimeObject* L_10 = V_0;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, L_10, (RuntimeObject*)NULL);
		RuntimeObject* L_11 = V_0;
		InterfaceActionInvoker1< int32_t >::Invoke(2, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, L_11, (-1));
	}

IL_003d:
	{
		RuntimeObject* L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseTreeAdaptor_GetNodeType_m71E42C073EE219275303E60282206FA0623B933F (BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC* __this, RuntimeObject* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_t;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(4, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var)));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseTreeAdaptor_GetNodeText_mD9E989170A973FBD80A33A885C311E286A45FF93 (BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC* __this, RuntimeObject* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_t;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(5, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var)));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeAdaptor__ctor_m91216E0EB32B0119A266B0A678A18CC441D60F17 (BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC* __this, const RuntimeMethod* method) 
{
	{
		__this->___uniqueNodeID = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonErrorNode__ctor_m721EE235C10A1BC98ED3AD8211980CA711B35E03 (CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2* __this, RuntimeObject* ___0_input, RuntimeObject* ___1_start, RuntimeObject* ___2_stop, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___3_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommonTree__ctor_m40F93CBFC9DD9E4F9F94B57A2D29FC77C275D0F9(__this, NULL);
		RuntimeObject* L_0 = ___2_stop;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_1 = ___2_stop;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(7, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___1_start;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(7, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_2) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_5 = ___2_stop;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_5);
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}

IL_0024:
	{
		RuntimeObject* L_8 = ___1_start;
		___2_stop = L_8;
	}

IL_0027:
	{
		RuntimeObject* L_9 = ___0_input;
		__this->___input = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input), (void*)L_9);
		RuntimeObject* L_10 = ___1_start;
		__this->___start = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___start), (void*)L_10);
		RuntimeObject* L_11 = ___2_stop;
		__this->___stop = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stop), (void*)L_11);
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_12 = ___3_e;
		__this->___trappedException = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trappedException), (void*)L_12);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommonErrorNode_get_IsNil_m155BD3099BA4EF202001DFA089E36434F1AD2752 (CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonErrorNode_get_Type_m5794E28E5F3A9E5459583098A35C97BEEC388928 (CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonErrorNode_get_Text_m9A6C0214EC19D9A8B4EBB5957A75B923C4884033 (CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (String_t*)NULL;
		RuntimeObject* L_0 = __this->___start;
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___start;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(7, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
		RuntimeObject* L_3 = __this->___stop;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(7, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_3);
		V_2 = L_4;
		RuntimeObject* L_5 = __this->___stop;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_5);
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject* L_8 = __this->___input;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(6, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_8, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)));
		V_2 = L_9;
	}

IL_0045:
	{
		RuntimeObject* L_10 = __this->___input;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		String_t* L_13;
		L_13 = InterfaceFuncInvoker2< String_t*, int32_t, int32_t >::Invoke(1, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_10, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_11, L_12);
		V_0 = L_13;
		goto IL_008c;
	}

IL_005a:
	{
		RuntimeObject* L_14 = __this->___start;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_14, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_15 = __this->___input;
		RuntimeObject* L_16 = __this->___start;
		RuntimeObject* L_17 = __this->___stop;
		String_t* L_18;
		L_18 = InterfaceFuncInvoker2< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(2, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_15, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var)), L_16, L_17);
		V_0 = L_18;
		goto IL_008c;
	}

IL_0086:
	{
		V_0 = _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
	}

IL_008c:
	{
		String_t* L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonErrorNode_ToString_m14EB99CF156D3EAE89B116BFD20F1D530C073FBA (CommonErrorNode_t17C77413011A289CC7C2D3D34579A4F9307A35C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B57723A0AECC89D299D8A1001FED28ABB58509F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral268F6D4451955E93860C23D82818D63A9F987F01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C95E0D0E98D3DD213552AD10BE8E81AA339A450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF7BFD48B5116970DBD1DBF8800870DDBAF5C0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B9A3E6B4E5DD6E90D566B3DE5E6FD733060F58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_0 = __this->___trappedException;
		if (!((MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036*)IsInstClass((RuntimeObject*)L_0, MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_1 = __this->___trappedException;
		int32_t L_2;
		L_2 = MissingTokenException_get_MissingType_mA67E34404F3038563111102F4428E8917908AEA7(((MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036*)CastclassClass((RuntimeObject*)L_1, MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036_il2cpp_TypeInfo_var)), NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(_stringLiteralC7B9A3E6B4E5DD6E90D566B3DE5E6FD733060F58, L_4, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return L_5;
	}

IL_0032:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_6 = __this->___trappedException;
		if (!((UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383*)IsInstClass((RuntimeObject*)L_6, UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383_il2cpp_TypeInfo_var)))
		{
			goto IL_0081;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		ArrayElementTypeCheck (L_8, _stringLiteral268F6D4451955E93860C23D82818D63A9F987F01);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral268F6D4451955E93860C23D82818D63A9F987F01);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_10 = __this->___trappedException;
		RuntimeObject* L_11;
		L_11 = UnwantedTokenException_get_UnexpectedToken_m6BBA9AE0241A5672D271915005C3402AD55F5E6B_inline(((UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383*)CastclassClass((RuntimeObject*)L_10, UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383_il2cpp_TypeInfo_var)), NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		ArrayElementTypeCheck (L_12, _stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(30, __this);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		ArrayElementTypeCheck (L_15, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_16, NULL);
		return L_17;
	}

IL_0081:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_18 = __this->___trappedException;
		if (!((MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7*)IsInstClass((RuntimeObject*)L_18, MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7_il2cpp_TypeInfo_var)))
		{
			goto IL_00cb;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_1 = L_19;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		ArrayElementTypeCheck (L_20, _stringLiteral5C95E0D0E98D3DD213552AD10BE8E81AA339A450);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral5C95E0D0E98D3DD213552AD10BE8E81AA339A450);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_1;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_22 = __this->___trappedException;
		RuntimeObject* L_23;
		L_23 = RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF_inline(L_22, NULL);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = V_1;
		ArrayElementTypeCheck (L_24, _stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = V_1;
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(30, __this);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_1;
		ArrayElementTypeCheck (L_27, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = V_1;
		String_t* L_29;
		L_29 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_28, NULL);
		return L_29;
	}

IL_00cb:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_30 = __this->___trappedException;
		if (!((NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)IsInstClass((RuntimeObject*)L_30, NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)))
		{
			goto IL_0115;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_2 = L_31;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = V_2;
		ArrayElementTypeCheck (L_32, _stringLiteral7FF7BFD48B5116970DBD1DBF8800870DDBAF5C0F);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral7FF7BFD48B5116970DBD1DBF8800870DDBAF5C0F);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = V_2;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_34 = __this->___trappedException;
		RuntimeObject* L_35;
		L_35 = RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF_inline(L_34, NULL);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_35);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = V_2;
		ArrayElementTypeCheck (L_36, _stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = V_2;
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(30, __this);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_38);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = V_2;
		ArrayElementTypeCheck (L_39, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_2;
		String_t* L_41;
		L_41 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_40, NULL);
		return L_41;
	}

IL_0115:
	{
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(30, __this);
		String_t* L_43;
		L_43 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral1B57723A0AECC89D299D8A1001FED28ABB58509F, L_42, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return L_43;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTreeAdaptor_Create_m1C46FDE7743B0578A8485F944DB1DB53206CD703 (CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F* __this, RuntimeObject* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_payload;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)il2cpp_codegen_object_new(CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		CommonTree__ctor_m333F7053371ADDD87ED32F45659B7230D9DB2B35(L_1, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeAdaptor_SetTokenBoundaries_m29BCD1034266E16935D1A9C1CCCFBA9F93786E57 (CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F* __this, RuntimeObject* ___0_t, RuntimeObject* ___1_startToken, RuntimeObject* ___2_stopToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_t;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		V_0 = 0;
		V_1 = 0;
		RuntimeObject* L_1 = ___1_startToken;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_2 = ___1_startToken;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(7, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}

IL_0012:
	{
		RuntimeObject* L_4 = ___2_stopToken;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_5 = ___2_stopToken;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(7, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}

IL_001c:
	{
		RuntimeObject* L_7 = ___0_t;
		int32_t L_8 = V_0;
		InterfaceActionInvoker1< int32_t >::Invoke(10, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_7, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var)), L_8);
		RuntimeObject* L_9 = ___0_t;
		int32_t L_10 = V_1;
		InterfaceActionInvoker1< int32_t >::Invoke(11, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_9, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var)), L_10);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTreeAdaptor_GetNodeText_m9E192A0EC398CC9ABF6BE2B1FBA50A14C7AF5CE5 (CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F* __this, RuntimeObject* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_t;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_t;
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(5, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var)));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTreeAdaptor_GetNodeType_m920AC258AE400A31428CB2C3C0988915C31E0B26 (CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F* __this, RuntimeObject* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_t;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_t;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(4, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var)));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTreeAdaptor_GetToken_m6DA79713A62F04180E1CF8AA4ABD2E59B2367F27 (CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F* __this, RuntimeObject* ___0_treeNode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_treeNode;
		if (!((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)IsInstClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = ___0_treeNode;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(31, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_1, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0014:
	{
		return (RuntimeObject*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeAdaptor__ctor_m31806D904E560E7BA0F0267CE96CFCF867A5AC6D (CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F* __this, const RuntimeMethod* method) 
{
	{
		BaseTreeAdaptor__ctor_m91216E0EB32B0119A266B0A678A18CC441D60F17(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m40F93CBFC9DD9E4F9F94B57A2D29FC77C275D0F9 (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, const RuntimeMethod* method) 
{
	{
		__this->___startIndex = (-1);
		__this->___stopIndex = (-1);
		__this->___childIndex = (-1);
		BaseTree__ctor_m9BBF12D742E39E6AB8F68D47E5DB68CC882A37DF(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m333F7053371ADDD87ED32F45659B7230D9DB2B35 (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, RuntimeObject* ___0_t, const RuntimeMethod* method) 
{
	{
		__this->___startIndex = (-1);
		__this->___stopIndex = (-1);
		__this->___childIndex = (-1);
		BaseTree__ctor_m9BBF12D742E39E6AB8F68D47E5DB68CC882A37DF(__this, NULL);
		RuntimeObject* L_0 = ___0_t;
		__this->___token = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTree_get_Token_m0C2448B1190054B4282F7D866803820C2DD062AC (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___token;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommonTree_get_IsNil_mD860F663C6BBB02B0E25A876ABAF8F4F54C17C67 (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___token;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTree_get_Type_m83DA36C8D06043B9C8E0D0F5376D4C99959BF88B (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___token;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___token;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTree_get_Text_m1FD30F882FC12090E9DB93C046F8BDE12ED57A81 (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___token;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___token;
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(9, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTree_get_Line_m8BB48AD1024A96CC5CA6218667536210478EA697 (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___token;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->___token;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_002d;
		}
	}

IL_0015:
	{
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(16, __this);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(20, __this, 0);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(6, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, L_4);
		return L_5;
	}

IL_002b:
	{
		return 0;
	}

IL_002d:
	{
		RuntimeObject* L_6 = __this->___token;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTree_get_CharPositionInLine_m43E8631190B92A6F14061E6BB909DAEDD5757785 (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___token;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->___token;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(16, __this);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(20, __this, 0);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(7, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, L_4);
		return L_5;
	}

IL_002c:
	{
		return 0;
	}

IL_002e:
	{
		RuntimeObject* L_6 = __this->___token;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_TokenStartIndex_m490BA90F8EBBA7883F1EE0E98F6FAD2C9603B8B0 (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___startIndex = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_TokenStopIndex_m85ADC0FA9B01CB3CADBF8E6FF922D0946C5B1D0D (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___stopIndex = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_ChildIndex_m853D9171BA9F96E12D9A15E6D780F01946410395 (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___childIndex = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_Parent_mBFE471D733D92E080CBE47B3147FC907582209FE (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___parent = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTree_ToString_mDC0758B94B1103C33BEBA404ACECBFC6F1CE3220 (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A4A39F1613CF57ABBD54EBBD31811CC088F731);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(17, __this);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100;
	}

IL_000e:
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(27, __this);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		return _stringLiteral78A4A39F1613CF57ABBD54EBBD31811CC088F731;
	}

IL_001c:
	{
		RuntimeObject* L_2 = __this->___token;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0026:
	{
		RuntimeObject* L_3 = __this->___token;
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(9, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_3);
		return L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_m917A4F3068BD1B0D6F482B46DD600B638455BCC7 (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	{
		__this->___charPositionInLine = (-1);
		__this->___index = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_type;
		__this->___type = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_m78782A6AC6EC6C48071957BFFEA810F80B579124 (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, RuntimeObject* ___0_input, int32_t ___1_type, int32_t ___2_channel, int32_t ___3_start, int32_t ___4_stop, const RuntimeMethod* method) 
{
	{
		__this->___charPositionInLine = (-1);
		__this->___index = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_input;
		__this->___input = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input), (void*)L_0);
		int32_t L_1 = ___1_type;
		__this->___type = L_1;
		int32_t L_2 = ___2_channel;
		__this->___channel = L_2;
		int32_t L_3 = ___3_start;
		__this->___start = L_3;
		int32_t L_4 = ___4_stop;
		__this->___stop = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_m5B378A324216AAA7529462F6C80B92DC0DD004E4 (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, int32_t ___0_type, String_t* ___1_text, const RuntimeMethod* method) 
{
	{
		__this->___charPositionInLine = (-1);
		__this->___index = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_type;
		__this->___type = L_0;
		__this->___channel = 0;
		String_t* L_1 = ___1_text;
		__this->___text = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonToken_get_Type_m3A8B04FC5BA6669B988DFD6A1E4240A38D21F52D (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonToken_get_Line_mE35D1A9CEA2E496DBC95F20F43250F6A3AA9CD9B (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___line;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken_set_Line_m9E9AAA982AB07D51A93F06AC3FFC301048E4060F (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___line = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonToken_get_CharPositionInLine_m909079DA07F210D6D6D18C21AC0F5122440AB13F (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___charPositionInLine;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken_set_CharPositionInLine_m8096536AB4A39182923C36C4E64C6672B10123CF (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___charPositionInLine = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonToken_get_Channel_mB9090F21A273226BEBDA61595C7CC3C37AFE699C (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___channel;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken_set_Channel_mDB749FBE1C5797FA69EA55A893895C4AA0BA9C4C (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___channel = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonToken_get_TokenIndex_m86B8EAC969AAF615A88E4DD754AE514EFE67E611 (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___index;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken_set_TokenIndex_m937B1BEC749E8D6B4BB3B2CCF0A682A25E6BA5CF (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___index = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonToken_get_Text_mF7E9128FE761D6252E0B96D1CC4CC786F568B792 (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___text;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->___text;
		return L_1;
	}

IL_000f:
	{
		RuntimeObject* L_2 = __this->___input;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___input;
		int32_t L_4 = __this->___start;
		int32_t L_5 = __this->___stop;
		String_t* L_6;
		L_6 = InterfaceFuncInvoker2< String_t*, int32_t, int32_t >::Invoke(2, ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		__this->___text = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text), (void*)L_6);
		String_t* L_7 = __this->___text;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken_set_Text_mEFE7B8DA561CA8B43A23E18E615C47C0E3777E9C (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___text = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonToken_ToString_mFF17291D1A4503A02A9238E372AD614A1CEABE15 (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068F71F7A557397093A781E1521F2E89FC1A116E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E47D32175F4D9BAB39319CCD9FE626B7445E745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA037E63CFA2C247B31B0B97D99D6BAF5418D6796);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4C806C39305FD572A99C388DB132BCFFB866300);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2EC8D8B53A3AA7BF79DEF31EB6943C932CE10DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		int32_t L_0 = __this->___channel;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = __this->___channel;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		String_t* L_4;
		L_4 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteralC2EC8D8B53A3AA7BF79DEF31EB6943C932CE10DE, L_3, NULL);
		V_0 = L_4;
	}

IL_0025:
	{
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(24, __this);
		V_1 = L_5;
		String_t* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_1;
		String_t* L_8;
		L_8 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_7, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, _stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469, NULL);
		V_1 = L_8;
		String_t* L_9 = V_1;
		String_t* L_10;
		L_10 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_9, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, _stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1, NULL);
		V_1 = L_10;
		String_t* L_11 = V_1;
		String_t* L_12;
		L_12 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_11, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, _stringLiteral068F71F7A557397093A781E1521F2E89FC1A116E, NULL);
		V_1 = L_12;
		goto IL_006a;
	}

IL_0064:
	{
		V_1 = _stringLiteral1E47D32175F4D9BAB39319CCD9FE626B7445E745;
	}

IL_006a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		V_2 = L_13;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_2;
		ArrayElementTypeCheck (L_14, _stringLiteralA037E63CFA2C247B31B0B97D99D6BAF5418D6796);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralA037E63CFA2C247B31B0B97D99D6BAF5418D6796);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_2;
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(22, __this);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_defaults.int32_class, &L_17);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_2;
		ArrayElementTypeCheck (L_19, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_2;
		int32_t L_21 = __this->___start;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_defaults.int32_class, &L_22);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = V_2;
		ArrayElementTypeCheck (L_24, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = V_2;
		int32_t L_26 = __this->___stop;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_defaults.int32_class, &L_27);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = V_2;
		ArrayElementTypeCheck (L_29, _stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_2;
		String_t* L_31 = V_1;
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = V_2;
		ArrayElementTypeCheck (L_32, _stringLiteralB4C806C39305FD572A99C388DB132BCFFB866300);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)_stringLiteralB4C806C39305FD572A99C388DB132BCFFB866300);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = V_2;
		int32_t L_34 = __this->___type;
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_defaults.int32_class, &L_35);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_36);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = V_2;
		ArrayElementTypeCheck (L_37, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_2;
		String_t* L_39 = V_0;
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_39);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_2;
		ArrayElementTypeCheck (L_40, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = V_2;
		int32_t L_42 = __this->___line;
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_defaults.int32_class, &L_43);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject*)L_44);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = V_2;
		ArrayElementTypeCheck (L_45, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_2;
		int32_t L_47;
		L_47 = VirtualFuncInvoker0< int32_t >::Invoke(18, __this);
		int32_t L_48 = L_47;
		RuntimeObject* L_49 = Box(il2cpp_defaults.int32_class, &L_48);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject*)L_49);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = V_2;
		ArrayElementTypeCheck (L_50, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (RuntimeObject*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = V_2;
		String_t* L_52;
		L_52 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_51, NULL);
		return L_52;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DFA_Predict_m693D20C1C742AE9138C226CD15EFF3E1F86311FB (DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* __this, RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		RuntimeObject* L_0 = ___0_input;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		V_1 = 0;
	}

IL_0009:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0121:
			{
				RuntimeObject* L_2 = ___0_input;
				int32_t L_3 = V_0;
				InterfaceActionInvoker1< int32_t >::Invoke(4, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_2, L_3);
				return;
			}
		});
		try
		{

IL_0009_1:
			{
				Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = __this->___special;
				int32_t L_5 = V_1;
				int32_t L_6 = L_5;
				int16_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
				V_2 = L_7;
				int32_t L_8 = V_2;
				if ((((int32_t)L_8) < ((int32_t)0)))
				{
					goto IL_0041_1;
				}
			}
			{
				SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* L_9 = __this->___specialStateTransitionHandler;
				int32_t L_10 = V_2;
				RuntimeObject* L_11 = ___0_input;
				int32_t L_12;
				L_12 = SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_inline(L_9, __this, L_10, L_11, NULL);
				V_1 = L_12;
				int32_t L_13 = V_1;
				if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
				{
					goto IL_0039_1;
				}
			}
			{
				int32_t L_14 = V_1;
				RuntimeObject* L_15 = ___0_input;
				DFA_NoViableAlt_m8E03223AE4AA80BC012B1A8839E92C251065D2E5(__this, L_14, L_15, NULL);
				V_5 = 0;
				goto IL_0129;
			}

IL_0039_1:
			{
				RuntimeObject* L_16 = ___0_input;
				InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_16);
				goto IL_0009_1;
			}

IL_0041_1:
			{
				Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_17 = __this->___accept;
				int32_t L_18 = V_1;
				int32_t L_19 = L_18;
				int16_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
				if ((((int32_t)L_20) < ((int32_t)1)))
				{
					goto IL_005b_1;
				}
			}
			{
				Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_21 = __this->___accept;
				int32_t L_22 = V_1;
				int32_t L_23 = L_22;
				int16_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
				V_5 = L_24;
				goto IL_0129;
			}

IL_005b_1:
			{
				RuntimeObject* L_25 = ___0_input;
				int32_t L_26;
				L_26 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_25, 1);
				V_3 = ((int32_t)(uint16_t)L_26);
				Il2CppChar L_27 = V_3;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = __this->___min;
				int32_t L_29 = V_1;
				int32_t L_30 = L_29;
				uint16_t L_31 = (uint16_t)(L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
				if ((((int32_t)L_27) < ((int32_t)L_31)))
				{
					goto IL_00ce_1;
				}
			}
			{
				Il2CppChar L_32 = V_3;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = __this->___max;
				int32_t L_34 = V_1;
				int32_t L_35 = L_34;
				uint16_t L_36 = (uint16_t)(L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
				if ((((int32_t)L_32) > ((int32_t)L_36)))
				{
					goto IL_00ce_1;
				}
			}
			{
				Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* L_37 = __this->___transition;
				int32_t L_38 = V_1;
				int32_t L_39 = L_38;
				Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
				Il2CppChar L_41 = V_3;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_42 = __this->___min;
				int32_t L_43 = V_1;
				int32_t L_44 = L_43;
				uint16_t L_45 = (uint16_t)(L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
				int32_t L_46 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)L_45));
				int16_t L_47 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
				V_4 = L_47;
				int32_t L_48 = V_4;
				if ((((int32_t)L_48) >= ((int32_t)0)))
				{
					goto IL_00c0_1;
				}
			}
			{
				Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_49 = __this->___eot;
				int32_t L_50 = V_1;
				int32_t L_51 = L_50;
				int16_t L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
				if ((((int32_t)L_52) < ((int32_t)0)))
				{
					goto IL_00b3_1;
				}
			}
			{
				Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_53 = __this->___eot;
				int32_t L_54 = V_1;
				int32_t L_55 = L_54;
				int16_t L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
				V_1 = L_56;
				RuntimeObject* L_57 = ___0_input;
				InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_57);
				goto IL_0009_1;
			}

IL_00b3_1:
			{
				int32_t L_58 = V_1;
				RuntimeObject* L_59 = ___0_input;
				DFA_NoViableAlt_m8E03223AE4AA80BC012B1A8839E92C251065D2E5(__this, L_58, L_59, NULL);
				V_5 = 0;
				goto IL_0129;
			}

IL_00c0_1:
			{
				int32_t L_60 = V_4;
				V_1 = L_60;
				RuntimeObject* L_61 = ___0_input;
				InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_61);
				goto IL_0009_1;
			}

IL_00ce_1:
			{
				Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_62 = __this->___eot;
				int32_t L_63 = V_1;
				int32_t L_64 = L_63;
				int16_t L_65 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
				if ((((int32_t)L_65) < ((int32_t)0)))
				{
					goto IL_00ed_1;
				}
			}
			{
				Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_66 = __this->___eot;
				int32_t L_67 = V_1;
				int32_t L_68 = L_67;
				int16_t L_69 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
				V_1 = L_69;
				RuntimeObject* L_70 = ___0_input;
				InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_70);
				goto IL_0009_1;
			}

IL_00ed_1:
			{
				Il2CppChar L_71 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
				int32_t L_72 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF;
				if ((!(((uint32_t)L_71) == ((uint32_t)((int32_t)(uint16_t)L_72)))))
				{
					goto IL_0114_1;
				}
			}
			{
				Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_73 = __this->___eof;
				int32_t L_74 = V_1;
				int32_t L_75 = L_74;
				int16_t L_76 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75));
				if ((((int32_t)L_76) < ((int32_t)0)))
				{
					goto IL_0114_1;
				}
			}
			{
				Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_77 = __this->___accept;
				Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_78 = __this->___eof;
				int32_t L_79 = V_1;
				int32_t L_80 = L_79;
				int16_t L_81 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
				int16_t L_82 = L_81;
				int16_t L_83 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
				V_5 = L_83;
				goto IL_0129;
			}

IL_0114_1:
			{
				int32_t L_84 = V_1;
				RuntimeObject* L_85 = ___0_input;
				DFA_NoViableAlt_m8E03223AE4AA80BC012B1A8839E92C251065D2E5(__this, L_84, L_85, NULL);
				V_5 = 0;
				goto IL_0129;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0129:
	{
		int32_t L_86 = V_5;
		return L_86;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA_NoViableAlt_m8E03223AE4AA80BC012B1A8839E92C251065D2E5 (DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* __this, int32_t ___0_s, RuntimeObject* ___1_input, const RuntimeMethod* method) 
{
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_0 = NULL;
	{
		BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* L_0 = __this->___recognizer;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_1 = L_0->___state;
		int32_t L_2 = L_1->___backtracking;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* L_3 = __this->___recognizer;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_4 = L_3->___state;
		L_4->___failed = (bool)1;
		return;
	}

IL_0025:
	{
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5, __this);
		int32_t L_6 = __this->___decisionNumber;
		int32_t L_7 = ___0_s;
		RuntimeObject* L_8 = ___1_input;
		NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_9 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
		NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_9, L_5, L_6, L_7, L_8, NULL);
		V_0 = L_9;
		NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_10 = V_0;
		VirtualActionInvoker1< NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* >::Invoke(4, __this, L_10);
		NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_11 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DFA_NoViableAlt_m8E03223AE4AA80BC012B1A8839E92C251065D2E5_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA_Error_m015CAACBE16500CC954A9D3ABB2E4EDEF2BEE3DC (DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* __this, NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* ___0_nvae, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DFA_get_Description_m9B0DF6577EB084ED560A5F535DE0378DDA4AB270 (DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6836D94586B3887F0DB2295A1C064F27F99A5DE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral6836D94586B3887F0DB2295A1C064F27F99A5DE2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* DFA_UnpackEncodedString_mF49858628102B6B81A6A29FBFED81943351CB57C (String_t* ___0_encodedString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	Il2CppChar V_6 = 0x0;
	int32_t V_7 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0014;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		String_t* L_1 = ___0_encodedString;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, (int32_t)L_3));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 2));
	}

IL_0014:
	{
		int32_t L_5 = V_1;
		String_t* L_6 = ___0_encodedString;
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_8 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		V_3 = 0;
		V_4 = 0;
		goto IL_0062;
	}

IL_002b:
	{
		String_t* L_10 = ___0_encodedString;
		int32_t L_11 = V_4;
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		V_5 = L_12;
		String_t* L_13 = ___0_encodedString;
		int32_t L_14 = V_4;
		Il2CppChar L_15;
		L_15 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		V_6 = L_15;
		V_7 = 1;
		goto IL_0056;
	}

IL_0046:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_16 = V_2;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		Il2CppChar L_19 = V_6;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (int16_t)((int16_t)L_19));
		int32_t L_20 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0056:
	{
		int32_t L_21 = V_7;
		Il2CppChar L_22 = V_5;
		if ((((int32_t)L_21) <= ((int32_t)L_22)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 2));
	}

IL_0062:
	{
		int32_t L_24 = V_4;
		String_t* L_25 = ___0_encodedString;
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_002b;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = V_2;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* DFA_UnpackEncodedStringArray_mB75C8AEC3573091C36920768EF5D6A4A031B4BF9 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_encodedStrings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_encodedStrings;
		Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* L_1 = (Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A*)(Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A*)SZArrayNew(Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* L_2 = V_0;
		int32_t L_3 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___0_encodedStrings;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8;
		L_8 = DFA_UnpackEncodedString_mF49858628102B6B81A6A29FBFED81943351CB57C(L_7, NULL);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001c:
	{
		int32_t L_10 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___0_encodedStrings;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* DFA_UnpackEncodedStringToUnsignedChars_m65A224819BF02760BAB429EC1CCAFAE81FDB3513 (String_t* ___0_encodedString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	Il2CppChar V_6 = 0x0;
	int32_t V_7 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0014;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		String_t* L_1 = ___0_encodedString;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, (int32_t)L_3));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 2));
	}

IL_0014:
	{
		int32_t L_5 = V_1;
		String_t* L_6 = ___0_encodedString;
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_8 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		V_3 = 0;
		V_4 = 0;
		goto IL_0061;
	}

IL_002b:
	{
		String_t* L_10 = ___0_encodedString;
		int32_t L_11 = V_4;
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		V_5 = L_12;
		String_t* L_13 = ___0_encodedString;
		int32_t L_14 = V_4;
		Il2CppChar L_15;
		L_15 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		V_6 = L_15;
		V_7 = 1;
		goto IL_0055;
	}

IL_0046:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = V_2;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		Il2CppChar L_19 = V_6;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (Il2CppChar)L_19);
		int32_t L_20 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0055:
	{
		int32_t L_21 = V_7;
		Il2CppChar L_22 = V_5;
		if ((((int32_t)L_21) <= ((int32_t)L_22)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 2));
	}

IL_0061:
	{
		int32_t L_24 = V_4;
		String_t* L_25 = ___0_encodedString;
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_002b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_27 = V_2;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA__ctor_mCE38E09A4533B61037DF20776BC22D1438D61C53 (DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
int32_t SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_Multicast(SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* __this, DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* ___0_dfa, int32_t ___1_s, RuntimeObject* ___2_input, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* currentDelegate = reinterpret_cast<SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*, int32_t, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_dfa, ___1_s, ___2_input, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_OpenInst(SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* __this, DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* ___0_dfa, int32_t ___1_s, RuntimeObject* ___2_input, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*, int32_t, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_dfa, ___1_s, ___2_input, method);
}
int32_t SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_OpenStatic(SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* __this, DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* ___0_dfa, int32_t ___1_s, RuntimeObject* ___2_input, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*, int32_t, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_dfa, ___1_s, ___2_input, method);
}
int32_t SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_OpenVirtual(SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* __this, DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* ___0_dfa, int32_t ___1_s, RuntimeObject* ___2_input, const RuntimeMethod* method)
{
	return VirtualFuncInvoker2< int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_dfa, ___1_s, ___2_input);
}
int32_t SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_OpenInterface(SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* __this, DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* ___0_dfa, int32_t ___1_s, RuntimeObject* ___2_input, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker2< int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_dfa, ___1_s, ___2_input);
}
int32_t SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_OpenGenericVirtual(SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* __this, DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* ___0_dfa, int32_t ___1_s, RuntimeObject* ___2_input, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker2< int32_t, int32_t, RuntimeObject* >::Invoke(method, ___0_dfa, ___1_s, ___2_input);
}
int32_t SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_OpenGenericInterface(SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* __this, DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* ___0_dfa, int32_t ___1_s, RuntimeObject* ___2_input, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker2< int32_t, int32_t, RuntimeObject* >::Invoke(method, ___0_dfa, ___1_s, ___2_input);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialStateTransitionHandler__ctor_m76CDBCFE6FE26AD883129032A645915D5BFE26F2 (SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2 (SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* __this, DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* ___0_dfa, int32_t ___1_s, RuntimeObject* ___2_input, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*, int32_t, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_dfa, ___1_s, ___2_input, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_m1896802BFE995C01D0331380FA3FB24C21A257E7 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_0 = (RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0*)il2cpp_codegen_object_new(RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0_il2cpp_TypeInfo_var);
		RecognizerSharedState__ctor_m15A6D7A25E2A244035839024D7A03AF8BBDB5630(L_0, NULL);
		__this->___state = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_m7F1EE5D983A174EEDC315B30CB8D40992468ECAC (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_0 = ___0_state;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_1 = (RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0*)il2cpp_codegen_object_new(RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0_il2cpp_TypeInfo_var);
		RecognizerSharedState__ctor_m15A6D7A25E2A244035839024D7A03AF8BBDB5630(L_1, NULL);
		___0_state = L_1;
	}

IL_0010:
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_2 = ___0_state;
		__this->___state = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_Reset_m1BCCB93F4B484CBC862B17E5D0F796C76EB03973 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_0 = __this->___state;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_1 = __this->___state;
		L_1->___followingStackPointer = (-1);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_2 = __this->___state;
		L_2->___errorRecovery = (bool)0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_3 = __this->___state;
		L_3->___lastErrorIndex = (-1);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_4 = __this->___state;
		L_4->___failed = (bool)0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_5 = __this->___state;
		L_5->___syntaxErrors = 0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_6 = __this->___state;
		L_6->___backtracking = 0;
		V_0 = 0;
		goto IL_0067;
	}

IL_0055:
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_7 = __this->___state;
		IDictionaryU5BU5D_t604DB404DAEF595B12A45890E1D58CF8FF54116C* L_8 = L_7->___ruleMemo;
		int32_t L_9 = V_0;
		ArrayElementTypeCheck (L_8, NULL);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (RuntimeObject*)NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0067:
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_11 = __this->___state;
		IDictionaryU5BU5D_t604DB404DAEF595B12A45890E1D58CF8FF54116C* L_12 = L_11->___ruleMemo;
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_13 = V_0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_14 = __this->___state;
		IDictionaryU5BU5D_t604DB404DAEF595B12A45890E1D58CF8FF54116C* L_15 = L_14->___ruleMemo;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0055;
		}
	}

IL_0084:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseRecognizer_Match_m03F898648D1E31FDBEC334758415D05F34E8210A (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RuntimeObject* ___0_input, int32_t ___1_ttype, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___2_follow, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_input;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(22, __this, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = ___0_input;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_2, 1);
		int32_t L_4 = ___1_ttype;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_5 = ___0_input;
		InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_5);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_6 = __this->___state;
		L_6->___errorRecovery = (bool)0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_7 = __this->___state;
		L_7->___failed = (bool)0;
		RuntimeObject* L_8 = V_0;
		return L_8;
	}

IL_0032:
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = __this->___state;
		int32_t L_10 = L_9->___backtracking;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_11 = __this->___state;
		L_11->___failed = (bool)1;
		RuntimeObject* L_12 = V_0;
		return L_12;
	}

IL_004e:
	{
		RuntimeObject* L_13 = ___0_input;
		int32_t L_14 = ___1_ttype;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_15 = ___2_follow;
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(15, __this, L_13, L_14, L_15);
		V_0 = L_16;
		RuntimeObject* L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseRecognizer_MismatchIsUnwantedToken_mC87345C4C8D97FBBEE5861D243F945DB18431FB6 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RuntimeObject* ___0_input, int32_t ___1_ttype, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_0, 2);
		int32_t L_2 = ___1_ttype;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseRecognizer_MismatchIsMissingToken_mEFC3B2FC68EA45440158A45E3D3B0C025232E6B1 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RuntimeObject* ___0_input, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___1_follow, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* V_0 = NULL;
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_0 = ___1_follow;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_1 = ___1_follow;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, int32_t >::Invoke(7, L_1, 1);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_3;
		L_3 = VirtualFuncInvoker0< BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(20, __this);
		V_0 = L_3;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_4 = ___1_follow;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_5 = V_0;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6;
		L_6 = VirtualFuncInvoker1< BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(4, L_4, L_5);
		___1_follow = L_6;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_7 = __this->___state;
		int32_t L_8 = L_7->___followingStackPointer;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_9 = ___1_follow;
		VirtualActionInvoker1< int32_t >::Invoke(8, L_9, 1);
	}

IL_0033:
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_10 = ___1_follow;
		RuntimeObject* L_11 = ___0_input;
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_11, 1);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, int32_t >::Invoke(7, L_10, L_12);
		if (L_13)
		{
			goto IL_004b;
		}
	}
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_14 = ___1_follow;
		bool L_15;
		L_15 = VirtualFuncInvoker1< bool, int32_t >::Invoke(7, L_14, 1);
		if (!L_15)
		{
			goto IL_004d;
		}
	}

IL_004b:
	{
		return (bool)1;
	}

IL_004d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_ReportError_m02861A8A3BC2789EE0B39FEF54997350201A8C19 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___0_e, const RuntimeMethod* method) 
{
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_0 = __this->___state;
		bool L_1 = L_0->___errorRecovery;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_2 = __this->___state;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_3 = L_2;
		int32_t L_4 = L_3->___syntaxErrors;
		L_3->___syntaxErrors = ((int32_t)il2cpp_codegen_add(L_4, 1));
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_5 = __this->___state;
		L_5->___errorRecovery = (bool)1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = VirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(18, __this);
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_7 = ___0_e;
		VirtualActionInvoker2< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(7, __this, L_6, L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_DisplayRecognitionError_m7EFC27074AA3274F788688E29BC8D48ADD2F19FD (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokenNames, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_0 = ___1_e;
		String_t* L_1;
		L_1 = VirtualFuncInvoker1< String_t*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(9, __this, L_0);
		V_0 = L_1;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_2 = ___1_e;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___0_tokenNames;
		String_t* L_4;
		L_4 = VirtualFuncInvoker2< String_t*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(8, __this, L_2, L_3);
		V_1 = L_4;
		String_t* L_5 = V_0;
		String_t* L_6 = V_1;
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(11, __this, L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRecognizer_GetErrorMessage_m0BE8FCB0FDC9E8744ACB54A082DF3DC455A4CE85 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___0_e, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tokenNames, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FailedPredicateException_t7647268B6372BADB40830A6445086CF953B910D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02B0B24969585DD39673A5765009AF30D6D2E538);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F33453EE0F85707619E21D32FDB0D7D909DF122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E17E19787A8E4C68AF47C8C58B4F88730743736);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AE6F45871669BB25CC574BBF0A2C2201C4F7B7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral776C7FDE238457F8357FDF71D2BE4203F194B5D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB672AC300BB7EC71FCB5654BA90363C9A37A0087);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC86DAA27565F3C4B534F244D9F1CBFE024D7EAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECD4CB8C5D196C86050FD2C960761F6FA892771D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383* V_1 = NULL;
	String_t* V_2 = NULL;
	MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036* V_3 = NULL;
	String_t* V_4 = NULL;
	MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* V_5 = NULL;
	String_t* V_6 = NULL;
	MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B* V_7 = NULL;
	String_t* V_8 = NULL;
	MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* V_9 = NULL;
	MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D* V_10 = NULL;
	FailedPredicateException_t7647268B6372BADB40830A6445086CF953B910D5* V_11 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_12 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_13 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_14 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_15 = NULL;
	int32_t G_B21_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B21_1 = NULL;
	int32_t G_B20_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B20_1 = NULL;
	int32_t G_B22_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B22_1 = NULL;
	RuntimeObject* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B23_2 = NULL;
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_0 = ___0_e;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_0);
		V_0 = L_1;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_2 = ___0_e;
		if (!((UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383*)IsInstClass((RuntimeObject*)L_2, UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_3 = ___0_e;
		V_1 = ((UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383*)CastclassClass((RuntimeObject*)L_3, UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383_il2cpp_TypeInfo_var));
		V_2 = _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
		UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383* L_4 = V_1;
		int32_t L_5;
		L_5 = MismatchedTokenException_get_Expecting_m23F654E59D314B73009CA2220DBF30B93C886B43_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0031;
		}
	}
	{
		V_2 = _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
		goto IL_003a;
	}

IL_0031:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___1_tokenNames;
		UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383* L_8 = V_1;
		int32_t L_9;
		L_9 = MismatchedTokenException_get_Expecting_m23F654E59D314B73009CA2220DBF30B93C886B43_inline(L_8, NULL);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
	}

IL_003a:
	{
		UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383* L_12 = V_1;
		RuntimeObject* L_13;
		L_13 = UnwantedTokenException_get_UnexpectedToken_m6BBA9AE0241A5672D271915005C3402AD55F5E6B_inline(L_12, NULL);
		String_t* L_14;
		L_14 = VirtualFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10, __this, L_13);
		String_t* L_15 = V_2;
		String_t* L_16;
		L_16 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralDC86DAA27565F3C4B534F244D9F1CBFE024D7EAE, L_14, _stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379, L_15, NULL);
		V_0 = L_16;
		goto IL_02dd;
	}

IL_005c:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_17 = ___0_e;
		if (!((MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036*)IsInstClass((RuntimeObject*)L_17, MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036_il2cpp_TypeInfo_var)))
		{
			goto IL_00b5;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_18 = ___0_e;
		V_3 = ((MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036*)CastclassClass((RuntimeObject*)L_18, MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036_il2cpp_TypeInfo_var));
		V_4 = _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
		MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036* L_19 = V_3;
		int32_t L_20;
		L_20 = MismatchedTokenException_get_Expecting_m23F654E59D314B73009CA2220DBF30B93C886B43_inline(L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		int32_t L_21 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_0088;
		}
	}
	{
		V_4 = _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
		goto IL_0092;
	}

IL_0088:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = ___1_tokenNames;
		MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036* L_23 = V_3;
		int32_t L_24;
		L_24 = MismatchedTokenException_get_Expecting_m23F654E59D314B73009CA2220DBF30B93C886B43_inline(L_23, NULL);
		int32_t L_25 = L_24;
		String_t* L_26 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_4 = L_26;
	}

IL_0092:
	{
		String_t* L_27 = V_4;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_28 = ___0_e;
		RuntimeObject* L_29;
		L_29 = RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF_inline(L_28, NULL);
		String_t* L_30;
		L_30 = VirtualFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10, __this, L_29);
		String_t* L_31;
		L_31 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral776C7FDE238457F8357FDF71D2BE4203F194B5D8, L_27, _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1, L_30, NULL);
		V_0 = L_31;
		goto IL_02dd;
	}

IL_00b5:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_32 = ___0_e;
		if (!((MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7*)IsInstClass((RuntimeObject*)L_32, MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7_il2cpp_TypeInfo_var)))
		{
			goto IL_0111;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_33 = ___0_e;
		V_5 = ((MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7*)CastclassClass((RuntimeObject*)L_33, MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7_il2cpp_TypeInfo_var));
		V_6 = _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
		MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* L_34 = V_5;
		int32_t L_35;
		L_35 = MismatchedTokenException_get_Expecting_m23F654E59D314B73009CA2220DBF30B93C886B43_inline(L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		int32_t L_36 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_36))))
		{
			goto IL_00e3;
		}
	}
	{
		V_6 = _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
		goto IL_00ee;
	}

IL_00e3:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = ___1_tokenNames;
		MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* L_38 = V_5;
		int32_t L_39;
		L_39 = MismatchedTokenException_get_Expecting_m23F654E59D314B73009CA2220DBF30B93C886B43_inline(L_38, NULL);
		int32_t L_40 = L_39;
		String_t* L_41 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		V_6 = L_41;
	}

IL_00ee:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_42 = ___0_e;
		RuntimeObject* L_43;
		L_43 = RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF_inline(L_42, NULL);
		String_t* L_44;
		L_44 = VirtualFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10, __this, L_43);
		String_t* L_45 = V_6;
		String_t* L_46;
		L_46 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D, L_44, _stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379, L_45, NULL);
		V_0 = L_46;
		goto IL_02dd;
	}

IL_0111:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_47 = ___0_e;
		if (!((MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B*)IsInstClass((RuntimeObject*)L_47, MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B_il2cpp_TypeInfo_var)))
		{
			goto IL_01a3;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_48 = ___0_e;
		V_7 = ((MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B*)CastclassClass((RuntimeObject*)L_48, MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B_il2cpp_TypeInfo_var));
		V_8 = _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
		MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B* L_49 = V_7;
		int32_t L_50 = L_49->___expecting;
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		int32_t L_51 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF;
		if ((!(((uint32_t)L_50) == ((uint32_t)L_51))))
		{
			goto IL_0142;
		}
	}
	{
		V_8 = _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
		goto IL_014d;
	}

IL_0142:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = ___1_tokenNames;
		MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B* L_53 = V_7;
		int32_t L_54 = L_53->___expecting;
		int32_t L_55 = L_54;
		String_t* L_56 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		V_8 = L_56;
	}

IL_014d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_12 = L_57;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = V_12;
		ArrayElementTypeCheck (L_58, _stringLiteral5AE6F45871669BB25CC574BBF0A2C2201C4F7B7B);
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral5AE6F45871669BB25CC574BBF0A2C2201C4F7B7B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_59 = V_12;
		MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B* L_60 = V_7;
		RuntimeObject* L_61;
		L_61 = RecognitionException_get_Node_mF9017E74E9C1676B91BA3B92682C2370C1ABA345_inline(L_60, NULL);
		if (!L_61)
		{
			G_B21_0 = 1;
			G_B21_1 = L_59;
			goto IL_0178;
		}
		G_B20_0 = 1;
		G_B20_1 = L_59;
	}
	{
		MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B* L_62 = V_7;
		RuntimeObject* L_63;
		L_63 = RecognitionException_get_Node_mF9017E74E9C1676B91BA3B92682C2370C1ABA345_inline(L_62, NULL);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_63);
		if (L_64)
		{
			G_B22_0 = G_B20_0;
			G_B22_1 = G_B20_1;
			goto IL_017f;
		}
		G_B21_0 = G_B20_0;
		G_B21_1 = G_B20_1;
	}

IL_0178:
	{
		String_t* L_65 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		G_B23_0 = ((RuntimeObject*)(L_65));
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		goto IL_0186;
	}

IL_017f:
	{
		MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B* L_66 = V_7;
		RuntimeObject* L_67;
		L_67 = RecognitionException_get_Node_mF9017E74E9C1676B91BA3B92682C2370C1ABA345_inline(L_66, NULL);
		G_B23_0 = L_67;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
	}

IL_0186:
	{
		ArrayElementTypeCheck (G_B23_2, G_B23_0);
		(G_B23_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B23_1), (RuntimeObject*)G_B23_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_68 = V_12;
		ArrayElementTypeCheck (L_68, _stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379);
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_69 = V_12;
		String_t* L_70 = V_8;
		ArrayElementTypeCheck (L_69, L_70);
		(L_69)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_70);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_71 = V_12;
		String_t* L_72;
		L_72 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_71, NULL);
		V_0 = L_72;
		goto IL_02dd;
	}

IL_01a3:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_73 = ___0_e;
		if (!((NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)IsInstClass((RuntimeObject*)L_73, NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)))
		{
			goto IL_01c7;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_74 = ___0_e;
		RuntimeObject* L_75;
		L_75 = RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF_inline(L_74, NULL);
		String_t* L_76;
		L_76 = VirtualFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10, __this, L_75);
		String_t* L_77;
		L_77 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralECD4CB8C5D196C86050FD2C960761F6FA892771D, L_76, NULL);
		V_0 = L_77;
		goto IL_02dd;
	}

IL_01c7:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_78 = ___0_e;
		if (!((EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02*)IsInstClass((RuntimeObject*)L_78, EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02_il2cpp_TypeInfo_var)))
		{
			goto IL_01eb;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_79 = ___0_e;
		RuntimeObject* L_80;
		L_80 = RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF_inline(L_79, NULL);
		String_t* L_81;
		L_81 = VirtualFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10, __this, L_80);
		String_t* L_82;
		L_82 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0F33453EE0F85707619E21D32FDB0D7D909DF122, L_81, NULL);
		V_0 = L_82;
		goto IL_02dd;
	}

IL_01eb:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_83 = ___0_e;
		if (!((MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)IsInstClass((RuntimeObject*)L_83, MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var)))
		{
			goto IL_023d;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_84 = ___0_e;
		V_9 = ((MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)CastclassClass((RuntimeObject*)L_84, MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_85 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_13 = L_85;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_86 = V_13;
		ArrayElementTypeCheck (L_86, _stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D);
		(L_86)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = V_13;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_88 = ___0_e;
		RuntimeObject* L_89;
		L_89 = RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF_inline(L_88, NULL);
		String_t* L_90;
		L_90 = VirtualFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10, __this, L_89);
		ArrayElementTypeCheck (L_87, L_90);
		(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_90);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_91 = V_13;
		ArrayElementTypeCheck (L_91, _stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		(L_91)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_92 = V_13;
		MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_93 = V_9;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_94 = L_93->___expecting;
		ArrayElementTypeCheck (L_92, L_94);
		(L_92)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_94);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_95 = V_13;
		String_t* L_96;
		L_96 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_95, NULL);
		V_0 = L_96;
		goto IL_02dd;
	}

IL_023d:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_97 = ___0_e;
		if (!((MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D*)IsInstClass((RuntimeObject*)L_97, MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D_il2cpp_TypeInfo_var)))
		{
			goto IL_028c;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_98 = ___0_e;
		V_10 = ((MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D*)CastclassClass((RuntimeObject*)L_98, MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_99 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_14 = L_99;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_100 = V_14;
		ArrayElementTypeCheck (L_100, _stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D);
		(L_100)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_101 = V_14;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_102 = ___0_e;
		RuntimeObject* L_103;
		L_103 = RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF_inline(L_102, NULL);
		String_t* L_104;
		L_104 = VirtualFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10, __this, L_103);
		ArrayElementTypeCheck (L_101, L_104);
		(L_101)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_104);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_105 = V_14;
		ArrayElementTypeCheck (L_105, _stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		(L_105)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_106 = V_14;
		MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D* L_107 = V_10;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_108 = ((MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)L_107)->___expecting;
		ArrayElementTypeCheck (L_106, L_108);
		(L_106)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_108);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_109 = V_14;
		String_t* L_110;
		L_110 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_109, NULL);
		V_0 = L_110;
		goto IL_02dd;
	}

IL_028c:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_111 = ___0_e;
		if (!((FailedPredicateException_t7647268B6372BADB40830A6445086CF953B910D5*)IsInstClass((RuntimeObject*)L_111, FailedPredicateException_t7647268B6372BADB40830A6445086CF953B910D5_il2cpp_TypeInfo_var)))
		{
			goto IL_02dd;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_112 = ___0_e;
		V_11 = ((FailedPredicateException_t7647268B6372BADB40830A6445086CF953B910D5*)CastclassClass((RuntimeObject*)L_112, FailedPredicateException_t7647268B6372BADB40830A6445086CF953B910D5_il2cpp_TypeInfo_var));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_113 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		V_15 = L_113;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_114 = V_15;
		(L_114)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2E17E19787A8E4C68AF47C8C58B4F88730743736);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_115 = V_15;
		FailedPredicateException_t7647268B6372BADB40830A6445086CF953B910D5* L_116 = V_11;
		String_t* L_117 = L_116->___ruleName;
		(L_115)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_117);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_118 = V_15;
		(L_118)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral02B0B24969585DD39673A5765009AF30D6D2E538);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119 = V_15;
		FailedPredicateException_t7647268B6372BADB40830A6445086CF953B910D5* L_120 = V_11;
		String_t* L_121 = L_120->___predicateText;
		(L_119)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_121);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_122 = V_15;
		(L_122)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB672AC300BB7EC71FCB5654BA90363C9A37A0087);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_123 = V_15;
		String_t* L_124;
		L_124 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_123, NULL);
		V_0 = L_124;
	}

IL_02dd:
	{
		String_t* L_125 = V_0;
		return L_125;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRecognizer_GetErrorHeader_m610167E3F68C2D794ACE9C457D4B3B81A8F11595 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		ArrayElementTypeCheck (L_1, _stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_3 = ___0_e;
		int32_t L_4;
		L_4 = RecognitionException_get_Line_mCF2F4576F154C8738C51851743302742941DE8F7_inline(L_3, NULL);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		ArrayElementTypeCheck (L_7, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_9 = ___0_e;
		int32_t L_10;
		L_10 = RecognitionException_get_CharPositionInLine_m27A503034EEA24F46F5061A077DBB7F7B3F84A5A_inline(L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		String_t* L_14;
		L_14 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRecognizer_GetTokenErrorDisplay_m3FEED6BC051AA2285F51EA2DF5FF4997490D646B (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RuntimeObject* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068F71F7A557397093A781E1521F2E89FC1A116E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_t;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(9, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_3 = ___0_t;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_3);
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_001f;
		}
	}
	{
		V_0 = _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
		goto IL_003a;
	}

IL_001f:
	{
		RuntimeObject* L_6 = ___0_t;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_6);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_9, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		V_0 = L_10;
	}

IL_003a:
	{
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_11, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, _stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469, NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		String_t* L_14;
		L_14 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_13, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, _stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1, NULL);
		V_0 = L_14;
		String_t* L_15 = V_0;
		String_t* L_16;
		L_16 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_15, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, _stringLiteral068F71F7A557397093A781E1521F2E89FC1A116E, NULL);
		V_0 = L_16;
		String_t* L_17 = V_0;
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, L_17, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_EmitErrorMessage_m26A76F8C351BE6A175DE06B9DEA897AC2B6B8D3C (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0;
		L_0 = Console_get_Error_m0132A8360914E80AD6EEF7A353BC1C75A29AE4BF_inline(NULL);
		String_t* L_1 = ___0_msg;
		VirtualActionInvoker1< String_t* >::Invoke(17, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_Recover_mB5B88551C126FF43FC23B39C87F2461BF3E893A5 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RuntimeObject* ___0_input, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___1_re, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* V_0 = NULL;
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_0 = __this->___state;
		int32_t L_1 = L_0->___lastErrorIndex;
		RuntimeObject* L_2 = ___0_input;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___0_input;
		InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_4);
	}

IL_0019:
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_5 = __this->___state;
		RuntimeObject* L_6 = ___0_input;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_6);
		L_5->___lastErrorIndex = L_7;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_8;
		L_8 = VirtualFuncInvoker0< BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(19, __this);
		V_0 = L_8;
		VirtualActionInvoker0::Invoke(13, __this);
		RuntimeObject* L_9 = ___0_input;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_10 = V_0;
		VirtualActionInvoker2< RuntimeObject*, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(16, __this, L_9, L_10);
		VirtualActionInvoker0::Invoke(14, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_BeginResync_m5F7CE14387934AFC7453BBCE7E3C47D42A49CA01 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_EndResync_m55A6757F4EAFB61876FED36C4337F65C1195C1C0 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseRecognizer_RecoverFromMismatchedToken_m597FE584AABCAA3C6A299CC07EFF17865BDDFBD5 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RuntimeObject* ___0_input, int32_t ___1_ttype, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___2_follow, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		V_0 = (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)NULL;
		RuntimeObject* L_0 = ___0_input;
		int32_t L_1 = ___1_ttype;
		bool L_2;
		L_2 = BaseRecognizer_MismatchIsUnwantedToken_mC87345C4C8D97FBBEE5861D243F945DB18431FB6(__this, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_3 = ___1_ttype;
		RuntimeObject* L_4 = ___0_input;
		UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383* L_5 = (UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383*)il2cpp_codegen_object_new(UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383_il2cpp_TypeInfo_var);
		UnwantedTokenException__ctor_mF40523A59DD1847F23D54B24EF8783701657D79A(L_5, L_3, L_4, NULL);
		V_0 = L_5;
		VirtualActionInvoker0::Invoke(13, __this);
		RuntimeObject* L_6 = ___0_input;
		InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_6);
		VirtualActionInvoker0::Invoke(14, __this);
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_7 = V_0;
		VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(6, __this, L_7);
		RuntimeObject* L_8 = ___0_input;
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(22, __this, L_8);
		V_1 = L_9;
		RuntimeObject* L_10 = ___0_input;
		InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_10);
		RuntimeObject* L_11 = V_1;
		return L_11;
	}

IL_003d:
	{
		RuntimeObject* L_12 = ___0_input;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_13 = ___2_follow;
		bool L_14;
		L_14 = BaseRecognizer_MismatchIsMissingToken_mEFC3B2FC68EA45440158A45E3D3B0C025232E6B1(__this, L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		RuntimeObject* L_15 = ___0_input;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_16 = V_0;
		int32_t L_17 = ___1_ttype;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_18 = ___2_follow;
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker4< RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(23, __this, L_15, L_16, L_17, L_18);
		V_2 = L_19;
		int32_t L_20 = ___1_ttype;
		RuntimeObject* L_21 = ___0_input;
		RuntimeObject* L_22 = V_2;
		MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036* L_23 = (MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036*)il2cpp_codegen_object_new(MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036_il2cpp_TypeInfo_var);
		MissingTokenException__ctor_m1A868C308A09D526E0128AE2237D092D3D11FEDB(L_23, L_20, L_21, L_22, NULL);
		V_0 = L_23;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_24 = V_0;
		VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(6, __this, L_24);
		RuntimeObject* L_25 = V_2;
		return L_25;
	}

IL_0064:
	{
		int32_t L_26 = ___1_ttype;
		RuntimeObject* L_27 = ___0_input;
		MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* L_28 = (MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7_il2cpp_TypeInfo_var)));
		MismatchedTokenException__ctor_m9CEA55630C253FF02BE448D3FDCBC53B9433F2F0(L_28, L_26, L_27, NULL);
		V_0 = L_28;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_29 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseRecognizer_RecoverFromMismatchedToken_m597FE584AABCAA3C6A299CC07EFF17865BDDFBD5_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_ConsumeUntil_m6645322B010BE6DDCFFB447B85ED70CD84308838 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RuntimeObject* ___0_input, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___1_set, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_input;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_0, 1);
		V_0 = L_1;
		goto IL_0018;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___0_input;
		InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_3 = ___0_input;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_3, 1);
		V_0 = L_4;
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_7 = ___1_set;
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(7, L_7, L_8);
		if (!L_9)
		{
			goto IL_000a;
		}
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRecognizer_get_GrammarFileName_mE9F5FF45F486FA76F969F0D1BD52462D97FD3BE5 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, const RuntimeMethod* method) 
{
	{
		return (String_t*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BaseRecognizer_get_TokenNames_m2625251FD8A069AF2B7AAF2D5EC081944773A37A (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, const RuntimeMethod* method) 
{
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* BaseRecognizer_ComputeErrorRecoverySet_mA923A64EA088F1B7F782E4D2B7137DA5867F3839 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, const RuntimeMethod* method) 
{
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_0;
		L_0 = VirtualFuncInvoker1< BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*, bool >::Invoke(21, __this, (bool)0);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* BaseRecognizer_ComputeContextSensitiveRuleFOLLOW_m929B839C260EFBC447C0E11B0FC47B7FD2D7D6A1 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, const RuntimeMethod* method) 
{
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_0;
		L_0 = VirtualFuncInvoker1< BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*, bool >::Invoke(21, __this, (bool)1);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* BaseRecognizer_CombineFollows_m69260E7957E1D3C1386F67EC2735ADC0C48C206A (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, bool ___0_exact, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* V_1 = NULL;
	int32_t V_2 = 0;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* V_3 = NULL;
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_0 = __this->___state;
		int32_t L_1 = L_0->___followingStackPointer;
		V_0 = L_1;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_2 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mEBC6F38329924CC3592C6C3C7E668252227F0AFF(L_2, NULL);
		V_1 = L_2;
		int32_t L_3 = V_0;
		V_2 = L_3;
		goto IL_0046;
	}

IL_0016:
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_4 = __this->___state;
		BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* L_5 = L_4->___following;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_9 = V_1;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_10 = V_3;
		VirtualActionInvoker1< BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(5, L_9, L_10);
		bool L_11 = ___0_exact;
		if (!L_11)
		{
			goto IL_0042;
		}
	}
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_12 = V_3;
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, int32_t >::Invoke(7, L_12, 1);
		if (!L_13)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_15 = V_1;
		VirtualActionInvoker1< int32_t >::Invoke(8, L_15, 1);
	}

IL_0042:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0046:
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}

IL_004a:
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_18 = V_1;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseRecognizer_GetCurrentInputSymbol_m55BB54AA5C46E47E29156ABB02E7DDFBF36B15D6 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseRecognizer_GetMissingSymbol_m95AEE333A2741B8FDF637525F27280195E7BC7E5 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RuntimeObject* ___0_input, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___1_e, int32_t ___2_expectedTokenType, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___3_follow, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___0_fset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_0 = __this->___state;
		int32_t L_1 = L_0->___followingStackPointer;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_2 = __this->___state;
		BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* L_3 = L_2->___following;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, 1))) < ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_4 = __this->___state;
		BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* L_5 = L_4->___following;
		BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* L_6 = (BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588*)(BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588*)SZArrayNew(BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_5)->max_length)), 2)));
		V_0 = L_6;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_7 = __this->___state;
		BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* L_8 = L_7->___following;
		BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* L_9 = V_0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_10 = __this->___state;
		BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* L_11 = L_10->___following;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_12 = __this->___state;
		BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* L_13 = V_0;
		L_12->___following = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___following), (void*)L_13);
	}

IL_005d:
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_14 = __this->___state;
		BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* L_15 = L_14->___following;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_16 = __this->___state;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_17 = L_16;
		int32_t L_18 = L_17->___followingStackPointer;
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		V_1 = L_19;
		L_17->___followingStackPointer = L_19;
		int32_t L_20 = V_1;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_21 = ___0_fset;
		ArrayElementTypeCheck (L_15, L_21);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20), (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)L_21);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__cctor_m85BA14C3383A1A85EE4134E4F2D5C44ADA8E451B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC433421D84928768AA8C58FA51C38B423E100127);
		s_Il2CppMethodInitialized = true;
	}
	{
		((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_StaticFields*)il2cpp_codegen_static_fields_for(BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var))->___NEXT_TOKEN_RULE_NAME = _stringLiteralC433421D84928768AA8C58FA51C38B423E100127;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_StaticFields*)il2cpp_codegen_static_fields_for(BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var))->___NEXT_TOKEN_RULE_NAME), (void*)_stringLiteralC433421D84928768AA8C58FA51C38B423E100127);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__cctor_mD895292564BFD59DE41698F50B9070309BAF6E67 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___MIN_TOKEN_TYPE = 4;
		((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF = (-1);
		int32_t L_0 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF;
		CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* L_1 = (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF*)il2cpp_codegen_object_new(CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		CommonToken__ctor_m917A4F3068BD1B0D6F482B46DD600B638455BCC7(L_1, L_0, NULL);
		((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF_TOKEN = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF_TOKEN), (void*)L_1);
		CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* L_2 = (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF*)il2cpp_codegen_object_new(CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		CommonToken__ctor_m917A4F3068BD1B0D6F482B46DD600B638455BCC7(L_2, 0, NULL);
		((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___INVALID_TOKEN = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___INVALID_TOKEN), (void*)L_2);
		CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* L_3 = (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF*)il2cpp_codegen_object_new(CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		CommonToken__ctor_m917A4F3068BD1B0D6F482B46DD600B638455BCC7(L_3, 0, NULL);
		((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___SKIP_TOKEN = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___SKIP_TOKEN), (void*)L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoViableAltException__ctor_mF9BB4E199F98545AFA4BDF4DD9DA239A0D42CA96 (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* __this, const RuntimeMethod* method) 
{
	{
		RecognitionException__ctor_m656B28E89732A1E6E837BD1433899105F0D3F9E5(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1 (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* __this, String_t* ___0_grammarDecisionDescription, int32_t ___1_decisionNumber, int32_t ___2_stateNumber, RuntimeObject* ___3_input, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___3_input;
		RecognitionException__ctor_m03C410D375A5BE99E9F9CEA8CDEC3F326F6D55B6(__this, L_0, NULL);
		String_t* L_1 = ___0_grammarDecisionDescription;
		__this->___grammarDecisionDescription = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grammarDecisionDescription), (void*)L_1);
		int32_t L_2 = ___1_decisionNumber;
		__this->___decisionNumber = L_2;
		int32_t L_3 = ___2_stateNumber;
		__this->___stateNumber = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NoViableAltException_ToString_m8E5B6E3E907F4BA25FCEC15BF8DCB6B7B3899E7B (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11BBE02CC103A1E73ED5F67A3DD726585A1CBA5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A1AEDB5CAEE8E90D62850F6BDC43033E49619F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831E78D748882CC97BD9765EB1675D24CE94B470);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF269882C28438C0C37FD3291D5FEFE33D1D2C112);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	{
		RuntimeObject* L_0 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)__this)->___input;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var)))
		{
			goto IL_004b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		ArrayElementTypeCheck (L_2, _stringLiteral831E78D748882CC97BD9765EB1675D24CE94B470);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral831E78D748882CC97BD9765EB1675D24CE94B470);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(12, __this);
		Il2CppChar L_5 = ((Il2CppChar)((int32_t)(uint16_t)L_4));
		RuntimeObject* L_6 = Box(il2cpp_defaults.char_class, &L_5);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		ArrayElementTypeCheck (L_7, _stringLiteralF269882C28438C0C37FD3291D5FEFE33D1D2C112);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralF269882C28438C0C37FD3291D5FEFE33D1D2C112);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		String_t* L_9 = __this->___grammarDecisionDescription;
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_0;
		ArrayElementTypeCheck (L_10, _stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_11, NULL);
		return L_12;
	}

IL_004b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_1 = L_13;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		ArrayElementTypeCheck (L_14, _stringLiteral2A1AEDB5CAEE8E90D62850F6BDC43033E49619F2);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral2A1AEDB5CAEE8E90D62850F6BDC43033E49619F2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_1;
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(12, __this);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_defaults.int32_class, &L_17);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_1;
		ArrayElementTypeCheck (L_19, _stringLiteral11BBE02CC103A1E73ED5F67A3DD726585A1CBA5C);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral11BBE02CC103A1E73ED5F67A3DD726585A1CBA5C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		String_t* L_21 = __this->___grammarDecisionDescription;
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_1;
		ArrayElementTypeCheck (L_22, _stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = V_1;
		String_t* L_24;
		L_24 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_23, NULL);
		return L_24;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizerSharedState__ctor_m15A6D7A25E2A244035839024D7A03AF8BBDB5630 (RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* L_0 = (BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588*)(BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588*)SZArrayNew(BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->___following = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___following), (void*)L_0);
		__this->___followingStackPointer = (-1);
		__this->___lastErrorIndex = (-1);
		__this->___tokenStartCharIndex = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__ctor_mEBC6F38329924CC3592C6C3C7E668252227F0AFF (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, const RuntimeMethod* method) 
{
	{
		BitSet__ctor_m89B9CA6D2666DDB548E3D35BD18C92C05F332D70(__this, ((int32_t)64), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57 (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_bits_, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_bits_;
		__this->___bits = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bits), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__ctor_m89B9CA6D2666DDB548E3D35BD18C92C05F332D70 (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, int32_t ___0_nbits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_nbits;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_0, 1))>>6)), 1)));
		__this->___bits = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bits), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* BitSet_Or_m275220161D2BF7AC2285292A011B73A46E92B7AF (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* V_0 = NULL;
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_0 = ___0_a;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return __this;
	}

IL_0005:
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, __this);
		V_0 = ((BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)CastclassClass((RuntimeObject*)L_1, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_2 = V_0;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_3 = ___0_a;
		VirtualActionInvoker1< BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(5, L_2, L_3);
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet_OrInPlace_m92D794AC3697822A2D1321313F90F89153DDE7E4 (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_0 = ___0_a;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_1 = ___0_a;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = L_1->___bits;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->___bits;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_4 = ___0_a;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = L_4->___bits;
		BitSet_SetSize_mA8C03827A54EACBC3CF857F274952711D3C582CF(__this, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
	}

IL_0024:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->___bits;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_7 = ___0_a;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = L_7->___bits;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)(((RuntimeArray*)L_6)->max_length)), ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_0064;
	}

IL_0040:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = __this->___bits;
		int32_t L_12 = V_1;
		uint64_t* L_13 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)));
		uint64_t L_14 = (*(uint64_t*)L_13);
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_15 = ___0_a;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = L_15->___bits;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		int64_t L_19 = (int64_t)(L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		*(uint64_t*)L_13 = ((int64_t)((int64_t)L_14|L_19));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
	}

IL_0064:
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BitSet_Clone_m7705A1E1936D52211ABE64652D16995764BBD028 (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		V_0 = ((BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)CastclassClass((RuntimeObject*)L_0, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_1 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->___bits;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		L_1->___bits = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___bits), (void*)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->___bits;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_5 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = L_5->___bits;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = __this->___bits;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		goto IL_0049;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		Exception_t* L_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_8;
		Exception_t* L_9 = V_1;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0DE550D00484E81C95E34B74340AAC5C93E738D6)), L_9, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitSet_Clone_m7705A1E1936D52211ABE64652D16995764BBD028_RuntimeMethod_var)));
	}

IL_0049:
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitSet_Member_m57C13453B23DDEA7CAAF9727C8E74AAE33D026E1 (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, int32_t ___0_el, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_el;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}

IL_0006:
	{
		int32_t L_1 = ___0_el;
		il2cpp_codegen_runtime_class_init_inline(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = BitSet_WordNumber_m5874E6BFE415F2C5A8187B709A0DB07310AB9C14(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->___bits;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->___bits;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		int64_t L_8 = (int64_t)(L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = ___0_el;
		il2cpp_codegen_runtime_class_init_inline(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		uint64_t L_10;
		L_10 = BitSet_BitMask_m6D3EC6D03A7B98F5D5D33B6F1AB1E970F201B6D3(L_9, NULL);
		return (bool)((((int32_t)((((int64_t)((int64_t)(L_8&(int64_t)L_10))) == ((int64_t)((int64_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet_Remove_m0A6B8CDFEA2E56FBA867B7EF89204E6D53C8B6B5 (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, int32_t ___0_el, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_el;
		il2cpp_codegen_runtime_class_init_inline(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitSet_WordNumber_m5874E6BFE415F2C5A8187B709A0DB07310AB9C14(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->___bits;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->___bits;
		int32_t L_5 = V_0;
		uint64_t* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)));
		uint64_t L_7 = (*(uint64_t*)L_6);
		int32_t L_8 = ___0_el;
		il2cpp_codegen_runtime_class_init_inline(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		uint64_t L_9;
		L_9 = BitSet_BitMask_m6D3EC6D03A7B98F5D5D33B6F1AB1E970F201B6D3(L_8, NULL);
		*(uint64_t*)L_6 = ((int64_t)((int64_t)L_7&(int64_t)((~L_9))));
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitSet_WordNumber_m5874E6BFE415F2C5A8187B709A0DB07310AB9C14 (int32_t ___0_bit, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_bit;
		return ((int32_t)(L_0>>6));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitSet_ToString_m409D4C08611C1B8E85CC8DA3A72C6C30BA1E377C (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker1< String_t*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(9, __this, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitSet_ToString_m5D2B5CE4B2CC46A105666C45FCDD9395C263E18A (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokenNames, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		V_1 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		V_2 = (bool)0;
		StringBuilder_t* L_1 = V_0;
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, ((int32_t)123), NULL);
		V_3 = 0;
		goto IL_0050;
	}

IL_001b:
	{
		int32_t L_3 = V_3;
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, int32_t >::Invoke(7, __this, L_3);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = V_3;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		StringBuilder_t* L_7 = V_0;
		String_t* L_8 = V_1;
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, L_8, NULL);
	}

IL_0033:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___0_tokenNames;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t* L_11 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___0_tokenNames;
		int32_t L_13 = V_3;
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_15, NULL);
		goto IL_004a;
	}

IL_0042:
	{
		StringBuilder_t* L_17 = V_0;
		int32_t L_18 = V_3;
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_17, L_18, NULL);
	}

IL_004a:
	{
		V_2 = (bool)1;
	}

IL_004c:
	{
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0050:
	{
		int32_t L_21 = V_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = __this->___bits;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_22)->max_length))<<6)))))
		{
			goto IL_001b;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, ((int32_t)125), NULL);
		StringBuilder_t* L_25 = V_0;
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_25);
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitSet_Equals_mCD5BDA2F3478CB854A55D607F4B555BD87D4FC0A (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)IsInstClass((RuntimeObject*)L_1, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)CastclassClass((RuntimeObject*)L_2, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->___bits;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_4 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = L_4->___bits;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)(((RuntimeArray*)L_3)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0046;
	}

IL_002e:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = __this->___bits;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		int64_t L_10 = (int64_t)(L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_11 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = L_11->___bits;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		int64_t L_15 = (int64_t)(L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		if ((((int64_t)L_10) == ((int64_t)L_15)))
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0042:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0046:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002e;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = __this->___bits;
		int32_t L_20 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))) <= ((int32_t)L_20)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_21 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		goto IL_006d;
	}

IL_005b:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = __this->___bits;
		int32_t L_23 = V_3;
		int32_t L_24 = L_23;
		int64_t L_25 = (int64_t)(L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int64_t)L_25) == ((int64_t)((int64_t)0))))
		{
			goto IL_0069;
		}
	}
	{
		return (bool)0;
	}

IL_0069:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006d:
	{
		int32_t L_27 = V_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = __this->___bits;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_00ad;
	}

IL_007a:
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_29 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_30 = L_29->___bits;
		int32_t L_31 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))) <= ((int32_t)L_31)))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_32 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		goto IL_00a1;
	}

IL_008c:
	{
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_33 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = L_33->___bits;
		int32_t L_35 = V_4;
		int32_t L_36 = L_35;
		int64_t L_37 = (int64_t)(L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		if ((((int64_t)L_37) == ((int64_t)((int64_t)0))))
		{
			goto IL_009b;
		}
	}
	{
		return (bool)0;
	}

IL_009b:
	{
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00a1:
	{
		int32_t L_39 = V_4;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_40 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = L_40->___bits;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_008c;
		}
	}

IL_00ad:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitSet_GetHashCode_m84A3A86238DCE862340EA0799C1A47866BFA7D01 (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitSet_BitMask_m6D3EC6D03A7B98F5D5D33B6F1AB1E970F201B6D3 (int32_t ___0_bitNumber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_bitNumber;
		il2cpp_codegen_runtime_class_init_inline(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_StaticFields*)il2cpp_codegen_static_fields_for(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var))->___MOD_MASK;
		V_0 = ((int32_t)(L_0&L_1));
		int32_t L_2 = V_0;
		return ((int64_t)(((int64_t)1)<<((int32_t)(L_2&((int32_t)63)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet_SetSize_mA8C03827A54EACBC3CF857F274952711D3C582CF (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, int32_t ___0_nwords, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_nwords;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_nwords;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->___bits;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		V_1 = L_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->___bits;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_0;
		int32_t L_7 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = V_0;
		__this->___bits = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bits), (void*)L_8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__cctor_m610872F0778E8EA908F4DA026F2AE33345253E83 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_StaticFields*)il2cpp_codegen_static_fields_for(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var))->___MOD_MASK = ((int32_t)63);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree__ctor_m9BBF12D742E39E6AB8F68D47E5DB68CC882A37DF (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseTree_get_ChildCount_m3B068C312DDD0B5B2D081FE741E52FEF0EBA01E0 (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___children;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___children;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseTree_get_IsNil_m2239C5110D98FA09B888434D0A16E949CFA69098 (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseTree_get_Line_m967E5DEB1DA48739B65050EC8FFCA2031F2681D1 (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseTree_get_CharPositionInLine_mD6C6478DBF9E60F5E990EE78183AC8C034C0B123 (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseTree_GetChild_m49D0C9F9516DFE8ACC15D565F196EC898790E077 (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___children;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___0_i;
		RuntimeObject* L_2 = __this->___children;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		return (RuntimeObject*)NULL;
	}

IL_0018:
	{
		RuntimeObject* L_4 = __this->___children;
		int32_t L_5 = ___0_i;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, L_5);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseTree_get_Children_m4BFF76AB0911C01D66555175399C10CA6F022D1C (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___children;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree_AddChild_mE1812AA9A902D4E415B5BA551CC58E931F7F096C (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, RuntimeObject* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTree_t93C88620BBC74C7117CD89A87723D83057772909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___0_t;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1 = ___0_t;
		V_0 = ((BaseTree_t93C88620BBC74C7117CD89A87723D83057772909*)CastclassClass((RuntimeObject*)L_1, BaseTree_t93C88620BBC74C7117CD89A87723D83057772909_il2cpp_TypeInfo_var));
		BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* L_2 = V_0;
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(17, L_2);
		if (!L_3)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeObject* L_4 = __this->___children;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_5 = __this->___children;
		BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* L_6 = V_0;
		RuntimeObject* L_7 = L_6->___children;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)L_7))))
		{
			goto IL_0037;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9CF256B478BDF53420854CC509AB9C76BD6842C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseTree_AddChild_mE1812AA9A902D4E415B5BA551CC58E931F7F096C_RuntimeMethod_var)));
	}

IL_0037:
	{
		BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* L_9 = V_0;
		RuntimeObject* L_10 = L_9->___children;
		if (!L_10)
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_11 = __this->___children;
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* L_12 = V_0;
		RuntimeObject* L_13 = L_12->___children;
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_13);
		V_1 = L_14;
		V_2 = 0;
		goto IL_0097;
	}

IL_005a:
	{
		BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* L_15 = V_0;
		RuntimeObject* L_16;
		L_16 = BaseTree_get_Children_m4BFF76AB0911C01D66555175399C10CA6F022D1C_inline(L_15, NULL);
		int32_t L_17 = V_2;
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_16, L_17);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_18, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var));
		RuntimeObject* L_19 = __this->___children;
		RuntimeObject* L_20 = V_3;
		int32_t L_21;
		L_21 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_19, L_20);
		RuntimeObject* L_22 = V_3;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, L_22, __this);
		RuntimeObject* L_23 = V_3;
		RuntimeObject* L_24 = __this->___children;
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_24);
		InterfaceActionInvoker1< int32_t >::Invoke(2, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, L_23, ((int32_t)il2cpp_codegen_subtract(L_25, 1)));
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0097:
	{
		int32_t L_27 = V_2;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_005a;
		}
	}
	{
		return;
	}

IL_009c:
	{
		BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* L_29 = V_0;
		RuntimeObject* L_30 = L_29->___children;
		__this->___children = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___children), (void*)L_30);
		VirtualActionInvoker0::Invoke(23, __this);
		return;
	}

IL_00af:
	{
		RuntimeObject* L_31 = __this->___children;
		if (L_31)
		{
			goto IL_00c3;
		}
	}
	{
		RuntimeObject* L_32;
		L_32 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(22, __this);
		__this->___children = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___children), (void*)L_32);
	}

IL_00c3:
	{
		RuntimeObject* L_33 = __this->___children;
		RuntimeObject* L_34 = ___0_t;
		int32_t L_35;
		L_35 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_33, L_34);
		BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* L_36 = V_0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(26, L_36, __this);
		BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* L_37 = V_0;
		RuntimeObject* L_38 = __this->___children;
		int32_t L_39;
		L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_38);
		VirtualActionInvoker1< int32_t >::Invoke(25, L_37, ((int32_t)il2cpp_codegen_subtract(L_39, 1)));
	}

IL_00ea:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseTree_CreateChildrenList_m335AAEF22103107CB0246B98EE5BDEF2F806DBEF (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree_FreshenParentAndChildIndexes_m15BABBA20AA58CD2126C0A5767BA9D0BA094E74B (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker1< int32_t >::Invoke(24, __this, 0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree_FreshenParentAndChildIndexes_mA5A220E49D03BE60E628338026C3E2A3A4D25028 (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(16, __this);
		V_0 = L_0;
		int32_t L_1 = ___0_offset;
		V_1 = L_1;
		goto IL_0025;
	}

IL_000b:
	{
		int32_t L_2 = V_1;
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(20, __this, L_2);
		V_2 = L_3;
		RuntimeObject* L_4 = V_2;
		int32_t L_5 = V_1;
		InterfaceActionInvoker1< int32_t >::Invoke(2, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = V_2;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ITree_t701625166D49E7918A0615A08F20EA8219135176_il2cpp_TypeInfo_var, L_6, __this);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree_set_ChildIndex_mA09413BC786CEBABDB8D391C6B377B36FAC7F76D (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree_set_Parent_m0DE235708503E5C8A9BAFD2726EB16435E46DAB5 (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MismatchedTokenException_get_Expecting_m23F654E59D314B73009CA2220DBF30B93C886B43 (MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___expecting;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTokenException__ctor_mEB1D641F6860C5381D2D4BF4E140643B0F7B8168 (MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* __this, const RuntimeMethod* method) 
{
	{
		RecognitionException__ctor_m656B28E89732A1E6E837BD1433899105F0D3F9E5(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTokenException__ctor_m9CEA55630C253FF02BE448D3FDCBC53B9433F2F0 (MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* __this, int32_t ___0_expecting, RuntimeObject* ___1_input, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_input;
		RecognitionException__ctor_m03C410D375A5BE99E9F9CEA8CDEC3F326F6D55B6(__this, L_0, NULL);
		int32_t L_1 = ___0_expecting;
		__this->___expecting = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MismatchedTokenException_ToString_mFBD1B1444B57267B267521806309617CA1C05C93 (MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5344162BAF253B06CDAC1B2EC90C6B5A8233C777);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		ArrayElementTypeCheck (L_1, _stringLiteral5344162BAF253B06CDAC1B2EC90C6B5A8233C777);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral5344162BAF253B06CDAC1B2EC90C6B5A8233C777);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(12, __this);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		ArrayElementTypeCheck (L_6, _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		int32_t L_8 = __this->___expecting;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		ArrayElementTypeCheck (L_11, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_12, NULL);
		return L_13;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingTokenException__ctor_m04F68C78F4E69BAF47118028D4E9225669F15E26 (MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036* __this, const RuntimeMethod* method) 
{
	{
		MismatchedTokenException__ctor_mEB1D641F6860C5381D2D4BF4E140643B0F7B8168(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingTokenException__ctor_m1A868C308A09D526E0128AE2237D092D3D11FEDB (MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036* __this, int32_t ___0_expecting, RuntimeObject* ___1_input, RuntimeObject* ___2_inserted, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_expecting;
		RuntimeObject* L_1 = ___1_input;
		MismatchedTokenException__ctor_m9CEA55630C253FF02BE448D3FDCBC53B9433F2F0(__this, L_0, L_1, NULL);
		RuntimeObject* L_2 = ___2_inserted;
		__this->___inserted = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inserted), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MissingTokenException_get_MissingType_mA67E34404F3038563111102F4428E8917908AEA7 (MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = MismatchedTokenException_get_Expecting_m23F654E59D314B73009CA2220DBF30B93C886B43_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MissingTokenException_ToString_m21178A95776EC2969B9CCAEA30271D24ACEFC87D (MissingTokenException_tEBD37B04E6B725EB93C24CEACBE6D50D064BF036* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral028C74A0DB1E632B4407A7E6DCFFFBD9B074CF39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral572FF46D3B9511AD8D3805B2824FB1339FD57103);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF69DA5EB0BBCF119F35BBA6BB5AF87157B85B1BA);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___inserted;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_1 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)__this)->___token;
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		ArrayElementTypeCheck (L_3, _stringLiteral028C74A0DB1E632B4407A7E6DCFFFBD9B074CF39);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral028C74A0DB1E632B4407A7E6DCFFFBD9B074CF39);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		RuntimeObject* L_5 = __this->___inserted;
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		ArrayElementTypeCheck (L_6, _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		RuntimeObject* L_8 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)__this)->___token;
		String_t* L_9;
		L_9 = InterfaceFuncInvoker0< String_t* >::Invoke(9, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_8);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_0;
		ArrayElementTypeCheck (L_10, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_11, NULL);
		return L_12;
	}

IL_004d:
	{
		RuntimeObject* L_13 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)__this)->___token;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		RuntimeObject* L_14 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)__this)->___token;
		String_t* L_15;
		L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(9, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_14);
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral572FF46D3B9511AD8D3805B2824FB1339FD57103, L_15, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return L_16;
	}

IL_0070:
	{
		return _stringLiteralF69DA5EB0BBCF119F35BBA6BB5AF87157B85B1BA;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTreeNodeException__ctor_mEEAF0D8A05BDC8E2E6CF5D56FF6B790444757AE9 (MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B* __this, const RuntimeMethod* method) 
{
	{
		RecognitionException__ctor_m656B28E89732A1E6E837BD1433899105F0D3F9E5(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MismatchedTreeNodeException_ToString_m81B1C2392C2852F15BD91404CB474BA21FE24DAC (MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BDD04DFC424EFEBF0D139BB53B98B27AB2A5F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		ArrayElementTypeCheck (L_1, _stringLiteral67BDD04DFC424EFEBF0D139BB53B98B27AB2A5F1);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral67BDD04DFC424EFEBF0D139BB53B98B27AB2A5F1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(12, __this);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		ArrayElementTypeCheck (L_6, _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		int32_t L_8 = __this->___expecting;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		ArrayElementTypeCheck (L_11, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_12, NULL);
		return L_13;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedSetException__ctor_mA55442968852FE2A4BE38627DABEED01A57B764E (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* __this, const RuntimeMethod* method) 
{
	{
		RecognitionException__ctor_m656B28E89732A1E6E837BD1433899105F0D3F9E5(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedSetException__ctor_m86BBF2EDDE084B2481D65102A4D9A78A4F4F42A4 (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* __this, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___0_expecting, RuntimeObject* ___1_input, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_input;
		RecognitionException__ctor_m03C410D375A5BE99E9F9CEA8CDEC3F326F6D55B6(__this, L_0, NULL);
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_1 = ___0_expecting;
		__this->___expecting = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___expecting), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MismatchedSetException_ToString_mB92EEE2370253D4C869410B19CF67D7FE12B9B31 (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010FD1A4E7CFE170E6B749B2D8B6E689C923A6F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		ArrayElementTypeCheck (L_1, _stringLiteral010FD1A4E7CFE170E6B749B2D8B6E689C923A6F1);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral010FD1A4E7CFE170E6B749B2D8B6E689C923A6F1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(12, __this);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		ArrayElementTypeCheck (L_6, _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_8 = __this->___expecting;
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		ArrayElementTypeCheck (L_9, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_10, NULL);
		return L_11;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarlyExitException__ctor_m90142AE17C084EEA7FAF7F59D75EC1185E9F66ED (EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02* __this, const RuntimeMethod* method) 
{
	{
		RecognitionException__ctor_m656B28E89732A1E6E837BD1433899105F0D3F9E5(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarlyExitException__ctor_m0541AC4458BD8EDA74F4F737CA53F33CB51711E3 (EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02* __this, int32_t ___0_decisionNumber, RuntimeObject* ___1_input, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_input;
		RecognitionException__ctor_m03C410D375A5BE99E9F9CEA8CDEC3F326F6D55B6(__this, L_0, NULL);
		int32_t L_1 = ___0_decisionNumber;
		__this->___decisionNumber = L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnwantedTokenException__ctor_mF40523A59DD1847F23D54B24EF8783701657D79A (UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383* __this, int32_t ___0_expecting, RuntimeObject* ___1_input, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_expecting;
		RuntimeObject* L_1 = ___1_input;
		MismatchedTokenException__ctor_m9CEA55630C253FF02BE448D3FDCBC53B9433F2F0(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnwantedTokenException_get_UnexpectedToken_m6BBA9AE0241A5672D271915005C3402AD55F5E6B (UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)__this)->___token;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnwantedTokenException_ToString_m92670890084920DD674482EBEEDFA5E73FF954A5 (UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89613337171E9DEFA7887E7F72F841FC8CD2A91D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB38643AD57CD8AD5D44FF10AFEC78B1EA05C2E2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = MismatchedTokenException_get_Expecting_m23F654E59D314B73009CA2220DBF30B93C886B43_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_defaults.int32_class, &L_1);
		String_t* L_3;
		L_3 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteral89613337171E9DEFA7887E7F72F841FC8CD2A91D, L_2, NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = MismatchedTokenException_get_Expecting_m23F654E59D314B73009CA2220DBF30B93C886B43_inline(__this, NULL);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0024:
	{
		RuntimeObject* L_5 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)__this)->___token;
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralDB38643AD57CD8AD5D44FF10AFEC78B1EA05C2E2, L_6, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return L_7;
	}

IL_003d:
	{
		RuntimeObject* L_8 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)__this)->___token;
		String_t* L_9;
		L_9 = InterfaceFuncInvoker0< String_t* >::Invoke(9, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_8);
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralDB38643AD57CD8AD5D44FF10AFEC78B1EA05C2E2, L_9, L_10, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return L_11;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedNotSetException__ctor_m8B71650E2EAF8758382655CD13727BC12D69867B (MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D* __this, const RuntimeMethod* method) 
{
	{
		MismatchedSetException__ctor_mA55442968852FE2A4BE38627DABEED01A57B764E(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MismatchedNotSetException_ToString_m2F2F45016D4898527F2FE98989935BB676ECD0B7 (MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		ArrayElementTypeCheck (L_1, _stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(12, __this);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		ArrayElementTypeCheck (L_6, _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_8 = ((MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)__this)->___expecting;
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		ArrayElementTypeCheck (L_9, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_10, NULL);
		return L_11;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FailedPredicateException__ctor_mDD55758CE5DF92C04FB976F074D4C354130CC713 (FailedPredicateException_t7647268B6372BADB40830A6445086CF953B910D5* __this, const RuntimeMethod* method) 
{
	{
		RecognitionException__ctor_m656B28E89732A1E6E837BD1433899105F0D3F9E5(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FailedPredicateException_ToString_m6278D73BD9400D6ABF66EE665AA81413D4EFA11A (FailedPredicateException_t7647268B6372BADB40830A6445086CF953B910D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56626DE0EFD91D9DFE7EAC03BEA17A2B3DDA87DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE57A52EEA6A5FF8543FFE4D8ACA937ACCD7C5458);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE6D7C0828400A663B0542D323AD5ADC39004047);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE57A52EEA6A5FF8543FFE4D8ACA937ACCD7C5458);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		String_t* L_3 = __this->___ruleName;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral56626DE0EFD91D9DFE7EAC03BEA17A2B3DDA87DA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		String_t* L_6 = __this->___predicateText;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFE6D7C0828400A663B0542D323AD5ADC39004047);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_8, NULL);
		return L_9;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_mF0C35B435B51EDA046E007B572E2EC79E5123136 (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var);
		BaseRecognizer__ctor_m1896802BFE995C01D0331380FA3FB24C21A257E7(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_m24C22EFB05E63CE0F2EC8CEBCEFE977744911D77 (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, RuntimeObject* ___0_input, RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_0 = ___1_state;
		il2cpp_codegen_runtime_class_init_inline(BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var);
		BaseRecognizer__ctor_m7F1EE5D983A174EEDC315B30CB8D40992468ECAC(__this, L_0, NULL);
		RuntimeObject* L_1 = ___0_input;
		__this->___input = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_get_CharIndex_m8C8098B4578FB93F52DDB9769430EA21662AAA7D (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___input;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_Reset_m691AC637C8424EA1EE8C96231DC963C3B5C39F46 (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseRecognizer_Reset_m1BCCB93F4B484CBC862B17E5D0F796C76EB03973(__this, NULL);
		RuntimeObject* L_0 = __this->___input;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___input;
		InterfaceActionInvoker1< int32_t >::Invoke(5, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_1, 0);
	}

IL_001a:
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_2 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_3 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_3->___token = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___token), (void*)(RuntimeObject*)NULL);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_4 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_4->___type = 0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_5 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_5->___channel = 0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_6 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_6->___tokenStartCharIndex = (-1);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_7 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_7->___tokenStartCharPositionInLine = (-1);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_8->___tokenStartLine = (-1);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_9->___text = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___text), (void*)(String_t*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lexer_NextToken_m7E4C6D084A220599C88FBAEA516217232D3F1867 (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_0 = NULL;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_0 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_0->___token = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___token), (void*)(RuntimeObject*)NULL);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_1 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_1->___channel = 0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_2 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		RuntimeObject* L_3 = __this->___input;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_3);
		L_2->___tokenStartCharIndex = L_4;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_5 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		RuntimeObject* L_6 = __this->___input;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var, L_6);
		L_5->___tokenStartCharPositionInLine = L_7;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		RuntimeObject* L_9 = __this->___input;
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D_il2cpp_TypeInfo_var, L_9);
		L_8->___tokenStartLine = L_10;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_11 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_11->___text = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___text), (void*)(String_t*)NULL);
		RuntimeObject* L_12 = __this->___input;
		int32_t L_13;
		L_13 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_12, 1);
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_007b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF_TOKEN;
		return L_14;
	}

IL_007b:
	try
	{

IL_007b_1:
		{
			VirtualActionInvoker0::Invoke(27, __this);
			RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_15 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
			RuntimeObject* L_16 = L_15->___token;
			if (L_16)
			{
				goto IL_0097_1;
			}
		}
		{
			RuntimeObject* L_17;
			L_17 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(29, __this);
			goto IL_00ae_1;
		}

IL_0097_1:
		{
			RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_18 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
			RuntimeObject* L_19 = L_18->___token;
			il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
			RuntimeObject* L_20 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___SKIP_TOKEN;
			if ((!(((RuntimeObject*)(RuntimeObject*)L_19) == ((RuntimeObject*)(RuntimeObject*)L_20))))
			{
				goto IL_00ae_1;
			}
		}
		{
			goto IL_0000;
		}

IL_00ae_1:
		{
			RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_21 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
			RuntimeObject* L_22 = L_21->___token;
			V_2 = L_22;
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bc;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d0;
		}
		throw e;
	}

CATCH_00bc:
	{
		NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_23 = ((NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)IL2CPP_GET_ACTIVE_EXCEPTION(NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*));;
		V_0 = L_23;
		NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_24 = V_0;
		VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(6, __this, L_24);
		NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_25 = V_0;
		VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(33, __this, L_25);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0000;
	}

CATCH_00d0:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_26 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
		V_1 = L_26;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_27 = V_1;
		VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(6, __this, L_27);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0000;
	}

IL_00dd:
	{
		RuntimeObject* L_28 = V_2;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_Emit_mDCA2DD47CF1353841DC689208777855161A7FE0B (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, RuntimeObject* ___0_token, const RuntimeMethod* method) 
{
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_0 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		RuntimeObject* L_1 = ___0_token;
		L_0->___token = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___token), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lexer_Emit_m2B45E2F2688DC1C7E23FD877243CBF47F3A948B7 (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___input;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_1 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		int32_t L_2 = L_1->___type;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_3 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		int32_t L_4 = L_3->___channel;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_5 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		int32_t L_6 = L_5->___tokenStartCharIndex;
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(25, __this);
		CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* L_8 = (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF*)il2cpp_codegen_object_new(CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		CommonToken__ctor_m78782A6AC6EC6C48071957BFFEA810F80B579124(L_8, L_0, L_2, L_4, L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), NULL);
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_10 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		int32_t L_11 = L_10->___tokenStartLine;
		InterfaceActionInvoker1< int32_t >::Invoke(2, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_9, L_11);
		RuntimeObject* L_12 = V_0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_13 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		String_t* L_14 = L_13->___text;
		InterfaceActionInvoker1< String_t* >::Invoke(10, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_12, L_14);
		RuntimeObject* L_15 = V_0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_16 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		int32_t L_17 = L_16->___tokenStartCharPositionInLine;
		InterfaceActionInvoker1< int32_t >::Invoke(4, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_15, L_17);
		RuntimeObject* L_18 = V_0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(28, __this, L_18);
		RuntimeObject* L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_Match_m2531BB7CD74811277E38C4F83B4CCCCA22DC7E7C (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_006b;
	}

IL_0004:
	{
		RuntimeObject* L_0 = __this->___input;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_0, 1);
		String_t* L_2 = ___0_s;
		int32_t L_3 = V_0;
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_4)))
		{
			goto IL_0050;
		}
	}
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_5 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		int32_t L_6 = L_5->___backtracking;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_7 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_7->___failed = (bool)1;
		return;
	}

IL_0034:
	{
		String_t* L_8 = ___0_s;
		int32_t L_9 = V_0;
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		RuntimeObject* L_11 = __this->___input;
		MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* L_12 = (MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7_il2cpp_TypeInfo_var)));
		MismatchedTokenException__ctor_m9CEA55630C253FF02BE448D3FDCBC53B9433F2F0(L_12, L_10, L_11, NULL);
		V_1 = L_12;
		MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* L_13 = V_1;
		VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(33, __this, L_13);
		MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* L_14 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lexer_Match_m2531BB7CD74811277E38C4F83B4CCCCA22DC7E7C_RuntimeMethod_var)));
	}

IL_0050:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		RuntimeObject* L_16 = __this->___input;
		InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_16);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_17 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_17->___failed = (bool)0;
	}

IL_006b:
	{
		int32_t L_18 = V_0;
		String_t* L_19 = ___0_s;
		int32_t L_20;
		L_20 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_19, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_Match_m9709AF44AED1D39EA5ABB719AC29F37C99BBE7A0 (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, int32_t ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___input;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_0, 1);
		int32_t L_2 = ___0_c;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0040;
		}
	}
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_3 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		int32_t L_4 = L_3->___backtracking;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_5 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_5->___failed = (bool)1;
		return;
	}

IL_002a:
	{
		int32_t L_6 = ___0_c;
		RuntimeObject* L_7 = __this->___input;
		MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* L_8 = (MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7_il2cpp_TypeInfo_var)));
		MismatchedTokenException__ctor_m9CEA55630C253FF02BE448D3FDCBC53B9433F2F0(L_8, L_6, L_7, NULL);
		V_0 = L_8;
		MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* L_9 = V_0;
		VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(33, __this, L_9);
		MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* L_10 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lexer_Match_m9709AF44AED1D39EA5ABB719AC29F37C99BBE7A0_RuntimeMethod_var)));
	}

IL_0040:
	{
		RuntimeObject* L_11 = __this->___input;
		InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_11);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_12 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_12->___failed = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_MatchRange_mFD3938618A029EA02074DD8C93C890F2BA062343 (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___input;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_0, 1);
		int32_t L_2 = ___0_a;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = __this->___input;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_3, 1);
		int32_t L_5 = ___1_b;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0050;
		}
	}

IL_001e:
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_6 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		int32_t L_7 = L_6->___backtracking;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_8->___failed = (bool)1;
		return;
	}

IL_0039:
	{
		int32_t L_9 = ___0_a;
		int32_t L_10 = ___1_b;
		RuntimeObject* L_11 = __this->___input;
		MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* L_12 = (MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F_il2cpp_TypeInfo_var)));
		MismatchedRangeException__ctor_m72505ACB0157E02D7E7EC1E4DC124F093C3E645A(L_12, L_9, L_10, L_11, NULL);
		V_0 = L_12;
		MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* L_13 = V_0;
		VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(33, __this, L_13);
		MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* L_14 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lexer_MatchRange_mFD3938618A029EA02074DD8C93C890F2BA062343_RuntimeMethod_var)));
	}

IL_0050:
	{
		RuntimeObject* L_15 = __this->___input;
		InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_15);
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_16 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
		L_16->___failed = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_Recover_mB89F7D274FF758EE1CDE0B600335A3B6CA1EC4BC (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___0_re, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___input;
		InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_ReportError_m5571837442862DD9B82715AD2CD3D3020F6B364B (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___0_e, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = VirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(18, __this);
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_1 = ___0_e;
		VirtualActionInvoker2< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(7, __this, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_GetErrorMessage_m2228C1278F400F7ECA06C3709CB78DC19461C747 (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___0_e, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tokenNames, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B4494BD6F11C452454C855BB3BEC40FBCE30246);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB5A72888DBC6EACBDA745AEF7C34A44085ECD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* V_1 = NULL;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_2 = NULL;
	EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02* V_3 = NULL;
	MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* V_4 = NULL;
	MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* V_5 = NULL;
	MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* V_6 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_7 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_8 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_9 = NULL;
	{
		V_0 = (String_t*)NULL;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_0 = ___0_e;
		if (!((MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7*)IsInstClass((RuntimeObject*)L_0, MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7_il2cpp_TypeInfo_var)))
		{
			goto IL_003e;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_1 = ___0_e;
		V_1 = ((MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7*)CastclassClass((RuntimeObject*)L_1, MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7_il2cpp_TypeInfo_var));
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_2 = ___0_e;
		int32_t L_3;
		L_3 = RecognitionException_get_Char_m9D0DDF8D55FE6E996FEB4FEC29B102535F9C526A_inline(L_2, NULL);
		String_t* L_4;
		L_4 = Lexer_GetCharErrorDisplay_m1425AB18E2A4A0C7EAF9D923D46B8FA390779BAA(__this, L_3, NULL);
		MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* L_5 = V_1;
		int32_t L_6;
		L_6 = MismatchedTokenException_get_Expecting_m23F654E59D314B73009CA2220DBF30B93C886B43_inline(L_5, NULL);
		String_t* L_7;
		L_7 = Lexer_GetCharErrorDisplay_m1425AB18E2A4A0C7EAF9D923D46B8FA390779BAA(__this, L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4, L_4, _stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379, L_7, NULL);
		V_0 = L_8;
		goto IL_01b0;
	}

IL_003e:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_9 = ___0_e;
		if (!((NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)IsInstClass((RuntimeObject*)L_9, NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)))
		{
			goto IL_0069;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_10 = ___0_e;
		V_2 = ((NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)CastclassClass((RuntimeObject*)L_10, NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var));
		NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_11 = V_2;
		int32_t L_12;
		L_12 = RecognitionException_get_Char_m9D0DDF8D55FE6E996FEB4FEC29B102535F9C526A_inline(L_11, NULL);
		String_t* L_13;
		L_13 = Lexer_GetCharErrorDisplay_m1425AB18E2A4A0C7EAF9D923D46B8FA390779BAA(__this, L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6B4494BD6F11C452454C855BB3BEC40FBCE30246, L_13, NULL);
		V_0 = L_14;
		goto IL_01b0;
	}

IL_0069:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_15 = ___0_e;
		if (!((EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02*)IsInstClass((RuntimeObject*)L_15, EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02_il2cpp_TypeInfo_var)))
		{
			goto IL_0094;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_16 = ___0_e;
		V_3 = ((EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02*)CastclassClass((RuntimeObject*)L_16, EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02_il2cpp_TypeInfo_var));
		EarlyExitException_t8FE7CE07A5864E4F31F3383B4ADDF2F9968F9E02* L_17 = V_3;
		int32_t L_18;
		L_18 = RecognitionException_get_Char_m9D0DDF8D55FE6E996FEB4FEC29B102535F9C526A_inline(L_17, NULL);
		String_t* L_19;
		L_19 = Lexer_GetCharErrorDisplay_m1425AB18E2A4A0C7EAF9D923D46B8FA390779BAA(__this, L_18, NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7CB5A72888DBC6EACBDA745AEF7C34A44085ECD4, L_19, NULL);
		V_0 = L_20;
		goto IL_01b0;
	}

IL_0094:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_21 = ___0_e;
		if (!((MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D*)IsInstClass((RuntimeObject*)L_21, MismatchedNotSetException_tF92260D71512E59A4B352C99AA8AA10513E1F59D_il2cpp_TypeInfo_var)))
		{
			goto IL_00e7;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_22 = ___0_e;
		V_4 = ((MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)CastclassClass((RuntimeObject*)L_22, MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_7 = L_23;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = V_7;
		ArrayElementTypeCheck (L_24, _stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = V_7;
		MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_26 = V_4;
		int32_t L_27;
		L_27 = RecognitionException_get_Char_m9D0DDF8D55FE6E996FEB4FEC29B102535F9C526A_inline(L_26, NULL);
		String_t* L_28;
		L_28 = Lexer_GetCharErrorDisplay_m1425AB18E2A4A0C7EAF9D923D46B8FA390779BAA(__this, L_27, NULL);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = V_7;
		ArrayElementTypeCheck (L_29, _stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_7;
		MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_31 = V_4;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_32 = L_31->___expecting;
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_32);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = V_7;
		String_t* L_34;
		L_34 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_33, NULL);
		V_0 = L_34;
		goto IL_01b0;
	}

IL_00e7:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_35 = ___0_e;
		if (!((MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)IsInstClass((RuntimeObject*)L_35, MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var)))
		{
			goto IL_0137;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_36 = ___0_e;
		V_5 = ((MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)CastclassClass((RuntimeObject*)L_36, MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_8 = L_37;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_8;
		ArrayElementTypeCheck (L_38, _stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = V_8;
		MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_40 = V_5;
		int32_t L_41;
		L_41 = RecognitionException_get_Char_m9D0DDF8D55FE6E996FEB4FEC29B102535F9C526A_inline(L_40, NULL);
		String_t* L_42;
		L_42 = Lexer_GetCharErrorDisplay_m1425AB18E2A4A0C7EAF9D923D46B8FA390779BAA(__this, L_41, NULL);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_42);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = V_8;
		ArrayElementTypeCheck (L_43, _stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_8;
		MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_45 = V_5;
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_46 = L_45->___expecting;
		ArrayElementTypeCheck (L_44, L_46);
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_46);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = V_8;
		String_t* L_48;
		L_48 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_47, NULL);
		V_0 = L_48;
		goto IL_01b0;
	}

IL_0137:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_49 = ___0_e;
		if (!((MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F*)IsInstClass((RuntimeObject*)L_49, MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F_il2cpp_TypeInfo_var)))
		{
			goto IL_01a7;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_50 = ___0_e;
		V_6 = ((MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F*)CastclassClass((RuntimeObject*)L_50, MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F_il2cpp_TypeInfo_var));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		V_9 = L_51;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = V_9;
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = V_9;
		MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* L_54 = V_6;
		int32_t L_55;
		L_55 = RecognitionException_get_Char_m9D0DDF8D55FE6E996FEB4FEC29B102535F9C526A_inline(L_54, NULL);
		String_t* L_56;
		L_56 = Lexer_GetCharErrorDisplay_m1425AB18E2A4A0C7EAF9D923D46B8FA390779BAA(__this, L_55, NULL);
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_56);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = V_9;
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = V_9;
		MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* L_59 = V_6;
		int32_t L_60;
		L_60 = MismatchedRangeException_get_A_m22C232FC1702EF312637EA813E487BE0AB0E134D_inline(L_59, NULL);
		String_t* L_61;
		L_61 = Lexer_GetCharErrorDisplay_m1425AB18E2A4A0C7EAF9D923D46B8FA390779BAA(__this, L_60, NULL);
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_61);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = V_9;
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = V_9;
		MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* L_64 = V_6;
		int32_t L_65;
		L_65 = MismatchedRangeException_get_B_mA8D3F9336F9646553207DF18AADD152ECEF36357_inline(L_64, NULL);
		String_t* L_66;
		L_66 = Lexer_GetCharErrorDisplay_m1425AB18E2A4A0C7EAF9D923D46B8FA390779BAA(__this, L_65, NULL);
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_66);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = V_9;
		String_t* L_68;
		L_68 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_67, NULL);
		V_0 = L_68;
		goto IL_01b0;
	}

IL_01a7:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_69 = ___0_e;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = ___1_tokenNames;
		String_t* L_71;
		L_71 = BaseRecognizer_GetErrorMessage_m0BE8FCB0FDC9E8744ACB54A082DF3DC455A4CE85(__this, L_69, L_70, NULL);
		V_0 = L_71;
	}

IL_01b0:
	{
		String_t* L_72 = V_0;
		return L_72;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_GetCharErrorDisplay_m1425AB18E2A4A0C7EAF9D923D46B8FA390779BAA (Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE* __this, int32_t ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_c;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_0045;
			}
			case 4:
			{
				goto IL_003d;
			}
		}
	}
	{
		goto IL_0045;
	}

IL_0025:
	{
		V_0 = _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
		goto IL_004d;
	}

IL_002d:
	{
		V_0 = _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
		goto IL_004d;
	}

IL_0035:
	{
		V_0 = _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
		goto IL_004d;
	}

IL_003d:
	{
		V_0 = _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
		goto IL_004d;
	}

IL_0045:
	{
		int32_t L_3 = ___0_c;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Convert_ToString_m8270C8361D2796C5C4659D441829CAFEEFBAC91C(((int32_t)(uint16_t)L_3), NULL);
		V_0 = L_4;
	}

IL_004d:
	{
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, L_5, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MismatchedRangeException_get_A_m22C232FC1702EF312637EA813E487BE0AB0E134D (MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___a;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MismatchedRangeException_get_B_mA8D3F9336F9646553207DF18AADD152ECEF36357 (MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___b;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedRangeException__ctor_mB1D4ABE7E85C80943B0B13C3BDFF1AD4608702E4 (MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* __this, const RuntimeMethod* method) 
{
	{
		RecognitionException__ctor_m656B28E89732A1E6E837BD1433899105F0D3F9E5(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedRangeException__ctor_m72505ACB0157E02D7E7EC1E4DC124F093C3E645A (MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* __this, int32_t ___0_a, int32_t ___1_b, RuntimeObject* ___2_input, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___2_input;
		RecognitionException__ctor_m03C410D375A5BE99E9F9CEA8CDEC3F326F6D55B6(__this, L_0, NULL);
		int32_t L_1 = ___0_a;
		__this->___a = L_1;
		int32_t L_2 = ___1_b;
		__this->___b = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MismatchedRangeException_ToString_m329C2F35928DC4F69762B10CBD47B016088F3F03 (MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral696D2E96A654F212949DF20C24EA9CE3495AFA27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		ArrayElementTypeCheck (L_1, _stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(12, __this);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		ArrayElementTypeCheck (L_6, _stringLiteral696D2E96A654F212949DF20C24EA9CE3495AFA27);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral696D2E96A654F212949DF20C24EA9CE3495AFA27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		int32_t L_8 = __this->___a;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		ArrayElementTypeCheck (L_11, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		int32_t L_13 = __this->___b;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		ArrayElementTypeCheck (L_16, _stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = V_0;
		String_t* L_18;
		L_18 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_17, NULL);
		return L_18;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ANTLRStringStream__ctor_m967E50BDD0A0F8CBA81DF6AB446A3692300D61BD (ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F* __this, String_t* ___0_input, const RuntimeMethod* method) 
{
	{
		__this->___line = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_input;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
		L_1 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_0, NULL);
		__this->___data = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data), (void*)L_1);
		String_t* L_2 = ___0_input;
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		__this->___n = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ANTLRStringStream_get_Line_mC65B65F15C592F036F2D924B7B0EF19D451CDE03 (ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___line;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ANTLRStringStream_get_CharPositionInLine_m1EA2DB1C4F7B082932E37BA8E7B89D76C5C387C0 (ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___charPositionInLine;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ANTLRStringStream_Consume_m8BAD130C26C490F0720DFFC3FB17FC06CA1E5712 (ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___p;
		int32_t L_1 = __this->___n;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_2 = __this->___charPositionInLine;
		__this->___charPositionInLine = ((int32_t)il2cpp_codegen_add(L_2, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->___data;
		int32_t L_4 = __this->___p;
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->___line;
		__this->___line = ((int32_t)il2cpp_codegen_add(L_7, 1));
		__this->___charPositionInLine = 0;
	}

IL_0042:
	{
		int32_t L_8 = __this->___p;
		__this->___p = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0050:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ANTLRStringStream_LA_m2C659C295AADF8BFA6F57B05936414D50434AF7A (ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_i;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		int32_t L_1 = ___0_i;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_i;
		___0_i = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = __this->___p;
		int32_t L_4 = ___0_i;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1))) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		return (-1);
	}

IL_001d:
	{
		int32_t L_5 = __this->___p;
		int32_t L_6 = ___0_i;
		int32_t L_7 = __this->___n;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_5, L_6)), 1))) < ((int32_t)L_7)))
		{
			goto IL_0031;
		}
	}
	{
		return (-1);
	}

IL_0031:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = __this->___data;
		int32_t L_9 = __this->___p;
		int32_t L_10 = ___0_i;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_9, L_10)), 1));
		uint16_t L_12 = (uint16_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ANTLRStringStream_Index_m18891FBB7594EB138BB7E008E16C3C20F270C4BF (ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___p;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ANTLRStringStream_get_Count_mB7B79157AB593D0D3F2C197DCA3F038DDD017A70 (ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___n;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ANTLRStringStream_Mark_m1B596838DE4D8B7B7919EFE81CBA30EAAB2BCC32 (ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___markers;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_1, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		__this->___markers = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___markers), (void*)L_1);
		RuntimeObject* L_2 = __this->___markers;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2, NULL);
	}

IL_0020:
	{
		int32_t L_4 = __this->___markDepth;
		__this->___markDepth = ((int32_t)il2cpp_codegen_add(L_4, 1));
		V_0 = (CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B*)NULL;
		int32_t L_5 = __this->___markDepth;
		RuntimeObject* L_6 = __this->___markers;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0058;
		}
	}
	{
		CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B* L_8 = (CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B*)il2cpp_codegen_object_new(CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B_il2cpp_TypeInfo_var);
		CharStreamState__ctor_mC01B54CC1529B72E480BACE306D22C51B4AEC993(L_8, NULL);
		V_0 = L_8;
		RuntimeObject* L_9 = __this->___markers;
		CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B* L_10 = V_0;
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_9, L_10);
		goto IL_006f;
	}

IL_0058:
	{
		RuntimeObject* L_12 = __this->___markers;
		int32_t L_13 = __this->___markDepth;
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_12, L_13);
		V_0 = ((CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B*)CastclassClass((RuntimeObject*)L_14, CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B_il2cpp_TypeInfo_var));
	}

IL_006f:
	{
		CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B* L_15 = V_0;
		int32_t L_16 = __this->___p;
		L_15->___p = L_16;
		CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B* L_17 = V_0;
		int32_t L_18 = __this->___line;
		L_17->___line = L_18;
		CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B* L_19 = V_0;
		int32_t L_20 = __this->___charPositionInLine;
		L_19->___charPositionInLine = L_20;
		int32_t L_21 = __this->___markDepth;
		__this->___lastMarker = L_21;
		int32_t L_22 = __this->___markDepth;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ANTLRStringStream_Rewind_mA9442D8DDF0029EEFDB0B1CE26216970421781D0 (ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F* __this, int32_t ___0_m, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___markers;
		int32_t L_1 = ___0_m;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = ((CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B*)CastclassClass((RuntimeObject*)L_2, CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B_il2cpp_TypeInfo_var));
		CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B* L_3 = V_0;
		int32_t L_4 = L_3->___p;
		VirtualActionInvoker1< int32_t >::Invoke(23, __this, L_4);
		CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B* L_5 = V_0;
		int32_t L_6 = L_5->___line;
		__this->___line = L_6;
		CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B* L_7 = V_0;
		int32_t L_8 = L_7->___charPositionInLine;
		__this->___charPositionInLine = L_8;
		int32_t L_9 = ___0_m;
		VirtualActionInvoker1< int32_t >::Invoke(22, __this, L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ANTLRStringStream_Release_m99DFAFFB458C0C36B0D766D7644EB207CBF20B0B (ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F* __this, int32_t ___0_marker, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_marker;
		__this->___markDepth = L_0;
		int32_t L_1 = __this->___markDepth;
		__this->___markDepth = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ANTLRStringStream_Seek_m04CE8729333E0628ECD20F8195E136DEC668BD0A (ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___p;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___0_index;
		__this->___p = L_2;
		return;
	}

IL_0011:
	{
		VirtualActionInvoker0::Invoke(16, __this);
	}

IL_0017:
	{
		int32_t L_3 = __this->___p;
		int32_t L_4 = ___0_index;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ANTLRStringStream_Substring_m79D3B6FF3E75C0CFE24FE56E7D16EE5A50634453 (ANTLRStringStream_t9C81DC1674BF768DCA3021997F136F30C893322F* __this, int32_t ___0_start, int32_t ___1_stop, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___data;
		int32_t L_1 = ___0_start;
		int32_t L_2 = ___1_stop;
		int32_t L_3 = ___0_start;
		String_t* L_4;
		L_4 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_0, L_1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_2, L_3)), 1)), NULL);
		return L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharStreamState__ctor_mC01B54CC1529B72E480BACE306D22C51B4AEC993 (CharStreamState_tFC23ABE3F04113A66510A8FEFA2B16A56F43612B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuleReturnScope_get_Start_m4B94E75BEF53EF7412780A4085B24CBE6C607FB4 (RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2* __this, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleReturnScope_set_Start_m963093F8EBC010F402465E30420D1FD0371C4F94 (RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral459B1E9592507DEB4EB3B07B39793CA93C67A3B0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuleReturnScope_set_Start_m963093F8EBC010F402465E30420D1FD0371C4F94_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuleReturnScope_get_Stop_mD1681C696B0DBBD1770E5A9A2DF4BF777485718E (RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2* __this, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleReturnScope_set_Stop_m2316D4C9BDE31872A431B4629C5FC7E9B007F760 (RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral459B1E9592507DEB4EB3B07B39793CA93C67A3B0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuleReturnScope_set_Stop_m2316D4C9BDE31872A431B4629C5FC7E9B007F760_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuleReturnScope_get_Tree_mA82DA6E4A1AD2450A5062E377A3385784D5E4D38 (RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2* __this, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleReturnScope_set_Tree_m61FF6DB27BAE052BB5D21C9D8C9A1E547E8B8EE3 (RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral459B1E9592507DEB4EB3B07B39793CA93C67A3B0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuleReturnScope_set_Tree_m61FF6DB27BAE052BB5D21C9D8C9A1E547E8B8EE3_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleReturnScope__ctor_m5D6A8AFA6864551D0E669074293F2003DBB500A6 (RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m4FE6ADD0C253605D2E055630DF3B047F544B0429 (Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849* __this, RuntimeObject* ___0_input, RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_0 = ___1_state;
		il2cpp_codegen_runtime_class_init_inline(BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var);
		BaseRecognizer__ctor_m7F1EE5D983A174EEDC315B30CB8D40992468ECAC(__this, L_0, NULL);
		RuntimeObject* L_1 = ___0_input;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(24, __this, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Reset_m0A56CFF7C33710BDCA3C258A01EA40D564C50418 (Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseRecognizer_Reset_m1BCCB93F4B484CBC862B17E5D0F796C76EB03973(__this, NULL);
		RuntimeObject* L_0 = __this->___input;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___input;
		InterfaceActionInvoker1< int32_t >::Invoke(5, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_1, 0);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_GetCurrentInputSymbol_m8B9755A0E8753D1AD102CFF21194611CF584C479 (Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849* __this, RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), 1);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_GetMissingSymbol_mC7B4EDA05D714534A3AD83D5F0CC4D1111750571 (Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849* __this, RuntimeObject* ___0_input, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___1_e, int32_t ___2_expectedTokenType, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___3_follow, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2606E7B2ED7D70E7FDA31F81CA448C719E23E536);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		V_0 = (String_t*)NULL;
		int32_t L_0 = ___2_expectedTokenType;
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = _stringLiteral2606E7B2ED7D70E7FDA31F81CA448C719E23E536;
		goto IL_002a;
	}

IL_0012:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = VirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(18, __this);
		int32_t L_3 = ___2_expectedTokenType;
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623, L_5, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		V_0 = L_6;
	}

IL_002a:
	{
		int32_t L_7 = ___2_expectedTokenType;
		String_t* L_8 = V_0;
		CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* L_9 = (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF*)il2cpp_codegen_object_new(CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		CommonToken__ctor_m5B378A324216AAA7529462F6C80B92DC0DD004E4(L_9, L_7, L_8, NULL);
		V_1 = L_9;
		RuntimeObject* L_10 = ___0_input;
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_10, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), 1);
		V_2 = L_11;
		RuntimeObject* L_12 = V_2;
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_12);
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		int32_t L_14 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject* L_15 = ___0_input;
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_15, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), (-1));
		V_2 = L_16;
	}

IL_0059:
	{
		CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* L_17 = V_1;
		RuntimeObject* L_18 = V_2;
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_18);
		L_17->___line = L_19;
		CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* L_20 = V_1;
		RuntimeObject* L_21 = V_2;
		int32_t L_22;
		L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_21);
		VirtualActionInvoker1< int32_t >::Invoke(19, L_20, L_22);
		CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* L_23 = V_1;
		VirtualActionInvoker1< int32_t >::Invoke(21, L_23, 0);
		CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* L_24 = V_1;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_set_TokenStream_mFD6CE0FA8D26467C4595919B1752F8588D695DAD (Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		__this->___input = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input), (void*)(RuntimeObject*)NULL);
		VirtualActionInvoker0::Invoke(4, __this);
		RuntimeObject* L_0 = ___0_value;
		__this->___input = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParserRuleReturnScope_get_Start_mDA307140A4735B935E91487E6FE50F7138D7C938 (ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___start;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserRuleReturnScope_set_Start_m5B7BA807C78AC1E04E2B4E4BFE2A5886E683F922 (ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___start = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___start), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParserRuleReturnScope_get_Stop_m547BC3E798522C5FF4F79D752E3095B076781181 (ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___stop;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserRuleReturnScope_set_Stop_m1BEE8FDD63F94646A26BC41888AE2EB80D0513D7 (ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___stop = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stop), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07 (ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035* __this, const RuntimeMethod* method) 
{
	{
		RuleReturnScope__ctor_m5D6A8AFA6864551D0E669074293F2003DBB500A6(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream__ctor_mFBE1F326852574C92472BA62489865B4B7529EA2 (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___p = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___channel = 0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428(L_0, ((int32_t)500), List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		__this->___tokens = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokens), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream__ctor_mF1F0A6E9FC496AEC46DED57BBD42AF4C2679E19E (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, RuntimeObject* ___0_tokenSource, const RuntimeMethod* method) 
{
	{
		CommonTokenStream__ctor_mFBE1F326852574C92472BA62489865B4B7529EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_tokenSource;
		__this->___tokenSource = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokenSource), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTokenStream_LT_mCDF94A9EE9C736CB049CBE7479072627EDC6EBE4 (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, int32_t ___0_k, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___p;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		VirtualActionInvoker0::Invoke(22, __this);
	}

IL_000f:
	{
		int32_t L_1 = ___0_k;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0014:
	{
		int32_t L_2 = ___0_k;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___0_k;
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25, __this, ((-L_3)));
		return L_4;
	}

IL_0021:
	{
		int32_t L_5 = __this->___p;
		int32_t L_6 = ___0_k;
		RuntimeObject* L_7 = __this->___tokens;
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_7);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_5, L_6)), 1))) < ((int32_t)L_8)))
		{
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF_TOKEN;
		return L_9;
	}

IL_003e:
	{
		int32_t L_10 = __this->___p;
		V_0 = L_10;
		V_1 = 1;
		goto IL_0057;
	}

IL_0049:
	{
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(23, __this, ((int32_t)il2cpp_codegen_add(L_11, 1)));
		V_0 = L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0057:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___0_k;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_0;
		RuntimeObject* L_17 = __this->___tokens;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_006f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		RuntimeObject* L_19 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF_TOKEN;
		return L_19;
	}

IL_006f:
	{
		RuntimeObject* L_20 = __this->___tokens;
		int32_t L_21 = V_0;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_20, L_21);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_22, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTokenStream_ToString_m592369F70D1748FF09843A107728F28EFB912D48 (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, int32_t ___0_start, int32_t ___1_stop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = ___0_start;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___1_stop;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}

IL_0008:
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		int32_t L_2 = __this->___p;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		VirtualActionInvoker0::Invoke(22, __this);
	}

IL_0019:
	{
		int32_t L_3 = ___1_stop;
		RuntimeObject* L_4 = __this->___tokens;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_6 = __this->___tokens;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_6);
		___1_stop = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_0036:
	{
		StringBuilder_t* L_8 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_8, NULL);
		V_0 = L_8;
		int32_t L_9 = ___0_start;
		V_1 = L_9;
		goto IL_0063;
	}

IL_0040:
	{
		RuntimeObject* L_10 = __this->___tokens;
		int32_t L_11 = V_1;
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_10, L_11);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
		StringBuilder_t* L_13 = V_0;
		RuntimeObject* L_14 = V_2;
		String_t* L_15;
		L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(9, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_14);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, L_15, NULL);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0063:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___1_stop;
		if ((((int32_t)L_18) <= ((int32_t)L_19)))
		{
			goto IL_0040;
		}
	}
	{
		StringBuilder_t* L_20 = V_0;
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_20);
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream_Consume_m4BD8363989AEFD7FCDC0DE1C5BA025A771CB00DC (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___p;
		RuntimeObject* L_1 = __this->___tokens;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_3 = __this->___p;
		__this->___p = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = __this->___p;
		int32_t L_5;
		L_5 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(23, __this, L_4);
		__this->___p = L_5;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTokenStream_LA_mA8C1FB2A153C5C4A96FEB5FB959C00309AA368EA (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_i;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(13, __this, L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTokenStream_Mark_m6CF7B43754D152D78B6EDB644DB3A5FEDFF81130 (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___p;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		VirtualActionInvoker0::Invoke(22, __this);
	}

IL_000f:
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(18, __this);
		__this->___lastMarker = L_1;
		int32_t L_2 = __this->___lastMarker;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTokenStream_Index_m9589CEE9B5582A1B1D41A8DE61D8C16D4B780CF1 (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___p;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream_Rewind_m36BD484338FEF269B84502492434F26D1775E109 (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, int32_t ___0_marker, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_marker;
		VirtualActionInvoker1< int32_t >::Invoke(20, __this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream_Seek_mCE5EF88C4F916E7506FDEDAD6AC4AA715E95CAED (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		__this->___p = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTokenStream_get_Count_mC615025068AA7459F3B5E54CD7C3F136DC64E784 (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___tokens;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream_FillBuffer_m5C0E63578F86A974584F44F4E83C2264E20FC4B0 (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenSource_t7B8A9A88E1B36AA6B44922BBAB5AD6DAF4F22C57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		RuntimeObject* L_0 = __this->___tokenSource;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ITokenSource_t7B8A9A88E1B36AA6B44922BBAB5AD6DAF4F22C57_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
		goto IL_00aa;
	}

IL_0013:
	{
		V_2 = (bool)0;
		RuntimeObject* L_2 = __this->___channelOverrideMap;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_3 = __this->___channelOverrideMap;
		RuntimeObject* L_4 = V_1;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_3, L_7);
		V_3 = L_8;
		RuntimeObject* L_9 = V_3;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = V_3;
		InterfaceActionInvoker1< int32_t >::Invoke(6, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_10, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_11, il2cpp_defaults.int32_class)))));
	}

IL_0043:
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_12 = __this->___discardSet;
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* L_13 = __this->___discardSet;
		RuntimeObject* L_14 = V_1;
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_14);
		V_4 = L_15;
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		bool L_17;
		L_17 = HashList_Contains_mB70166AD9E278B7615B022910DDF0C73692A3305(L_13, L_16, NULL);
		if (!L_17)
		{
			goto IL_006b;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0083;
	}

IL_006b:
	{
		bool L_18 = __this->___discardOffChannelTokens;
		if (!L_18)
		{
			goto IL_0083;
		}
	}
	{
		RuntimeObject* L_19 = V_1;
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(5, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_19);
		int32_t L_21 = __this->___channel;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_0083;
		}
	}
	{
		V_2 = (bool)1;
	}

IL_0083:
	{
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_009e;
		}
	}
	{
		RuntimeObject* L_23 = V_1;
		int32_t L_24 = V_0;
		InterfaceActionInvoker1< int32_t >::Invoke(8, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_23, L_24);
		RuntimeObject* L_25 = __this->___tokens;
		RuntimeObject* L_26 = V_1;
		int32_t L_27;
		L_27 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_25, L_26);
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_009e:
	{
		RuntimeObject* L_29 = __this->___tokenSource;
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ITokenSource_t7B8A9A88E1B36AA6B44922BBAB5AD6DAF4F22C57_il2cpp_TypeInfo_var, L_29);
		V_1 = L_30;
	}

IL_00aa:
	{
		RuntimeObject* L_31 = V_1;
		if (!L_31)
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject* L_32 = V_1;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_32);
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_0013;
		}
	}

IL_00b9:
	{
		__this->___p = 0;
		int32_t L_34 = __this->___p;
		int32_t L_35;
		L_35 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(23, __this, L_34);
		__this->___p = L_35;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTokenStream_SkipOffTokenChannels_m62887D21617104B3C9E5B4905140F089A875A014 (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___tokens;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_0013;
	}

IL_000e:
	{
		int32_t L_2 = ___0_i;
		___0_i = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0013:
	{
		int32_t L_3 = ___0_i;
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_5 = __this->___tokens;
		int32_t L_6 = ___0_i;
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_5, L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(5, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_7, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
		int32_t L_9 = __this->___channel;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_000e;
		}
	}

IL_0035:
	{
		int32_t L_10 = ___0_i;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTokenStream_SkipOffTokenChannelsReverse_mDFC97FED964A8BB5CDD672599322D8C149F079AA (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0007;
	}

IL_0002:
	{
		int32_t L_0 = ___0_i;
		___0_i = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}

IL_0007:
	{
		int32_t L_1 = ___0_i;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_2 = __this->___tokens;
		int32_t L_3 = ___0_i;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2, L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(5, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
		int32_t L_6 = __this->___channel;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		int32_t L_7 = ___0_i;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTokenStream_LB_m63985770AA0284FFF1DD5AF4CBCA3898C75E1C76 (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, int32_t ___0_k, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___p;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		VirtualActionInvoker0::Invoke(22, __this);
	}

IL_000f:
	{
		int32_t L_1 = ___0_k;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0014:
	{
		int32_t L_2 = __this->___p;
		int32_t L_3 = ___0_k;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0021:
	{
		int32_t L_4 = __this->___p;
		V_0 = L_4;
		V_1 = 1;
		goto IL_003a;
	}

IL_002c:
	{
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(24, __this, ((int32_t)il2cpp_codegen_subtract(L_5, 1)));
		V_0 = L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_003a:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_k;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0044:
	{
		RuntimeObject* L_11 = __this->___tokens;
		int32_t L_12 = V_0;
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_11, L_12);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_13, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTokenStream_ToString_m8CA215CE47C5818953F8BFC3AFBA9EF97BADDCF9 (CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___p;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		VirtualActionInvoker0::Invoke(22, __this);
	}

IL_000f:
	{
		RuntimeObject* L_1 = __this->___tokens;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, int32_t, int32_t >::Invoke(14, __this, 0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnwantedTokenException_get_UnexpectedToken_m6BBA9AE0241A5672D271915005C3402AD55F5E6B_inline (UnwantedTokenException_t1CDC50DBA0EEA81C26F59E6C5FD3EB44E5DF1383* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)__this)->___token;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___token;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpecialStateTransitionHandler_Invoke_mCD06B32AE87FDF740360A37D4043D849DEA3ABE2_inline (SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* __this, DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* ___0_dfa, int32_t ___1_s, RuntimeObject* ___2_input, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*, int32_t, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_dfa, ___1_s, ___2_input, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedTokenException_get_Expecting_m23F654E59D314B73009CA2220DBF30B93C886B43_inline (MismatchedTokenException_tAD2A0D69BCCF6015860376A7FFF3D3AEBD7841D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___expecting;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Node_mF9017E74E9C1676B91BA3B92682C2370C1ABA345_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___node;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Line_mCF2F4576F154C8738C51851743302742941DE8F7_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___line;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_CharPositionInLine_m27A503034EEA24F46F5061A077DBB7F7B3F84A5A_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___charPositionInLine;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* Console_get_Error_m0132A8360914E80AD6EEF7A353BC1C75A29AE4BF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ((Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_StaticFields*)il2cpp_codegen_static_fields_for(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var))->___stderr;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseTree_get_Children_m4BFF76AB0911C01D66555175399C10CA6F022D1C_inline (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___children;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Char_m9D0DDF8D55FE6E996FEB4FEC29B102535F9C526A_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___c;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedRangeException_get_A_m22C232FC1702EF312637EA813E487BE0AB0E134D_inline (MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___a;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedRangeException_get_B_mA8D3F9336F9646553207DF18AADD152ECEF36357_inline (MismatchedRangeException_tCD0C9B73A310552372D1DC802E2F94B0215F6E2F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___b;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
