#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Func`2<IEntityInputSource,System.Boolean>
struct Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<IEntityInputSource>
struct IEnumerable_1_t7A6AEDA1AADE8D5B0F52CC38A78C80A35B5FBE0F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<IEntityInputSource>
struct List_1_tCF89F237339B83F5FB62107039E98CA62665523A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// IEntityInputSource[]
struct IEntityInputSourceU5BU5D_t26CF908CFE0B87F3B712D817F9D886E5F4B69E89;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Player.PlayerAnimation.AnimationController
struct AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ClearSky.DemoCollegeStudentController
struct DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// ExternalDevicesInputReader
struct ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42;
// GUIInputView
struct GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB;
// Core.GameLevelInitializer
struct GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// IEntityInputSource
struct IEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Joystick
struct Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Player.PlayerBrain
struct PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093;
// Player.PlayerEntity
struct PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// Player.PlayerAnimation.UnityAnimationController
struct UnityAnimationController_t5ABC520E02ECE0E52D3FC85DBBF9D4A33B3A38CF;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Player.PlayerBrain/<>c
struct U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCF89F237339B83F5FB62107039E98CA62665523A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E;
IL2CPP_EXTERN_C String_t* _stringLiteral0B27256C07F6F9A3D209A8EF4E771A19A90D90F7;
IL2CPP_EXTERN_C String_t* _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011;
IL2CPP_EXTERN_C String_t* _stringLiteral24AF8D9BC28FE5FA9280151B50D0A6DF25812409;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral5B155B21E40C2DC3913150B158FC8C685B50C8D1;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2;
IL2CPP_EXTERN_C String_t* _stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C;
IL2CPP_EXTERN_C String_t* _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisIEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_mFAA48158AAFB129A847B4865A82D281C9CC4675D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC34D8E7E84BB84AE653E3AEC72A5005503A34DAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA65FB97EBBD254A38333A7D81F65C4FF6C343188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5647ED5C4D0EE082F7083C163C6FAC26B179F212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIInputView_U3CAwakeU3Eb__13_0_m2F7EA1894B8B64BC167E6DE8882DB78A252F40E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIInputView_U3CAwakeU3Eb__13_1_m193B93FB4E7CC1DCCE80D5829748468EE68F7ADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m109D62D7CE322AE93B5C0E90FD0DB803D8AB9BB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB7A32BD84F4030EF101A6F3335D964DD23CCE94D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9257FACF49ECBF4E483B502226DF6BDF4D4E3BF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerEntity_AttackEnd_m3CC3E34319687820DE02B484896250F1E41B975B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerEntity_Attack_m39123B283C05A74CE8F8DF72D063AA8E765E4BE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_IsAttackU3Eb__8_0_mC48101AC2A388BC22DB94A321F4E043441210CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_IsJumpU3Eb__6_0_m5990C3228C872A3D3B807E6D2C67B0EB49194DA7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

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

// System.Collections.Generic.List`1<IEntityInputSource>
struct List_1_tCF89F237339B83F5FB62107039E98CA62665523A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IEntityInputSourceU5BU5D_t26CF908CFE0B87F3B712D817F9D886E5F4B69E89* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// ExternalDevicesInputReader
struct ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42  : public RuntimeObject
{
	// System.Boolean ExternalDevicesInputReader::<Jump>k__BackingField
	bool ___U3CJumpU3Ek__BackingField_0;
	// System.Boolean ExternalDevicesInputReader::<Attack>k__BackingField
	bool ___U3CAttackU3Ek__BackingField_1;
};

// Player.PlayerBrain
struct PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093  : public RuntimeObject
{
	// Player.PlayerEntity Player.PlayerBrain::_playerEntity
	PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ____playerEntity_0;
	// System.Collections.Generic.List`1<IEntityInputSource> Player.PlayerBrain::_inputSources
	List_1_tCF89F237339B83F5FB62107039E98CA62665523A* ____inputSources_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// Player.PlayerBrain/<>c
struct U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<IEntityInputSource>
struct Enumerator_t265A90D343B204830706540E2703CE93FF50AFD2 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCF89F237339B83F5FB62107039E98CA62665523A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
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

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Func`2<IEntityInputSource,System.Boolean>
struct Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Player.PlayerAnimation.AnimationController
struct AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action Player.PlayerAnimation.AnimationController::ActionRequested
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___ActionRequested_4;
	// System.Action Player.PlayerAnimation.AnimationController::AnimationEnded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___AnimationEnded_5;
	// Player.AnimationType Player.PlayerAnimation.AnimationController::_currentAnimationType
	int32_t ____currentAnimationType_6;
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// ClearSky.DemoCollegeStudentController
struct DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ClearSky.DemoCollegeStudentController::movePower
	float ___movePower_4;
	// System.Single ClearSky.DemoCollegeStudentController::KickBoardMovePower
	float ___KickBoardMovePower_5;
	// System.Single ClearSky.DemoCollegeStudentController::jumpPower
	float ___jumpPower_6;
	// UnityEngine.Rigidbody2D ClearSky.DemoCollegeStudentController::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_7;
	// UnityEngine.Animator ClearSky.DemoCollegeStudentController::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_8;
	// UnityEngine.Vector3 ClearSky.DemoCollegeStudentController::movement
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___movement_9;
	// System.Int32 ClearSky.DemoCollegeStudentController::direction
	int32_t ___direction_10;
	// System.Boolean ClearSky.DemoCollegeStudentController::isJumping
	bool ___isJumping_11;
	// System.Boolean ClearSky.DemoCollegeStudentController::alive
	bool ___alive_12;
	// System.Boolean ClearSky.DemoCollegeStudentController::isKickboard
	bool ___isKickboard_13;
};

// GUIInputView
struct GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Joystick GUIInputView::_joystick
	Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955* ____joystick_4;
	// UnityEngine.UI.Button GUIInputView::_jumpButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____jumpButton_5;
	// UnityEngine.UI.Button GUIInputView::_attackButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____attackButton_6;
	// System.Boolean GUIInputView::<Jump>k__BackingField
	bool ___U3CJumpU3Ek__BackingField_7;
	// System.Boolean GUIInputView::<Attack>k__BackingField
	bool ___U3CAttackU3Ek__BackingField_8;
};

// Core.GameLevelInitializer
struct GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player.PlayerEntity Core.GameLevelInitializer::_playerEntity
	PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ____playerEntity_4;
	// GUIInputView Core.GameLevelInitializer::_guiInputView
	GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* ____guiInputView_5;
	// ExternalDevicesInputReader Core.GameLevelInitializer::_externalDevicesInput
	ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* ____externalDevicesInput_6;
	// Player.PlayerBrain Core.GameLevelInitializer::_playerBrain
	PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* ____playerBrain_7;
	// System.Boolean Core.GameLevelInitializer::_onPause
	bool ____onPause_8;
};

// Joystick
struct Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input_14;
};

// Player.PlayerEntity
struct PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player.PlayerAnimation.AnimationController Player.PlayerEntity::_animator
	AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* ____animator_4;
	// System.Single Player.PlayerEntity::_horizontalSpeed
	float ____horizontalSpeed_5;
	// System.Single Player.PlayerEntity::_jumpForce
	float ____jumpForce_6;
	// System.Single Player.PlayerEntity::_gravityScale
	float ____gravityScale_7;
	// System.Boolean Player.PlayerEntity::_faceRight
	bool ____faceRight_8;
	// UnityEngine.LayerMask Player.PlayerEntity::_jumpableGround
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____jumpableGround_9;
	// UnityEngine.Rigidbody2D Player.PlayerEntity::_rigidbody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rigidbody_10;
	// UnityEngine.BoxCollider2D Player.PlayerEntity::_boxcollider
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ____boxcollider_11;
	// UnityEngine.Vector2 Player.PlayerEntity::_movement
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____movement_12;
	// Player.AnimationType Player.PlayerEntity::_currentAnimationType
	int32_t ____currentAnimationType_13;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// Player.PlayerAnimation.UnityAnimationController
struct UnityAnimationController_t5ABC520E02ECE0E52D3FC85DBBF9D4A33B3A38CF  : public AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D
{
	// UnityEngine.Animator Player.PlayerAnimation.UnityAnimationController::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_7;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<IEntityInputSource>
struct List_1_tCF89F237339B83F5FB62107039E98CA62665523A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IEntityInputSourceU5BU5D_t26CF908CFE0B87F3B712D817F9D886E5F4B69E89* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<IEntityInputSource>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// ExternalDevicesInputReader

// ExternalDevicesInputReader

// Player.PlayerBrain

// Player.PlayerBrain

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// Player.PlayerBrain/<>c
struct U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields
{
	// Player.PlayerBrain/<>c Player.PlayerBrain/<>c::<>9
	U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* ___U3CU3E9_0;
	// System.Func`2<IEntityInputSource,System.Boolean> Player.PlayerBrain/<>c::<>9__6_0
	Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* ___U3CU3E9__6_0_1;
	// System.Func`2<IEntityInputSource,System.Boolean> Player.PlayerBrain/<>c::<>9__8_0
	Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* ___U3CU3E9__8_0_2;
};

