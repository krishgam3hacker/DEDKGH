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

// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_tEA03E6566D9F60BC88DD8A9B58BB1C3CC3BF7D00;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t73B690804B71062EA366B9EF731317DA6FE13907;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// GoogleMobileAds.Api.AdError
struct AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t96D4BC2B1722C766F2BCD760A0E0031F9115A94A;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88;
// GoogleMobileAds.Api.AdSize
struct AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D;
// GoogleMobileAds.Api.AdValue
struct AdValue_t9B80AF56C00D2AC5F91A9D7E333E54CF4FCA686D;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tE77B2BAE1A257737CB31A54D8A50CB46675F31A3;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// GoogleMobileAds.Api.BannerView
struct BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_tFF8053C8E710D3CB81C87F09DDAAEC82B6A46E87;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_tCAE3C9BE9900F961A8DC37F11DC13B4A96D263B0;
// GoogleMobileAds.IClientFactory
struct IClientFactory_t3D75B59DB98B4B51B8FED12F623005B8C3BC48EA;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_tF13ECA742E5E16BAF858F4D45792D63FC20743AD;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_tE3471111B1D2107939D0E0523A2E339EC539C2E1;
// GoogleMobileAds.Common.IMobileAdsClient
struct IMobileAdsClient_tCA31E0D6066E04EC32E0614B6507282B43837A9F;
// GoogleMobileAds.Common.IRewardedAdClient
struct IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t81D5182F2126CC5D6D4EE54729485DBE5BDE39EA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.Api.MobileAds
struct MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1;
// GoogleMobileAds.Api.Reward
struct Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF;
// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEA03E6566D9F60BC88DD8A9B58BB1C3CC3BF7D00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBannerClient_tCAE3C9BE9900F961A8DC37F11DC13B4A96D263B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_t3D75B59DB98B4B51B8FED12F623005B8C3BC48EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileAdsClient_tCA31E0D6066E04EC32E0614B6507282B43837A9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m9B3FA8E97F65A53E45AC8F6ADE0629BFFFD1226A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8BA20EBE5C1161B8AB9D000E33CF97C2F1B57EED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__0_mBB2E258BDEAAF03AA40035D589C1D4EB1338C6D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__1_mA37E5D66E29F921B964FAD87380CEA79530D385E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__2_mAB0264FAAE39E8CC13BD59026480D1213A8DDA7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__3_m1C21AC0C70B178E5CDCD5E3765DCE0C10F7C308E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__4_m1523B307ADA9AA11CE466BABC9195BD3233D6406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m325AA3C5AF623BA47EB4A535AF4AE74687669190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m8A481E74824EB2C44BA7B158752CD720D310143D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m9DBE4D60D5CE56971DE57CDA2C0FFDA77A4396CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mA8A6D2DE420537097598BDDF935398FCC5ECA9B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m1310AD79FD1F979723D7BD131876DEF5425238C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m4E427DE98E6A65074F49EFB302CB5DDC876929F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m89E39A45655ABD9A329C5752ECE7FA664AF6B7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mB49B0346E668D1F8F46FBE954C2C3A00DF2600BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__0_mD6C1EC6E8B38B1FFEEFE34F4C58F50412AD7DEC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__1_m556D7A5A261CE11D700CC1D7639B7A1E9144DE89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__2_m3CF1F8D32EC9FBCF6F16C6A9E3ED5191AFD2EEA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__3_m73209C7068E3B355B337F93E4CD0210BA6F4B820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__4_m66836A4E4F75FC8AFA7907E6E79F27425EF4D043_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__5_mA3F22B7801A5516070691D79FF64A1EE3645D656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__6_mF2969E75004FDF974DA44B69756528D064DB3CE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MobileAds_GetClientFactory_mC6AED98C5D2A57E8350B22A1CB88C3700A653AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__0_m9C47225ED6CFE62BAA2ABC9FDDCA342918873D78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__1_mAADCC6322F041EF65443F566368B4882E7B719CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__2_m1E0D190BC256E522F812F464331B3BA397BE5EF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__3_mEB7E7083FEDA94370B7D48B125CC1D2729D8AFFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__4_m70119F2F37BE99A512D57E3842BEF6B2F785E920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__5_m9224578D0851EB02254A56E295CF178E1677FB7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__6_mF944F82090C02BA1DC6D7CE0DE8C4B0952F4AD40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__7_m3B5253F38796A28E6DF8FB3CF5EDD8404C28F617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__8_mCEB50E0299759DCBBC584DF1AC2177530A737D1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m7A4D9165EDDDCB232FFF6DC77A6F011858854D58_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t89C3CC682643E81D97FDC2DD3EC5AA68D7D02750 
{
public:

public:
};


// System.Object


// GoogleMobileAds.Api.AdError
struct AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2 * ___U3CMediationExtrasU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88, ___U3CKeywordsU3Ek__BackingField_0)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_0() const { return ___U3CKeywordsU3Ek__BackingField_0; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_0() { return &___U3CKeywordsU3Ek__BackingField_0; }
	inline void set_U3CKeywordsU3Ek__BackingField_0(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88, ___U3CExtrasU3Ek__BackingField_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_1() const { return ___U3CExtrasU3Ek__BackingField_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_1() { return &___U3CExtrasU3Ek__BackingField_1; }
	inline void set_U3CExtrasU3Ek__BackingField_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88, ___U3CMediationExtrasU3Ek__BackingField_2)); }
	inline List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2 * get_U3CMediationExtrasU3Ek__BackingField_2() const { return ___U3CMediationExtrasU3Ek__BackingField_2; }
	inline List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2 ** get_address_of_U3CMediationExtrasU3Ek__BackingField_2() { return &___U3CMediationExtrasU3Ek__BackingField_2; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_2(List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2 * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// GoogleMobileAds.Api.BannerView
struct BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * ___OnPaidEvent_5;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdLoaded_1() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ___OnAdLoaded_1)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_1() const { return ___OnAdLoaded_1; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_1() { return &___OnAdLoaded_1; }
	inline void set_OnAdLoaded_1(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_2() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ___OnAdFailedToLoad_2)); }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * get_OnAdFailedToLoad_2() const { return ___OnAdFailedToLoad_2; }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** get_address_of_OnAdFailedToLoad_2() { return &___OnAdFailedToLoad_2; }
	inline void set_OnAdFailedToLoad_2(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * value)
	{
		___OnAdFailedToLoad_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_3() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ___OnAdOpening_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_3() const { return ___OnAdOpening_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_3() { return &___OnAdOpening_3; }
	inline void set_OnAdOpening_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ___OnAdClosed_4)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_5() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ___OnPaidEvent_5)); }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * get_OnPaidEvent_5() const { return ___OnPaidEvent_5; }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B ** get_address_of_OnPaidEvent_5() { return &___OnPaidEvent_5; }
	inline void set_OnPaidEvent_5(EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * value)
	{
		___OnPaidEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_5), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
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


// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * ___OnPaidEvent_9;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdLoaded_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdOpening_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdClosed_6)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_9() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnPaidEvent_9)); }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * get_OnPaidEvent_9() const { return ___OnPaidEvent_9; }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B ** get_address_of_OnPaidEvent_9() { return &___OnPaidEvent_9; }
	inline void set_OnPaidEvent_9(EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * value)
	{
		___OnPaidEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_9), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// GoogleMobileAds.Api.MobileAds
struct MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};

struct MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_StaticFields
{
public:
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_1;
	// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::instance
	MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * ___instance_2;

public:
	inline static int32_t get_offset_of_clientFactory_1() { return static_cast<int32_t>(offsetof(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_StaticFields, ___clientFactory_1)); }
	inline RuntimeObject* get_clientFactory_1() const { return ___clientFactory_1; }
	inline RuntimeObject** get_address_of_clientFactory_1() { return &___clientFactory_1; }
	inline void set_clientFactory_1(RuntimeObject* value)
	{
		___clientFactory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientFactory_1), (void*)value);
	}

	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_StaticFields, ___instance_2)); }
	inline MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * get_instance_2() const { return ___instance_2; }
	inline MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_2), (void*)value);
	}
};


// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.RewardedAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.RewardedAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToLoad
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToShow
	EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdDidRecordImpression
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::OnUserEarnedReward
	EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * ___OnUserEarnedReward_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedAd::OnPaidEvent
	EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * ___OnPaidEvent_10;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ___OnAdLoaded_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ___OnAdOpening_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ___OnAdClosed_6)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserEarnedReward_9() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ___OnUserEarnedReward_9)); }
	inline EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * get_OnUserEarnedReward_9() const { return ___OnUserEarnedReward_9; }
	inline EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 ** get_address_of_OnUserEarnedReward_9() { return &___OnUserEarnedReward_9; }
	inline void set_OnUserEarnedReward_9(EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * value)
	{
		___OnUserEarnedReward_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserEarnedReward_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_10() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ___OnPaidEvent_10)); }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * get_OnPaidEvent_10() const { return ___OnPaidEvent_10; }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B ** get_address_of_OnPaidEvent_10() { return &___OnPaidEvent_10; }
	inline void set_OnPaidEvent_10(EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * value)
	{
		___OnPaidEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_10), (void*)value);
	}
};


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

// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E  : public RuntimeObject
{
public:
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::initCompleteAction
	Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * ___initCompleteAction_0;

public:
	inline static int32_t get_offset_of_initCompleteAction_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E, ___initCompleteAction_0)); }
	inline Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * get_initCompleteAction_0() const { return ___initCompleteAction_0; }
	inline Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 ** get_address_of_initCompleteAction_0() { return &___initCompleteAction_0; }
	inline void set_initCompleteAction_0(Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * value)
	{
		___initCompleteAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initCompleteAction_0), (void*)value);
	}
};


// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t96D4BC2B1722C766F2BCD760A0E0031F9115A94A  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorClientEventArgs_t96D4BC2B1722C766F2BCD760A0E0031F9115A94A, ___U3CAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAdErrorClientU3Ek__BackingField_1() const { return ___U3CAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAdErrorClientU3Ek__BackingField_1() { return &___U3CAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB, ___U3CAdErrorU3Ek__BackingField_1)); }
	inline AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * get_U3CAdErrorU3Ek__BackingField_1() const { return ___U3CAdErrorU3Ek__BackingField_1; }
	inline AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 ** get_address_of_U3CAdErrorU3Ek__BackingField_1() { return &___U3CAdErrorU3Ek__BackingField_1; }
	inline void set_U3CAdErrorU3Ek__BackingField_1(AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * value)
	{
		___U3CAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}
};


// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * ___U3CLoadAdErrorU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD, ___U3CLoadAdErrorU3Ek__BackingField_1)); }
	inline LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * get_U3CLoadAdErrorU3Ek__BackingField_1() const { return ___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 ** get_address_of_U3CLoadAdErrorU3Ek__BackingField_1() { return &___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorU3Ek__BackingField_1(LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * value)
	{
		___U3CLoadAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tE77B2BAE1A257737CB31A54D8A50CB46675F31A3  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t9B80AF56C00D2AC5F91A9D7E333E54CF4FCA686D * ___U3CAdValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdValueEventArgs_tE77B2BAE1A257737CB31A54D8A50CB46675F31A3, ___U3CAdValueU3Ek__BackingField_1)); }
	inline AdValue_t9B80AF56C00D2AC5F91A9D7E333E54CF4FCA686D * get_U3CAdValueU3Ek__BackingField_1() const { return ___U3CAdValueU3Ek__BackingField_1; }
	inline AdValue_t9B80AF56C00D2AC5F91A9D7E333E54CF4FCA686D ** get_address_of_U3CAdValueU3Ek__BackingField_1() { return &___U3CAdValueU3Ek__BackingField_1; }
	inline void set_U3CAdValueU3Ek__BackingField_1(AdValue_t9B80AF56C00D2AC5F91A9D7E333E54CF4FCA686D * value)
	{
		___U3CAdValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdValueU3Ek__BackingField_1), (void*)value);
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


// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266  : public AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::client
	RuntimeObject* ___client_1;

public:
	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266, ___client_1)); }
	inline RuntimeObject* get_client_1() const { return ___client_1; }
	inline RuntimeObject** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(RuntimeObject* value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}
};


// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t81D5182F2126CC5D6D4EE54729485DBE5BDE39EA  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadAdErrorClientEventArgs_t81D5182F2126CC5D6D4EE54729485DBE5BDE39EA, ___U3CLoadAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CLoadAdErrorClientU3Ek__BackingField_1() const { return ___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return &___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CLoadAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.Reward
struct Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF, ___U3CTypeU3Ek__BackingField_1)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAmountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF, ___U3CAmountU3Ek__BackingField_2)); }
	inline double get_U3CAmountU3Ek__BackingField_2() const { return ___U3CAmountU3Ek__BackingField_2; }
	inline double* get_address_of_U3CAmountU3Ek__BackingField_2() { return &___U3CAmountU3Ek__BackingField_2; }
	inline void set_U3CAmountU3Ek__BackingField_2(double value)
	{
		___U3CAmountU3Ek__BackingField_2 = value;
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


// GoogleMobileAds.Api.AdPosition
struct AdPosition_tF317317EE617B2B7B0C5536A54396E1AE5BFA9FE 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdPosition_tF317317EE617B2B7B0C5536A54396E1AE5BFA9FE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// GoogleMobileAds.Api.Orientation
struct Orientation_tAA32985C1371FF119E753379A6A751BE28F2225B 
{
public:
	// System.Int32 GoogleMobileAds.Api.Orientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Orientation_tAA32985C1371FF119E753379A6A751BE28F2225B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// GoogleMobileAds.Api.AdSize/Type
struct Type_tE65D664BFE046EF99C5F84B2051D976C661A0B2D 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdSize/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tE65D664BFE046EF99C5F84B2051D976C661A0B2D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.AdSize
struct AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::type
	int32_t ___type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::orientation
	int32_t ___orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D, ___orientation_1)); }
	inline int32_t get_orientation_1() const { return ___orientation_1; }
	inline int32_t* get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(int32_t value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}
};

