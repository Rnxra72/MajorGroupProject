#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tC6684CD164AA8009B3DC3C06499A47813321B877;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct UnityEvent_1_tEC38375A3667634400B758463CD6936646CE1ED8;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E;
// Pieces[,]
struct PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs
struct ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E;
// Bishop
struct Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A;
// Board
struct Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A;
// CameraRotate
struct CameraRotate_t61BA1DDD096BB0771521AB040966C6DA360C72CD;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// InitialBoardLayout
struct InitialBoardLayout_tCF8FB3E10B38409661533636F069508AAADE0BF0;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// King
struct King_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8;
// Knight
struct Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PanelChanger
struct PanelChanger_tB6842ED1D28BBA4A6155986DD7335372BC75113A;
// Pawn
struct Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PieceMovement
struct PieceMovement_t1E398EAB25E057AA1E0937518C03B7115C18E247;
// Pieces
struct Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616;
// Queen
struct Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Rook
struct Rook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586;
// SceneChanger
struct SceneChanger_tC919AD069A17BDD8C7D94D8DBD5EB709E217DF40;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable
struct XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2E4E7BD15AA99F81C6C4CCB381070FCF904F8505;
IL2CPP_EXTERN_C String_t* _stringLiteral2FF3BC5398DACE801B4E86DF28B390F51006F8E9;
IL2CPP_EXTERN_C String_t* _stringLiteral31A2EC0F2D7E0CCD7A0BAC20F26ED9F3DE0BA78E;
IL2CPP_EXTERN_C String_t* _stringLiteral54A8B5238874242B2ABA4F53BB63439822BA9207;
IL2CPP_EXTERN_C String_t* _stringLiteral5B0833708D04F8AE610D9B38F31CC59157490035;
IL2CPP_EXTERN_C String_t* _stringLiteral67B82CAC847426DBADB80BAAFA7C055A7F65B7C9;
IL2CPP_EXTERN_C String_t* _stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B;
IL2CPP_EXTERN_C String_t* _stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE;
IL2CPP_EXTERN_C String_t* _stringLiteralA6A16FA6FFFE7CF75CED271F9B06FD471503AB8C;
IL2CPP_EXTERN_C String_t* _stringLiteralC09BC07CFD30616932FC885585D4AB173F659FC7;
IL2CPP_EXTERN_C String_t* _stringLiteralCEDAD611754737BA8814D5BC694F3BDF88DDB705;
IL2CPP_EXTERN_C String_t* _stringLiteralDE43312EB47DDBD82378CB162E20297117C7B60F;
IL2CPP_EXTERN_C String_t* _stringLiteralE975154496527E91F81DB894F01484CF367BC23E;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC6BBEBE2485483A6952E7BA764FD4B682D301A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisKnight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927_m0A4B75D206BC75CE7BBEA88EC7A9F2F7DE1DDD9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167_m3FE4FFF3E1643E9D348D8847EC4E13519277B6BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79_m4329D105C8E79285C2EF03B5F94FCBC6BC525D1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A_m6B6F54C37FC3AAFFCA2A2321A74921C4DAE956C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoard_t924A10F2404EA6D3DB02711555BEDFD794B70C1A_mE4E7DAE913316BAE653599872F48AED6A03EDCF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisKing_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8_mD2AB631C70CBCE6AF7B59DBAD42666ADC396484C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisKnight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927_m97B5EEEBF9597A1743E125C4752ABBF9C1A438C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167_mF89C9EF783CA8F06CCF8663A0B99DA4AC8FF9AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mEB16FC1AF2F7B7092F9DE5072E5C7BC9DC9B41D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisQueen_t250477B0959155ACF197D12BD87FD1DA449DFEF7_m95E7F645DABC9500DCA574ACDAC9330995BA7727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586_mC837014B5D8DE1EA741FB1AAE14AF028AF090F14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PieceMovement_interactableActivated_m2B8D5FC3160607A6D3FE8785B8FB87B8462A8C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEF66295E608214778EDCF6A989C6645463CAF0E1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E;
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;
struct PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct UnityEvent_1_tEC38375A3667634400B758463CD6936646CE1ED8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs
struct ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43  : public UnityEvent_1_tEC38375A3667634400B758463CD6936646CE1ED8
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Board
struct Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable Board::currecntlySelectedPiece
	XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* ___currecntlySelectedPiece_4;
	// Pieces[,] Board::chessPieces
	PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* ___chessPieces_5;
	// System.Int32 Board::lengthOfBoard
	int32_t ___lengthOfBoard_6;
	// UnityEngine.GameObject Board::boardTiles
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boardTiles_7;
	// UnityEngine.GameObject[,] Board::tilesArray
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* ___tilesArray_8;
	// System.Int32 Board::wPlayerScore
	int32_t ___wPlayerScore_9;
	// System.Int32 Board::bPlayerScore
	int32_t ___bPlayerScore_10;
	// System.Boolean Board::currentMoveValid
	bool ___currentMoveValid_11;
	// UnityEngine.Material Board::pieceSelectedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___pieceSelectedMaterial_12;
	// UnityEngine.GameObject[] Board::prefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___prefabs_13;
	// UnityEngine.Material[] Board::teamMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___teamMaterials_14;
};

// CameraRotate
struct CameraRotate_t61BA1DDD096BB0771521AB040966C6DA360C72CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CameraRotate::Speed
	float ___Speed_4;
};

// InitialBoardLayout
struct InitialBoardLayout_tCF8FB3E10B38409661533636F069508AAADE0BF0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PanelChanger
struct PanelChanger_tB6842ED1D28BBA4A6155986DD7335372BC75113A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PanelChanger::uiScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uiScreen_4;
	// System.Boolean PanelChanger::isScreenVisible
	bool ___isScreenVisible_5;
};

// PieceMovement
struct PieceMovement_t1E398EAB25E057AA1E0937518C03B7115C18E247  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Pieces
struct Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Pieces::team
	int32_t ___team_4;
	// PieceType Pieces::ptype
	int32_t ___ptype_5;
	// System.Int32 Pieces::currentXPos
	int32_t ___currentXPos_6;
	// System.Int32 Pieces::currentZPos
	int32_t ___currentZPos_7;
	// System.Int32 Pieces::pieceWorth
	int32_t ___pieceWorth_8;
};

// SceneChanger
struct SceneChanger_tC919AD069A17BDD8C7D94D8DBD5EB709E217DF40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneChanger::PausePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PausePanel_4;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_7;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_8;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_9;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_10;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_11;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_FirstHoverEntered_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_LastHoverExited_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_14;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_15;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_FirstSelectEntered_16;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_LastSelectExited_17;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_19;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* ___m_Activated_20;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D* ___m_Deactivated_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsHovering>k__BackingField
	List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1* ___U3CinteractorsHoveringU3Ek__BackingField_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsSelecting>k__BackingField
	List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102* ___U3CinteractorsSelectingU3Ek__BackingField_23;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_24;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_AttachPoseOnSelect_25;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_LocalAttachPoseOnSelect_26;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137* ___m_ReticleCache_27;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_28;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnFirstHoverEntered_30;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnLastHoverExited_31;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverEntered_32;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverExited_33;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectEntered_34;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectExited_35;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectCanceled_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnActivate_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnDeactivate_38;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tC6684CD164AA8009B3DC3C06499A47813321B877* ___U3ChoveringInteractorsU3Ek__BackingField_39;
};

struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_29;
};

// Bishop
struct Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A  : public Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616
{
	// System.Int32 Bishop::tileStartColour
	int32_t ___tileStartColour_9;
};

// King
struct King_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8  : public Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616
{
};

// Knight
struct Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927  : public Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616
{
};

// Pawn
struct Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167  : public Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616
{
	// System.Boolean Pawn::movedFromStartPos
	bool ___movedFromStartPos_9;
};

// Queen
struct Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7  : public Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616
{
};

// Rook
struct Rook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586  : public Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616
{
};

// UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable
struct XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Pieces[,]
struct PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7  : public RuntimeArray
{
	ALIGN_FIELD (8) Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* m_Items[1];