// Player.PlayerBrain/<>c

// System.Collections.Generic.List`1/Enumerator<IEntityInputSource>

// System.Collections.Generic.List`1/Enumerator<IEntityInputSource>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.Bounds

// UnityEngine.Bounds

// System.Delegate

// System.Delegate

// UnityEngine.RaycastHit2D

// UnityEngine.RaycastHit2D

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.Component

// UnityEngine.Component

// System.Func`2<IEntityInputSource,System.Boolean>

// System.Func`2<IEntityInputSource,System.Boolean>

// System.Action

// System.Action

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Player.PlayerAnimation.AnimationController

// Player.PlayerAnimation.AnimationController

// UnityEngine.BoxCollider2D

// UnityEngine.BoxCollider2D

// ClearSky.DemoCollegeStudentController

// ClearSky.DemoCollegeStudentController

// GUIInputView

// GUIInputView

// Core.GameLevelInitializer

// Core.GameLevelInitializer

// Joystick

// Joystick

// Player.PlayerEntity

// Player.PlayerEntity

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// Player.PlayerAnimation.UnityAnimationController

// Player.PlayerAnimation.UnityAnimationController

// UnityEngine.UI.Button

// UnityEngine.UI.Button
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Void ExternalDevicesInputReader::set_Jump(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Jump_m1D6CF10F4DBA5C21E181DF8AAB141670F8705207_inline (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean ExternalDevicesInputReader::IsPointerOverUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExternalDevicesInputReader_IsPointerOverUI_m1AA469A6C272246E0A1F848CEF89C7807B79AD9F (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) ;
// System.Void ExternalDevicesInputReader::set_Attack(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Attack_m0BF4F054A3318C584032284B8CBCF04FB2FA03A7_inline (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m23B2FBFE52DFF5E60F0DDAF88FC954EE3AF0A92B (Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void GUIInputView::set_Jump(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIInputView_set_Jump_m0BE0CAE73A2CE1E444CEF23C17426B3FF018A755_inline (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void GUIInputView::set_Attack(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIInputView_set_Attack_m48C934182BD8DED599D9087EAD61A9801FCB68F7_inline (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single Player.PlayerBrain::GetDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerBrain_GetDirection_mB8F400E429D216E77AA85BCF1255E7D314F68032 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::MoveHorizontally(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_MoveHorizontally_m66C3E3D8D99018E8499D2BEAAFD645CBAB15BFE6 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, float ___0_direction, const RuntimeMethod* method) ;
// System.Boolean Player.PlayerBrain::get_IsJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBrain_get_IsJump_m4902673839126986B13997F3DA1FB209FE0CCFF4 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Jump_m236605D656E45AB5A00031DE07E77B85774519C1 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Boolean Player.PlayerBrain::get_IsAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBrain_get_IsAttack_m43E1C1268B25A2A63BDB5DEC47B468366A045027 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::StartAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_StartAttack_m27F0B4AD28E9E01E0CAA5EDEEC35A4D74F1E3B37 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<IEntityInputSource>::GetEnumerator()
inline Enumerator_t265A90D343B204830706540E2703CE93FF50AFD2 List_1_GetEnumerator_mB7A32BD84F4030EF101A6F3335D964DD23CCE94D (List_1_tCF89F237339B83F5FB62107039E98CA62665523A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t265A90D343B204830706540E2703CE93FF50AFD2 (*) (List_1_tCF89F237339B83F5FB62107039E98CA62665523A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<IEntityInputSource>::Dispose()
inline void Enumerator_Dispose_mC34D8E7E84BB84AE653E3AEC72A5005503A34DAF (Enumerator_t265A90D343B204830706540E2703CE93FF50AFD2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t265A90D343B204830706540E2703CE93FF50AFD2*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<IEntityInputSource>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m5647ED5C4D0EE082F7083C163C6FAC26B179F212_inline (Enumerator_t265A90D343B204830706540E2703CE93FF50AFD2* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t265A90D343B204830706540E2703CE93FF50AFD2*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<IEntityInputSource>::MoveNext()
inline bool Enumerator_MoveNext_mA65FB97EBBD254A38333A7D81F65C4FF6C343188 (Enumerator_t265A90D343B204830706540E2703CE93FF50AFD2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t265A90D343B204830706540E2703CE93FF50AFD2*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Func`2<IEntityInputSource,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mDC44F4AC37A957BC60E2DDEE363DA68521C8D440 (Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.Linq.Enumerable::Any<IEntityInputSource>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisIEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_mFAA48158AAFB129A847B4865A82D281C9CC4675D (RuntimeObject* ___0_source, Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* ___1_predicate, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared)(___0_source, ___1_predicate, method);
}
// System.Void Player.PlayerBrain/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDB495E4EF44CB795B0B7FAC5AB4B8FC3577A43F4 (U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::SetDirection(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_SetDirection_mCFE5F2CF5E6C3D312639C9691C1BB19167D2535B (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, float ___0_direction, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Flip_m8777B003E934D7342916CEE4FD1F619E44EDF3B0 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Boolean Player.PlayerEntity::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerEntity_IsGrounded_m7B2C00B33924E595B64B0D4B7462B1F171B8043E (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_force, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::UpdateAnimations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_UpdateAnimations_mD8055FEC16D5EF5107F85BF721E63247536C71C3 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::BoxCast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_BoxCast_mC7CAEAB9C10CE3C4EDEAC492568382EC03B17E92 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_origin, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_size, float ___2_angle, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_direction, float ___4_distance, int32_t ___5_layerMask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_mBEF99A746116664D68B1398D58CA247550980A11 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_hit, const RuntimeMethod* method) ;
// System.Boolean Player.PlayerAnimation.AnimationController::PlayAnimation(Player.AnimationType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationController_PlayAnimation_m4036F816E8086A2F3958F6472641A4CA25F2EABA (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, int32_t ___0_animationType, bool ___1_active, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Player.PlayerAnimation.AnimationController::add_ActionRequested(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_add_ActionRequested_mDDF7773C475CA75D3E54BBB665AE1A1F6111A6FE (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void Player.PlayerAnimation.AnimationController::add_AnimationEnded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_add_AnimationEnded_mC2397D1F9F3E278E99EC13584B7CA849F89D29B1 (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Player.PlayerAnimation.AnimationController::remove_ActionRequested(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_remove_ActionRequested_mF593AA421B5B24B36866FADB96D87B406F42B325 (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void Player.PlayerAnimation.AnimationController::remove_AnimationEnded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_remove_AnimationEnded_m5D5FD104AFAD0FCB0C61D04901706FA10FBEA857 (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void Player.PlayerAnimation.AnimationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController__ctor_mA14E39F063A0682B1601B4037880AFDDC2886E9C (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, const RuntimeMethod* method) ;
// System.Void ExternalDevicesInputReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader__ctor_m8B0F20B139F68E615DE6688190B597BE736B2013 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<IEntityInputSource>::.ctor()
inline void List_1__ctor_m9257FACF49ECBF4E483B502226DF6BDF4D4E3BF3 (List_1_tCF89F237339B83F5FB62107039E98CA62665523A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCF89F237339B83F5FB62107039E98CA62665523A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<IEntityInputSource>::Add(T)
inline void List_1_Add_m109D62D7CE322AE93B5C0E90FD0DB803D8AB9BB0_inline (List_1_tCF89F237339B83F5FB62107039E98CA62665523A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCF89F237339B83F5FB62107039E98CA62665523A*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Player.PlayerBrain::.ctor(Player.PlayerEntity,System.Collections.Generic.List`1<IEntityInputSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain__ctor_mF5030D8895017FBE52DF6FE9FB6B75D9F2510621 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ___0_playerEntity, List_1_tCF89F237339B83F5FB62107039E98CA62665523A* ___1_inputSources, const RuntimeMethod* method) ;
// System.Void ExternalDevicesInputReader::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_OnUpdate_m99FD182BD7D8A94A889B8A29C981ED7556D63757 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerBrain::OnFixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain_OnFixedUpdate_m8D2DD5E895FC850437E9C85A92D1BC3E12D8DCBA (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) ;
// System.Void ClearSky.DemoCollegeStudentController::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Restart_m2083F49DFF2CD81396C44FA4678C60443A2E57D5 (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) ;
// System.Void ClearSky.DemoCollegeStudentController::Hurt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Hurt_mD77F0CF8E474FF4C75AE2EA7FFAB638ECCF1F11B (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) ;
// System.Void ClearSky.DemoCollegeStudentController::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Die_m3642B20A51D3B0BFE29225CA5148304E1493E580 (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) ;
// System.Void ClearSky.DemoCollegeStudentController::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Attack_mB5D1FC86823443AAC37FB0EDD24DC405245EEB02 (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) ;
// System.Void ClearSky.DemoCollegeStudentController::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Jump_m04BF9961527A936FEF126AB1401B1C86C1E1D85B (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) ;
// System.Void ClearSky.DemoCollegeStudentController::KickBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_KickBoard_m67FA9EF6E1A29E23743ABD40AA583BF20248F59E (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) ;
// System.Void ClearSky.DemoCollegeStudentController::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Run_m1C919A775CEFF0F0A8FBA60D41380C5BBCE08B6C (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
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
// System.Single ExternalDevicesInputReader::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ExternalDevicesInputReader_get_Direction_mAC5E678D6A4305A0542EB2F2F5FFE9287900B8B3 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float Direction => Input.GetAxisRaw("Horizontal");
		float L_0;
		L_0 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		return L_0;
	}
}
// System.Boolean ExternalDevicesInputReader::get_Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExternalDevicesInputReader_get_Jump_m00B2232EE7ACE4FE171963F46F0A3960DC09D25D (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = __this->___U3CJumpU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ExternalDevicesInputReader::set_Jump(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Jump_m1D6CF10F4DBA5C21E181DF8AAB141670F8705207 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CJumpU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean ExternalDevicesInputReader::get_Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExternalDevicesInputReader_get_Attack_m970F7D810A2DE2BDDAA9EA9A2A5A26411714352F (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) 
{
	{
		// public bool Attack { get; private set; }
		bool L_0 = __this->___U3CAttackU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ExternalDevicesInputReader::set_Attack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Attack_m0BF4F054A3318C584032284B8CBCF04FB2FA03A7 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Attack { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CAttackU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void ExternalDevicesInputReader::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_OnUpdate_m99FD182BD7D8A94A889B8A29C981ED7556D63757 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("Jump"))
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Jump = true;
		ExternalDevicesInputReader_set_Jump_m1D6CF10F4DBA5C21E181DF8AAB141670F8705207_inline(__this, (bool)1, NULL);
	}

IL_0013:
	{
		// if (!IsPointerOverUI() && Input.GetButtonDown("Fire1"))
		bool L_1;
		L_1 = ExternalDevicesInputReader_IsPointerOverUI_m1AA469A6C272246E0A1F848CEF89C7807B79AD9F(__this, NULL);
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// Attack = true;
		ExternalDevicesInputReader_set_Attack_m0BF4F054A3318C584032284B8CBCF04FB2FA03A7_inline(__this, (bool)1, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Boolean ExternalDevicesInputReader::IsPointerOverUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExternalDevicesInputReader_IsPointerOverUI_m1AA469A6C272246E0A1F848CEF89C7807B79AD9F (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool IsPointerOverUI() => EventSystem.current.IsPointerOverGameObject();
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_0, NULL);
		return L_1;
	}
}
// System.Void ExternalDevicesInputReader::ResetOneTimeActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_ResetOneTimeActions_m50090D4FF3D58D9A70BA2EE1C37195FF4781202C (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) 
{
	{
		// Jump = false;
		ExternalDevicesInputReader_set_Jump_m1D6CF10F4DBA5C21E181DF8AAB141670F8705207_inline(__this, (bool)0, NULL);
		// Attack = false;
		ExternalDevicesInputReader_set_Attack_m0BF4F054A3318C584032284B8CBCF04FB2FA03A7_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ExternalDevicesInputReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader__ctor_m8B0F20B139F68E615DE6688190B597BE736B2013 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) 
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
// System.Single GUIInputView::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIInputView_get_Direction_m4D257504ACF2CD79EB7FD0F6C0C19B11D40E6ED2 (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, const RuntimeMethod* method) 
{
	{
		// public float Direction => _joystick.Horizontal;
		Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955* L_0 = __this->____joystick_4;
		NullCheck(L_0);
		float L_1;
		L_1 = Joystick_get_Horizontal_m23B2FBFE52DFF5E60F0DDAF88FC954EE3AF0A92B(L_0, NULL);
		return L_1;
	}
}
// System.Boolean GUIInputView::get_Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIInputView_get_Jump_m73F5734CBE2669F7F9CC5CEC5DC124609DE75531 (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = __this->___U3CJumpU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void GUIInputView::set_Jump(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIInputView_set_Jump_m0BE0CAE73A2CE1E444CEF23C17426B3FF018A755 (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CJumpU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean GUIInputView::get_Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIInputView_get_Attack_m58CD67FB82845960AA4B6EF93EF1B89451DD61D5 (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, const RuntimeMethod* method) 
{
	{
		// public bool Attack { get; private set; }
		bool L_0 = __this->___U3CAttackU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void GUIInputView::set_Attack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIInputView_set_Attack_m48C934182BD8DED599D9087EAD61A9801FCB68F7 (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Attack { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CAttackU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void GUIInputView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIInputView_Awake_m8D6BD781102E39C141152277FA632B2E1A24ACFB (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIInputView_U3CAwakeU3Eb__13_0_m2F7EA1894B8B64BC167E6DE8882DB78A252F40E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIInputView_U3CAwakeU3Eb__13_1_m193B93FB4E7CC1DCCE80D5829748468EE68F7ADE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _jumpButton.onClick.AddListener(()=> Jump = true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____jumpButton_5;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)GUIInputView_U3CAwakeU3Eb__13_0_m2F7EA1894B8B64BC167E6DE8882DB78A252F40E8_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// _attackButton.onClick.AddListener(()=> Attack = true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____attackButton_6;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)GUIInputView_U3CAwakeU3Eb__13_1_m193B93FB4E7CC1DCCE80D5829748468EE68F7ADE_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void GUIInputView::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIInputView_OnDestroy_m5A24C932044F7353129E28880A725B074B64CF83 (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, const RuntimeMethod* method) 
{
	{
		// _jumpButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____jumpButton_5;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_1, NULL);
		// _attackButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->____attackButton_6;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		NullCheck(L_3);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_3, NULL);
		// }
		return;
	}
}
// System.Void GUIInputView::ResetOneTimeActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIInputView_ResetOneTimeActions_m4C92A30767A7DAD5BDE96FBA26005F436C4B5646 (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, const RuntimeMethod* method) 
{
	{
		// Jump = false;
		GUIInputView_set_Jump_m0BE0CAE73A2CE1E444CEF23C17426B3FF018A755_inline(__this, (bool)0, NULL);
		// Attack = false;
		GUIInputView_set_Attack_m48C934182BD8DED599D9087EAD61A9801FCB68F7_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GUIInputView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIInputView__ctor_m7A48FA32295A31BD3CC66AA7FF6D61D1A85747F0 (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void GUIInputView::<Awake>b__13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIInputView_U3CAwakeU3Eb__13_0_m2F7EA1894B8B64BC167E6DE8882DB78A252F40E8 (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, const RuntimeMethod* method) 
{
	{
		// _jumpButton.onClick.AddListener(()=> Jump = true);
		GUIInputView_set_Jump_m0BE0CAE73A2CE1E444CEF23C17426B3FF018A755_inline(__this, (bool)1, NULL);
		return;
	}
}
// System.Void GUIInputView::<Awake>b__13_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIInputView_U3CAwakeU3Eb__13_1_m193B93FB4E7CC1DCCE80D5829748468EE68F7ADE (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, const RuntimeMethod* method) 
{
	{
		// _attackButton.onClick.AddListener(()=> Attack = true);
		GUIInputView_set_Attack_m48C934182BD8DED599D9087EAD61A9801FCB68F7_inline(__this, (bool)1, NULL);
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
// System.Void Player.PlayerBrain::.ctor(Player.PlayerEntity,System.Collections.Generic.List`1<IEntityInputSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain__ctor_mF5030D8895017FBE52DF6FE9FB6B75D9F2510621 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ___0_playerEntity, List_1_tCF89F237339B83F5FB62107039E98CA62665523A* ___1_inputSources, const RuntimeMethod* method) 
{
	{
		// public PlayerBrain(PlayerEntity playerEntity, List<IEntityInputSource> inputSources)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _playerEntity = playerEntity;
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_0 = ___0_playerEntity;
		__this->____playerEntity_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerEntity_0), (void*)L_0);
		// _inputSources = inputSources;
		List_1_tCF89F237339B83F5FB62107039E98CA62665523A* L_1 = ___1_inputSources;
		__this->____inputSources_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____inputSources_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void Player.PlayerBrain::OnFixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain_OnFixedUpdate_m8D2DD5E895FC850437E9C85A92D1BC3E12D8DCBA (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC34D8E7E84BB84AE653E3AEC72A5005503A34DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA65FB97EBBD254A38333A7D81F65C4FF6C343188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5647ED5C4D0EE082F7083C163C6FAC26B179F212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB7A32BD84F4030EF101A6F3335D964DD23CCE94D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t265A90D343B204830706540E2703CE93FF50AFD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _playerEntity.MoveHorizontally(GetDirection());
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_0 = __this->____playerEntity_0;
		float L_1;
		L_1 = PlayerBrain_GetDirection_mB8F400E429D216E77AA85BCF1255E7D314F68032(__this, NULL);
		NullCheck(L_0);
		PlayerEntity_MoveHorizontally_m66C3E3D8D99018E8499D2BEAAFD645CBAB15BFE6(L_0, L_1, NULL);
		// if (IsJump)
		bool L_2;
		L_2 = PlayerBrain_get_IsJump_m4902673839126986B13997F3DA1FB209FE0CCFF4(__this, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// _playerEntity.Jump();
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_3 = __this->____playerEntity_0;
		NullCheck(L_3);
		PlayerEntity_Jump_m236605D656E45AB5A00031DE07E77B85774519C1(L_3, NULL);
	}

IL_0024:
	{
		// if (IsAttack)
		bool L_4;
		L_4 = PlayerBrain_get_IsAttack_m43E1C1268B25A2A63BDB5DEC47B468366A045027(__this, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// _playerEntity.StartAttack();
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_5 = __this->____playerEntity_0;
		NullCheck(L_5);
		PlayerEntity_StartAttack_m27F0B4AD28E9E01E0CAA5EDEEC35A4D74F1E3B37(L_5, NULL);
	}

IL_0037:
	{
		// foreach (var inputSource in _inputSources)
		List_1_tCF89F237339B83F5FB62107039E98CA62665523A* L_6 = __this->____inputSources_1;
		NullCheck(L_6);
		Enumerator_t265A90D343B204830706540E2703CE93FF50AFD2 L_7;
		L_7 = List_1_GetEnumerator_mB7A32BD84F4030EF101A6F3335D964DD23CCE94D(L_6, List_1_GetEnumerator_mB7A32BD84F4030EF101A6F3335D964DD23CCE94D_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC34D8E7E84BB84AE653E3AEC72A5005503A34DAF((&V_0), Enumerator_Dispose_mC34D8E7E84BB84AE653E3AEC72A5005503A34DAF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0051_1;
			}

IL_0045_1:
			{
				// foreach (var inputSource in _inputSources)
				RuntimeObject* L_8;
				L_8 = Enumerator_get_Current_m5647ED5C4D0EE082F7083C163C6FAC26B179F212_inline((&V_0), Enumerator_get_Current_m5647ED5C4D0EE082F7083C163C6FAC26B179F212_RuntimeMethod_var);
				// inputSource.ResetOneTimeActions();
				NullCheck(L_8);
				InterfaceActionInvoker0::Invoke(3 /* System.Void IEntityInputSource::ResetOneTimeActions() */, IEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_il2cpp_TypeInfo_var, L_8);
			}

IL_0051_1:
			{
				// foreach (var inputSource in _inputSources)
				bool L_9;
				L_9 = Enumerator_MoveNext_mA65FB97EBBD254A38333A7D81F65C4FF6C343188((&V_0), Enumerator_MoveNext_mA65FB97EBBD254A38333A7D81F65C4FF6C343188_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Single Player.PlayerBrain::GetDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerBrain_GetDirection_mB8F400E429D216E77AA85BCF1255E7D314F68032 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC34D8E7E84BB84AE653E3AEC72A5005503A34DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA65FB97EBBD254A38333A7D81F65C4FF6C343188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5647ED5C4D0EE082F7083C163C6FAC26B179F212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB7A32BD84F4030EF101A6F3335D964DD23CCE94D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t265A90D343B204830706540E2703CE93FF50AFD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	float V_2 = 0.0f;
	{
		// foreach (var inputSource in _inputSources)
		List_1_tCF89F237339B83F5FB62107039E98CA62665523A* L_0 = __this->____inputSources_1;
		NullCheck(L_0);
		Enumerator_t265A90D343B204830706540E2703CE93FF50AFD2 L_1;
		L_1 = List_1_GetEnumerator_mB7A32BD84F4030EF101A6F3335D964DD23CCE94D(L_0, List_1_GetEnumerator_mB7A32BD84F4030EF101A6F3335D964DD23CCE94D_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC34D8E7E84BB84AE653E3AEC72A5005503A34DAF((&V_0), Enumerator_Dispose_mC34D8E7E84BB84AE653E3AEC72A5005503A34DAF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002c_1;
			}

IL_000e_1:
			{
				// foreach (var inputSource in _inputSources)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m5647ED5C4D0EE082F7083C163C6FAC26B179F212_inline((&V_0), Enumerator_get_Current_m5647ED5C4D0EE082F7083C163C6FAC26B179F212_RuntimeMethod_var);
				V_1 = L_2;
				// if (inputSource.Direction == 0)
				RuntimeObject* L_3 = V_1;
				NullCheck(L_3);
				float L_4;
				L_4 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single IEntityInputSource::get_Direction() */, IEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_il2cpp_TypeInfo_var, L_3);
				if ((((float)L_4) == ((float)(0.0f))))
				{
					goto IL_002c_1;
				}
			}
			{
				// return inputSource.Direction;
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				float L_6;
				L_6 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single IEntityInputSource::get_Direction() */, IEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				goto IL_004b;
			}

IL_002c_1:
			{
				// foreach (var inputSource in _inputSources)
				bool L_7;
				L_7 = Enumerator_MoveNext_mA65FB97EBBD254A38333A7D81F65C4FF6C343188((&V_0), Enumerator_MoveNext_mA65FB97EBBD254A38333A7D81F65C4FF6C343188_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// return 0;
		return (0.0f);
	}

IL_004b:
	{
		// }
		float L_8 = V_2;
		return L_8;
	}
}
// System.Boolean Player.PlayerBrain::get_IsJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBrain_get_IsJump_m4902673839126986B13997F3DA1FB209FE0CCFF4 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisIEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_mFAA48158AAFB129A847B4865A82D281C9CC4675D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_IsJumpU3Eb__6_0_m5990C3228C872A3D3B807E6D2C67B0EB49194DA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* G_B2_0 = NULL;
	List_1_tCF89F237339B83F5FB62107039E98CA62665523A* G_B2_1 = NULL;
	Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* G_B1_0 = NULL;
	List_1_tCF89F237339B83F5FB62107039E98CA62665523A* G_B1_1 = NULL;
	{
		// private bool IsJump => _inputSources.Any(source => source.Jump);
		List_1_tCF89F237339B83F5FB62107039E98CA62665523A* L_0 = __this->____inputSources_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* L_1 = ((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* L_2 = L_1;
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
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* L_3 = ((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* L_4 = (Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A*)il2cpp_codegen_object_new(Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mDC44F4AC37A957BC60E2DDEE363DA68521C8D440(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3Cget_IsJumpU3Eb__6_0_m5990C3228C872A3D3B807E6D2C67B0EB49194DA7_RuntimeMethod_var), NULL);
		Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* L_5 = L_4;
		((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		bool L_6;
		L_6 = Enumerable_Any_TisIEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_mFAA48158AAFB129A847B4865A82D281C9CC4675D(G_B2_1, G_B2_0, Enumerable_Any_TisIEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_mFAA48158AAFB129A847B4865A82D281C9CC4675D_RuntimeMethod_var);
		return L_6;
	}
}
// System.Boolean Player.PlayerBrain::get_IsAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBrain_get_IsAttack_m43E1C1268B25A2A63BDB5DEC47B468366A045027 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisIEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_mFAA48158AAFB129A847B4865A82D281C9CC4675D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_IsAttackU3Eb__8_0_mC48101AC2A388BC22DB94A321F4E043441210CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* G_B2_0 = NULL;
	List_1_tCF89F237339B83F5FB62107039E98CA62665523A* G_B2_1 = NULL;
	Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* G_B1_0 = NULL;
	List_1_tCF89F237339B83F5FB62107039E98CA62665523A* G_B1_1 = NULL;
	{
		// private bool IsAttack => _inputSources.Any(source => source.Attack);
		List_1_tCF89F237339B83F5FB62107039E98CA62665523A* L_0 = __this->____inputSources_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* L_1 = ((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2;
		Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* L_2 = L_1;
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
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* L_3 = ((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* L_4 = (Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A*)il2cpp_codegen_object_new(Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mDC44F4AC37A957BC60E2DDEE363DA68521C8D440(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3Cget_IsAttackU3Eb__8_0_mC48101AC2A388BC22DB94A321F4E043441210CF6_RuntimeMethod_var), NULL);
		Func_2_tDD9E3614CE5CD23ADCF0B23C94EB60C94AB0178A* L_5 = L_4;
		((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		bool L_6;
		L_6 = Enumerable_Any_TisIEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_mFAA48158AAFB129A847B4865A82D281C9CC4675D(G_B2_1, G_B2_0, Enumerable_Any_TisIEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_mFAA48158AAFB129A847B4865A82D281C9CC4675D_RuntimeMethod_var);
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
// System.Void Player.PlayerBrain/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA319249AB7EB1433A029B68914D67E90C04B275F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* L_0 = (U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41*)il2cpp_codegen_object_new(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mDB495E4EF44CB795B0B7FAC5AB4B8FC3577A43F4(L_0, NULL);
		((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Player.PlayerBrain/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDB495E4EF44CB795B0B7FAC5AB4B8FC3577A43F4 (U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Player.PlayerBrain/<>c::<get_IsJump>b__6_0(IEntityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_IsJumpU3Eb__6_0_m5990C3228C872A3D3B807E6D2C67B0EB49194DA7 (U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool IsJump => _inputSources.Any(source => source.Jump);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean IEntityInputSource::get_Jump() */, IEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Player.PlayerBrain/<>c::<get_IsAttack>b__8_0(IEntityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_IsAttackU3Eb__8_0_mC48101AC2A388BC22DB94A321F4E043441210CF6 (U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool IsAttack => _inputSources.Any(source => source.Attack);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean IEntityInputSource::get_Attack() */, IEntityInputSource_t8F5017A854926F30EEE19F50014ACE942D12783C_il2cpp_TypeInfo_var, L_0);
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
// System.Void Player.PlayerEntity::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Start_m94F3EB1E511F23A966EBAF5CD595EC6A7540A56D (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _movement.y = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->____movement_12);
		L_0->___y_1 = (0.0f);
		// _rigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->____rigidbody_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_10), (void*)L_1);
		// _boxcollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2;
		L_2 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		__this->____boxcollider_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____boxcollider_11), (void*)L_2);
		// _rigidbody.gravityScale = _gravityScale;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->____rigidbody_10;
		float L_4 = __this->____gravityScale_7;
		NullCheck(L_3);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::MoveHorizontally(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_MoveHorizontally_m66C3E3D8D99018E8499D2BEAAFD645CBAB15BFE6 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, float ___0_direction, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _movement.x = direction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->____movement_12);
		float L_1 = ___0_direction;
		L_0->___x_0 = L_1;
		// SetDirection(direction);
		float L_2 = ___0_direction;
		PlayerEntity_SetDirection_mCFE5F2CF5E6C3D312639C9691C1BB19167D2535B(__this, L_2, NULL);
		// Vector2 velocity = _rigidbody.velocity;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->____rigidbody_10;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_3, NULL);
		V_0 = L_4;
		// velocity.x = direction * _horizontalSpeed;
		float L_5 = ___0_direction;
		float L_6 = __this->____horizontalSpeed_5;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_multiply(L_5, L_6));
		// _rigidbody.velocity = velocity;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_7 = __this->____rigidbody_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		NullCheck(L_7);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::SetDirection(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_SetDirection_mCFE5F2CF5E6C3D312639C9691C1BB19167D2535B (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, float ___0_direction, const RuntimeMethod* method) 
{
	{
		// if ((_faceRight && direction < 0) || (!_faceRight && direction > 0))
		bool L_0 = __this->____faceRight_8;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = ___0_direction;
		if ((((float)L_1) < ((float)(0.0f))))
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		bool L_2 = __this->____faceRight_8;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		float L_3 = ___0_direction;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0026;
		}
	}

IL_0020:
	{
		// Flip();
		PlayerEntity_Flip_m8777B003E934D7342916CEE4FD1F619E44EDF3B0(__this, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Jump_m236605D656E45AB5A00031DE07E77B85774519C1 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// if (IsGrounded())
		bool L_0;
		L_0 = PlayerEntity_IsGrounded_m7B2C00B33924E595B64B0D4B7462B1F171B8043E(__this, NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// _rigidbody.AddForce(Vector2.up * _jumpForce);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->____rigidbody_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		float L_3 = __this->____jumpForce_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_1, L_4, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Flip_m8777B003E934D7342916CEE4FD1F619E44EDF3B0 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(0, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_0, (0.0f), (180.0f), (0.0f), NULL);
		// _faceRight = !_faceRight;
		bool L_1 = __this->____faceRight_8;
		__this->____faceRight_8 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Update_m3C948F06F728444F4BBCF9453CA8A8EDF0DF39D0 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// UpdateAnimations();
		PlayerEntity_UpdateAnimations_mD8055FEC16D5EF5107F85BF721E63247536C71C3(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Player.PlayerEntity::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerEntity_IsGrounded_m7B2C00B33924E595B64B0D4B7462B1F171B8043E (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Physics2D.BoxCast(_boxcollider.bounds.center, _boxcollider.bounds.size, 0f,
		//     Vector2.down, 0.01f, _jumpableGround);
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->____boxcollider_11;
		NullCheck(L_0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_0, NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_4 = __this->____boxcollider_11;
		NullCheck(L_4);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5;
		L_5 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_4, NULL);
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline(NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_9 = __this->____jumpableGround_9;
		int32_t L_10;
		L_10 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_11;
		L_11 = Physics2D_BoxCast_mC7CAEAB9C10CE3C4EDEAC492568382EC03B17E92(L_3, L_7, (0.0f), L_8, (0.00999999978f), L_10, NULL);
		bool L_12;
		L_12 = RaycastHit2D_op_Implicit_mBEF99A746116664D68B1398D58CA247550980A11(L_11, NULL);
		return L_12;
	}
}
// System.Void Player.PlayerEntity::UpdateAnimations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_UpdateAnimations_mD8055FEC16D5EF5107F85BF721E63247536C71C3 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// _animator.PlayAnimation(AnimationType.Idle, true);
		AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* L_0 = __this->____animator_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = AnimationController_PlayAnimation_m4036F816E8086A2F3958F6472641A4CA25F2EABA(L_0, 0, (bool)1, NULL);
		// _animator.PlayAnimation(AnimationType.Run, _movement.magnitude > 0);
		AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* L_2 = __this->____animator_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->____movement_12);
		float L_4;
		L_4 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = AnimationController_PlayAnimation_m4036F816E8086A2F3958F6472641A4CA25F2EABA(L_2, 1, (bool)((((float)L_4) > ((float)(0.0f)))? 1 : 0), NULL);
		// _animator.PlayAnimation(AnimationType.Jump, !IsGrounded());
		AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* L_6 = __this->____animator_4;
		bool L_7;
		L_7 = PlayerEntity_IsGrounded_m7B2C00B33924E595B64B0D4B7462B1F171B8043E(__this, NULL);
		NullCheck(L_6);
		bool L_8;
		L_8 = AnimationController_PlayAnimation_m4036F816E8086A2F3958F6472641A4CA25F2EABA(L_6, 2, (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::StartAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_StartAttack_m27F0B4AD28E9E01E0CAA5EDEEC35A4D74F1E3B37 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEntity_AttackEnd_m3CC3E34319687820DE02B484896250F1E41B975B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEntity_Attack_m39123B283C05A74CE8F8DF72D063AA8E765E4BE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_animator.PlayAnimation(AnimationType.Attack, true))
		AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* L_0 = __this->____animator_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = AnimationController_PlayAnimation_m4036F816E8086A2F3958F6472641A4CA25F2EABA(L_0, 3, (bool)1, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// _animator.ActionRequested += Attack;
		AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* L_2 = __this->____animator_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)PlayerEntity_Attack_m39123B283C05A74CE8F8DF72D063AA8E765E4BE0_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		AnimationController_add_ActionRequested_mDDF7773C475CA75D3E54BBB665AE1A1F6111A6FE(L_2, L_3, NULL);
		// _animator.AnimationEnded += AttackEnd;
		AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* L_4 = __this->____animator_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)PlayerEntity_AttackEnd_m3CC3E34319687820DE02B484896250F1E41B975B_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		AnimationController_add_AnimationEnded_mC2397D1F9F3E278E99EC13584B7CA849F89D29B1(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Attack_m39123B283C05A74CE8F8DF72D063AA8E765E4BE0 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Attack");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, NULL);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::AttackEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_AttackEnd_m3CC3E34319687820DE02B484896250F1E41B975B (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEntity_AttackEnd_m3CC3E34319687820DE02B484896250F1E41B975B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEntity_Attack_m39123B283C05A74CE8F8DF72D063AA8E765E4BE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.ActionRequested -= Attack;
		AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* L_0 = __this->____animator_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)PlayerEntity_Attack_m39123B283C05A74CE8F8DF72D063AA8E765E4BE0_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		AnimationController_remove_ActionRequested_mF593AA421B5B24B36866FADB96D87B406F42B325(L_0, L_1, NULL);
		// _animator.AnimationEnded -= AttackEnd;
		AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* L_2 = __this->____animator_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)PlayerEntity_AttackEnd_m3CC3E34319687820DE02B484896250F1E41B975B_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		AnimationController_remove_AnimationEnded_m5D5FD104AFAD0FCB0C61D04901706FA10FBEA857(L_2, L_3, NULL);
		// _animator.PlayAnimation(AnimationType.Attack, false);
		AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* L_4 = __this->____animator_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = AnimationController_PlayAnimation_m4036F816E8086A2F3958F6472641A4CA25F2EABA(L_4, 3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity__ctor_mA312E845416AC154A7F7F6C88596B187846A84E5 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
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
// System.Void Player.PlayerAnimation.AnimationController::add_ActionRequested(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_add_ActionRequested_mDDF7773C475CA75D3E54BBB665AE1A1F6111A6FE (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___ActionRequested_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___ActionRequested_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player.PlayerAnimation.AnimationController::remove_ActionRequested(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_remove_ActionRequested_mF593AA421B5B24B36866FADB96D87B406F42B325 (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___ActionRequested_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___ActionRequested_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player.PlayerAnimation.AnimationController::add_AnimationEnded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_add_AnimationEnded_mC2397D1F9F3E278E99EC13584B7CA849F89D29B1 (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___AnimationEnded_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___AnimationEnded_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player.PlayerAnimation.AnimationController::remove_AnimationEnded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_remove_AnimationEnded_m5D5FD104AFAD0FCB0C61D04901706FA10FBEA857 (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___AnimationEnded_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___AnimationEnded_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Player.PlayerAnimation.AnimationController::PlayAnimation(Player.AnimationType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationController_PlayAnimation_m4036F816E8086A2F3958F6472641A4CA25F2EABA (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, int32_t ___0_animationType, bool ___1_active, const RuntimeMethod* method) 
{
	{
		// if (!active)
		bool L_0 = ___1_active;
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		// if (_currentAnimationType == AnimationType.Idle || _currentAnimationType != animationType)
		int32_t L_1 = __this->____currentAnimationType_6;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = __this->____currentAnimationType_6;
		int32_t L_3 = ___0_animationType;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// _currentAnimationType = AnimationType.Idle;
		__this->____currentAnimationType_6 = 0;
		// PlayAnimation(_currentAnimationType);
		int32_t L_4 = __this->____currentAnimationType_6;
		VirtualActionInvoker1< int32_t >::Invoke(4 /* System.Void Player.PlayerAnimation.AnimationController::PlayAnimation(Player.AnimationType) */, __this, L_4);
		// return false;
		return (bool)0;
	}

IL_002b:
	{
		// if (_currentAnimationType >= animationType)
		int32_t L_5 = __this->____currentAnimationType_6;
		int32_t L_6 = ___0_animationType;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// _currentAnimationType = animationType;
		int32_t L_7 = ___0_animationType;
		__this->____currentAnimationType_6 = L_7;
		// PlayAnimation(_currentAnimationType);
		int32_t L_8 = __this->____currentAnimationType_6;
		VirtualActionInvoker1< int32_t >::Invoke(4 /* System.Void Player.PlayerAnimation.AnimationController::PlayAnimation(Player.AnimationType) */, __this, L_8);
		// return true;
		return (bool)1;
	}
}
// System.Void Player.PlayerAnimation.AnimationController::OnActionRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_OnActionRequested_m18B1224574E5B9BF4FA8A0DC984C01B11C1521D7 (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// protected void OnActionRequested() => ActionRequested?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___ActionRequested_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		return;
	}
}
// System.Void Player.PlayerAnimation.AnimationController::OnAnimationEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_OnAnimationEnded_mE4A64A6AF675378EE11148C053313EB83A24CA8E (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// protected void OnAnimationEnded() => AnimationEnded?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___AnimationEnded_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		return;
	}
}
// System.Void Player.PlayerAnimation.AnimationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController__ctor_mA14E39F063A0682B1601B4037880AFDDC2886E9C (AnimationController_t97D1D6EF657F5C014A38B1832E7B9E02AA86C82D* __this, const RuntimeMethod* method) 
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
// System.Void Player.PlayerAnimation.UnityAnimationController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnimationController_Start_m1739C5E28248E3CE658C30CD664276C52B93D813 (UnityAnimationController_t5ABC520E02ECE0E52D3FC85DBBF9D4A33B3A38CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void Start() => _animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->____animator_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_7), (void*)L_0);
		return;
	}
}
// System.Void Player.PlayerAnimation.UnityAnimationController::PlayAnimation(Player.AnimationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnimationController_PlayAnimation_mD4A6C1DEA6168AE881DA900DBF0CAFF63B87DDED (UnityAnimationController_t5ABC520E02ECE0E52D3FC85DBBF9D4A33B3A38CF* __this, int32_t ___0_animationType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B155B21E40C2DC3913150B158FC8C685B50C8D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetInteger(nameof(AnimationType), (int)animationType);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_7;
		int32_t L_1 = ___0_animationType;
		NullCheck(L_0);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_0, _stringLiteral5B155B21E40C2DC3913150B158FC8C685B50C8D1, L_1, NULL);
		// }
		return;
	}
}
// System.Void Player.PlayerAnimation.UnityAnimationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnimationController__ctor_mA1AA15DDF7D33CECC2581D2B545A349BF17546CE (UnityAnimationController_t5ABC520E02ECE0E52D3FC85DBBF9D4A33B3A38CF* __this, const RuntimeMethod* method) 
{
	{
		AnimationController__ctor_mA14E39F063A0682B1601B4037880AFDDC2886E9C(__this, NULL);
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
// System.Void Core.GameLevelInitializer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLevelInitializer_Awake_mD050D5A9233BA09EFDAA5C7D73019F42D1279C8F (GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m109D62D7CE322AE93B5C0E90FD0DB803D8AB9BB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9257FACF49ECBF4E483B502226DF6BDF4D4E3BF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCF89F237339B83F5FB62107039E98CA62665523A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _externalDevicesInput = new ExternalDevicesInputReader();
		ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* L_0 = (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42*)il2cpp_codegen_object_new(ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExternalDevicesInputReader__ctor_m8B0F20B139F68E615DE6688190B597BE736B2013(L_0, NULL);
		__this->____externalDevicesInput_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____externalDevicesInput_6), (void*)L_0);
		// _playerBrain = new PlayerBrain(_playerEntity, new List<IEntityInputSource>()
		// {
		//     _guiInputView,
		//     _externalDevicesInput
		// });
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_1 = __this->____playerEntity_4;
		List_1_tCF89F237339B83F5FB62107039E98CA62665523A* L_2 = (List_1_tCF89F237339B83F5FB62107039E98CA62665523A*)il2cpp_codegen_object_new(List_1_tCF89F237339B83F5FB62107039E98CA62665523A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m9257FACF49ECBF4E483B502226DF6BDF4D4E3BF3(L_2, List_1__ctor_m9257FACF49ECBF4E483B502226DF6BDF4D4E3BF3_RuntimeMethod_var);
		List_1_tCF89F237339B83F5FB62107039E98CA62665523A* L_3 = L_2;
		GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* L_4 = __this->____guiInputView_5;
		NullCheck(L_3);
		List_1_Add_m109D62D7CE322AE93B5C0E90FD0DB803D8AB9BB0_inline(L_3, L_4, List_1_Add_m109D62D7CE322AE93B5C0E90FD0DB803D8AB9BB0_RuntimeMethod_var);
		List_1_tCF89F237339B83F5FB62107039E98CA62665523A* L_5 = L_3;
		ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* L_6 = __this->____externalDevicesInput_6;
		NullCheck(L_5);
		List_1_Add_m109D62D7CE322AE93B5C0E90FD0DB803D8AB9BB0_inline(L_5, L_6, List_1_Add_m109D62D7CE322AE93B5C0E90FD0DB803D8AB9BB0_RuntimeMethod_var);
		PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* L_7 = (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093*)il2cpp_codegen_object_new(PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PlayerBrain__ctor_mF5030D8895017FBE52DF6FE9FB6B75D9F2510621(L_7, L_1, L_5, NULL);
		__this->____playerBrain_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerBrain_7), (void*)L_7);
		// }
		return;
	}
}
// System.Void Core.GameLevelInitializer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLevelInitializer_Update_m1FD0D96ABB76A7E319CA2626C61767B184F0BE78 (GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A* __this, const RuntimeMethod* method) 
{
	{
		// if (_onPause)
		bool L_0 = __this->____onPause_8;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _externalDevicesInput.OnUpdate();
		ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* L_1 = __this->____externalDevicesInput_6;
		NullCheck(L_1);
		ExternalDevicesInputReader_OnUpdate_m99FD182BD7D8A94A889B8A29C981ED7556D63757(L_1, NULL);
		// }
		return;
	}
}
// System.Void Core.GameLevelInitializer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLevelInitializer_FixedUpdate_m8EA56B485C80C0DF7A1FE1CCA136302066891B48 (GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A* __this, const RuntimeMethod* method) 
{
	{
		// if (_onPause)
		bool L_0 = __this->____onPause_8;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _playerBrain.OnFixedUpdate();
		PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* L_1 = __this->____playerBrain_7;
		NullCheck(L_1);
		PlayerBrain_OnFixedUpdate_m8D2DD5E895FC850437E9C85A92D1BC3E12D8DCBA(L_1, NULL);
		// }
		return;
	}
}
// System.Void Core.GameLevelInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLevelInitializer__ctor_mF9C7AF46C8FEEF8C46D957C6977F5F61EDF2C352 (GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A* __this, const RuntimeMethod* method) 
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
// System.Void ClearSky.DemoCollegeStudentController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Start_mEE116F779B1106886C0764890D824EF78A07833D (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_0);
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void ClearSky.DemoCollegeStudentController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Update_m45FEA9FE353DFBB1D8B4E2C6CDF9B884A8526EF9 (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) 
{
	{
		// Restart();
		DemoCollegeStudentController_Restart_m2083F49DFF2CD81396C44FA4678C60443A2E57D5(__this, NULL);
		// if (alive)
		bool L_0 = __this->___alive_12;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		// Hurt();
		DemoCollegeStudentController_Hurt_mD77F0CF8E474FF4C75AE2EA7FFAB638ECCF1F11B(__this, NULL);
		// Die();
		DemoCollegeStudentController_Die_m3642B20A51D3B0BFE29225CA5148304E1493E580(__this, NULL);
		// Attack();
		DemoCollegeStudentController_Attack_mB5D1FC86823443AAC37FB0EDD24DC405245EEB02(__this, NULL);
		// Jump();
		DemoCollegeStudentController_Jump_m04BF9961527A936FEF126AB1401B1C86C1E1D85B(__this, NULL);
		// KickBoard();
		DemoCollegeStudentController_KickBoard_m67FA9EF6E1A29E23743ABD40AA583BF20248F59E(__this, NULL);
		// Run();
		DemoCollegeStudentController_Run_m1C919A775CEFF0F0A8FBA60D41380C5BBCE08B6C(__this, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void ClearSky.DemoCollegeStudentController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_OnTriggerEnter2D_mDD1ACDEFF59292E1B74F68DA2E2FA6179A98F6A3 (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("isJump", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_8;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ClearSky.DemoCollegeStudentController::KickBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_KickBoard_m67FA9EF6E1A29E23743ABD40AA583BF20248F59E (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24AF8D9BC28FE5FA9280151B50D0A6DF25812409);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha4) && isKickboard)
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)52), NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		bool L_1 = __this->___isKickboard_13;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// isKickboard = false;
		__this->___isKickboard_13 = (bool)0;
		// anim.SetBool("isKickBoard", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___anim_8;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral24AF8D9BC28FE5FA9280151B50D0A6DF25812409, (bool)0, NULL);
		return;
	}

IL_002a:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha4) && !isKickboard )
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)52), NULL);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		bool L_4 = __this->___isKickboard_13;
		if (L_4)
		{
			goto IL_0053;
		}
	}
	{
		// isKickboard = true;
		__this->___isKickboard_13 = (bool)1;
		// anim.SetBool("isKickBoard", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___anim_8;
		NullCheck(L_5);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteral24AF8D9BC28FE5FA9280151B50D0A6DF25812409, (bool)1, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void ClearSky.DemoCollegeStudentController::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Run_m1C919A775CEFF0F0A8FBA60D41380C5BBCE08B6C (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B27256C07F6F9A3D209A8EF4E771A19A90D90F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!isKickboard)
		bool L_0 = __this->___isKickboard_13;
		if (L_0)
		{
			goto IL_0112;
		}
	}
	{
		// Vector3 moveVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_1;
		// anim.SetBool("isRun", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___anim_8;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral0B27256C07F6F9A3D209A8EF4E771A19A90D90F7, (bool)0, NULL);
		// if (Input.GetAxisRaw("Horizontal") < 0)
		float L_3;
		L_3 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_0084;
		}
	}
	{
		// direction = -1;
		__this->___direction_10 = (-1);
		// moveVelocity = Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		V_0 = L_4;
		// transform.localScale = new Vector3(direction, 1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_6 = __this->___direction_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), ((float)L_6), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_7, NULL);
		// if (!anim.GetBool("isJump"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___anim_8;
		NullCheck(L_8);
		bool L_9;
		L_9 = Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8(L_8, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, NULL);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		// anim.SetBool("isRun", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___anim_8;
		NullCheck(L_10);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteral0B27256C07F6F9A3D209A8EF4E771A19A90D90F7, (bool)1, NULL);
	}

IL_0084:
	{
		// if (Input.GetAxisRaw("Horizontal") > 0)
		float L_11;
		L_11 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_00e6;
		}
	}
	{
		// direction = 1;
		__this->___direction_10 = 1;
		// moveVelocity = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		V_0 = L_12;
		// transform.localScale = new Vector3(direction, 1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_14 = __this->___direction_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), ((float)L_14), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_15, NULL);
		// if (!anim.GetBool("isJump"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->___anim_8;
		NullCheck(L_16);
		bool L_17;
		L_17 = Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8(L_16, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, NULL);
		if (L_17)
		{
			goto IL_00e6;
		}
	}
	{
		// anim.SetBool("isRun", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = __this->___anim_8;
		NullCheck(L_18);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_18, _stringLiteral0B27256C07F6F9A3D209A8EF4E771A19A90D90F7, (bool)1, NULL);
	}

IL_00e6:
	{
		// transform.position += moveVelocity * movePower * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = L_19;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		float L_23 = __this->___movePower_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_26, NULL);
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_27, NULL);
	}

IL_0112:
	{
		// if (isKickboard)
		bool L_28 = __this->___isKickboard_13;
		if (!L_28)
		{
			goto IL_01cd;
		}
	}
	{
		// Vector3 moveVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_29;
		// if (Input.GetAxisRaw("Horizontal") < 0)
		float L_30;
		L_30 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_30) < ((float)(0.0f)))))
		{
			goto IL_0162;
		}
	}
	{
		// direction = -1;
		__this->___direction_10 = (-1);
		// moveVelocity = Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		V_1 = L_31;
		// transform.localScale = new Vector3(direction, 1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_33 = __this->___direction_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), ((float)L_33), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_32, L_34, NULL);
	}

IL_0162:
	{
		// if (Input.GetAxisRaw("Horizontal") > 0)
		float L_35;
		L_35 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_35) > ((float)(0.0f)))))
		{
			goto IL_01a1;
		}
	}
	{
		// direction = 1;
		__this->___direction_10 = 1;
		// moveVelocity = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		V_1 = L_36;
		// transform.localScale = new Vector3(direction, 1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_38 = __this->___direction_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), ((float)L_38), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_37, L_39, NULL);
	}

IL_01a1:
	{
		// transform.position += moveVelocity * KickBoardMovePower * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = L_40;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_1;
		float L_44 = __this->___KickBoardMovePower_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_43, L_44, NULL);
		float L_46;
		L_46 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_45, L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_42, L_47, NULL);
		NullCheck(L_41);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_41, L_48, NULL);
	}

IL_01cd:
	{
		// }
		return;
	}
}
// System.Void ClearSky.DemoCollegeStudentController::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Jump_m04BF9961527A936FEF126AB1401B1C86C1E1D85B (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if ((Input.GetButtonDown("Jump") || Input.GetAxisRaw("Vertical") > 0)
		// && !anim.GetBool("isJump"))
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		float L_1;
		L_1 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}

IL_001d:
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___anim_8;
		NullCheck(L_2);
		bool L_3;
		L_3 = Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8(L_2, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, NULL);
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		// isJumping = true;
		__this->___isJumping_11 = (bool)1;
		// anim.SetBool("isJump", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anim_8;
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, (bool)1, NULL);
	}

IL_0047:
	{
		// if (!isJumping)
		bool L_5 = __this->___isJumping_11;
		if (L_5)
		{
			goto IL_0050;
		}
	}
	{
		// return;
		return;
	}

IL_0050:
	{
		// rb.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rb_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_6);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_6, L_7, NULL);
		// Vector2 jumpVelocity = new Vector2(0, jumpPower);
		float L_8 = __this->___jumpPower_6;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.0f), L_8, NULL);
		// rb.AddForce(jumpVelocity, ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = __this->___rb_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		NullCheck(L_9);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_9, L_10, 1, NULL);
		// isJumping = false;
		__this->___isJumping_11 = (bool)0;
		// }
		return;
	}
}
// System.Void ClearSky.DemoCollegeStudentController::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Attack_mB5D1FC86823443AAC37FB0EDD24DC405245EEB02 (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)49), NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// anim.SetTrigger("attack");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anim_8;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void ClearSky.DemoCollegeStudentController::Hurt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Hurt_mD77F0CF8E474FF4C75AE2EA7FFAB638ECCF1F11B (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha2))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)50), NULL);
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		// anim.SetTrigger("hurt");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anim_8;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C, NULL);
		// if (direction == 1)
		int32_t L_2 = __this->___direction_10;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_003e;
		}
	}
	{
		// rb.AddForce(new Vector2(-5f, 1f), ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___rb_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (-5.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_3, L_4, 1, NULL);
		return;
	}

IL_003e:
	{
		// rb.AddForce(new Vector2(5f, 1f), ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = __this->___rb_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (5.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_5, L_6, 1, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void ClearSky.DemoCollegeStudentController::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Die_m3642B20A51D3B0BFE29225CA5148304E1493E580 (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24AF8D9BC28FE5FA9280151B50D0A6DF25812409);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha3))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)51), NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// isKickboard = false;
		__this->___isKickboard_13 = (bool)0;
		// anim.SetBool("isKickBoard", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anim_8;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral24AF8D9BC28FE5FA9280151B50D0A6DF25812409, (bool)0, NULL);
		// anim.SetTrigger("die");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___anim_8;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2, NULL);
		// alive = false;
		__this->___alive_12 = (bool)0;
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void ClearSky.DemoCollegeStudentController::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController_Restart_m2083F49DFF2CD81396C44FA4678C60443A2E57D5 (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24AF8D9BC28FE5FA9280151B50D0A6DF25812409);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha0))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)48), NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// isKickboard = false;
		__this->___isKickboard_13 = (bool)0;
		// anim.SetBool("isKickBoard", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anim_8;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral24AF8D9BC28FE5FA9280151B50D0A6DF25812409, (bool)0, NULL);
		// anim.SetTrigger("idle");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___anim_8;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E, NULL);
		// alive = true;
		__this->___alive_12 = (bool)1;
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void ClearSky.DemoCollegeStudentController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCollegeStudentController__ctor_mC7216C1AC1B1D68802E81BE1DCC6FA1C92F5DDF2 (DemoCollegeStudentController_t637C486F479E6FAF26E32A9A4D301A6174E67998* __this, const RuntimeMethod* method) 
{
	{
		// public float movePower = 10f;
		__this->___movePower_4 = (10.0f);
		// public float KickBoardMovePower = 15f;
		__this->___KickBoardMovePower_5 = (15.0f);
		// public float jumpPower = 20f; //Set Gravity Scale in Rigidbody2D Component to 5
		__this->___jumpPower_6 = (20.0f);
		// private int direction = 1;
		__this->___direction_10 = 1;
		// private bool alive = true;
		__this->___alive_12 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Jump_m1D6CF10F4DBA5C21E181DF8AAB141670F8705207_inline (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CJumpU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Attack_m0BF4F054A3318C584032284B8CBCF04FB2FA03A7_inline (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Attack { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CAttackU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIInputView_set_Jump_m0BE0CAE73A2CE1E444CEF23C17426B3FF018A755_inline (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CJumpU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIInputView_set_Attack_m48C934182BD8DED599D9087EAD61A9801FCB68F7_inline (GUIInputView_tFF8C885585468A2823D114AB3356570EA21380BB* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Attack { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CAttackU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___downVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