struct AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields
{
public:
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;

public:
	inline static int32_t get_offset_of_Banner_4() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields, ___Banner_4)); }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * get_Banner_4() const { return ___Banner_4; }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D ** get_address_of_Banner_4() { return &___Banner_4; }
	inline void set_Banner_4(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * value)
	{
		___Banner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Banner_4), (void*)value);
	}

	inline static int32_t get_offset_of_MediumRectangle_5() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields, ___MediumRectangle_5)); }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * get_MediumRectangle_5() const { return ___MediumRectangle_5; }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D ** get_address_of_MediumRectangle_5() { return &___MediumRectangle_5; }
	inline void set_MediumRectangle_5(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * value)
	{
		___MediumRectangle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MediumRectangle_5), (void*)value);
	}

	inline static int32_t get_offset_of_IABBanner_6() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields, ___IABBanner_6)); }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * get_IABBanner_6() const { return ___IABBanner_6; }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D ** get_address_of_IABBanner_6() { return &___IABBanner_6; }
	inline void set_IABBanner_6(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * value)
	{
		___IABBanner_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IABBanner_6), (void*)value);
	}

	inline static int32_t get_offset_of_Leaderboard_7() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields, ___Leaderboard_7)); }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * get_Leaderboard_7() const { return ___Leaderboard_7; }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D ** get_address_of_Leaderboard_7() { return &___Leaderboard_7; }
	inline void set_Leaderboard_7(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * value)
	{
		___Leaderboard_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Leaderboard_7), (void*)value);
	}

	inline static int32_t get_offset_of_SmartBanner_8() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields, ___SmartBanner_8)); }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * get_SmartBanner_8() const { return ___SmartBanner_8; }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D ** get_address_of_SmartBanner_8() { return &___SmartBanner_8; }
	inline void set_SmartBanner_8(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * value)
	{
		___SmartBanner_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmartBanner_8), (void*)value);
	}

	inline static int32_t get_offset_of_FullWidth_9() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields, ___FullWidth_9)); }
	inline int32_t get_FullWidth_9() const { return ___FullWidth_9; }
	inline int32_t* get_address_of_FullWidth_9() { return &___FullWidth_9; }
	inline void set_FullWidth_9(int32_t value)
	{
		___FullWidth_9 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// System.Type
struct Type_t  : public MemberInfo_t
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


// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_tEA03E6566D9F60BC88DD8A9B58BB1C3CC3BF7D00  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t73B690804B71062EA366B9EF731317DA6FE13907  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mC6AED98C5D2A57E8350B22A1CB88C3700A653AAE (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m2E8E13A901FFEE3DF965AF3157A9DFF57487A5C0 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m89E39A45655ABD9A329C5752ECE7FA664AF6B7CE (EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m1310AD79FD1F979723D7BD131876DEF5425238C6 (EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mEA57DFDB64AA9DFD60B1F636DC5939CC11BF36CA_inline (LoadAdErrorClientEventArgs_t81D5182F2126CC5D6D4EE54729485DBE5BDE39EA * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m0362055010388C7EBF31A3299211EBEF621BE437 (LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_mECD902E48FE10E3AE899F347BB651639D65974A3 (AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mCAF572A4AA18790774609E2EED0E4ECFBA08E4D0_inline (AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * __this, LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m9DBE4D60D5CE56971DE57CDA2C0FFDA77A4396CB (EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *, RuntimeObject *, AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m8A481E74824EB2C44BA7B158752CD720D310143D (EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * __this, RuntimeObject * ___sender0, AdValueEventArgs_tE77B2BAE1A257737CB31A54D8A50CB46675F31A3 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B *, RuntimeObject *, AdValueEventArgs_tE77B2BAE1A257737CB31A54D8A50CB46675F31A3 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mB49B0346E668D1F8F46FBE954C2C3A00DF2600BE (EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_m48C3F60D7619535F66988FE7DE2F2CDE356B9D6D_inline (AdErrorClientEventArgs_t96D4BC2B1722C766F2BCD760A0E0031F9115A94A * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m9BF284F610E0F836D7462FC545FA4B874A7B650A (AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mB3253C96D9B845BEC831EE705533CE28338FFC20 (AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6C388DE4C7D62E47155A23C836F2E880D1425190_inline (AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * __this, AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mA8A6D2DE420537097598BDDF935398FCC5ECA9B8 (EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * __this, RuntimeObject * ___sender0, AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 *, RuntimeObject *, AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m43D77B6D57D238AA2A950EFDC08DCB3C6C4D2BB0 (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mA5A695D88F530B8BB45A554C20B8618729FA28D7 (MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m268B5EB7C4B1FED0473F07820F2427F3C2C27EDA (U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * MobileAds_get_Instance_m313FC4B600BA83ECE2A2075C1D2DCBD8F1916061 (const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8BA20EBE5C1161B8AB9D000E33CF97C2F1B57EED (Action_1_tEA03E6566D9F60BC88DD8A9B58BB1C3CC3BF7D00 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEA03E6566D9F60BC88DD8A9B58BB1C3CC3BF7D00 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_m7DF6DD13FDDA4A55B7356C990F1B060F0940591B (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m4E427DE98E6A65074F49EFB302CB5DDC876929F2 (EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m325AA3C5AF623BA47EB4A535AF4AE74687669190 (EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * __this, RuntimeObject * ___sender0, Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 *, RuntimeObject *, Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m2C7D93785F117170100114D9CAA738D7B2092A91 (InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::Invoke(!0)
inline void Action_1_Invoke_m9B3FA8E97F65A53E45AC8F6ADE0629BFFFD1226A (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * __this, InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 *, InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
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
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m9BF284F610E0F836D7462FC545FA4B874A7B650A (AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_mE880FF9F79C5343828EF97499FCF7A0CAA4FD8E3 (AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mB3253C96D9B845BEC831EE705533CE28338FFC20 (AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6C388DE4C7D62E47155A23C836F2E880D1425190 (AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * __this, AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdErrorEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdErrorEventArgs_get_Message_mF0AFE0F4275432C58A3334E1FB2178CAC8799A37 (AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_2();
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
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_mECD902E48FE10E3AE899F347BB651639D65974A3 (AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mCAF572A4AA18790774609E2EED0E4ECFBA08E4D0 (AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * __this, LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
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
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_m20EF5C502F831B8E06998EB9708EF4736763B4EC (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, String_t* ___adUnitId0, AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * ___adSize1, int32_t ___position2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_tCAE3C9BE9900F961A8DC37F11DC13B4A96D263B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t3D75B59DB98B4B51B8FED12F623005B8C3BC48EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mC6AED98C5D2A57E8350B22A1CB88C3700A653AAE(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IBannerClient GoogleMobileAds.IClientFactory::BuildBannerClient() */, IClientFactory_t3D75B59DB98B4B51B8FED12F623005B8C3BC48EA_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		RuntimeObject* L_2 = __this->get_client_0();
		String_t* L_3 = ___adUnitId0;
		AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * L_4 = ___adSize1;
		int32_t L_5 = ___position2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D *, int32_t >::Invoke(10 /* System.Void GoogleMobileAds.Common.IBannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition) */, IBannerClient_tCAE3C9BE9900F961A8DC37F11DC13B4A96D263B0_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		BannerView_ConfigureBannerEvents_m2E8E13A901FFEE3DF965AF3157A9DFF57487A5C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdLoaded_m67C042AF5C75F1197BEB23EFE7F00ED50170EC23 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_1();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdLoaded_mDC696615CD863173D80B2B1E8C94D73EA02B5B9F (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_1();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdFailedToLoad_m613D5696923B606DB3E53B4096BF4CDDBDAB79EF (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * V_0 = NULL;
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * V_1 = NULL;
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_0 = __this->get_OnAdFailedToLoad_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** L_2 = __this->get_address_of_OnAdFailedToLoad_2();
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_3 = V_1;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_6 = V_0;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *>((EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF **)L_2, ((EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_8 = V_0;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)L_8) == ((RuntimeObject*)(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdFailedToLoad_mEFE3089F4AEF02FF69A79D5F4077E55596F00BEA (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * V_0 = NULL;
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * V_1 = NULL;
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_0 = __this->get_OnAdFailedToLoad_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** L_2 = __this->get_address_of_OnAdFailedToLoad_2();
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_3 = V_1;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_6 = V_0;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *>((EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF **)L_2, ((EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_8 = V_0;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)L_8) == ((RuntimeObject*)(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdOpening_m06F30C28A524A65E28F964568C302475978C375A (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdOpening_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdOpening_m5A0701E303B080CFFEFCA80DE6730C15FBC6A031 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdOpening_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdClosed_m998E8A4CE750BC8E1D595B086DB80AD3BDDF7373 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdClosed_4();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdClosed_mF7F425EC59A65E89668FF4B7C574D2C03BA88DBE (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdClosed_4();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_mC393D587280C5F2E9786BDBEF2DA62E7E98BB8FD (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_tCAE3C9BE9900F961A8DC37F11DC13B4A96D263B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * L_1 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker1< AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * >::Invoke(11 /* System.Void GoogleMobileAds.Common.IBannerClient::LoadAd(GoogleMobileAds.Api.AdRequest) */, IBannerClient_tCAE3C9BE9900F961A8DC37F11DC13B4A96D263B0_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m2E8E13A901FFEE3DF965AF3157A9DFF57487A5C0 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__0_mBB2E258BDEAAF03AA40035D589C1D4EB1338C6D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__1_mA37E5D66E29F921B964FAD87380CEA79530D385E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__2_mAB0264FAAE39E8CC13BD59026480D1213A8DDA7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__3_m1C21AC0C70B178E5CDCD5E3765DCE0C10F7C308E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__4_m1523B307ADA9AA11CE466BABC9195BD3233D6406_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m1310AD79FD1F979723D7BD131876DEF5425238C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m89E39A45655ABD9A329C5752ECE7FA664AF6B7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_tCAE3C9BE9900F961A8DC37F11DC13B4A96D263B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_1, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__0_mBB2E258BDEAAF03AA40035D589C1D4EB1338C6D9_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IBannerClient_tCAE3C9BE9900F961A8DC37F11DC13B4A96D263B0_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->get_client_0();
		EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693 * L_3 = (EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693 *)il2cpp_codegen_object_new(EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m89E39A45655ABD9A329C5752ECE7FA664AF6B7CE(L_3, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__1_mA37E5D66E29F921B964FAD87380CEA79530D385E_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m89E39A45655ABD9A329C5752ECE7FA664AF6B7CE_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693 * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IBannerClient_tCAE3C9BE9900F961A8DC37F11DC13B4A96D263B0_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__2_mAB0264FAAE39E8CC13BD59026480D1213A8DDA7A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>) */, IBannerClient_tCAE3C9BE9900F961A8DC37F11DC13B4A96D263B0_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_7, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__3_m1C21AC0C70B178E5CDCD5E3765DCE0C10F7C308E_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>) */, IBannerClient_tCAE3C9BE9900F961A8DC37F11DC13B4A96D263B0_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * L_9 = (EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B *)il2cpp_codegen_object_new(EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1310AD79FD1F979723D7BD131876DEF5425238C6(L_9, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__4_m1523B307ADA9AA11CE466BABC9195BD3233D6406_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m1310AD79FD1F979723D7BD131876DEF5425238C6_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IBannerClient_tCAE3C9BE9900F961A8DC37F11DC13B4A96D263B0_il2cpp_TypeInfo_var, L_8, L_9);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__0_mBB2E258BDEAAF03AA40035D589C1D4EB1338C6D9 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdLoaded_1();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__1_mA37E5D66E29F921B964FAD87380CEA79530D385E (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_t81D5182F2126CC5D6D4EE54729485DBE5BDE39EA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m9DBE4D60D5CE56971DE57CDA2C0FFDA77A4396CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * V_0 = NULL;
	AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * V_1 = NULL;
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_0 = __this->get_OnAdFailedToLoad_2();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t81D5182F2126CC5D6D4EE54729485DBE5BDE39EA * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mEA57DFDB64AA9DFD60B1F636DC5939CC11BF36CA_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * L_3 = (LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 *)il2cpp_codegen_object_new(LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m0362055010388C7EBF31A3299211EBEF621BE437(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_4 = __this->get_OnAdFailedToLoad_2();
		AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * L_5 = (AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_mECD902E48FE10E3AE899F347BB651639D65974A3(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * L_6 = V_1;
		LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mCAF572A4AA18790774609E2EED0E4ECFBA08E4D0_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m9DBE4D60D5CE56971DE57CDA2C0FFDA77A4396CB(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m9DBE4D60D5CE56971DE57CDA2C0FFDA77A4396CB_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__2_mAB0264FAAE39E8CC13BD59026480D1213A8DDA7A (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_3();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdOpening_3();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__3_m1C21AC0C70B178E5CDCD5E3765DCE0C10F7C308E (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_4();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdClosed_4();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__4(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__4_m1523B307ADA9AA11CE466BABC9195BD3233D6406 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tE77B2BAE1A257737CB31A54D8A50CB46675F31A3 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m8A481E74824EB2C44BA7B158752CD720D310143D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * L_0 = __this->get_OnPaidEvent_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * L_1 = __this->get_OnPaidEvent_5();
		AdValueEventArgs_tE77B2BAE1A257737CB31A54D8A50CB46675F31A3 * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m8A481E74824EB2C44BA7B158752CD720D310143D(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m8A481E74824EB2C44BA7B158752CD720D310143D_RuntimeMethod_var);
	}

IL_0018:
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
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m2C7D93785F117170100114D9CAA738D7B2092A91 (InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
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
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m051B7CB234EBA2B60D6997B54805BB5FF154F4C8 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, String_t* ___adUnitId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m1310AD79FD1F979723D7BD131876DEF5425238C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m89E39A45655ABD9A329C5752ECE7FA664AF6B7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mB49B0346E668D1F8F46FBE954C2C3A00DF2600BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t3D75B59DB98B4B51B8FED12F623005B8C3BC48EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__0_mD6C1EC6E8B38B1FFEEFE34F4C58F50412AD7DEC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__1_m556D7A5A261CE11D700CC1D7639B7A1E9144DE89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__2_m3CF1F8D32EC9FBCF6F16C6A9E3ED5191AFD2EEA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__3_m73209C7068E3B355B337F93E4CD0210BA6F4B820_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__4_m66836A4E4F75FC8AFA7907E6E79F27425EF4D043_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__5_mA3F22B7801A5516070691D79FF64A1EE3645D656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__6_mF2969E75004FDF974DA44B69756528D064DB3CE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mC6AED98C5D2A57E8350B22A1CB88C3700A653AAE(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.IClientFactory::BuildInterstitialClient() */, IClientFactory_t3D75B59DB98B4B51B8FED12F623005B8C3BC48EA_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		String_t* L_2 = ___adUnitId0;
		__this->set_adUnitId_1(L_2);
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_3 = __this->get_client_0();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAds.Common.IInterstitialClient::CreateInterstitialAd() */, IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__0_mD6C1EC6E8B38B1FFEEFE34F4C58F50412AD7DEC5_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693 * L_7 = (EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693 *)il2cpp_codegen_object_new(EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m89E39A45655ABD9A329C5752ECE7FA664AF6B7CE(L_7, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__1_m556D7A5A261CE11D700CC1D7639B7A1E9144DE89_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m89E39A45655ABD9A329C5752ECE7FA664AF6B7CE_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693 * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_9, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__2_m3CF1F8D32EC9FBCF6F16C6A9E3ED5191AFD2EEA2_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_11 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_11, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__3_m73209C7068E3B355B337F93E4CD0210BA6F4B820_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(10 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->get_client_0();
		EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA * L_13 = (EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA *)il2cpp_codegen_object_new(EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mB49B0346E668D1F8F46FBE954C2C3A00DF2600BE(L_13, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__4_m66836A4E4F75FC8AFA7907E6E79F27425EF4D043_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mB49B0346E668D1F8F46FBE954C2C3A00DF2600BE_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_15 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_15, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__5_mA3F22B7801A5516070691D79FF64A1EE3645D656_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(12 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->get_client_0();
		EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * L_17 = (EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B *)il2cpp_codegen_object_new(EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1310AD79FD1F979723D7BD131876DEF5425238C6(L_17, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__6_mF2969E75004FDF974DA44B69756528D064DB3CE1_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m1310AD79FD1F979723D7BD131876DEF5425238C6_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var, L_16, L_17);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_m83539BF410CBD57CFD79E2E92463743F85B5E15F (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdLoaded_mB34908A316DC712827D3EE166D62A0FB1E412326 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_mA3ABF774CBFEBABCDB1ADF7B0A1E08AC61B01D38 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * V_0 = NULL;
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * V_1 = NULL;
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_3 = V_1;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_6 = V_0;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *>((EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF **)L_2, ((EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_8 = V_0;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)L_8) == ((RuntimeObject*)(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFailedToLoad_m48D14CF64C58F4A84E2AF7415EBE4FDA2CD9551F (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * V_0 = NULL;
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * V_1 = NULL;
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_3 = V_1;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_6 = V_0;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *>((EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF **)L_2, ((EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_8 = V_0;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)L_8) == ((RuntimeObject*)(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdOpening_m18047F820C801CC2C7457695010A1C29165B3998 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdOpening_m71DA124BD2407247B2148CBE95314903BDD338BA (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m8D6A71AED40167FC8AA4BE420AF5D469ABCBFB1D (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdClosed_mC29110DBA2B6FF77E263CD0BCA246C9C402CF129 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_mB3716AF9CAC24F8439FDB615319DCF84DAA9C0C8 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		String_t* L_1 = __this->get_adUnitId_1();
		AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * >::Invoke(15 /* System.Void GoogleMobileAds.Common.IInterstitialClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m539CECD9169FE98801CF14A6EDBCD9C0A26A4038 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLoaded_2();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m6111A6CEA42D17DDF9C6E3A2D8E6FC9E7C46EA28 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IInterstitialClient::Show() */, IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__0_mD6C1EC6E8B38B1FFEEFE34F4C58F50412AD7DEC5 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)1);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdLoaded_3();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__1_m556D7A5A261CE11D700CC1D7639B7A1E9144DE89 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_t81D5182F2126CC5D6D4EE54729485DBE5BDE39EA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m9DBE4D60D5CE56971DE57CDA2C0FFDA77A4396CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * V_0 = NULL;
	AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * V_1 = NULL;
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_0 = __this->get_OnAdFailedToLoad_4();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t81D5182F2126CC5D6D4EE54729485DBE5BDE39EA * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mEA57DFDB64AA9DFD60B1F636DC5939CC11BF36CA_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * L_3 = (LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 *)il2cpp_codegen_object_new(LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m0362055010388C7EBF31A3299211EBEF621BE437(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_4 = __this->get_OnAdFailedToLoad_4();
		AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * L_5 = (AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_mECD902E48FE10E3AE899F347BB651639D65974A3(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * L_6 = V_1;
		LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mCAF572A4AA18790774609E2EED0E4ECFBA08E4D0_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m9DBE4D60D5CE56971DE57CDA2C0FFDA77A4396CB(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m9DBE4D60D5CE56971DE57CDA2C0FFDA77A4396CB_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__2_m3CF1F8D32EC9FBCF6F16C6A9E3ED5191AFD2EEA2 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdOpening_5();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__3_m73209C7068E3B355B337F93E4CD0210BA6F4B820 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdClosed_6();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__4(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__4_m66836A4E4F75FC8AFA7907E6E79F27425EF4D043 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_t96D4BC2B1722C766F2BCD760A0E0031F9115A94A * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mA8A6D2DE420537097598BDDF935398FCC5ECA9B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * V_0 = NULL;
	AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * V_1 = NULL;
	{
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t96D4BC2B1722C766F2BCD760A0E0031F9115A94A * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_m48C3F60D7619535F66988FE7DE2F2CDE356B9D6D_inline(L_1, /*hidden argument*/NULL);
		AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * L_3 = (AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 *)il2cpp_codegen_object_new(AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4_il2cpp_TypeInfo_var);
		AdError__ctor_m9BF284F610E0F836D7462FC545FA4B874A7B650A(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * L_5 = (AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB *)il2cpp_codegen_object_new(AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_mB3253C96D9B845BEC831EE705533CE28338FFC20(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * L_6 = V_1;
		AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6C388DE4C7D62E47155A23C836F2E880D1425190_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mA8A6D2DE420537097598BDDF935398FCC5ECA9B8(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mA8A6D2DE420537097598BDDF935398FCC5ECA9B8_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__5_mA3F22B7801A5516070691D79FF64A1EE3645D656 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdDidRecordImpression_8();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdDidRecordImpression_8();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__6(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__6_mF2969E75004FDF974DA44B69756528D064DB3CE1 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tE77B2BAE1A257737CB31A54D8A50CB46675F31A3 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m8A481E74824EB2C44BA7B158752CD720D310143D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * L_0 = __this->get_OnPaidEvent_9();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * L_1 = __this->get_OnPaidEvent_9();
		AdValueEventArgs_tE77B2BAE1A257737CB31A54D8A50CB46675F31A3 * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m8A481E74824EB2C44BA7B158752CD720D310143D(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m8A481E74824EB2C44BA7B158752CD720D310143D_RuntimeMethod_var);
	}

IL_0018:
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
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m0362055010388C7EBF31A3299211EBEF621BE437 (LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m9BF284F610E0F836D7462FC545FA4B874A7B650A(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___client0;
		__this->set_client_1(L_1);
		return;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_mB37D024A1E4B9F4241CD01D16E82C462834C5A2B (LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mA5A695D88F530B8BB45A554C20B8618729FA28D7 (MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetMobileAdsClient_m43D77B6D57D238AA2A950EFDC08DCB3C6C4D2BB0(/*hidden argument*/NULL);
		__this->set_client_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * MobileAds_get_Instance_m313FC4B600BA83ECE2A2075C1D2DCBD8F1916061 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * L_0 = ((MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_il2cpp_TypeInfo_var))->get_instance_2();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * L_1 = (MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 *)il2cpp_codegen_object_new(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_il2cpp_TypeInfo_var);
		MobileAds__ctor_mA5A695D88F530B8BB45A554C20B8618729FA28D7(L_1, /*hidden argument*/NULL);
		((MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_il2cpp_TypeInfo_var))->set_instance_2(L_1);
	}

IL_0014:
	{
		MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * L_2 = ((MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_il2cpp_TypeInfo_var))->get_instance_2();
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m162D01EF10764A82B218C4D6496F71CF4F50529B (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * ___initCompleteAction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8BA20EBE5C1161B8AB9D000E33CF97C2F1B57EED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEA03E6566D9F60BC88DD8A9B58BB1C3CC3BF7D00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tCA31E0D6066E04EC32E0614B6507282B43837A9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m7A4D9165EDDDCB232FFF6DC77A6F011858854D58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E * V_0 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E * L_0 = (U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E *)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E_il2cpp_TypeInfo_var);
		U3CInitializeU3Ec__AnonStorey0__ctor_m268B5EB7C4B1FED0473F07820F2427F3C2C27EDA(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E * L_1 = V_0;
		Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * L_2 = ___initCompleteAction0;
		NullCheck(L_1);
		L_1->set_initCompleteAction_0(L_2);
		MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * L_3;
		L_3 = MobileAds_get_Instance_m313FC4B600BA83ECE2A2075C1D2DCBD8F1916061(/*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->get_client_0();
		U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E * L_5 = V_0;
		Action_1_tEA03E6566D9F60BC88DD8A9B58BB1C3CC3BF7D00 * L_6 = (Action_1_tEA03E6566D9F60BC88DD8A9B58BB1C3CC3BF7D00 *)il2cpp_codegen_object_new(Action_1_tEA03E6566D9F60BC88DD8A9B58BB1C3CC3BF7D00_il2cpp_TypeInfo_var);
		Action_1__ctor_m8BA20EBE5C1161B8AB9D000E33CF97C2F1B57EED(L_6, L_5, (intptr_t)((intptr_t)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m7A4D9165EDDDCB232FFF6DC77A6F011858854D58_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8BA20EBE5C1161B8AB9D000E33CF97C2F1B57EED_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_tEA03E6566D9F60BC88DD8A9B58BB1C3CC3BF7D00 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::Initialize(System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>) */, IMobileAdsClient_tCA31E0D6066E04EC32E0614B6507282B43837A9F_il2cpp_TypeInfo_var, L_4, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_Initialize_m7DF6DD13FDDA4A55B7356C990F1B060F0940591B(/*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mC6AED98C5D2A57E8350B22A1CB88C3700A653AAE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t3D75B59DB98B4B51B8FED12F623005B8C3BC48EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_GetClientFactory_mC6AED98C5D2A57E8350B22A1CB88C3700A653AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		RuntimeObject* L_0 = ((MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_il2cpp_TypeInfo_var))->get_clientFactory_1();
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_3, MobileAds_GetClientFactory_mC6AED98C5D2A57E8350B22A1CB88C3700A653AAE_RuntimeMethod_var);
		V_1 = L_4;
		Type_t * L_5 = V_1;
		RuntimeObject * L_6;
		L_6 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_5, /*hidden argument*/NULL);
		((MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_il2cpp_TypeInfo_var))->set_clientFactory_1(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_t3D75B59DB98B4B51B8FED12F623005B8C3BC48EA_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		RuntimeObject* L_7 = ((MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_il2cpp_TypeInfo_var))->get_clientFactory_1();
		return L_7;
	}
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m43D77B6D57D238AA2A950EFDC08DCB3C6C4D2BB0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t3D75B59DB98B4B51B8FED12F623005B8C3BC48EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mC6AED98C5D2A57E8350B22A1CB88C3700A653AAE(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.IClientFactory::MobileAdsInstance() */, IClientFactory_t3D75B59DB98B4B51B8FED12F623005B8C3BC48EA_il2cpp_TypeInfo_var, L_0);
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
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_m3FDF5017F3E3DACC4920A7628229FD95D827FEF1 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, String_t* ___adUnitId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m1310AD79FD1F979723D7BD131876DEF5425238C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m4E427DE98E6A65074F49EFB302CB5DDC876929F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m89E39A45655ABD9A329C5752ECE7FA664AF6B7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mB49B0346E668D1F8F46FBE954C2C3A00DF2600BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t3D75B59DB98B4B51B8FED12F623005B8C3BC48EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__0_m9C47225ED6CFE62BAA2ABC9FDDCA342918873D78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__1_mAADCC6322F041EF65443F566368B4882E7B719CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__2_m1E0D190BC256E522F812F464331B3BA397BE5EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__3_mEB7E7083FEDA94370B7D48B125CC1D2729D8AFFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__4_m70119F2F37BE99A512D57E3842BEF6B2F785E920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__5_m9224578D0851EB02254A56E295CF178E1677FB7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__6_mF944F82090C02BA1DC6D7CE0DE8C4B0952F4AD40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__7_m3B5253F38796A28E6DF8FB3CF5EDD8404C28F617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__8_mCEB50E0299759DCBBC584DF1AC2177530A737D1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mC6AED98C5D2A57E8350B22A1CB88C3700A653AAE(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.IClientFactory::BuildRewardedAdClient() */, IClientFactory_t3D75B59DB98B4B51B8FED12F623005B8C3BC48EA_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		String_t* L_2 = ___adUnitId0;
		__this->set_adUnitId_1(L_2);
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_3 = __this->get_client_0();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::CreateRewardedAd() */, IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__0_m9C47225ED6CFE62BAA2ABC9FDDCA342918873D78_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693 * L_7 = (EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693 *)il2cpp_codegen_object_new(EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m89E39A45655ABD9A329C5752ECE7FA664AF6B7CE(L_7, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__1_mAADCC6322F041EF65443F566368B4882E7B719CC_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m89E39A45655ABD9A329C5752ECE7FA664AF6B7CE_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_t86D25E509A6D60C4B29A29D68BBFA458F05B7693 * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA * L_9 = (EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA *)il2cpp_codegen_object_new(EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mB49B0346E668D1F8F46FBE954C2C3A00DF2600BE(L_9, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__2_m1E0D190BC256E522F812F464331B3BA397BE5EF0_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mB49B0346E668D1F8F46FBE954C2C3A00DF2600BE_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_11 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_11, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__3_mEB7E7083FEDA94370B7D48B125CC1D2729D8AFFA_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(10 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_13 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_13, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__4_m70119F2F37BE99A512D57E3842BEF6B2F785E920_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(12 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->get_client_0();
		EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA * L_15 = (EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA *)il2cpp_codegen_object_new(EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mB49B0346E668D1F8F46FBE954C2C3A00DF2600BE(L_15, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__5_m9224578D0851EB02254A56E295CF178E1677FB7C_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mB49B0346E668D1F8F46FBE954C2C3A00DF2600BE_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tA6D12149FFB7CD2E38B94799A796D706A274E9CA * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_17 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_17, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__6_mF944F82090C02BA1DC6D7CE0DE8C4B0952F4AD40_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(14 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var, L_16, L_17);
		RuntimeObject* L_18 = __this->get_client_0();
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_19 = (EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 *)il2cpp_codegen_object_new(EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m4E427DE98E6A65074F49EFB302CB5DDC876929F2(L_19, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__7_m3B5253F38796A28E6DF8FB3CF5EDD8404C28F617_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m4E427DE98E6A65074F49EFB302CB5DDC876929F2_RuntimeMethod_var);
		NullCheck(L_18);
		InterfaceActionInvoker1< EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>) */, IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var, L_18, L_19);
		RuntimeObject* L_20 = __this->get_client_0();
		EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * L_21 = (EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B *)il2cpp_codegen_object_new(EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1310AD79FD1F979723D7BD131876DEF5425238C6(L_21, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__8_mCEB50E0299759DCBBC584DF1AC2177530A737D1B_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m1310AD79FD1F979723D7BD131876DEF5425238C6_RuntimeMethod_var);
		NullCheck(L_20);
		InterfaceActionInvoker1< EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var, L_20, L_21);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdLoaded_m7AAD3986C80F0A53413B0549EF5FA09D204C34BC (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdLoaded_mA4A2B10E96CC30E8EAAADF0ADE6BD40734428970 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToLoad_m8082E50A575E9011B518D796AF4C4015AB2323F8 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * V_0 = NULL;
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * V_1 = NULL;
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_3 = V_1;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_6 = V_0;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *>((EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF **)L_2, ((EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_8 = V_0;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)L_8) == ((RuntimeObject*)(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdFailedToLoad_mC97AFB7F08398DA162269724A92E912D18DABBE3 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * V_0 = NULL;
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * V_1 = NULL;
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_3 = V_1;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_6 = V_0;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *>((EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF **)L_2, ((EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_8 = V_0;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)L_8) == ((RuntimeObject*)(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdOpening_m97C39DD2776451A509628651EDED0F3DA286C405 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdOpening_m536388941816422E07E91361AD0D38B19BB36BCC (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdClosed_m11B7E72270E0585F0441EF9B491576EBB644D790 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdClosed_m885F2B53CEE13705C820217D3624BA8A9B79F181 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToShow_m5AA942E0B72787B266D3B08DD44BE5714117FF31 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * V_0 = NULL;
	EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * V_1 = NULL;
	{
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_0 = __this->get_OnAdFailedToShow_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 ** L_2 = __this->get_address_of_OnAdFailedToShow_7();
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_3 = V_1;
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_6 = V_0;
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 *>((EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 **)L_2, ((EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_8 = V_0;
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 *)L_8) == ((RuntimeObject*)(EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdFailedToShow_mBFEDF16F2717653A687D7B04975604533B11DFA6 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * V_0 = NULL;
	EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * V_1 = NULL;
	{
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_0 = __this->get_OnAdFailedToShow_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 ** L_2 = __this->get_address_of_OnAdFailedToShow_7();
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_3 = V_1;
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_6 = V_0;
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 *>((EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 **)L_2, ((EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_8 = V_0;
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 *)L_8) == ((RuntimeObject*)(EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnUserEarnedReward_m3631CC6509FDB177D1E4EB0CDF8D01F015801409 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * V_0 = NULL;
	EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * V_1 = NULL;
	{
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_0 = __this->get_OnUserEarnedReward_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 ** L_2 = __this->get_address_of_OnUserEarnedReward_9();
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_3 = V_1;
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_6 = V_0;
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 *>((EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 **)L_2, ((EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_8 = V_0;
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 *)L_8) == ((RuntimeObject*)(EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnUserEarnedReward_m216D3ACE6614E06BF14694D9D5EF6F1CA651AAB8 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * V_0 = NULL;
	EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * V_1 = NULL;
	{
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_0 = __this->get_OnUserEarnedReward_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 ** L_2 = __this->get_address_of_OnUserEarnedReward_9();
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_3 = V_1;
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_6 = V_0;
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 *>((EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 **)L_2, ((EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_8 = V_0;
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 *)L_8) == ((RuntimeObject*)(EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_LoadAd_m599E1713AE11404161630B29EBB3D6F274FD481D (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		String_t* L_1 = __this->get_adUnitId_1();
		AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * >::Invoke(17 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__0_m9C47225ED6CFE62BAA2ABC9FDDCA342918873D78 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)1);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdLoaded_3();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__1_mAADCC6322F041EF65443F566368B4882E7B719CC (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_t81D5182F2126CC5D6D4EE54729485DBE5BDE39EA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m9DBE4D60D5CE56971DE57CDA2C0FFDA77A4396CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * V_0 = NULL;
	AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * V_1 = NULL;
	{
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_0 = __this->get_OnAdFailedToLoad_4();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t81D5182F2126CC5D6D4EE54729485DBE5BDE39EA * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mEA57DFDB64AA9DFD60B1F636DC5939CC11BF36CA_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * L_3 = (LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 *)il2cpp_codegen_object_new(LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m0362055010388C7EBF31A3299211EBEF621BE437(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_4 = __this->get_OnAdFailedToLoad_4();
		AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * L_5 = (AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_mECD902E48FE10E3AE899F347BB651639D65974A3(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * L_6 = V_1;
		LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mCAF572A4AA18790774609E2EED0E4ECFBA08E4D0_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m9DBE4D60D5CE56971DE57CDA2C0FFDA77A4396CB(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m9DBE4D60D5CE56971DE57CDA2C0FFDA77A4396CB_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__2(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__2_m1E0D190BC256E522F812F464331B3BA397BE5EF0 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_t96D4BC2B1722C766F2BCD760A0E0031F9115A94A * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mA8A6D2DE420537097598BDDF935398FCC5ECA9B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * V_0 = NULL;
	AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * V_1 = NULL;
	{
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t96D4BC2B1722C766F2BCD760A0E0031F9115A94A * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_m48C3F60D7619535F66988FE7DE2F2CDE356B9D6D_inline(L_1, /*hidden argument*/NULL);
		AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * L_3 = (AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 *)il2cpp_codegen_object_new(AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4_il2cpp_TypeInfo_var);
		AdError__ctor_m9BF284F610E0F836D7462FC545FA4B874A7B650A(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * L_5 = (AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB *)il2cpp_codegen_object_new(AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_mB3253C96D9B845BEC831EE705533CE28338FFC20(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * L_6 = V_1;
		AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6C388DE4C7D62E47155A23C836F2E880D1425190_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mA8A6D2DE420537097598BDDF935398FCC5ECA9B8(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mA8A6D2DE420537097598BDDF935398FCC5ECA9B8_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__3_mEB7E7083FEDA94370B7D48B125CC1D2729D8AFFA (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdOpening_5();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__4_m70119F2F37BE99A512D57E3842BEF6B2F785E920 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdClosed_6();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__5(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__5_m9224578D0851EB02254A56E295CF178E1677FB7C (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_t96D4BC2B1722C766F2BCD760A0E0031F9115A94A * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mA8A6D2DE420537097598BDDF935398FCC5ECA9B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * V_0 = NULL;
	AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * V_1 = NULL;
	{
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t96D4BC2B1722C766F2BCD760A0E0031F9115A94A * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_m48C3F60D7619535F66988FE7DE2F2CDE356B9D6D_inline(L_1, /*hidden argument*/NULL);
		AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * L_3 = (AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 *)il2cpp_codegen_object_new(AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4_il2cpp_TypeInfo_var);
		AdError__ctor_m9BF284F610E0F836D7462FC545FA4B874A7B650A(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * L_5 = (AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB *)il2cpp_codegen_object_new(AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_mB3253C96D9B845BEC831EE705533CE28338FFC20(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * L_6 = V_1;
		AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6C388DE4C7D62E47155A23C836F2E880D1425190_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mA8A6D2DE420537097598BDDF935398FCC5ECA9B8(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mA8A6D2DE420537097598BDDF935398FCC5ECA9B8_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__6(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__6_mF944F82090C02BA1DC6D7CE0DE8C4B0952F4AD40 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdDidRecordImpression_8();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdDidRecordImpression_8();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__7(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__7_m3B5253F38796A28E6DF8FB3CF5EDD8404C28F617 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, RuntimeObject * ___sender0, Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m325AA3C5AF623BA47EB4A535AF4AE74687669190_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_0 = __this->get_OnUserEarnedReward_9();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_1 = __this->get_OnUserEarnedReward_9();
		Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m325AA3C5AF623BA47EB4A535AF4AE74687669190(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m325AA3C5AF623BA47EB4A535AF4AE74687669190_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__8(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__8_mCEB50E0299759DCBBC584DF1AC2177530A737D1B (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tE77B2BAE1A257737CB31A54D8A50CB46675F31A3 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m8A481E74824EB2C44BA7B158752CD720D310143D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * L_0 = __this->get_OnPaidEvent_10();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * L_1 = __this->get_OnPaidEvent_10();
		AdValueEventArgs_tE77B2BAE1A257737CB31A54D8A50CB46675F31A3 * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m8A481E74824EB2C44BA7B158752CD720D310143D(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m8A481E74824EB2C44BA7B158752CD720D310143D_RuntimeMethod_var);
	}

IL_0018:
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
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m268B5EB7C4B1FED0473F07820F2427F3C2C27EDA (U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::<>m__0(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m7A4D9165EDDDCB232FFF6DC77A6F011858854D58 (U3CInitializeU3Ec__AnonStorey0_t9B565E6B148CBC1D74F008A9A84E807AE08C508E * __this, RuntimeObject* ___initStatusClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m9B3FA8E97F65A53E45AC8F6ADE0629BFFFD1226A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * L_0 = __this->get_initCompleteAction_0();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * L_1 = __this->get_initCompleteAction_0();
		RuntimeObject* L_2 = ___initStatusClient0;
		InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 * L_3 = (InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 *)il2cpp_codegen_object_new(InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89_il2cpp_TypeInfo_var);
		InitializationStatus__ctor_m2C7D93785F117170100114D9CAA738D7B2092A91(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_m9B3FA8E97F65A53E45AC8F6ADE0629BFFFD1226A(L_1, L_3, /*hidden argument*/Action_1_Invoke_m9B3FA8E97F65A53E45AC8F6ADE0629BFFFD1226A_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mEA57DFDB64AA9DFD60B1F636DC5939CC11BF36CA_inline (LoadAdErrorClientEventArgs_t81D5182F2126CC5D6D4EE54729485DBE5BDE39EA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLoadAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mCAF572A4AA18790774609E2EED0E4ECFBA08E4D0_inline (AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * __this, LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_t19CAEE9F4284FE4014E64CB8E367F8525EB90266 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_m48C3F60D7619535F66988FE7DE2F2CDE356B9D6D_inline (AdErrorClientEventArgs_t96D4BC2B1722C766F2BCD760A0E0031F9115A94A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6C388DE4C7D62E47155A23C836F2E880D1425190_inline (AdErrorEventArgs_tAEEBB48FED6C9A55A321E4688CA08AA64A7331AB * __this, AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t9F16173BB6EA529BF38B8066BE90BDA7FD35EEF4 * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