	inline Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, int32_t ___relativeTo2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Pieces::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pieces__ctor_m36ED76A47732FC948EA2BB94EF2403457AB0E3B2 (Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* __this, const RuntimeMethod* method) ;
// System.Void Board::setStartLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_setStartLayout_m6B6E9B28735FB7C260F7809ECDFFBA210D539D08 (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) ;
// System.Void Board::BoardTilesCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_BoardTilesCreated_mD9B9879FEFED55867041D6531A8ABB58250859DA (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) ;
// System.Void Board::SpawnAllPieces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_SpawnAllPieces_m3F820DB9CF9313A61E6A50056E2D46BA3D8CFE42 (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) ;
// System.Void Board::positionAllPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_positionAllPiece_m96287174280D85CA5EC7B07E1EAA80130A0F794D (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// Pieces Board::SpawnOnePiece(PieceType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, int32_t ___ptype0, int32_t ___team1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<Pieces>()
inline Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* GameObject_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mEB16FC1AF2F7B7092F9DE5072E5C7BC9DC9B41D9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Board::positionSinglePiece(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_positionSinglePiece_m1C3C7B2AED04EBC782B4E59C270906C1038F92EB (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, int32_t ___i0, int32_t ___j1, bool ___force2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable Board::getCurrentPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Pieces>()
inline Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean Board::isPieceOnTile(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Board_isPieceOnTile_mC83B76AA2E954E0F9029A59ADFECA7C4A6704C59 (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Pawn>()
inline Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* Component_GetComponent_TisPawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167_m3FE4FFF3E1643E9D348D8847EC4E13519277B6BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Pawn::pawnTakeRules(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_pawnTakeRules_m46D65F28D5172A13E99D54342AAD2F8BAE1F4D04 (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, const RuntimeMethod* method) ;
// System.Void Pieces::Rules(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pieces_Rules_m814F49C2AB946BA719D1948FD8CB4F85EF24FEA2 (Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, const RuntimeMethod* method) ;
// System.Boolean Board::getCurrentMoveValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Board_getCurrentMoveValid_mABAA3F6F0BF1AD8FFE1CE1DA457846D14392C5EE (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) ;
// System.Void Board::removePiece(Pieces)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_removePiece_mE506D19F11E00344FF327001924B9E31055872D0 (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* ___tempPiece0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Knight>()
inline Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* Component_GetComponent_TisKnight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927_m0A4B75D206BC75CE7BBEA88EC7A9F2F7DE1DDD9C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Board::setCurrentMoveValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_setCurrentMoveValid_mB2C9696DA51E86C13D03F8A9B47C82F1F7A62C48 (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, bool ___isMoveValid0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5 (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Board>()
inline Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* GameObject_GetComponent_TisBoard_t924A10F2404EA6D3DB02711555BEDFD794B70C1A_mE4E7DAE913316BAE653599872F48AED6A03EDCF6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable>()
inline XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* Component_GetComponent_TisXRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79_m4329D105C8E79285C2EF03B5F94FCBC6BC525D1A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_activated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* XRBaseInteractable_get_activated_mA303C37F9F4F7C8F5E8830DD0A60735A1FD7A71F_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF849D1CE17A326AA2C8F72F3A2BDF6C3C987D4C1 (UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEF66295E608214778EDCF6A989C6645463CAF0E1 (UnityEvent_1_tEC38375A3667634400B758463CD6936646CE1ED8* __this, UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEC38375A3667634400B758463CD6936646CE1ED8*, UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Board::setCurrentPiece(UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_setCurrentPiece_mB23B5F270BF2BFE2CE364E7EA9A343468A85907A (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* ___piece0, const RuntimeMethod* method) ;
// System.Void PieceMovement::movePieceToTile(UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceMovement_movePieceToTile_m6C8C19DA506758982C68F32B88431779C431871E (PieceMovement_t1E398EAB25E057AA1E0937518C03B7115C18E247* __this, XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* ___interactable0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardSript1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean Board::TileIsValid(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Board_TileIsValid_m36396C815FD2C639EC3205CCAD1A1BBC68A0BAFE (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, const RuntimeMethod* method) ;
// Pieces[,] Board::getChessArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* Board_getChessArray_mD8D9A5E2022C0EC565D4DE3BBDC83D4B6471AC0D (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) ;
// System.Void Board::updateChessArray(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_updateChessArray_mF1625FB87DD41C9A3ABB7CA075A7C2C231FC98AA (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Pawn>()
inline Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* GameObject_GetComponent_TisPawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167_mF89C9EF783CA8F06CCF8663A0B99DA4AC8FF9AB5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Pawn::pawnMoveRules(UnityEngine.Vector3,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_pawnMoveRules_m72D2130E6FE48BB8C65AB0DBFE12C95A9608CA90 (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardScript1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<King>()
inline King_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8* GameObject_GetComponent_TisKing_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8_mD2AB631C70CBCE6AF7B59DBAD42666ADC396484C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  King_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void King::kingRules(UnityEngine.Vector3,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void King_kingRules_m17BBFC81A225D75CFA2C2F6AEE48283D7B679A89 (King_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardScript1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Queen>()
inline Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* GameObject_GetComponent_TisQueen_t250477B0959155ACF197D12BD87FD1DA449DFEF7_m95E7F645DABC9500DCA574ACDAC9330995BA7727 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Queen::queenRules(UnityEngine.Vector3,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_queenRules_mF1D58154606D1C30C931FA21CCF7640045288777 (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardScript1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Knight>()
inline Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* GameObject_GetComponent_TisKnight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927_m97B5EEEBF9597A1743E125C4752ABBF9C1A438C0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Knight::knightRules(UnityEngine.Vector3,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_knightRules_m5D5B0126857A59E6A8978AFADD400FC02A60F0CC (Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardScript1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Rook>()
inline Rook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586* GameObject_GetComponent_TisRook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586_mC837014B5D8DE1EA741FB1AAE14AF028AF090F14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Rook::rookRules(UnityEngine.Vector3,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rook_rookRules_m3EFFC1A7D4B37394664F0983044FC8F864D3F1EE (Rook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardScript1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Bishop>()
inline Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A* GameObject_GetComponent_TisBishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A_m6B6F54C37FC3AAFFCA2A2321A74921C4DAE956C8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Bishop::bishopRules(UnityEngine.Vector3,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bishop_bishopRules_mBC81E800DEADEB5BF840B54FB043C578D32239B6 (Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardScript1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
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
// System.Void CameraRotate::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRotate_FixedUpdate_m9A96578A0D91B670CF857A0F544C1CDE75CABA0B (CameraRotate_t61BA1DDD096BB0771521AB040966C6DA360C72CD* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(Vector3.up, Speed * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_2 = __this->___Speed_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_0);
		Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB(L_0, L_1, ((float)il2cpp_codegen_multiply(L_2, L_3)), 0, NULL);
		// }
		return;
	}
}
// System.Void CameraRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRotate__ctor_m9DB63B85EE11F94E5394A744A8F6672221464856 (CameraRotate_t61BA1DDD096BB0771521AB040966C6DA360C72CD* __this, const RuntimeMethod* method) 
{
	{
		// public float Speed = 8;
		__this->___Speed_4 = (8.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Bishop::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bishop_Start_m5F1D25035814E9BF3041052CF762CF4BA2023E69 (Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A* __this, const RuntimeMethod* method) 
{
	{
		// pieceWorth = 3;
		((Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616*)__this)->___pieceWorth_8 = 3;
		// }
		return;
	}
}
// System.Void Bishop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bishop_Update_m3D46CCAA46159648B6A3E039C335BAC01CAE87B2 (Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Bishop::setTileStartColour(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bishop_setTileStartColour_mEE47F51EA56BA034382DB6D88F6FB18D2374FF37 (Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A* __this, int32_t ___colour0, const RuntimeMethod* method) 
{
	{
		// this.tileStartColour = colour;
		int32_t L_0 = ___colour0;
		__this->___tileStartColour_9 = L_0;
		// }
		return;
	}
}
// System.Int32 Bishop::getTileStartColour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bishop_getTileStartColour_mA59D47748F98A9E18DA72385921205B0D1ABFD70 (Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return this.tileStartColour;
		int32_t L_0 = __this->___tileStartColour_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Bishop::bishopRules(UnityEngine.Vector3,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bishop_bishopRules_mBC81E800DEADEB5BF840B54FB043C578D32239B6 (Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardScript1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A2EC0F2D7E0CCD7A0BAC20F26ED9F3DE0BA78E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Bishop Rules");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral31A2EC0F2D7E0CCD7A0BAC20F26ED9F3DE0BA78E, NULL);
		// }
		return;
	}
}
// System.Void Bishop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bishop__ctor_m29605D1CE69D5DB3F5CE9A93FED2254AE97133C0 (Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A* __this, const RuntimeMethod* method) 
{
	{
		Pieces__ctor_m36ED76A47732FC948EA2BB94EF2403457AB0E3B2(__this, NULL);
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
// System.Void Board::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_Start_mC0218DF7CEDE96BC18A9523A9A290041B16F5126 (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) 
{
	{
		// setStartLayout();
		Board_setStartLayout_m6B6E9B28735FB7C260F7809ECDFFBA210D539D08(__this, NULL);
		// }
		return;
	}
}
// System.Void Board::setStartLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_setStartLayout_m6B6E9B28735FB7C260F7809ECDFFBA210D539D08 (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) 
{
	{
		// BoardTilesCreated();
		Board_BoardTilesCreated_mD9B9879FEFED55867041D6531A8ABB58250859DA(__this, NULL);
		// SpawnAllPieces();
		Board_SpawnAllPieces_m3F820DB9CF9313A61E6A50056E2D46BA3D8CFE42(__this, NULL);
		// positionAllPiece();
		Board_positionAllPiece_m96287174280D85CA5EC7B07E1EAA80130A0F794D(__this, NULL);
		// }
		return;
	}
}
// System.Void Board::getPieces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_getPieces_m7B55D7AFE7FC12207FA60F76117AF8ED733573FB (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE975154496527E91F81DB894F01484CF367BC23E);
		s_Il2CppMethodInitialized = true;
	}
	PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log("items inPieces: " + chessPieces);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_0 = __this->___chessPieces_5;
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteralE975154496527E91F81DB894F01484CF367BC23E;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteralE975154496527E91F81DB894F01484CF367BC23E;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck((RuntimeObject*)G_B2_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0018:
	{
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void Board::BoardTilesCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_BoardTilesCreated_mD9B9879FEFED55867041D6531A8ABB58250859DA (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = 0; i < lengthOfBoard; i++)
		V_0 = 0;
		goto IL_004d;
	}

IL_0005:
	{
		// for (int j = 0; j < lengthOfBoard; j++)
		V_1 = 0;
		goto IL_003b;
	}

IL_000a:
	{
		// tilesArray[i, j] = Instantiate(boardTiles, new Vector3(i, (float)0.01, j), Quaternion.identity);
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_0 = __this->___tilesArray_8;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___boardTiles_7;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((float)L_4), (0.00999999978f), ((float)L_5), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_0);
		(L_0)->SetAt(L_1, L_2, L_8);
		// for (int j = 0; j < lengthOfBoard; j++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003b:
	{
		// for (int j = 0; j < lengthOfBoard; j++)
		int32_t L_10 = V_1;
		int32_t L_11 = __this->___lengthOfBoard_6;
		V_2 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_000a;
		}
	}
	{
		// for (int i = 0; i < lengthOfBoard; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < lengthOfBoard; i++)
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___lengthOfBoard_6;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Board::SpawnAllPieces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_SpawnAllPieces_m3F820DB9CF9313A61E6A50056E2D46BA3D8CFE42 (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		// chessPieces = new Pieces[lengthOfBoard, lengthOfBoard];
		int32_t L_0 = __this->___lengthOfBoard_6;
		int32_t L_1 = __this->___lengthOfBoard_6;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_2 = (PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7*)GenArrayNew(PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7_il2cpp_TypeInfo_var, L_3);
		__this->___chessPieces_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chessPieces_5), (void*)L_2);
		// int whiteTeam = 1, blackTeam = 0;
		V_0 = 1;
		// int whiteTeam = 1, blackTeam = 0;
		V_1 = 0;
		// chessPieces[0, 0] = SpawnOnePiece(PieceType.Rook, whiteTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_4 = __this->___chessPieces_5;
		int32_t L_5 = V_0;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_6;
		L_6 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 2, L_5, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(0, 0, L_6);
		// chessPieces[1, 0] = SpawnOnePiece(PieceType.Knight, whiteTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_7 = __this->___chessPieces_5;
		int32_t L_8 = V_0;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_9;
		L_9 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 3, L_8, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(1, 0, L_9);
		// chessPieces[2, 0] = SpawnOnePiece(PieceType.Bishop, whiteTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_10 = __this->___chessPieces_5;
		int32_t L_11 = V_0;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_12;
		L_12 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 4, L_11, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(2, 0, L_12);
		// chessPieces[3, 0] = SpawnOnePiece(PieceType.Queen, whiteTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_13 = __this->___chessPieces_5;
		int32_t L_14 = V_0;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_15;
		L_15 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 5, L_14, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(3, 0, L_15);
		// chessPieces[4, 0] = SpawnOnePiece(PieceType.King, whiteTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_16 = __this->___chessPieces_5;
		int32_t L_17 = V_0;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_18;
		L_18 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 6, L_17, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(4, 0, L_18);
		// chessPieces[5, 0] = SpawnOnePiece(PieceType.Bishop, whiteTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_19 = __this->___chessPieces_5;
		int32_t L_20 = V_0;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_21;
		L_21 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 4, L_20, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(5, 0, L_21);
		// chessPieces[6, 0] = SpawnOnePiece(PieceType.Knight, whiteTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_22 = __this->___chessPieces_5;
		int32_t L_23 = V_0;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_24;
		L_24 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 3, L_23, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(6, 0, L_24);
		// chessPieces[7, 0] = SpawnOnePiece(PieceType.Rook, whiteTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_25 = __this->___chessPieces_5;
		int32_t L_26 = V_0;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_27;
		L_27 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 2, L_26, NULL);
		NullCheck(L_25);
		(L_25)->SetAt(7, 0, L_27);
		// for (int i = 0; i < lengthOfBoard; i++) {
		V_2 = 0;
		goto IL_00e3;
	}

IL_00c8:
	{
		// chessPieces[i, 1] = SpawnOnePiece(PieceType.Pawn, whiteTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_28 = __this->___chessPieces_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_0;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_31;
		L_31 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 1, L_30, NULL);
		NullCheck(L_28);
		(L_28)->SetAt(L_29, 1, L_31);
		// for (int i = 0; i < lengthOfBoard; i++) {
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00e3:
	{
		// for (int i = 0; i < lengthOfBoard; i++) {
		int32_t L_33 = V_2;
		int32_t L_34 = __this->___lengthOfBoard_6;
		V_3 = (bool)((((int32_t)L_33) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_3;
		if (L_35)
		{
			goto IL_00c8;
		}
	}
	{
		// chessPieces[0, 7] = SpawnOnePiece(PieceType.Rook, blackTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_36 = __this->___chessPieces_5;
		int32_t L_37 = V_1;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_38;
		L_38 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 2, L_37, NULL);
		NullCheck(L_36);
		(L_36)->SetAt(0, 7, L_38);
		// chessPieces[1, 7] = SpawnOnePiece(PieceType.Knight, blackTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_39 = __this->___chessPieces_5;
		int32_t L_40 = V_1;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_41;
		L_41 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 3, L_40, NULL);
		NullCheck(L_39);
		(L_39)->SetAt(1, 7, L_41);
		// chessPieces[2, 7] = SpawnOnePiece(PieceType.Bishop, blackTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_42 = __this->___chessPieces_5;
		int32_t L_43 = V_1;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_44;
		L_44 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 4, L_43, NULL);
		NullCheck(L_42);
		(L_42)->SetAt(2, 7, L_44);
		// chessPieces[3, 7] = SpawnOnePiece(PieceType.Queen, blackTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_45 = __this->___chessPieces_5;
		int32_t L_46 = V_1;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_47;
		L_47 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 5, L_46, NULL);
		NullCheck(L_45);
		(L_45)->SetAt(3, 7, L_47);
		// chessPieces[4, 7] = SpawnOnePiece(PieceType.King, blackTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_48 = __this->___chessPieces_5;
		int32_t L_49 = V_1;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_50;
		L_50 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 6, L_49, NULL);
		NullCheck(L_48);
		(L_48)->SetAt(4, 7, L_50);
		// chessPieces[5, 7] = SpawnOnePiece(PieceType.Bishop, blackTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_51 = __this->___chessPieces_5;
		int32_t L_52 = V_1;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_53;
		L_53 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 4, L_52, NULL);
		NullCheck(L_51);
		(L_51)->SetAt(5, 7, L_53);
		// chessPieces[6, 7] = SpawnOnePiece(PieceType.Knight, blackTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_54 = __this->___chessPieces_5;
		int32_t L_55 = V_1;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_56;
		L_56 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 3, L_55, NULL);
		NullCheck(L_54);
		(L_54)->SetAt(6, 7, L_56);
		// chessPieces[7, 7] = SpawnOnePiece(PieceType.Rook, blackTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_57 = __this->___chessPieces_5;
		int32_t L_58 = V_1;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_59;
		L_59 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 2, L_58, NULL);
		NullCheck(L_57);
		(L_57)->SetAt(7, 7, L_59);
		// for (int i = 0; i < lengthOfBoard; i++)
		V_4 = 0;
		goto IL_01bb;
	}

IL_019d:
	{
		// chessPieces[i, 6] = SpawnOnePiece(PieceType.Pawn, blackTeam);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_60 = __this->___chessPieces_5;
		int32_t L_61 = V_4;
		int32_t L_62 = V_1;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_63;
		L_63 = Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B(__this, 1, L_62, NULL);
		NullCheck(L_60);
		(L_60)->SetAt(L_61, 6, L_63);
		// for (int i = 0; i < lengthOfBoard; i++)
		int32_t L_64 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_01bb:
	{
		// for (int i = 0; i < lengthOfBoard; i++)
		int32_t L_65 = V_4;
		int32_t L_66 = __this->___lengthOfBoard_6;
		V_5 = (bool)((((int32_t)L_65) < ((int32_t)L_66))? 1 : 0);
		bool L_67 = V_5;
		if (L_67)
		{
			goto IL_019d;
		}
	}
	{
		// }
		return;
	}
}
// Pieces Board::SpawnOnePiece(PieceType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* Board_SpawnOnePiece_m7B567D3DD799E356E29C5E4949255651045D669B (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, int32_t ___ptype0, int32_t ___team1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mEB16FC1AF2F7B7092F9DE5072E5C7BC9DC9B41D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* V_0 = NULL;
	Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* V_1 = NULL;
	{
		// Pieces p = Instantiate(prefabs[(int)ptype-1], transform).GetComponent<Pieces>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___prefabs_13;
		int32_t L_1 = ___ptype0;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		NullCheck(L_5);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_6;
		L_6 = GameObject_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mEB16FC1AF2F7B7092F9DE5072E5C7BC9DC9B41D9(L_5, GameObject_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mEB16FC1AF2F7B7092F9DE5072E5C7BC9DC9B41D9_RuntimeMethod_var);
		V_0 = L_6;
		// p.ptype = ptype;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_7 = V_0;
		int32_t L_8 = ___ptype0;
		NullCheck(L_7);
		L_7->___ptype_5 = L_8;
		// p.team = team;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_9 = V_0;
		int32_t L_10 = ___team1;
		NullCheck(L_9);
		L_9->___team_4 = L_10;
		// p.GetComponent<MeshRenderer>().material = teamMaterials[team];
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_11 = V_0;
		NullCheck(L_11);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_12;
		L_12 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_11, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_13 = __this->___teamMaterials_14;
		int32_t L_14 = ___team1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_12, L_16, NULL);
		// return p;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_17 = V_0;
		V_1 = L_17;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_18 = V_1;
		return L_18;
	}
}
// System.Void Board::positionAllPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_positionAllPiece_m96287174280D85CA5EC7B07E1EAA80130A0F794D (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// for (int i = 0; i < lengthOfBoard; i++) {
		V_0 = 0;
		goto IL_0045;
	}

IL_0005:
	{
		// for (int j=0; j < lengthOfBoard;  j++) {
		V_1 = 0;
		goto IL_0033;
	}

IL_000a:
	{
		// if (chessPieces[i, j] != null) {
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_0 = __this->___chessPieces_5;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// positionSinglePiece(i, j, true);
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		Board_positionSinglePiece_m1C3C7B2AED04EBC782B4E59C270906C1038F92EB(__this, L_6, L_7, (bool)1, NULL);
	}

IL_002e:
	{
		// for (int j=0; j < lengthOfBoard;  j++) {
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0033:
	{
		// for (int j=0; j < lengthOfBoard;  j++) {
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___lengthOfBoard_6;
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_000a;
		}
	}
	{
		// for (int i = 0; i < lengthOfBoard; i++) {
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0045:
	{
		// for (int i = 0; i < lengthOfBoard; i++) {
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___lengthOfBoard_6;
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Board::positionSinglePiece(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_positionSinglePiece_m1C3C7B2AED04EBC782B4E59C270906C1038F92EB (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, int32_t ___i0, int32_t ___j1, bool ___force2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// chessPieces[i, j].currentXPos = i;
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_0 = __this->___chessPieces_5;
		int32_t L_1 = ___i0;
		int32_t L_2 = ___j1;
		NullCheck(L_0);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		L_3->___currentXPos_6 = L_4;
		// chessPieces[i, j].currentZPos = j;
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_5 = __this->___chessPieces_5;
		int32_t L_6 = ___i0;
		int32_t L_7 = ___j1;
		NullCheck(L_5);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_8;
		L_8 = (L_5)->GetAt(L_6, L_7);
		int32_t L_9 = ___j1;
		NullCheck(L_8);
		L_8->___currentZPos_7 = L_9;
		// if (chessPieces[i, j].team == 0) {
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_10 = __this->___chessPieces_5;
		int32_t L_11 = ___i0;
		int32_t L_12 = ___j1;
		NullCheck(L_10);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_13;
		L_13 = (L_10)->GetAt(L_11, L_12);
		NullCheck(L_13);
		int32_t L_14 = L_13->___team_4;
		V_0 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// chessPieces[i, j].transform.Rotate(0, 180, 0);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_16 = __this->___chessPieces_5;
		int32_t L_17 = ___i0;
		int32_t L_18 = ___j1;
		NullCheck(L_16);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_19;
		L_19 = (L_16)->GetAt(L_17, L_18);
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_20);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_20, (0.0f), (180.0f), (0.0f), NULL);
	}

IL_0069:
	{
		// chessPieces[i, j].transform.position = new Vector3(i, 0, j);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_21 = __this->___chessPieces_5;
		int32_t L_22 = ___i0;
		int32_t L_23 = ___j1;
		NullCheck(L_21);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_24;
		L_24 = (L_21)->GetAt(L_22, L_23);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		int32_t L_26 = ___i0;
		int32_t L_27 = ___j1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)L_26), (0.0f), ((float)L_27), /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_28, NULL);
		// }
		return;
	}
}
// System.Void Board::setCurrentPiece(UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_setCurrentPiece_mB23B5F270BF2BFE2CE364E7EA9A343468A85907A (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* ___piece0, const RuntimeMethod* method) 
{
	{
		// this.currecntlySelectedPiece = piece;
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_0 = ___piece0;
		__this->___currecntlySelectedPiece_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currecntlySelectedPiece_4), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable Board::getCurrentPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) 
{
	XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* V_0 = NULL;
	{
		// return this.currecntlySelectedPiece;
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_0 = __this->___currecntlySelectedPiece_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_1 = V_0;
		return L_1;
	}
}
// System.Void Board::updateChessArray(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_updateChessArray_mF1625FB87DD41C9A3ABB7CA075A7C2C231FC98AA (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Pieces tempScript = getCurrentPiece().GetComponent<Pieces>();
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_0;
		L_0 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(__this, NULL);
		NullCheck(L_0);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_1;
		L_1 = Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01(L_0, Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var);
		V_0 = L_1;
		// int oldZPos = tempScript.currentZPos;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___currentZPos_7;
		V_1 = L_3;
		// int oldXPos = tempScript.currentXPos;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___currentXPos_6;
		V_2 = L_5;
		// chessPieces[oldXPos, oldZPos] = null;//removing piece at old position
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_6 = __this->___chessPieces_5;
		int32_t L_7 = V_2;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(L_7, L_8, (Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616*)NULL);
		// tempScript.currentXPos = (int)position.x;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___position0;
		float L_11 = L_10.___x_2;
		NullCheck(L_9);
		L_9->___currentXPos_6 = il2cpp_codegen_cast_double_to_int<int32_t>(L_11);
		// tempScript.currentZPos = (int)position.z;//changing script pos
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___position0;
		float L_14 = L_13.___z_4;
		NullCheck(L_12);
		L_12->___currentZPos_7 = il2cpp_codegen_cast_double_to_int<int32_t>(L_14);
		// chessPieces[(int)position.x, (int)position.z] = getCurrentPiece().GetComponent<Pieces>();//setting piece at new position
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_15 = __this->___chessPieces_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___position0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___position0;
		float L_19 = L_18.___z_4;
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_20;
		L_20 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(__this, NULL);
		NullCheck(L_20);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_21;
		L_21 = Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01(L_20, Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var);
		NullCheck(L_15);
		(L_15)->SetAt(il2cpp_codegen_cast_double_to_int<int32_t>(L_17), il2cpp_codegen_cast_double_to_int<int32_t>(L_19), L_21);
		// }
		return;
	}
}
// Pieces[,] Board::getChessArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* Board_getChessArray_mD8D9A5E2022C0EC565D4DE3BBDC83D4B6471AC0D (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) 
{
	PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* V_0 = NULL;
	{
		// return this.chessPieces;
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_0 = __this->___chessPieces_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Board::TileIsValid(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Board_TileIsValid_m36396C815FD2C639EC3205CCAD1A1BBC68A0BAFE (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167_m3FE4FFF3E1643E9D348D8847EC4E13519277B6BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E4E7BD15AA99F81C6C4CCB381070FCF904F8505);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B0833708D04F8AE610D9B38F31CC59157490035);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		// bool pieceAtPos = isPieceOnTile(tilePos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___tilePos0;
		bool L_1;
		L_1 = Board_isPieceOnTile_mC83B76AA2E954E0F9029A59ADFECA7C4A6704C59(__this, L_0, NULL);
		V_0 = L_1;
		// if (pieceAtPos)
		bool L_2 = V_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0107;
		}
	}
	{
		// int teamPieceOnTile = chessPieces[(int)tilePos.x, (int)tilePos.z].team; //[this checks the team of the piece on the tile selected]
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_4 = __this->___chessPieces_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___tilePos0;
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___tilePos0;
		float L_8 = L_7.___z_4;
		NullCheck(L_4);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_9;
		L_9 = (L_4)->GetAt(il2cpp_codegen_cast_double_to_int<int32_t>(L_6), il2cpp_codegen_cast_double_to_int<int32_t>(L_8));
		NullCheck(L_9);
		int32_t L_10 = L_9->___team_4;
		V_2 = L_10;
		// Debug.Log(teamPieceOnTile + " compared to " + getCurrentPiece().GetComponent<Pieces>().team);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_12;
		L_12 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(__this, NULL);
		NullCheck(L_12);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_13;
		L_13 = Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01(L_12, Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t* L_14 = (&L_13->___team_4);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_11, _stringLiteral5B0833708D04F8AE610D9B38F31CC59157490035, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_16, NULL);
		// if (teamPieceOnTile == getCurrentPiece().GetComponent<Pieces>().team)
		int32_t L_17 = V_2;
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_18;
		L_18 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(__this, NULL);
		NullCheck(L_18);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_19;
		L_19 = Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01(L_18, Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var);
		NullCheck(L_19);
		int32_t L_20 = L_19->___team_4;
		V_3 = (bool)((((int32_t)L_17) == ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_0088;
		}
	}
	{
		// Debug.Log("invalid move");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2E4E7BD15AA99F81C6C4CCB381070FCF904F8505, NULL);
		// return false;
		V_4 = (bool)0;
		goto IL_0135;
	}

IL_0088:
	{
		// if (getCurrentPiece().GetComponent<Pieces>().ptype == PieceType.Pawn)
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_22;
		L_22 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(__this, NULL);
		NullCheck(L_22);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_23;
		L_23 = Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01(L_22, Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var);
		NullCheck(L_23);
		int32_t L_24 = L_23->___ptype_5;
		V_5 = (bool)((((int32_t)L_24) == ((int32_t)1))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00bb;
		}
	}
	{
		// Pawn pawn = getCurrentPiece().GetComponent<Pawn>();
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_26;
		L_26 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(__this, NULL);
		NullCheck(L_26);
		Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* L_27;
		L_27 = Component_GetComponent_TisPawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167_m3FE4FFF3E1643E9D348D8847EC4E13519277B6BB(L_26, Component_GetComponent_TisPawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167_m3FE4FFF3E1643E9D348D8847EC4E13519277B6BB_RuntimeMethod_var);
		V_6 = L_27;
		// pawn.pawnTakeRules(tilePos);
		Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* L_28 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___tilePos0;
		NullCheck(L_28);
		Pawn_pawnTakeRules_m46D65F28D5172A13E99D54342AAD2F8BAE1F4D04(L_28, L_29, NULL);
		goto IL_00cf;
	}

IL_00bb:
	{
		// getCurrentPiece().GetComponent<Pieces>().Rules(tilePos);
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_30;
		L_30 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(__this, NULL);
		NullCheck(L_30);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_31;
		L_31 = Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01(L_30, Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___tilePos0;
		NullCheck(L_31);
		Pieces_Rules_m814F49C2AB946BA719D1948FD8CB4F85EF24FEA2(L_31, L_32, NULL);
	}

IL_00cf:
	{
		// if (getCurrentMoveValid())
		bool L_33;
		L_33 = Board_getCurrentMoveValid_mABAA3F6F0BF1AD8FFE1CE1DA457846D14392C5EE(__this, NULL);
		V_7 = L_33;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00fd;
		}
	}
	{
		// removePiece(chessPieces[(int)tilePos.x, (int)tilePos.z]);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_35 = __this->___chessPieces_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___tilePos0;
		float L_37 = L_36.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ___tilePos0;
		float L_39 = L_38.___z_4;
		NullCheck(L_35);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_40;
		L_40 = (L_35)->GetAt(il2cpp_codegen_cast_double_to_int<int32_t>(L_37), il2cpp_codegen_cast_double_to_int<int32_t>(L_39));
		Board_removePiece_mE506D19F11E00344FF327001924B9E31055872D0(__this, L_40, NULL);
	}

IL_00fd:
	{
		// return getCurrentMoveValid();
		bool L_41;
		L_41 = Board_getCurrentMoveValid_mABAA3F6F0BF1AD8FFE1CE1DA457846D14392C5EE(__this, NULL);
		V_4 = L_41;
		goto IL_0135;
	}

IL_0107:
	{
		// getCurrentPiece().GetComponent<Pieces>().Rules(tilePos);
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_42;
		L_42 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(__this, NULL);
		NullCheck(L_42);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_43;
		L_43 = Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01(L_42, Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ___tilePos0;
		NullCheck(L_43);
		Pieces_Rules_m814F49C2AB946BA719D1948FD8CB4F85EF24FEA2(L_43, L_44, NULL);
		// if (!getCurrentMoveValid())
		bool L_45;
		L_45 = Board_getCurrentMoveValid_mABAA3F6F0BF1AD8FFE1CE1DA457846D14392C5EE(__this, NULL);
		V_8 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_8;
		if (!L_46)
		{
			goto IL_012f;
		}
	}
	{
		// return false;
		V_4 = (bool)0;
		goto IL_0135;
	}

IL_012f:
	{
		// return true;
		V_4 = (bool)1;
		goto IL_0135;
	}

IL_0135:
	{
		// }
		bool L_47 = V_4;
		return L_47;
	}
}
// System.Void Board::removePiece(Pieces)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_removePiece_mE506D19F11E00344FF327001924B9E31055872D0 (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* ___tempPiece0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// GameObject gO = tempPiece.gameObject;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_0 = ___tempPiece0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		V_0 = L_1;
		// int t = tempPiece.team;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_2 = ___tempPiece0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___team_4;
		V_1 = L_3;
		// if (t == 0)
		int32_t L_4 = V_1;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// bPlayerScore += tempPiece.pieceWorth;
		int32_t L_6 = __this->___bPlayerScore_10;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_7 = ___tempPiece0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___pieceWorth_8;
		__this->___bPlayerScore_10 = ((int32_t)il2cpp_codegen_add(L_6, L_8));
		// Debug.Log(bPlayerScore);
		int32_t L_9 = __this->___bPlayerScore_10;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		goto IL_0065;
	}

IL_003f:
	{
		// wPlayerScore += tempPiece.pieceWorth;
		int32_t L_12 = __this->___wPlayerScore_9;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_13 = ___tempPiece0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___pieceWorth_8;
		__this->___wPlayerScore_9 = ((int32_t)il2cpp_codegen_add(L_12, L_14));
		// Debug.Log(wPlayerScore);
		int32_t L_15 = __this->___wPlayerScore_9;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
	}

IL_0065:
	{
		// Destroy(gO);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_18, NULL);
		// }
		return;
	}
}
// System.Boolean Board::isPieceOnTile(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Board_isPieceOnTile_mC83B76AA2E954E0F9029A59ADFECA7C4A6704C59 (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (chessPieces[(int)tilePos.x, (int)tilePos.z] != null) {
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_0 = __this->___chessPieces_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___tilePos0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___tilePos0;
		float L_4 = L_3.___z_4;
		NullCheck(L_0);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_5;
		L_5 = (L_0)->GetAt(il2cpp_codegen_cast_double_to_int<int32_t>(L_2), il2cpp_codegen_cast_double_to_int<int32_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_002d;
	}

IL_0029:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Void Board::setCurrentMoveValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_setCurrentMoveValid_mB2C9696DA51E86C13D03F8A9B47C82F1F7A62C48 (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, bool ___isMoveValid0, const RuntimeMethod* method) 
{
	{
		// this.currentMoveValid = isMoveValid;
		bool L_0 = ___isMoveValid0;
		__this->___currentMoveValid_11 = L_0;
		// }
		return;
	}
}
// System.Boolean Board::getCurrentMoveValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Board_getCurrentMoveValid_mABAA3F6F0BF1AD8FFE1CE1DA457846D14392C5EE (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return this.currentMoveValid;
		bool L_0 = __this->___currentMoveValid_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Board::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board__ctor_mD7649814C6B9E7EF83936BA430C66B0824FE3B5E (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int lengthOfBoard = 8; //int tileSize = 1;
		__this->___lengthOfBoard_6 = 8;
		// GameObject[,] tilesArray = new GameObject[8, 8];
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)8, (il2cpp_array_size_t)8 };
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_0 = (GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E*)GenArrayNew(GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var, L_1);
		__this->___tilesArray_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tilesArray_8), (void*)L_0);
		// private int wPlayerScore = 0;
		__this->___wPlayerScore_9 = 0;
		// private int bPlayerScore = 0;
		__this->___bPlayerScore_10 = 0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void InitialBoardLayout::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialBoardLayout_Start_m15B7ADB05EF69CD8D66BCFDB62BB80409DDE662A (InitialBoardLayout_tCF8FB3E10B38409661533636F069508AAADE0BF0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InitialBoardLayout::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialBoardLayout_Update_m4ACF0C20806078E816A13A6BFCB6BDC901E1D8E9 (InitialBoardLayout_tCF8FB3E10B38409661533636F069508AAADE0BF0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InitialBoardLayout::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialBoardLayout__ctor_mB9B2FFAE16248E1F5440713D9089DD1BA1BE5FDA (InitialBoardLayout_tCF8FB3E10B38409661533636F069508AAADE0BF0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void King::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void King_Start_m8F37B228B3FB10DD602CBD9A2993CEEEB0FAE89D (King_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8* __this, const RuntimeMethod* method) 
{
	{
		// pieceWorth = 0;
		((Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616*)__this)->___pieceWorth_8 = 0;
		// }
		return;
	}
}
// System.Void King::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void King_Update_mA4505E02DD6323668309F45CD7CD7D68EC99C2C8 (King_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void King::kingRules(UnityEngine.Vector3,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void King_kingRules_m17BBFC81A225D75CFA2C2F6AEE48283D7B679A89 (King_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardScript1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE43312EB47DDBD82378CB162E20297117C7B60F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("King Rules");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDE43312EB47DDBD82378CB162E20297117C7B60F, NULL);
		// }
		return;
	}
}
// System.Void King::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void King__ctor_m0D1E4FA0B41F926F658413FEA06B6E75A5E4D06D (King_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8* __this, const RuntimeMethod* method) 
{
	{
		Pieces__ctor_m36ED76A47732FC948EA2BB94EF2403457AB0E3B2(__this, NULL);
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
// System.Void Knight::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_Start_m3E23CAA460821E31462796072A58259B743F6026 (Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* __this, const RuntimeMethod* method) 
{
	{
		// pieceWorth = 3;
		((Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616*)__this)->___pieceWorth_8 = 3;
		// }
		return;
	}
}
// System.Void Knight::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_Update_mE5B2F316BADAE5AC5B1CD9C707B0EE47B9FF9B1E (Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Knight::knightRules(UnityEngine.Vector3,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_knightRules_m5D5B0126857A59E6A8978AFADD400FC02A60F0CC (Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardScript1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisKnight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927_m0A4B75D206BC75CE7BBEA88EC7A9F2F7DE1DDD9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC09BC07CFD30616932FC885585D4AB173F659FC7);
		s_Il2CppMethodInitialized = true;
	}
	Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// Debug.Log("Knight Rules");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC09BC07CFD30616932FC885585D4AB173F659FC7, NULL);
		// Knight knightScipt = boardScript.getCurrentPiece().GetComponent<Knight>();
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_0 = ___boardScript1;
		NullCheck(L_0);
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_1;
		L_1 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(L_0, NULL);
		NullCheck(L_1);
		Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* L_2;
		L_2 = Component_GetComponent_TisKnight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927_m0A4B75D206BC75CE7BBEA88EC7A9F2F7DE1DDD9C(L_1, Component_GetComponent_TisKnight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927_m0A4B75D206BC75CE7BBEA88EC7A9F2F7DE1DDD9C_RuntimeMethod_var);
		V_0 = L_2;
		// int x = (knightScipt.currentXPos);
		Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = ((Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616*)L_3)->___currentXPos_6;
		V_1 = L_4;
		// int z = (knightScipt.currentZPos);
		Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = ((Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616*)L_5)->___currentZPos_7;
		V_2 = L_6;
		// int[,] positions = {
		//     { (x-1), (z+2)},
		//     { (x-2), (z+1)},
		//     { (x-2), (z-1)},
		//     { (x-1), (z-2)},
		//     { (x+1), (z+2)},
		//     { (x+2), (z+1)},
		//     { (x+2), (z-1)},
		//     { (x+1), (z-2)}
		// };
		il2cpp_array_size_t L_8[] = { (il2cpp_array_size_t)8, (il2cpp_array_size_t)2 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_7 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_8);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_9 = L_7;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		(L_9)->SetAt(0, 0, ((int32_t)il2cpp_codegen_subtract(L_10, 1)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_11 = L_9;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		(L_11)->SetAt(0, 1, ((int32_t)il2cpp_codegen_add(L_12, 2)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_13 = L_11;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		(L_13)->SetAt(1, 0, ((int32_t)il2cpp_codegen_subtract(L_14, 2)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_15 = L_13;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(1, 1, ((int32_t)il2cpp_codegen_add(L_16, 1)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_17 = L_15;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		(L_17)->SetAt(2, 0, ((int32_t)il2cpp_codegen_subtract(L_18, 2)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_19 = L_17;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		(L_19)->SetAt(2, 1, ((int32_t)il2cpp_codegen_subtract(L_20, 1)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_21 = L_19;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(3, 0, ((int32_t)il2cpp_codegen_subtract(L_22, 1)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_23 = L_21;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		(L_23)->SetAt(3, 1, ((int32_t)il2cpp_codegen_subtract(L_24, 2)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_25 = L_23;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		(L_25)->SetAt(4, 0, ((int32_t)il2cpp_codegen_add(L_26, 1)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_27 = L_25;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		(L_27)->SetAt(4, 1, ((int32_t)il2cpp_codegen_add(L_28, 2)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_29 = L_27;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(5, 0, ((int32_t)il2cpp_codegen_add(L_30, 2)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_31 = L_29;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		(L_31)->SetAt(5, 1, ((int32_t)il2cpp_codegen_add(L_32, 1)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_33 = L_31;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		(L_33)->SetAt(6, 0, ((int32_t)il2cpp_codegen_add(L_34, 2)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_35 = L_33;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		(L_35)->SetAt(6, 1, ((int32_t)il2cpp_codegen_subtract(L_36, 1)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_37 = L_35;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		(L_37)->SetAt(7, 0, ((int32_t)il2cpp_codegen_add(L_38, 1)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_39 = L_37;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		(L_39)->SetAt(7, 1, ((int32_t)il2cpp_codegen_subtract(L_40, 2)));
		V_3 = L_39;
		// for (int i = 0; i < 8; i++)
		V_4 = 0;
		goto IL_0122;
	}

IL_00e3:
	{
		// if (tilePos.x == positions[i, 0] && tilePos.z == positions[i, 1])
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = ___tilePos0;
		float L_42 = L_41.___x_2;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_43 = V_3;
		int32_t L_44 = V_4;
		NullCheck(L_43);
		int32_t L_45;
		L_45 = (L_43)->GetAt(L_44, 0);
		if ((!(((float)L_42) == ((float)((float)L_45)))))
		{
			goto IL_010a;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = ___tilePos0;
		float L_47 = L_46.___z_4;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = (L_48)->GetAt(L_49, 1);
		G_B4_0 = ((((float)L_47) == ((float)((float)L_50)))? 1 : 0);
		goto IL_010b;
	}

IL_010a:
	{
		G_B4_0 = 0;
	}

IL_010b:
	{
		V_5 = (bool)G_B4_0;
		bool L_51 = V_5;
		if (!L_51)
		{
			goto IL_011b;
		}
	}
	{
		// boardScript.setCurrentMoveValid(true);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_52 = ___boardScript1;
		NullCheck(L_52);
		Board_setCurrentMoveValid_mB2C9696DA51E86C13D03F8A9B47C82F1F7A62C48(L_52, (bool)1, NULL);
	}

IL_011b:
	{
		// for (int i = 0; i < 8; i++)
		int32_t L_53 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0122:
	{
		// for (int i = 0; i < 8; i++)
		int32_t L_54 = V_4;
		V_6 = (bool)((((int32_t)L_54) < ((int32_t)8))? 1 : 0);
		bool L_55 = V_6;
		if (L_55)
		{
			goto IL_00e3;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Knight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight__ctor_m4F3A9369169B09789175EF297DA2B6424ED376B3 (Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* __this, const RuntimeMethod* method) 
{
	{
		Pieces__ctor_m36ED76A47732FC948EA2BB94EF2403457AB0E3B2(__this, NULL);
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
// System.Void Pawn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_Start_mA64089B85B4ECCC05EFE7F98D93CB5D67D852AEC (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, const RuntimeMethod* method) 
{
	{
		// movedFromStartPos = false;
		__this->___movedFromStartPos_9 = (bool)0;
		// pieceWorth = 1;
		((Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616*)__this)->___pieceWorth_8 = 1;
		// }
		return;
	}
}
// System.Void Pawn::pawnMoveRules(UnityEngine.Vector3,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_pawnMoveRules_m72D2130E6FE48BB8C65AB0DBFE12C95A9608CA90 (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardScript1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* V_0 = NULL;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_0 = ___boardScript1;
		NullCheck(L_0);
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_1;
		L_1 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(L_0, NULL);
		NullCheck(L_1);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_2;
		L_2 = Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01(L_1, Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var);
		V_0 = L_2;
		// int[,] positions ={ { (pieceScript.currentZPos - 1), (pieceScript.currentZPos - 2) }, { (pieceScript.currentZPos + 1), (pieceScript.currentZPos + 2) } };
		il2cpp_array_size_t L_4[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)2 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_3 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_4);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_5 = L_3;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___currentZPos_7;
		NullCheck(L_5);
		(L_5)->SetAt(0, 0, ((int32_t)il2cpp_codegen_subtract(L_7, 1)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_8 = L_5;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___currentZPos_7;
		NullCheck(L_8);
		(L_8)->SetAt(0, 1, ((int32_t)il2cpp_codegen_subtract(L_10, 2)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_11 = L_8;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___currentZPos_7;
		NullCheck(L_11);
		(L_11)->SetAt(1, 0, ((int32_t)il2cpp_codegen_add(L_13, 1)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_14 = L_11;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___currentZPos_7;
		NullCheck(L_14);
		(L_14)->SetAt(1, 1, ((int32_t)il2cpp_codegen_add(L_16, 2)));
		V_1 = L_14;
		// if (!movedFromStartPos)
		bool L_17 = __this->___movedFromStartPos_9;
		V_2 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_00b9;
		}
	}
	{
		// for (int i=0; i<2; i++)
		V_3 = 0;
		goto IL_00ac;
	}

IL_0067:
	{
		// if (tilePos.z == positions[pieceScript.team, i] && tilePos.x == pieceScript.currentXPos)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___tilePos0;
		float L_20 = L_19.___z_4;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_21 = V_1;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___team_4;
		int32_t L_24 = V_3;
		NullCheck(L_21);
		int32_t L_25;
		L_25 = (L_21)->GetAt(L_23, L_24);
		if ((!(((float)L_20) == ((float)((float)L_25)))))
		{
			goto IL_008f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ___tilePos0;
		float L_27 = L_26.___x_2;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___currentXPos_6;
		G_B5_0 = ((((float)L_27) == ((float)((float)L_29)))? 1 : 0);
		goto IL_0090;
	}

IL_008f:
	{
		G_B5_0 = 0;
	}

IL_0090:
	{
		V_4 = (bool)G_B5_0;
		bool L_30 = V_4;
		if (!L_30)
		{
			goto IL_00a7;
		}
	}
	{
		// boardScript.setCurrentMoveValid(true);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_31 = ___boardScript1;
		NullCheck(L_31);
		Board_setCurrentMoveValid_mB2C9696DA51E86C13D03F8A9B47C82F1F7A62C48(L_31, (bool)1, NULL);
		// movedFromStartPos = true;
		__this->___movedFromStartPos_9 = (bool)1;
	}

IL_00a7:
	{
		// for (int i=0; i<2; i++)
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00ac:
	{
		// for (int i=0; i<2; i++)
		int32_t L_33 = V_3;
		V_5 = (bool)((((int32_t)L_33) < ((int32_t)2))? 1 : 0);
		bool L_34 = V_5;
		if (L_34)
		{
			goto IL_0067;
		}
	}
	{
		goto IL_0104;
	}

IL_00b9:
	{
		// else if (tilePos.z == positions[pieceScript.team, 0] && tilePos.x == pieceScript.currentXPos)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = ___tilePos0;
		float L_36 = L_35.___z_4;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_37 = V_1;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = L_38->___team_4;
		NullCheck(L_37);
		int32_t L_40;
		L_40 = (L_37)->GetAt(L_39, 0);
		if ((!(((float)L_36) == ((float)((float)L_40)))))
		{
			goto IL_00e0;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = ___tilePos0;
		float L_42 = L_41.___x_2;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_43 = V_0;
		NullCheck(L_43);
		int32_t L_44 = L_43->___currentXPos_6;
		G_B13_0 = ((((float)L_42) == ((float)((float)L_44)))? 1 : 0);
		goto IL_00e1;
	}

IL_00e0:
	{
		G_B13_0 = 0;
	}

IL_00e1:
	{
		V_6 = (bool)G_B13_0;
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_00fa;
		}
	}
	{
		// boardScript.setCurrentMoveValid(true);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_46 = ___boardScript1;
		NullCheck(L_46);
		Board_setCurrentMoveValid_mB2C9696DA51E86C13D03F8A9B47C82F1F7A62C48(L_46, (bool)1, NULL);
		// movedFromStartPos = true;
		__this->___movedFromStartPos_9 = (bool)1;
		goto IL_0104;
	}

IL_00fa:
	{
		// boardScript.setCurrentMoveValid(false);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_47 = ___boardScript1;
		NullCheck(L_47);
		Board_setCurrentMoveValid_mB2C9696DA51E86C13D03F8A9B47C82F1F7A62C48(L_47, (bool)0, NULL);
	}

IL_0104:
	{
		// }
		return;
	}
}
// System.Void Pawn::pawnTakeRules(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_pawnTakeRules_m46D65F28D5172A13E99D54342AAD2F8BAE1F4D04 (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoard_t924A10F2404EA6D3DB02711555BEDFD794B70C1A_mE4E7DAE913316BAE653599872F48AED6A03EDCF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FF3BC5398DACE801B4E86DF28B390F51006F8E9);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* V_1 = NULL;
	Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// GameObject board = GameObject.FindWithTag("BoardLayout");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral2FF3BC5398DACE801B4E86DF28B390F51006F8E9, NULL);
		V_0 = L_0;
		// Board boardScript = board.GetComponent<Board>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_2;
		L_2 = GameObject_GetComponent_TisBoard_t924A10F2404EA6D3DB02711555BEDFD794B70C1A_mE4E7DAE913316BAE653599872F48AED6A03EDCF6(L_1, GameObject_GetComponent_TisBoard_t924A10F2404EA6D3DB02711555BEDFD794B70C1A_mE4E7DAE913316BAE653599872F48AED6A03EDCF6_RuntimeMethod_var);
		V_1 = L_2;
		// Pieces pieceScript = boardScript.getCurrentPiece().GetComponent<Pieces>();
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_3 = V_1;
		NullCheck(L_3);
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_4;
		L_4 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(L_3, NULL);
		NullCheck(L_4);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_5;
		L_5 = Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01(L_4, Component_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mC6ABE3FC624332D76AA5F37CF0A58E8857214E01_RuntimeMethod_var);
		V_2 = L_5;
		// int right = (pieceScript.currentXPos + 1), left = (pieceScript.currentXPos - 1);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___currentXPos_6;
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// int right = (pieceScript.currentXPos + 1), left = (pieceScript.currentXPos - 1);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9 = L_8->___currentXPos_6;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		// int[] offset = { (pieceScript.currentZPos -1), (pieceScript.currentZPos + 1) };//black0, white1
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = L_12->___currentZPos_7;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_11;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___currentZPos_7;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		V_5 = L_14;
		// if (tilePos.x == right && tilePos.z == offset[pieceScript.team])
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___tilePos0;
		float L_18 = L_17.___x_2;
		int32_t L_19 = V_3;
		if ((!(((float)L_18) == ((float)((float)L_19)))))
		{
			goto IL_006e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___tilePos0;
		float L_21 = L_20.___z_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_5;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = L_23->___team_4;
		NullCheck(L_22);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		G_B3_0 = ((((float)L_21) == ((float)((float)L_26)))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B3_0 = 0;
	}

IL_006f:
	{
		V_6 = (bool)G_B3_0;
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_0088;
		}
	}
	{
		// boardScript.setCurrentMoveValid(true);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_28 = V_1;
		NullCheck(L_28);
		Board_setCurrentMoveValid_mB2C9696DA51E86C13D03F8A9B47C82F1F7A62C48(L_28, (bool)1, NULL);
		// movedFromStartPos = true;
		__this->___movedFromStartPos_9 = (bool)1;
		goto IL_00cb;
	}

IL_0088:
	{
		// else if (tilePos.x == left && tilePos.z == offset[pieceScript.team])
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___tilePos0;
		float L_30 = L_29.___x_2;
		int32_t L_31 = V_4;
		if ((!(((float)L_30) == ((float)((float)L_31)))))
		{
			goto IL_00a7;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___tilePos0;
		float L_33 = L_32.___z_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_5;
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36 = L_35->___team_4;
		NullCheck(L_34);
		int32_t L_37 = L_36;
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		G_B8_0 = ((((float)L_33) == ((float)((float)L_38)))? 1 : 0);
		goto IL_00a8;
	}

IL_00a7:
	{
		G_B8_0 = 0;
	}

IL_00a8:
	{
		V_7 = (bool)G_B8_0;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_00c1;
		}
	}
	{
		// boardScript.setCurrentMoveValid(true);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_40 = V_1;
		NullCheck(L_40);
		Board_setCurrentMoveValid_mB2C9696DA51E86C13D03F8A9B47C82F1F7A62C48(L_40, (bool)1, NULL);
		// movedFromStartPos = true;
		__this->___movedFromStartPos_9 = (bool)1;
		goto IL_00cb;
	}

IL_00c1:
	{
		// boardScript.setCurrentMoveValid(false);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_41 = V_1;
		NullCheck(L_41);
		Board_setCurrentMoveValid_mB2C9696DA51E86C13D03F8A9B47C82F1F7A62C48(L_41, (bool)0, NULL);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void Pawn::pawnPromotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_pawnPromotion_mA027A85DAE74AB93AC4C0C4272043DA99956C70D (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Pawn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn__ctor_m38D7B83352D412569522B8D20EF1F7D6D622D8D1 (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, const RuntimeMethod* method) 
{
	{
		Pieces__ctor_m36ED76A47732FC948EA2BB94EF2403457AB0E3B2(__this, NULL);
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
// System.Void PieceMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceMovement_Start_mC2C543F82E0710337F32D34BA32B88E212F38BDB (PieceMovement_t1E398EAB25E057AA1E0937518C03B7115C18E247* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79_m4329D105C8E79285C2EF03B5F94FCBC6BC525D1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PieceMovement_interactableActivated_m2B8D5FC3160607A6D3FE8785B8FB87B8462A8C44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEF66295E608214778EDCF6A989C6645463CAF0E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* V_0 = NULL;
	{
		// XRSimpleInteractable interactableObject = GetComponent<XRSimpleInteractable>();
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_0;
		L_0 = Component_GetComponent_TisXRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79_m4329D105C8E79285C2EF03B5F94FCBC6BC525D1A(__this, Component_GetComponent_TisXRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79_m4329D105C8E79285C2EF03B5F94FCBC6BC525D1A_RuntimeMethod_var);
		V_0 = L_0;
		// interactableObject.activated.AddListener(interactableActivated);
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_1 = V_0;
		NullCheck(L_1);
		ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* L_2;
		L_2 = XRBaseInteractable_get_activated_mA303C37F9F4F7C8F5E8830DD0A60735A1FD7A71F_inline(L_1, NULL);
		UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5* L_3 = (UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5*)il2cpp_codegen_object_new(UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mF849D1CE17A326AA2C8F72F3A2BDF6C3C987D4C1(L_3, __this, (intptr_t)((void*)PieceMovement_interactableActivated_m2B8D5FC3160607A6D3FE8785B8FB87B8462A8C44_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mEF66295E608214778EDCF6A989C6645463CAF0E1(L_2, L_3, UnityEvent_1_AddListener_mEF66295E608214778EDCF6A989C6645463CAF0E1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PieceMovement::interactableActivated(UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceMovement_interactableActivated_m2B8D5FC3160607A6D3FE8785B8FB87B8462A8C44 (PieceMovement_t1E398EAB25E057AA1E0937518C03B7115C18E247* __this, ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79_m4329D105C8E79285C2EF03B5F94FCBC6BC525D1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoard_t924A10F2404EA6D3DB02711555BEDFD794B70C1A_mE4E7DAE913316BAE653599872F48AED6A03EDCF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FF3BC5398DACE801B4E86DF28B390F51006F8E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54A8B5238874242B2ABA4F53BB63439822BA9207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE);
		s_Il2CppMethodInitialized = true;
	}
	XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// XRSimpleInteractable interactable = GetComponent<XRSimpleInteractable>();
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_0;
		L_0 = Component_GetComponent_TisXRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79_m4329D105C8E79285C2EF03B5F94FCBC6BC525D1A(__this, Component_GetComponent_TisXRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79_m4329D105C8E79285C2EF03B5F94FCBC6BC525D1A_RuntimeMethod_var);
		V_0 = L_0;
		// GameObject board = GameObject.FindWithTag("BoardLayout");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral2FF3BC5398DACE801B4E86DF28B390F51006F8E9, NULL);
		V_1 = L_1;
		// Board boardScript = board.GetComponent<Board>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_1;
		NullCheck(L_2);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_3;
		L_3 = GameObject_GetComponent_TisBoard_t924A10F2404EA6D3DB02711555BEDFD794B70C1A_mE4E7DAE913316BAE653599872F48AED6A03EDCF6(L_2, GameObject_GetComponent_TisBoard_t924A10F2404EA6D3DB02711555BEDFD794B70C1A_mE4E7DAE913316BAE653599872F48AED6A03EDCF6_RuntimeMethod_var);
		V_2 = L_3;
		// if (interactable.tag == "Piece")
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		// boardScript.setCurrentPiece(interactable);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_8 = V_2;
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_9 = V_0;
		NullCheck(L_8);
		Board_setCurrentPiece_mB23B5F270BF2BFE2CE364E7EA9A343468A85907A(L_8, L_9, NULL);
		goto IL_007e;
	}

IL_003a:
	{
		// else if (interactable.tag == "Tile")
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE, NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_007e;
		}
	}
	{
		// if (boardScript.getCurrentPiece() != null)
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_14 = V_2;
		NullCheck(L_14);
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_15;
		L_15 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_16;
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		// movePieceToTile(interactable, boardScript);
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_18 = V_0;
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_19 = V_2;
		PieceMovement_movePieceToTile_m6C8C19DA506758982C68F32B88431779C431871E(__this, L_18, L_19, NULL);
		goto IL_007d;
	}

IL_0070:
	{
		// Debug.Log("error, No piece selected");//display this out to user
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral54A8B5238874242B2ABA4F53BB63439822BA9207, NULL);
	}

IL_007d:
	{
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void PieceMovement::movePieceToTile(UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceMovement_movePieceToTile_m6C8C19DA506758982C68F32B88431779C431871E (PieceMovement_t1E398EAB25E057AA1E0937518C03B7115C18E247* __this, XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* ___interactable0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardSript1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEDAD611754737BA8814D5BC694F3BDF88DDB705);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* V_3 = NULL;
	{
		// boardSript.setCurrentMoveValid(false);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_0 = ___boardSript1;
		NullCheck(L_0);
		Board_setCurrentMoveValid_mB2C9696DA51E86C13D03F8A9B47C82F1F7A62C48(L_0, (bool)0, NULL);
		// Vector3 xPos = interactable.GetComponent<Transform>().position;
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_1 = ___interactable0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(L_1, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_0 = L_3;
		// bool validMove = boardSript.TileIsValid(xPos);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_4 = ___boardSript1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Board_TileIsValid_m36396C815FD2C639EC3205CCAD1A1BBC68A0BAFE(L_4, L_5, NULL);
		V_1 = L_6;
		// if (validMove)
		bool L_7 = V_1;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		// Pieces[,] p = boardSript.getChessArray();
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_9 = ___boardSript1;
		NullCheck(L_9);
		PiecesU5BU2CU5D_t44982A9F790FC26AC4F08C623D63F47876869BB7* L_10;
		L_10 = Board_getChessArray_mD8D9A5E2022C0EC565D4DE3BBDC83D4B6471AC0D(L_9, NULL);
		V_3 = L_10;
		// boardSript.getCurrentPiece().transform.position = xPos;
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_11 = ___boardSript1;
		NullCheck(L_11);
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_12;
		L_12 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(L_11, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_14, NULL);
		// boardSript.updateChessArray(xPos);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_15 = ___boardSript1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		NullCheck(L_15);
		Board_updateChessArray_mF1625FB87DD41C9A3ABB7CA075A7C2C231FC98AA(L_15, L_16, NULL);
		// boardSript.setCurrentPiece(null);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_17 = ___boardSript1;
		NullCheck(L_17);
		Board_setCurrentPiece_mB23B5F270BF2BFE2CE364E7EA9A343468A85907A(L_17, (XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79*)NULL, NULL);
		goto IL_0064;
	}

IL_004f:
	{
		// Debug.Log("Not valid move");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCEDAD611754737BA8814D5BC694F3BDF88DDB705, NULL);
		// boardSript.setCurrentPiece(null);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_18 = ___boardSript1;
		NullCheck(L_18);
		Board_setCurrentPiece_mB23B5F270BF2BFE2CE364E7EA9A343468A85907A(L_18, (XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79*)NULL, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void PieceMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceMovement__ctor_mDBB2CEC6F4BD325BD76AF321E023133F5524D3E0 (PieceMovement_t1E398EAB25E057AA1E0937518C03B7115C18E247* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Pieces::Rules(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pieces_Rules_m814F49C2AB946BA719D1948FD8CB4F85EF24FEA2 (Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A_m6B6F54C37FC3AAFFCA2A2321A74921C4DAE956C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoard_t924A10F2404EA6D3DB02711555BEDFD794B70C1A_mE4E7DAE913316BAE653599872F48AED6A03EDCF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisKing_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8_mD2AB631C70CBCE6AF7B59DBAD42666ADC396484C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisKnight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927_m97B5EEEBF9597A1743E125C4752ABBF9C1A438C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167_mF89C9EF783CA8F06CCF8663A0B99DA4AC8FF9AB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mEB16FC1AF2F7B7092F9DE5072E5C7BC9DC9B41D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisQueen_t250477B0959155ACF197D12BD87FD1DA449DFEF7_m95E7F645DABC9500DCA574ACDAC9330995BA7727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586_mC837014B5D8DE1EA741FB1AAE14AF028AF090F14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FF3BC5398DACE801B4E86DF28B390F51006F8E9);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* V_5 = NULL;
	bool V_6 = false;
	King_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8* V_7 = NULL;
	bool V_8 = false;
	Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* V_9 = NULL;
	bool V_10 = false;
	Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* V_11 = NULL;
	bool V_12 = false;
	Rook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586* V_13 = NULL;
	bool V_14 = false;
	Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A* V_15 = NULL;
	{
		// GameObject board = GameObject.FindWithTag("BoardLayout");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral2FF3BC5398DACE801B4E86DF28B390F51006F8E9, NULL);
		V_0 = L_0;
		// Board boardScript = board.GetComponent<Board>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_2;
		L_2 = GameObject_GetComponent_TisBoard_t924A10F2404EA6D3DB02711555BEDFD794B70C1A_mE4E7DAE913316BAE653599872F48AED6A03EDCF6(L_1, GameObject_GetComponent_TisBoard_t924A10F2404EA6D3DB02711555BEDFD794B70C1A_mE4E7DAE913316BAE653599872F48AED6A03EDCF6_RuntimeMethod_var);
		V_1 = L_2;
		// GameObject piece = boardScript.getCurrentPiece().gameObject;
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_3 = V_1;
		NullCheck(L_3);
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_4;
		L_4 = Board_getCurrentPiece_mFF300ACE26BB22E85DC5E345878F0260CBE46C6D(L_3, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		V_2 = L_5;
		// PieceType type = piece.GetComponent<Pieces>().ptype;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
		NullCheck(L_6);
		Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* L_7;
		L_7 = GameObject_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mEB16FC1AF2F7B7092F9DE5072E5C7BC9DC9B41D9(L_6, GameObject_GetComponent_TisPieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616_mEB16FC1AF2F7B7092F9DE5072E5C7BC9DC9B41D9_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = L_7->___ptype_5;
		V_3 = L_8;
		// if (type == PieceType.Pawn)
		int32_t L_9 = V_3;
		V_4 = (bool)((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		// Pawn pawnScript = piece.GetComponent<Pawn>(); //insatance of pawn script
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
		NullCheck(L_11);
		Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* L_12;
		L_12 = GameObject_GetComponent_TisPawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167_mF89C9EF783CA8F06CCF8663A0B99DA4AC8FF9AB5(L_11, GameObject_GetComponent_TisPawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167_mF89C9EF783CA8F06CCF8663A0B99DA4AC8FF9AB5_RuntimeMethod_var);
		V_5 = L_12;
		// pawnScript.pawnMoveRules(tilePos, boardScript);
		Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* L_13 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___tilePos0;
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_15 = V_1;
		NullCheck(L_13);
		Pawn_pawnMoveRules_m72D2130E6FE48BB8C65AB0DBFE12C95A9608CA90(L_13, L_14, L_15, NULL);
		goto IL_00ec;
	}

IL_004e:
	{
		// else if (type == PieceType.King)
		int32_t L_16 = V_3;
		V_6 = (bool)((((int32_t)L_16) == ((int32_t)6))? 1 : 0);
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_006e;
		}
	}
	{
		// King kingScript = piece.GetComponent<King>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_2;
		NullCheck(L_18);
		King_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8* L_19;
		L_19 = GameObject_GetComponent_TisKing_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8_mD2AB631C70CBCE6AF7B59DBAD42666ADC396484C(L_18, GameObject_GetComponent_TisKing_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8_mD2AB631C70CBCE6AF7B59DBAD42666ADC396484C_RuntimeMethod_var);
		V_7 = L_19;
		// kingScript.kingRules(tilePos, boardScript);
		King_tF1A12C394F85A2F66EDEF2224F5ADA65E6B11AA8* L_20 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___tilePos0;
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_22 = V_1;
		NullCheck(L_20);
		King_kingRules_m17BBFC81A225D75CFA2C2F6AEE48283D7B679A89(L_20, L_21, L_22, NULL);
		goto IL_00ec;
	}

IL_006e:
	{
		// else if (type == PieceType.Queen)
		int32_t L_23 = V_3;
		V_8 = (bool)((((int32_t)L_23) == ((int32_t)5))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_008e;
		}
	}
	{
		// Queen queenScript = piece.GetComponent<Queen>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_2;
		NullCheck(L_25);
		Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* L_26;
		L_26 = GameObject_GetComponent_TisQueen_t250477B0959155ACF197D12BD87FD1DA449DFEF7_m95E7F645DABC9500DCA574ACDAC9330995BA7727(L_25, GameObject_GetComponent_TisQueen_t250477B0959155ACF197D12BD87FD1DA449DFEF7_m95E7F645DABC9500DCA574ACDAC9330995BA7727_RuntimeMethod_var);
		V_9 = L_26;
		// queenScript.queenRules(tilePos, boardScript);
		Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* L_27 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___tilePos0;
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_29 = V_1;
		NullCheck(L_27);
		Queen_queenRules_mF1D58154606D1C30C931FA21CCF7640045288777(L_27, L_28, L_29, NULL);
		goto IL_00ec;
	}

IL_008e:
	{
		// else if (type == PieceType.Knight)
		int32_t L_30 = V_3;
		V_10 = (bool)((((int32_t)L_30) == ((int32_t)3))? 1 : 0);
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_00ae;
		}
	}
	{
		// Knight knightScript = piece.GetComponent<Knight>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_2;
		NullCheck(L_32);
		Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* L_33;
		L_33 = GameObject_GetComponent_TisKnight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927_m97B5EEEBF9597A1743E125C4752ABBF9C1A438C0(L_32, GameObject_GetComponent_TisKnight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927_m97B5EEEBF9597A1743E125C4752ABBF9C1A438C0_RuntimeMethod_var);
		V_11 = L_33;
		// knightScript.knightRules(tilePos, boardScript);
		Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* L_34 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = ___tilePos0;
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_36 = V_1;
		NullCheck(L_34);
		Knight_knightRules_m5D5B0126857A59E6A8978AFADD400FC02A60F0CC(L_34, L_35, L_36, NULL);
		goto IL_00ec;
	}

IL_00ae:
	{
		// else if (type == PieceType.Rook)
		int32_t L_37 = V_3;
		V_12 = (bool)((((int32_t)L_37) == ((int32_t)2))? 1 : 0);
		bool L_38 = V_12;
		if (!L_38)
		{
			goto IL_00ce;
		}
	}
	{
		// Rook rookScript = piece.GetComponent<Rook>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_2;
		NullCheck(L_39);
		Rook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586* L_40;
		L_40 = GameObject_GetComponent_TisRook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586_mC837014B5D8DE1EA741FB1AAE14AF028AF090F14(L_39, GameObject_GetComponent_TisRook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586_mC837014B5D8DE1EA741FB1AAE14AF028AF090F14_RuntimeMethod_var);
		V_13 = L_40;
		// rookScript.rookRules(tilePos, boardScript);
		Rook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586* L_41 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = ___tilePos0;
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_43 = V_1;
		NullCheck(L_41);
		Rook_rookRules_m3EFFC1A7D4B37394664F0983044FC8F864D3F1EE(L_41, L_42, L_43, NULL);
		goto IL_00ec;
	}

IL_00ce:
	{
		// else if (type == PieceType.Bishop)
		int32_t L_44 = V_3;
		V_14 = (bool)((((int32_t)L_44) == ((int32_t)4))? 1 : 0);
		bool L_45 = V_14;
		if (!L_45)
		{
			goto IL_00ec;
		}
	}
	{
		// Bishop bishopScript = piece.GetComponent<Bishop>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = V_2;
		NullCheck(L_46);
		Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A* L_47;
		L_47 = GameObject_GetComponent_TisBishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A_m6B6F54C37FC3AAFFCA2A2321A74921C4DAE956C8(L_46, GameObject_GetComponent_TisBishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A_m6B6F54C37FC3AAFFCA2A2321A74921C4DAE956C8_RuntimeMethod_var);
		V_15 = L_47;
		// bishopScript.bishopRules(tilePos, boardScript);
		Bishop_tE345AE94C3FBD3574BC399F24A66BD352912EB7A* L_48 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___tilePos0;
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_50 = V_1;
		NullCheck(L_48);
		Bishop_bishopRules_mBC81E800DEADEB5BF840B54FB043C578D32239B6(L_48, L_49, L_50, NULL);
	}

IL_00ec:
	{
		// }
		return;
	}
}
// System.Void Pieces::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pieces__ctor_m36ED76A47732FC948EA2BB94EF2403457AB0E3B2 (Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616* __this, const RuntimeMethod* method) 
{
	{
		// public int pieceWorth = 0;
		__this->___pieceWorth_8 = 0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Queen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_Start_mA1ACA1D21771FC7E60D2DCADD0C563E692D7C2D6 (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, const RuntimeMethod* method) 
{
	{
		// pieceWorth = 9;
		((Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616*)__this)->___pieceWorth_8 = ((int32_t)9);
		// }
		return;
	}
}
// System.Void Queen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_Update_m161D13F8593335C81ABA23B993108E1EEA847D24 (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Queen::queenRules(UnityEngine.Vector3,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_queenRules_mF1D58154606D1C30C931FA21CCF7640045288777 (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardScript1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67B82CAC847426DBADB80BAAFA7C055A7F65B7C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Queen Rules");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral67B82CAC847426DBADB80BAAFA7C055A7F65B7C9, NULL);
		// }
		return;
	}
}
// System.Void Queen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen__ctor_m7ABC6B14337B0A10B45B174113E9693F52A45E1A (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, const RuntimeMethod* method) 
{
	{
		Pieces__ctor_m36ED76A47732FC948EA2BB94EF2403457AB0E3B2(__this, NULL);
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
// System.Void Rook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rook_Start_mAF1D9E67F75884140AF4F39B57F8692E06C7FF27 (Rook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586* __this, const RuntimeMethod* method) 
{
	{
		// pieceWorth = 5;
		((Pieces_t8D13E36FA911A8C06665B37D148497EB3D9A2616*)__this)->___pieceWorth_8 = 5;
		// }
		return;
	}
}
// System.Void Rook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rook_Update_m5E337D64F8C7A667F98A97927DA025B5B5655E75 (Rook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Rook::rookRules(UnityEngine.Vector3,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rook_rookRules_m3EFFC1A7D4B37394664F0983044FC8F864D3F1EE (Rook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tilePos0, Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___boardScript1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC6BBEBE2485483A6952E7BA764FD4B682D301A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Rook Rules");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralEDC6BBEBE2485483A6952E7BA764FD4B682D301A, NULL);
		// }
		return;
	}
}
// System.Void Rook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rook__ctor_m0BC5D3F2407E14DE98B67A083573631786236341 (Rook_t35FC36A185AC3D07ED4FAD1323848F7C9F71F586* __this, const RuntimeMethod* method) 
{
	{
		Pieces__ctor_m36ED76A47732FC948EA2BB94EF2403457AB0E3B2(__this, NULL);
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
// System.Void PanelChanger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelChanger_Start_mB60924F29FBBE7482BA4887D0285AAD361644184 (PanelChanger_tB6842ED1D28BBA4A6155986DD7335372BC75113A* __this, const RuntimeMethod* method) 
{
	{
		// uiScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___uiScreen_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PanelChanger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelChanger_Update_mCF8B2B9DC64AB5F9D4078E023D361C80CB520812 (PanelChanger_tB6842ED1D28BBA4A6155986DD7335372BC75113A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6A16FA6FFFE7CF75CED271F9B06FD471503AB8C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(Input.GetButtonDown("Fire3")){
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralA6A16FA6FFFE7CF75CED271F9B06FD471503AB8C, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// isScreenVisible = !isScreenVisible;
		bool L_2 = __this->___isScreenVisible_5;
		__this->___isScreenVisible_5 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		// uiScreen.SetActive(isScreenVisible);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___uiScreen_4;
		bool L_4 = __this->___isScreenVisible_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_4, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void PanelChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelChanger__ctor_m9CDA726E0ADF3090EC713BB11F678D64AA80E239 (PanelChanger_tB6842ED1D28BBA4A6155986DD7335372BC75113A* __this, const RuntimeMethod* method) 
{
	{
		// private bool isScreenVisible = true;
		__this->___isScreenVisible_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SceneChanger::SceneLoad(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChanger_SceneLoad_mE021E29B86B3BCD01A6B6854308F77C3EC690F72 (SceneChanger_tC919AD069A17BDD8C7D94D8DBD5EB709E217DF40* __this, int32_t ___sceneNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneNumber);
		int32_t L_0 = ___sceneNumber0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneChanger::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChanger_QuitGame_m87A43F012CBD40BFA780713C62CF6478AF91FDE4 (SceneChanger_tC919AD069A17BDD8C7D94D8DBD5EB709E217DF40* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void SceneChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChanger__ctor_mE9DB2B4102825D23A4B0271C2A6023F02920B4AD (SceneChanger_tC919AD069A17BDD8C7D94D8DBD5EB709E217DF40* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* XRBaseInteractable_get_activated_mA303C37F9F4F7C8F5E8830DD0A60735A1FD7A71F_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Activated;
		ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* L_0 = __this->___m_Activated_20;
		return L_0;
	}
}
