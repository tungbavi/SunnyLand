#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// ButtonLeftHandle
struct ButtonLeftHandle_t4C691F057120CC11456693348CFDAE89E511BE00;
// ButtonRightHandle
struct ButtonRightHandle_tF1950AC6B561E5C9E7D23B0299188FBBD627F13C;
// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Enemy_move
struct Enemy_move_tEAF715FA5453B0C5E658E937D87064E0A801614E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InputName
struct InputName_t933006C6959ED15288061056E9A449BB755DF635;
// MainController
struct MainController_tE084A72D51B125AA30DB8220A2EE35184D69BC59;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// PlayerName
struct PlayerName_t4FB10FA10B61ED667AD156323EFAC6FD9B2A4EBB;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VolumeChange
struct VolumeChange_tEF4E584A2D7AB40B39049B8806B4D6EB2E585756;
// Waypoints
struct Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407;
// click_waypoints
struct click_waypoints_tE89B6E3AE40C872A9532B906B155C9986FB66B89;
// fall
struct fall_tD46595581F7DFDA787BCE4D6666B0B03034116F9;
// sign
struct sign_tD8A0242AD4EB066EBB48A23C2DF8C96AC9EC57C7;
// spin
struct spin_t530BC618A957CFD4476787D5C2F181AF2F5F4D1E;
// waypoint_start
struct waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3;
// ButtonLeftHandle/<DelayToMovingFalse>d__2
struct U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691;
// ButtonRightHandle/<DelayToMovingFalse>d__2
struct U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7;
IL2CPP_EXTERN_C String_t* _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
IL2CPP_EXTERN_C String_t* _stringLiteral147DA2CCEB648D3E3A2F506354531468CFFA01DE;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral2619A50D640D12F7EAED94CD5A39DFCD03B99E2A;
IL2CPP_EXTERN_C String_t* _stringLiteral2B0C356B8F65C82E29F3552BAB2FD17172148778;
IL2CPP_EXTERN_C String_t* _stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral3647728F8F740322CF5D86BD6CACB58879721BF6;
IL2CPP_EXTERN_C String_t* _stringLiteral699A8607A92D339FB423EA08AF91007B45776237;
IL2CPP_EXTERN_C String_t* _stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54;
IL2CPP_EXTERN_C String_t* _stringLiteral743EDCAC6A947FFD1935E497F5077BF2575811AC;
IL2CPP_EXTERN_C String_t* _stringLiteral947610918E815EA32DDFB8A4CD7A91DD72C33DE7;
IL2CPP_EXTERN_C String_t* _stringLiteral9F04F41A848514162050E3D68C1A7ABB441DC2B5;
IL2CPP_EXTERN_C String_t* _stringLiteralA242E0EF74FB38B86DC60AEF5C5EF280284E5543;
IL2CPP_EXTERN_C String_t* _stringLiteralAFE892A0ED24D55AB70A14BBA5DA9D26F1E5D898;
IL2CPP_EXTERN_C String_t* _stringLiteralC53D54A1693AB435FC7B249796B95A2188D95C30;
IL2CPP_EXTERN_C String_t* _stringLiteralCA0AA89382EC9FBF76CB9BBEAB1872B5A701BEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD27FB8C857B99AB7846237A8679B6CF0E1DEAA03;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralDCB273DF757968C8CCCCA5757E4C2F59C24EED69;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayToMovingFalseU3Ed__2_System_Collections_IEnumerator_Reset_m44D31238061D498E6AEAD8D37465FB2235B00834_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayToMovingFalseU3Ed__2_System_Collections_IEnumerator_Reset_m9CAA961B2B40F397A7169852B37AB68AE74A6461_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// ButtonLeftHandle/<DelayToMovingFalse>d__2
struct U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691  : public RuntimeObject
{
	// System.Int32 ButtonLeftHandle/<DelayToMovingFalse>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ButtonLeftHandle/<DelayToMovingFalse>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// ButtonRightHandle/<DelayToMovingFalse>d__2
struct U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843  : public RuntimeObject
{
	// System.Int32 ButtonRightHandle/<DelayToMovingFalse>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ButtonRightHandle/<DelayToMovingFalse>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
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

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
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

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ButtonLeftHandle
struct ButtonLeftHandle_t4C691F057120CC11456693348CFDAE89E511BE00  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ButtonRightHandle
struct ButtonRightHandle_tF1950AC6B561E5C9E7D23B0299188FBBD627F13C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CameraController::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// UnityEngine.Vector3 CameraController::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_5;
	// System.Single CameraController::smoothing
	float ___smoothing_6;
};

// Enemy_move
struct Enemy_move_tEAF715FA5453B0C5E658E937D87064E0A801614E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Enemy_move::leftCap
	float ___leftCap_4;
	// System.Single Enemy_move::rightCap
	float ___rightCap_5;
	// System.Single Enemy_move::jumpLength
	float ___jumpLength_6;
	// System.Single Enemy_move::jumpHeight
	float ___jumpHeight_7;
	// UnityEngine.LayerMask Enemy_move::ground
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___ground_8;
	// UnityEngine.Collider2D Enemy_move::coll
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___coll_9;
	// UnityEngine.Rigidbody2D Enemy_move::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_10;
	// System.Boolean Enemy_move::facingLeft
	bool ___facingLeft_11;
};

// InputName
struct InputName_t933006C6959ED15288061056E9A449BB755DF635  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String InputName::savename
	String_t* ___savename_4;
	// UnityEngine.UI.Text InputName::inputtext
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___inputtext_5;
};

// MainController
struct MainController_tE084A72D51B125AA30DB8220A2EE35184D69BC59  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String MainController::nameofplayer
	String_t* ___nameofplayer_4;
	// UnityEngine.UI.Text MainController::loadedname
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___loadedname_5;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D PlayerController::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_4;
	// UnityEngine.Animator PlayerController::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_5;
	// PlayerController/State PlayerController::state
	int32_t ___state_6;
	// UnityEngine.Collider2D PlayerController::coll
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___coll_7;
	// UnityEngine.Vector3 PlayerController::locationstart
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___locationstart_8;
	// UnityEngine.UI.Text PlayerController::textscore
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textscore_9;
	// UnityEngine.Transform PlayerController::life
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___life_11;
	// System.Int32 PlayerController::lifenum
	int32_t ___lifenum_12;
	// UnityEngine.LayerMask PlayerController::ground
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___ground_13;
	// System.Single PlayerController::speed
	float ___speed_14;
	// System.Single PlayerController::jumpForce
	float ___jumpForce_15;
	// System.String PlayerController::sceneToLoad
	String_t* ___sceneToLoad_16;
	// UnityEngine.AudioSource PlayerController::jumpsound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___jumpsound_17;
	// UnityEngine.AudioSource PlayerController::damagesound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___damagesound_18;
	// UnityEngine.AudioSource PlayerController::deathsound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___deathsound_19;
	// UnityEngine.AudioSource PlayerController::diamonsound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___diamonsound_20;
	// System.Boolean PlayerController::moveLeft
	bool ___moveLeft_21;
	// System.Boolean PlayerController::moveRight
	bool ___moveRight_22;
};

struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields
{
	// System.Int32 PlayerController::score
	int32_t ___score_10;
	// PlayerController PlayerController::instance
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___instance_23;
};

// PlayerName
struct PlayerName_t4FB10FA10B61ED667AD156323EFAC6FD9B2A4EBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String PlayerName::nameofplayer
	String_t* ___nameofplayer_4;
	// UnityEngine.UI.Text PlayerName::loadedname
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___loadedname_5;
	// UnityEngine.UI.Text PlayerName::scoretext
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoretext_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VolumeChange
struct VolumeChange_tEF4E584A2D7AB40B39049B8806B4D6EB2E585756  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider VolumeChange::volumeslider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___volumeslider_4;
};

// Waypoints
struct Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform[] Waypoints::waypoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___waypoints_4;
	// System.Single Waypoints::movespeed
	float ___movespeed_5;
	// System.Int32 Waypoints::waypointIndex
	int32_t ___waypointIndex_6;
};

// click_waypoints
struct click_waypoints_tE89B6E3AE40C872A9532B906B155C9986FB66B89  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// fall
struct fall_tD46595581F7DFDA787BCE4D6666B0B03034116F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String fall::sceneToLoad
	String_t* ___sceneToLoad_4;
};

// sign
struct sign_tD8A0242AD4EB066EBB48A23C2DF8C96AC9EC57C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text sign::guide
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___guide_4;
};

// spin
struct spin_t530BC618A957CFD4476787D5C2F181AF2F5F4D1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 spin::speed
	int32_t ___speed_4;
	// System.Boolean spin::clockwise
	bool ___clockwise_5;
};

// waypoint_start
struct waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Collider2D waypoint_start::coll
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___coll_4;
	// UnityEngine.Transform[] waypoint_start::waypoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___waypoints_5;
	// System.Single waypoint_start::movespeed
	float ___movespeed_6;
	// System.Int32 waypoint_start::waypointIndex
	int32_t ___waypointIndex_7;
};

struct waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3_StaticFields
{
	// System.Boolean waypoint_start::check
	bool ___check_8;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
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

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ButtonLeftHandle::DelayToMovingFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonLeftHandle_DelayToMovingFalse_mA2494814AE6B76A0D7F258F2EE70E94D90FCB4FB (ButtonLeftHandle_t4C691F057120CC11456693348CFDAE89E511BE00* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void ButtonLeftHandle/<DelayToMovingFalse>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayToMovingFalseU3Ed__2__ctor_mA593A6D3128E091E331926F8907D5BC9F84D401C (U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ButtonRightHandle::DelayToMovingFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonRightHandle_DelayToMovingFalse_m8996EC8121B342FB4216DC516F7A10F1373D47CB (ButtonRightHandle_tF1950AC6B561E5C9E7D23B0299188FBBD627F13C* __this, const RuntimeMethod* method) ;
// System.Void ButtonRightHandle/<DelayToMovingFalse>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayToMovingFalseU3Ed__2__ctor_mE1C0A2458211944D5BAC2025B5B3480C6BDA11CF (U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Enemy_move::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_Move_m46A0631433B7DCA05993E3EB13448C0CBF219245 (Enemy_move_tEAF715FA5453B0C5E658E937D87064E0A801614E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider2D::IsTouchingLayers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider2D_IsTouchingLayers_mD0EA867624BAA3F4E5AD48F812FF1962A67F21B9 (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, int32_t ___layerMask0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void PlayerController::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Movement_mA3C0BF3320BCD093A506529BBBB6FE3B4EE65266 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::AnimationState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AnimationState_mDA0ADAC0FF1C5B81CF8B3386F4A6986F04B50F64 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void PlayerController::Jump(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Jump_mDD973327813FD0BB1987DA69DE12202231458A17 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___dbjump0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.Void VolumeChange::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeChange_Load_mC05CA549D040F2205366932FD034B16055BC3124 (VolumeChange_tEF4E584A2D7AB40B39049B8806B4D6EB2E585756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_mC13591F71DDD0B3A64E52E475260050E89F64C9A (float ___value0, const RuntimeMethod* method) ;
// System.Void VolumeChange::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeChange_Save_mBA5E9CCF59CA0B6000ACCC7CF59C22C19447A7CA (VolumeChange_tEF4E584A2D7AB40B39049B8806B4D6EB2E585756* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void Waypoints::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoints_Move_m2DEE7027079EC09BB7894947F3980B90F6674DB0 (Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void waypoint_start::Move(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void waypoint_start_Move_m9BCF492E44CDA7E25EAC094E21CF92BA02BA3746 (waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3* __this, bool ___ply0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<PlayerController>()
inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
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
// System.Void fall::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fall_Start_m53CDCA6C2E2D8CE2193E49CFB6A00AE388BF5C71 (fall_tD46595581F7DFDA787BCE4D6666B0B03034116F9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void fall::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fall_Update_m7C69F4DDD3B80162C98E7962C33BBC3426D0EB6F (fall_tD46595581F7DFDA787BCE4D6666B0B03034116F9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void fall::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fall_OnTriggerEnter2D_m395A87469B7D9E7A26D73BF5F36CF688C5CA7A84 (fall_tD46595581F7DFDA787BCE4D6666B0B03034116F9* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(collision.gameObject.tag =="Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_5, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void fall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fall__ctor_m0AD787B748EA679370AC19ECB7D25D764829E5D8 (fall_tD46595581F7DFDA787BCE4D6666B0B03034116F9* __this, const RuntimeMethod* method) 
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
// System.Void ButtonLeftHandle::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonLeftHandle_OnPointerDown_m0460C1415209F49892DA702C5A14F45F257D67A9 (ButtonLeftHandle_t4C691F057120CC11456693348CFDAE89E511BE00* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(DelayToMovingFalse());
		RuntimeObject* L_0;
		L_0 = ButtonLeftHandle_DelayToMovingFalse_mA2494814AE6B76A0D7F258F2EE70E94D90FCB4FB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ButtonLeftHandle::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonLeftHandle_OnPointerUp_m06E369B27B316A4EA27FEA2479C4DD61854D0E9B (ButtonLeftHandle_t4C691F057120CC11456693348CFDAE89E511BE00* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F04F41A848514162050E3D68C1A7ABB441DC2B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCoroutine(DelayToMovingFalse());
		RuntimeObject* L_0;
		L_0 = ButtonLeftHandle_DelayToMovingFalse_mA2494814AE6B76A0D7F258F2EE70E94D90FCB4FB(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_0, NULL);
		// PlayerController.instance.moveLeft = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_23;
		NullCheck(L_1);
		L_1->___moveLeft_21 = (bool)0;
		// Debug.Log("abc");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9F04F41A848514162050E3D68C1A7ABB441DC2B5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ButtonLeftHandle::DelayToMovingFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonLeftHandle_DelayToMovingFalse_mA2494814AE6B76A0D7F258F2EE70E94D90FCB4FB (ButtonLeftHandle_t4C691F057120CC11456693348CFDAE89E511BE00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691* L_0 = (U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691*)il2cpp_codegen_object_new(U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDelayToMovingFalseU3Ed__2__ctor_mA593A6D3128E091E331926F8907D5BC9F84D401C(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void ButtonLeftHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonLeftHandle__ctor_m240CED5DADDBADA9673374E427AB0E3C92E49127 (ButtonLeftHandle_t4C691F057120CC11456693348CFDAE89E511BE00* __this, const RuntimeMethod* method) 
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
// System.Void ButtonLeftHandle/<DelayToMovingFalse>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayToMovingFalseU3Ed__2__ctor_mA593A6D3128E091E331926F8907D5BC9F84D401C (U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ButtonLeftHandle/<DelayToMovingFalse>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayToMovingFalseU3Ed__2_System_IDisposable_Dispose_mE59A182F85D9EA0E155962A0493F75482064BF96 (U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ButtonLeftHandle/<DelayToMovingFalse>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayToMovingFalseU3Ed__2_MoveNext_m6E2A3572A45F13241D9F36721AF7AC0F2E9DA30B (U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlayerController.instance.moveLeft = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_23;
		NullCheck(L_3);
		L_3->___moveLeft_21 = (bool)1;
		goto IL_003b;
	}

IL_0024:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0034:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_003b:
	{
		// while (PlayerController.instance.moveLeft)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_23;
		NullCheck(L_4);
		bool L_5 = L_4->___moveLeft_21;
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ButtonLeftHandle/<DelayToMovingFalse>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayToMovingFalseU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m82C616424F2A322FCD6EA373A60EA64CD8F9E0A5 (U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ButtonLeftHandle/<DelayToMovingFalse>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayToMovingFalseU3Ed__2_System_Collections_IEnumerator_Reset_m44D31238061D498E6AEAD8D37465FB2235B00834 (U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayToMovingFalseU3Ed__2_System_Collections_IEnumerator_Reset_m44D31238061D498E6AEAD8D37465FB2235B00834_RuntimeMethod_var)));
	}
}
// System.Object ButtonLeftHandle/<DelayToMovingFalse>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayToMovingFalseU3Ed__2_System_Collections_IEnumerator_get_Current_mAC2B11CCF7EC2655C348FF9D3AC56531BC63FC1C (U3CDelayToMovingFalseU3Ed__2_t77CB6F948A23C6FF6DEB5CFC75F0A46E43A2B691* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void ButtonRightHandle::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonRightHandle_OnPointerDown_m0009F2A7839F3C8BED201E94403D4D4DD7E93C81 (ButtonRightHandle_tF1950AC6B561E5C9E7D23B0299188FBBD627F13C* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(DelayToMovingFalse());
		RuntimeObject* L_0;
		L_0 = ButtonRightHandle_DelayToMovingFalse_m8996EC8121B342FB4216DC516F7A10F1373D47CB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ButtonRightHandle::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonRightHandle_OnPointerUp_m56655EB666F58C8BA444863C31F986EE6F9CE88A (ButtonRightHandle_tF1950AC6B561E5C9E7D23B0299188FBBD627F13C* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F04F41A848514162050E3D68C1A7ABB441DC2B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCoroutine(DelayToMovingFalse());
		RuntimeObject* L_0;
		L_0 = ButtonRightHandle_DelayToMovingFalse_m8996EC8121B342FB4216DC516F7A10F1373D47CB(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_0, NULL);
		// PlayerController.instance.moveRight = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_23;
		NullCheck(L_1);
		L_1->___moveRight_22 = (bool)0;
		// Debug.Log("abc");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9F04F41A848514162050E3D68C1A7ABB441DC2B5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ButtonRightHandle::DelayToMovingFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonRightHandle_DelayToMovingFalse_m8996EC8121B342FB4216DC516F7A10F1373D47CB (ButtonRightHandle_tF1950AC6B561E5C9E7D23B0299188FBBD627F13C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843* L_0 = (U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843*)il2cpp_codegen_object_new(U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDelayToMovingFalseU3Ed__2__ctor_mE1C0A2458211944D5BAC2025B5B3480C6BDA11CF(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void ButtonRightHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonRightHandle__ctor_m2131A055E9912002B221C2ECAF8F85889B805A1A (ButtonRightHandle_tF1950AC6B561E5C9E7D23B0299188FBBD627F13C* __this, const RuntimeMethod* method) 
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
// System.Void ButtonRightHandle/<DelayToMovingFalse>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayToMovingFalseU3Ed__2__ctor_mE1C0A2458211944D5BAC2025B5B3480C6BDA11CF (U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ButtonRightHandle/<DelayToMovingFalse>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayToMovingFalseU3Ed__2_System_IDisposable_Dispose_mD5BC54436FCD4D7F6C2B3B5CDCB3D38ECD13C30B (U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ButtonRightHandle/<DelayToMovingFalse>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayToMovingFalseU3Ed__2_MoveNext_m164273AF67676BC2B03B19CBFD6619413B48B31F (U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlayerController.instance.moveRight = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_23;
		NullCheck(L_3);
		L_3->___moveRight_22 = (bool)1;
		goto IL_003b;
	}

IL_0024:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0034:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_003b:
	{
		// while (PlayerController.instance.moveRight)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_23;
		NullCheck(L_4);
		bool L_5 = L_4->___moveRight_22;
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ButtonRightHandle/<DelayToMovingFalse>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayToMovingFalseU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m17048D2405653B7A6DF601C1BABCB0CC3D85C2FC (U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ButtonRightHandle/<DelayToMovingFalse>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayToMovingFalseU3Ed__2_System_Collections_IEnumerator_Reset_m9CAA961B2B40F397A7169852B37AB68AE74A6461 (U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayToMovingFalseU3Ed__2_System_Collections_IEnumerator_Reset_m9CAA961B2B40F397A7169852B37AB68AE74A6461_RuntimeMethod_var)));
	}
}
// System.Object ButtonRightHandle/<DelayToMovingFalse>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayToMovingFalseU3Ed__2_System_Collections_IEnumerator_get_Current_mA786E2CA6F224A77D250B786FB2B8257BE75955A (U3CDelayToMovingFalseU3Ed__2_tC539C5F2E4C9F4B79A9AC5B9930D1AA5F54A0843* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_m8EAAC188934ECCBD009EC00751280DCFF4D96C71 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// offset = new Vector3(0.3f, 0.3f, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.300000012f), (0.300000012f), L_2, /*hidden argument*/NULL);
		__this->___offset_5 = L_3;
		// transform.position = target.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___target_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___offset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_7, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_8, NULL);
		// }
		return;
	}
}
// System.Void CameraController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_FixedUpdate_m761C4930B57DFF182AE42820F172DEE05818717C (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tagetCamPos = target.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___offset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// transform.position = Vector3.Lerp(transform.position, tagetCamPos, smoothing * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = __this->___smoothing_6;
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_6, L_7, ((float)il2cpp_codegen_multiply(L_8, L_9)), NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_10, NULL);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_mE196A6332BDDED632D6F9DB6260E424594598950 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// private float smoothing = 5f;
		__this->___smoothing_6 = (5.0f);
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
// System.Void click_waypoints::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void click_waypoints_OnCollisionEnter2D_mF7509754E6E329BE07BC84B592CE88BDD7123C62 (click_waypoints_tE89B6E3AE40C872A9532B906B155C9986FB66B89* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag =="Player")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// waypoint_start.check=true;
		((waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3_StaticFields*)il2cpp_codegen_static_fields_for(waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3_il2cpp_TypeInfo_var))->___check_8 = (bool)1;
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void click_waypoints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void click_waypoints__ctor_mAE92B959B4BB7927A53C91CB6DECC73FC945802F (click_waypoints_tE89B6E3AE40C872A9532B906B155C9986FB66B89* __this, const RuntimeMethod* method) 
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
// System.Void Enemy_move::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_Start_m4628A7410DBCDCF9B8D40BE2E9C5253A6F3B1B3A (Enemy_move_tEAF715FA5453B0C5E658E937D87064E0A801614E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// coll = GetComponent<Collider2D>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0;
		L_0 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(__this, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		__this->___coll_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coll_9), (void*)L_0);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_10), (void*)L_1);
		// }
		return;
	}
}
// System.Void Enemy_move::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_Update_mAB2560B5569291C38B84B90BF68B984A039BA102 (Enemy_move_tEAF715FA5453B0C5E658E937D87064E0A801614E* __this, const RuntimeMethod* method) 
{
	{
		// Move();
		Enemy_move_Move_m46A0631433B7DCA05993E3EB13448C0CBF219245(__this, NULL);
		// }
		return;
	}
}
// System.Void Enemy_move::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_Move_m46A0631433B7DCA05993E3EB13448C0CBF219245 (Enemy_move_tEAF715FA5453B0C5E658E937D87064E0A801614E* __this, const RuntimeMethod* method) 
{
	{
		// if (facingLeft)
		bool L_0 = __this->___facingLeft_11;
		if (!L_0)
		{
			goto IL_0095;
		}
	}
	{
		// if (transform.position.x > leftCap)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4 = __this->___leftCap_4;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_008d;
		}
	}
	{
		// if (transform.localScale.x != 1)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = L_6.___x_2;
		if ((((float)L_7) == ((float)(1.0f))))
		{
			goto IL_0054;
		}
	}
	{
		// transform.localScale = new Vector3(1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_9), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_9, NULL);
	}

IL_0054:
	{
		// if (coll.IsTouchingLayers(ground))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_10 = __this->___coll_9;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = __this->___ground_8;
		int32_t L_12;
		L_12 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_11, NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = Collider2D_IsTouchingLayers_mD0EA867624BAA3F4E5AD48F812FF1962A67F21B9(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_011a;
		}
	}
	{
		// rb.velocity = new Vector2(-jumpLength, jumpHeight);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_14 = __this->___rb_10;
		float L_15 = __this->___jumpLength_6;
		float L_16 = __this->___jumpHeight_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((-L_15)), L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_14, L_17, NULL);
		return;
	}

IL_008d:
	{
		// facingLeft = false;
		__this->___facingLeft_11 = (bool)0;
		return;
	}

IL_0095:
	{
		// if (transform.position.x < rightCap)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___x_2;
		float L_21 = __this->___rightCap_5;
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_0113;
		}
	}
	{
		// if (transform.localScale.x != -1)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_22, NULL);
		float L_24 = L_23.___x_2;
		if ((((float)L_24) == ((float)(-1.0f))))
		{
			goto IL_00de;
		}
	}
	{
		// transform.localScale = new Vector3(-1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_26), (-1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_25, L_26, NULL);
	}

IL_00de:
	{
		// if (coll.IsTouchingLayers(ground))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_27 = __this->___coll_9;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_28 = __this->___ground_8;
		int32_t L_29;
		L_29 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_28, NULL);
		NullCheck(L_27);
		bool L_30;
		L_30 = Collider2D_IsTouchingLayers_mD0EA867624BAA3F4E5AD48F812FF1962A67F21B9(L_27, L_29, NULL);
		if (!L_30)
		{
			goto IL_011a;
		}
	}
	{
		// rb.velocity = new Vector2(jumpLength, jumpHeight);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_31 = __this->___rb_10;
		float L_32 = __this->___jumpLength_6;
		float L_33 = __this->___jumpHeight_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_31);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_31, L_34, NULL);
		return;
	}

IL_0113:
	{
		// facingLeft = true;
		__this->___facingLeft_11 = (bool)1;
	}

IL_011a:
	{
		// }
		return;
	}
}
// System.Void Enemy_move::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move__ctor_m384041BE8C1C5F284B6334B0AD6EDE8983B4023C (Enemy_move_tEAF715FA5453B0C5E658E937D87064E0A801614E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float jumpLength = 10f;
		__this->___jumpLength_6 = (10.0f);
		// [SerializeField] private float jumpHeight = 15f;
		__this->___jumpHeight_7 = (15.0f);
		// private bool facingLeft = true;
		__this->___facingLeft_11 = (bool)1;
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
// System.Void InputName::setname()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputName_setname_mA1638EE1529892125156E3F7C7D404E51A6F2361 (InputName_t933006C6959ED15288061056E9A449BB755DF635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// savename = inputtext.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___inputtext_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		__this->___savename_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___savename_4), (void*)L_1);
		// PlayerPrefs.SetString("name", savename);
		String_t* L_2 = __this->___savename_4;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_2, NULL);
		// SceneManager.LoadScene("MainMenu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, NULL);
		// }
		return;
	}
}
// System.Void InputName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputName__ctor_m08CBF2DD262682DFD551D6E23A8DD5657D4B0AB4 (InputName_t933006C6959ED15288061056E9A449BB755DF635* __this, const RuntimeMethod* method) 
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
// System.Void MainController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainController_Update_m1A6468A19E3ABB243A7601C9C73D88CECF2EF12B (MainController_tE084A72D51B125AA30DB8220A2EE35184D69BC59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nameofplayer = PlayerPrefs.GetString("name", "none");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, NULL);
		__this->___nameofplayer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nameofplayer_4), (void*)L_0);
		// loadedname.text = nameofplayer;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___loadedname_5;
		String_t* L_2 = __this->___nameofplayer_4;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void MainController::loadgame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainController_loadgame_mADB3B29E9F2843D5DB3A5DBE5B3D82CE91B80666 (MainController_tE084A72D51B125AA30DB8220A2EE35184D69BC59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("SampleScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, NULL);
		// }
		return;
	}
}
// System.Void MainController::loadgame2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainController_loadgame2_m0D7242801A928DCB3ABA4041BCF2BB1948784BDF (MainController_tE084A72D51B125AA30DB8220A2EE35184D69BC59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral743EDCAC6A947FFD1935E497F5077BF2575811AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("level2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral743EDCAC6A947FFD1935E497F5077BF2575811AC, NULL);
		// }
		return;
	}
}
// System.Void MainController::loadgame3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainController_loadgame3_mF33EFBD892851C792582C7FC162AF6518F09A820 (MainController_tE084A72D51B125AA30DB8220A2EE35184D69BC59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947610918E815EA32DDFB8A4CD7A91DD72C33DE7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("level3");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral947610918E815EA32DDFB8A4CD7A91DD72C33DE7, NULL);
		// }
		return;
	}
}
// System.Void MainController::loadgame4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainController_loadgame4_mA0DA14A13E2A91757FEB74A52583B8F3D145850A (MainController_tE084A72D51B125AA30DB8220A2EE35184D69BC59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD27FB8C857B99AB7846237A8679B6CF0E1DEAA03);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("level4");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralD27FB8C857B99AB7846237A8679B6CF0E1DEAA03, NULL);
		// }
		return;
	}
}
// System.Void MainController::back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainController_back_m1B8AF65A1249A4B0AF8747931BFA9B7B795B3F0F (MainController_tE084A72D51B125AA30DB8220A2EE35184D69BC59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA242E0EF74FB38B86DC60AEF5C5EF280284E5543);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("StartGame");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralA242E0EF74FB38B86DC60AEF5C5EF280284E5543, NULL);
		// }
		return;
	}
}
// System.Void MainController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainController__ctor_m9BB22F02006363F7D15E285BFA5FE89C019DCCCE (MainController_tE084A72D51B125AA30DB8220A2EE35184D69BC59* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m82639826DE098DC447C79B43900C5F2A630B3DC3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_23 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_23), (void*)__this);
		// }
		return;
	}
}
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3647728F8F740322CF5D86BD6CACB58879721BF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_0);
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_5), (void*)L_1);
		// coll = GetComponent<Collider2D>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2;
		L_2 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(__this, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		__this->___coll_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coll_7), (void*)L_2);
		// locationstart = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___locationstart_8 = L_4;
		// score = PlayerController.score;
		int32_t L_5 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10;
		((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10 = L_5;
		// textscore.text = " SCORE :" + score;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___textscore_9;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10), NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3647728F8F740322CF5D86BD6CACB58879721BF6, L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// name = PlayerPrefs.GetString("name", "none");
		String_t* L_9;
		L_9 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3647728F8F740322CF5D86BD6CACB58879721BF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC53D54A1693AB435FC7B249796B95A2188D95C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA0AA89382EC9FBF76CB9BBEAB1872B5A701BEAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Movement();
		PlayerController_Movement_mA3C0BF3320BCD093A506529BBBB6FE3B4EE65266(__this, NULL);
		// AnimationState();
		PlayerController_AnimationState_mDA0ADAC0FF1C5B81CF8B3386F4A6986F04B50F64(__this, NULL);
		// anim.SetInteger("state", (int)state);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_5;
		int32_t L_1 = __this->___state_6;
		NullCheck(L_0);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_0, _stringLiteralCA0AA89382EC9FBF76CB9BBEAB1872B5A701BEAA, L_1, NULL);
		// textscore.text = " SCORE :" + score;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___textscore_9;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10), NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3647728F8F740322CF5D86BD6CACB58879721BF6, L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// if (lifenum == 0)
		int32_t L_5 = __this->___lifenum_12;
		if (L_5)
		{
			goto IL_0053;
		}
	}
	{
		// SceneManager.LoadScene("DeathScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralC53D54A1693AB435FC7B249796B95A2188D95C30, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerEnter2D_mB82BB8D400DC3E0E6B7117AE1A94E72E99CF53FB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B0C356B8F65C82E29F3552BAB2FD17172148778);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCB273DF757968C8CCCCA5757E4C2F59C24EED69);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "save")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral2B0C356B8F65C82E29F3552BAB2FD17172148778, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// locationstart = collision.transform.position;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___locationstart_8 = L_6;
	}

IL_0028:
	{
		// if (collision.gameObject.tag == "Diamon")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___collision0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_8, NULL);
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralDCB273DF757968C8CCCCA5757E4C2F59C24EED69, NULL);
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		// diamonsound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___diamonsound_20;
		NullCheck(L_11);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
		// score += 10;
		int32_t L_12 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10;
		((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10 = ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)10)));
		// Destroy(collision.gameObject);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13 = ___collision0;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter2D_m28C67E4361403BA9990C1E6D9526F78362591667 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2619A50D640D12F7EAED94CD5A39DFCD03B99E2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFE892A0ED24D55AB70A14BBA5DA9D26F1E5D898);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Enemy")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_3)
		{
			goto IL_009d;
		}
	}
	{
		// if (state == State.falling)
		int32_t L_4 = __this->___state_6;
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_004f;
		}
	}
	{
		// score += 20;
		int32_t L_5 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10;
		((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)20)));
		// Destroy(collision.gameObject);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_6 = ___collision0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
		// damagesound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___damagesound_18;
		NullCheck(L_8);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_8, NULL);
		// Jump(false);
		PlayerController_Jump_mDD973327813FD0BB1987DA69DE12202231458A17(__this, (bool)0, NULL);
		goto IL_009d;
	}

IL_004f:
	{
		// transform.position = locationstart;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___locationstart_8;
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_10, NULL);
		// if (life.childCount > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___life_11;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_11, NULL);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_009d;
		}
	}
	{
		// lifenum--;
		int32_t L_13 = __this->___lifenum_12;
		__this->___lifenum_12 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		// deathsound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___deathsound_19;
		NullCheck(L_14);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_14, NULL);
		// Destroy(life.GetChild(0).gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___life_11;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_15, 0, NULL);
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_17, NULL);
	}

IL_009d:
	{
		// if (collision.gameObject.tag == "dbjump")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_18 = ___collision0;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_19, NULL);
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralAFE892A0ED24D55AB70A14BBA5DA9D26F1E5D898, NULL);
		if (!L_21)
		{
			goto IL_00c6;
		}
	}
	{
		// jumpsound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_22 = __this->___jumpsound_17;
		NullCheck(L_22);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_22, NULL);
		// Jump(true);
		PlayerController_Jump_mDD973327813FD0BB1987DA69DE12202231458A17(__this, (bool)1, NULL);
	}

IL_00c6:
	{
		// if (collision.gameObject.tag == "dead")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_23 = ___collision0;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_24, NULL);
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral2619A50D640D12F7EAED94CD5A39DFCD03B99E2A, NULL);
		if (!L_26)
		{
			goto IL_012b;
		}
	}
	{
		// if (life.childCount > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___life_11;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_27, NULL);
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_012b;
		}
	}
	{
		// lifenum--;
		int32_t L_29 = __this->___lifenum_12;
		__this->___lifenum_12 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
		// deathsound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_30 = __this->___deathsound_19;
		NullCheck(L_30);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_30, NULL);
		// transform.position = locationstart;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->___locationstart_8;
		NullCheck(L_31);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_32, NULL);
		// Destroy(life.GetChild(0).gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___life_11;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_33, 0, NULL);
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_35, NULL);
	}

IL_012b:
	{
		// if (collision.gameObject.tag == "win")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_36 = ___collision0;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_36, NULL);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_37, NULL);
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E, NULL);
		if (!L_39)
		{
			goto IL_015d;
		}
	}
	{
		// PlayerPrefs.GetString("name", "none");
		String_t* L_40;
		L_40 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, NULL);
		// SceneManager.LoadScene(sceneToLoad);
		String_t* L_41 = __this->___sceneToLoad_16;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_41, NULL);
	}

IL_015d:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Movement_mA3C0BF3320BCD093A506529BBBB6FE3B4EE65266 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral699A8607A92D339FB423EA08AF91007B45776237);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (moveLeft)
		bool L_0 = __this->___moveLeft_21;
		if (!L_0)
		{
			goto IL_0077;
		}
	}
	{
		// transform.position += Vector3.left * Time.deltaTime * speed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, L_5, NULL);
		float L_7 = __this->___speed_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_8, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_9, NULL);
		// anim.SetFloat("isrun",Mathf.Abs(Vector3.left.x));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___anim_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		float L_12 = L_11.___x_2;
		float L_13;
		L_13 = fabsf(L_12);
		NullCheck(L_10);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_10, _stringLiteral699A8607A92D339FB423EA08AF91007B45776237, L_13, NULL);
		// transform.localScale = new Vector2(-1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_15, NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_16, NULL);
		return;
	}

IL_0077:
	{
		// else if (moveRight)
		bool L_17 = __this->___moveRight_22;
		if (!L_17)
		{
			goto IL_00ee;
		}
	}
	{
		// transform.position += Vector3.right * Time.deltaTime * speed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		float L_22;
		L_22 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_21, L_22, NULL);
		float L_24 = __this->___speed_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_20, L_25, NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_26, NULL);
		// anim.SetFloat("isrun",Mathf.Abs(Vector3.right.x));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___anim_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		float L_29 = L_28.___x_2;
		float L_30;
		L_30 = fabsf(L_29);
		NullCheck(L_27);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_27, _stringLiteral699A8607A92D339FB423EA08AF91007B45776237, L_30, NULL);
		// transform.localScale = new Vector2(1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_32), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_32, NULL);
		NullCheck(L_31);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_31, L_33, NULL);
		return;
	}

IL_00ee:
	{
		// else if(!moveLeft && ! moveRight)
		bool L_34 = __this->___moveLeft_21;
		if (L_34)
		{
			goto IL_0113;
		}
	}
	{
		bool L_35 = __this->___moveRight_22;
		if (L_35)
		{
			goto IL_0113;
		}
	}
	{
		// anim.SetFloat("isrun", 0f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_36 = __this->___anim_5;
		NullCheck(L_36);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_36, _stringLiteral699A8607A92D339FB423EA08AF91007B45776237, (0.0f), NULL);
	}

IL_0113:
	{
		// }
		return;
	}
}
// System.Void PlayerController::PlayerJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_PlayerJump_m712E1AEE25B71C5E6F5B67364B6C87310E839658 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (coll.IsTouchingLayers(ground))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = __this->___coll_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = __this->___ground_13;
		int32_t L_2;
		L_2 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Collider2D_IsTouchingLayers_mD0EA867624BAA3F4E5AD48F812FF1962A67F21B9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// jumpsound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___jumpsound_17;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// Jump(false);
		PlayerController_Jump_mDD973327813FD0BB1987DA69DE12202231458A17(__this, (bool)0, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Jump(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Jump_mDD973327813FD0BB1987DA69DE12202231458A17 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___dbjump0, const RuntimeMethod* method) 
{
	{
		// if (dbjump)
		bool L_0 = ___dbjump0;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// rb.velocity = new Vector2(rb.velocity.x, 15f);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rb_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___rb_4;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_2, NULL);
		float L_4 = L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_4, (15.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_1, L_5, NULL);
		// state = State.jumping;
		__this->___state_6 = 2;
		return;
	}

IL_0030:
	{
		// rb.velocity = new Vector2(rb.velocity.x, jumpForce);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rb_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_7 = __this->___rb_4;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_7, NULL);
		float L_9 = L_8.___x_0;
		float L_10 = __this->___jumpForce_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_6, L_11, NULL);
		// state = State.jumping;
		__this->___state_6 = 2;
		// }
		return;
	}
}
// System.Void PlayerController::AnimationState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AnimationState_mDA0ADAC0FF1C5B81CF8B3386F4A6986F04B50F64 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (state == State.jumping)
		int32_t L_0 = __this->___state_6;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0028;
		}
	}
	{
		// if (rb.velocity.y < .1f)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rb_4;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_1, NULL);
		float L_3 = L_2.___y_1;
		if ((!(((float)L_3) < ((float)(0.100000001f)))))
		{
			goto IL_007c;
		}
	}
	{
		// state = State.falling;
		__this->___state_6 = 3;
		return;
	}

IL_0028:
	{
		// else if (state == State.falling)
		int32_t L_4 = __this->___state_6;
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0051;
		}
	}
	{
		// if (coll.IsTouchingLayers(ground))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = __this->___coll_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = __this->___ground_13;
		int32_t L_7;
		L_7 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_6, NULL);
		NullCheck(L_5);
		bool L_8;
		L_8 = Collider2D_IsTouchingLayers_mD0EA867624BAA3F4E5AD48F812FF1962A67F21B9(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// state = State.idle;
		__this->___state_6 = 0;
		return;
	}

IL_0051:
	{
		// else if (Mathf.Abs(rb.velocity.x) > 2f)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = __this->___rb_4;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_9, NULL);
		float L_11 = L_10.___x_0;
		float L_12;
		L_12 = fabsf(L_11);
		if ((!(((float)L_12) > ((float)(2.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		// state = State.running;
		__this->___state_6 = 1;
		return;
	}

IL_0075:
	{
		// state = State.idle;
		__this->___state_6 = 0;
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// public int lifenum = 5;
		__this->___lifenum_12 = 5;
		// [SerializeField] float speed = 10;
		__this->___speed_14 = (10.0f);
		// [SerializeField] float jumpForce = 10f;
		__this->___jumpForce_15 = (10.0f);
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
// System.Void PlayerName::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerName_Update_m22A5752F20F3A83825C99BFB7827D80660199448 (PlayerName_t4FB10FA10B61ED667AD156323EFAC6FD9B2A4EBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerController.score >= PlayerPrefs.GetInt("highscore", 0))
		int32_t L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, 0, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		// PlayerPrefs.SetInt("highscore", PlayerController.score);
		int32_t L_2 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, L_2, NULL);
		// scoretext.text = "High Score: " + PlayerController.score.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___scoretext_6;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10), NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54, L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		goto IL_0061;
	}

IL_0042:
	{
		// else scoretext.text = "Score: " + PlayerController.score.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___scoretext_6;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10), NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
	}

IL_0061:
	{
		// nameofplayer = PlayerPrefs.GetString("name", "none");
		String_t* L_9;
		L_9 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, NULL);
		__this->___nameofplayer_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nameofplayer_4), (void*)L_9);
		// loadedname.text = nameofplayer;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___loadedname_5;
		String_t* L_11 = __this->___nameofplayer_4;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		// }
		return;
	}
}
// System.Void PlayerName::playagain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerName_playagain_m8EEC0A34A20636479CA85A6ECB17388457B2D0BE (PlayerName_t4FB10FA10B61ED667AD156323EFAC6FD9B2A4EBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, NULL);
		// PlayerController.score = 0;
		((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10 = 0;
		// }
		return;
	}
}
// System.Void PlayerName::menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerName_menu_m8B340FF1BBBC3749144ACE59CEA73D54641DB74C (PlayerName_t4FB10FA10B61ED667AD156323EFAC6FD9B2A4EBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA242E0EF74FB38B86DC60AEF5C5EF280284E5543);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerController.score = 0;
		((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___score_10 = 0;
		// SceneManager.LoadScene("StartGame");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralA242E0EF74FB38B86DC60AEF5C5EF280284E5543, NULL);
		// }
		return;
	}
}
// System.Void PlayerName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerName__ctor_m6A0E1B5294743BE5BCBEA3BFF40025BB5F7FBF00 (PlayerName_t4FB10FA10B61ED667AD156323EFAC6FD9B2A4EBB* __this, const RuntimeMethod* method) 
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
// System.Void spin::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spin_Update_mE6CDDA290EA52059853AD9EEE72C330AB081A433 (spin_t530BC618A957CFD4476787D5C2F181AF2F5F4D1E* __this, const RuntimeMethod* method) 
{
	{
		// if (clockwise)
		bool L_0 = __this->___clockwise_5;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// transform.Rotate(Vector3.forward, Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		int32_t L_4 = __this->___speed_4;
		NullCheck(L_1);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_1, L_2, ((float)il2cpp_codegen_multiply(L_3, ((float)L_4))), NULL);
		return;
	}

IL_0026:
	{
		// transform.Rotate(Vector3.back, Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline(NULL);
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		int32_t L_8 = __this->___speed_4;
		NullCheck(L_5);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_5, L_6, ((float)il2cpp_codegen_multiply(L_7, ((float)L_8))), NULL);
		// }
		return;
	}
}
// System.Void spin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spin__ctor_m662A9DE3751B6E26A355C82E4DAF1DE1076A2510 (spin_t530BC618A957CFD4476787D5C2F181AF2F5F4D1E* __this, const RuntimeMethod* method) 
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
// System.Void VolumeChange::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeChange_Start_m5252C2F900A0DB9DDE590DAF36DAC76E19B7C003 (VolumeChange_tEF4E584A2D7AB40B39049B8806B4D6EB2E585756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral147DA2CCEB648D3E3A2F506354531468CFFA01DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PlayerPrefs.HasKey("musicvolume"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral147DA2CCEB648D3E3A2F506354531468CFFA01DE, NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// PlayerPrefs.SetFloat("musicvolume", 1);
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral147DA2CCEB648D3E3A2F506354531468CFFA01DE, (1.0f), NULL);
		// Load();
		VolumeChange_Load_mC05CA549D040F2205366932FD034B16055BC3124(__this, NULL);
		return;
	}

IL_0022:
	{
		// Load();
		VolumeChange_Load_mC05CA549D040F2205366932FD034B16055BC3124(__this, NULL);
		// }
		return;
	}
}
// System.Void VolumeChange::changevolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeChange_changevolume_mF2D6CD6054854638BAF02B33C1E81307DD80004D (VolumeChange_tEF4E584A2D7AB40B39049B8806B4D6EB2E585756* __this, const RuntimeMethod* method) 
{
	{
		// AudioListener.volume = volumeslider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___volumeslider_4;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		AudioListener_set_volume_mC13591F71DDD0B3A64E52E475260050E89F64C9A(L_1, NULL);
		// Save();
		VolumeChange_Save_mBA5E9CCF59CA0B6000ACCC7CF59C22C19447A7CA(__this, NULL);
		// }
		return;
	}
}
// System.Void VolumeChange::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeChange_Load_mC05CA549D040F2205366932FD034B16055BC3124 (VolumeChange_tEF4E584A2D7AB40B39049B8806B4D6EB2E585756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral147DA2CCEB648D3E3A2F506354531468CFFA01DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// volumeslider.value = PlayerPrefs.GetFloat("musicvolume");
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___volumeslider_4;
		float L_1;
		L_1 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(_stringLiteral147DA2CCEB648D3E3A2F506354531468CFFA01DE, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void VolumeChange::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeChange_Save_mBA5E9CCF59CA0B6000ACCC7CF59C22C19447A7CA (VolumeChange_tEF4E584A2D7AB40B39049B8806B4D6EB2E585756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral147DA2CCEB648D3E3A2F506354531468CFFA01DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("musicvolume", volumeslider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___volumeslider_4;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral147DA2CCEB648D3E3A2F506354531468CFFA01DE, L_1, NULL);
		// }
		return;
	}
}
// System.Void VolumeChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeChange__ctor_mD5B42745DCF1B7028A17AFA12613DF888504560A (VolumeChange_tEF4E584A2D7AB40B39049B8806B4D6EB2E585756* __this, const RuntimeMethod* method) 
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
// System.Void Waypoints::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoints_Start_m97CC5C37A65128FBA8E9208ACEEE4C8FC01E491E (Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = waypoints [waypointIndex].transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->___waypoints_4;
		int32_t L_2 = __this->___waypointIndex_6;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void Waypoints::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoints_Update_m8CE915785794B82D29BAF32BEE800EC851F7203E (Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407* __this, const RuntimeMethod* method) 
{
	{
		// Move();
		Waypoints_Move_m2DEE7027079EC09BB7894947F3980B90F6674DB0(__this, NULL);
		// }
		return;
	}
}
// System.Void Waypoints::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoints_Move_m2DEE7027079EC09BB7894947F3980B90F6674DB0 (Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = Vector2.MoveTowards(
		//     transform.position,waypoints[waypointIndex].transform.position,movespeed*Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_2, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = __this->___waypoints_4;
		int32_t L_5 = __this->___waypointIndex_6;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_9, NULL);
		float L_11 = __this->___movespeed_5;
		float L_12;
		L_12 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline(L_3, L_10, ((float)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_13, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_14, NULL);
		// if(transform.position == waypoints[waypointIndex].transform.position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_17 = __this->___waypoints_4;
		int32_t L_18 = __this->___waypointIndex_6;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		bool L_23;
		L_23 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_16, L_22, NULL);
		if (!L_23)
		{
			goto IL_0084;
		}
	}
	{
		// waypointIndex+=1;
		int32_t L_24 = __this->___waypointIndex_6;
		__this->___waypointIndex_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0084:
	{
		// if(waypointIndex == waypoints.Length)
		int32_t L_25 = __this->___waypointIndex_6;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_26 = __this->___waypoints_4;
		NullCheck(L_26);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_009b;
		}
	}
	{
		// waypointIndex = 0;
		__this->___waypointIndex_6 = 0;
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void Waypoints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoints__ctor_m413549DD06D2A1C2C57C63E6712357CD06DA64E4 (Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float movespeed = 2f;
		__this->___movespeed_5 = (2.0f);
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
// System.Void waypoint_start::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void waypoint_start_Start_m6F6B0944A9BC6B8EDCCA46E9B0619763EA97324B (waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// coll = GetComponent<Collider2D>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0;
		L_0 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(__this, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		__this->___coll_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coll_4), (void*)L_0);
		// transform.position = waypoints[waypointIndex].transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___waypoints_5;
		int32_t L_3 = __this->___waypointIndex_7;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_7, NULL);
		// }
		return;
	}
}
// System.Void waypoint_start::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void waypoint_start_Update_mCAFDAD7840A06D943D4188A23185607254BA599A (waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Move(check);
		bool L_0 = ((waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3_StaticFields*)il2cpp_codegen_static_fields_for(waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3_il2cpp_TypeInfo_var))->___check_8;
		waypoint_start_Move_m9BCF492E44CDA7E25EAC094E21CF92BA02BA3746(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void waypoint_start::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void waypoint_start_OnCollisionEnter2D_mAA30EA1D42FB1DB0306208943256EFBE18F5C666 (waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// Move(true);
		waypoint_start_Move_m9BCF492E44CDA7E25EAC094E21CF92BA02BA3746(__this, (bool)1, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void waypoint_start::Move(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void waypoint_start_Move_m9BCF492E44CDA7E25EAC094E21CF92BA02BA3746 (waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3* __this, bool ___ply0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ply == true)
		bool L_0 = ___ply0;
		if (!L_0)
		{
			goto IL_00a8;
		}
	}
	{
		// transform.position = Vector2.MoveTowards(
		// transform.position, waypoints[waypointIndex].transform.position, movespeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_3, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = __this->___waypoints_5;
		int32_t L_6 = __this->___waypointIndex_7;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_10, NULL);
		float L_12 = __this->___movespeed_6;
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline(L_4, L_11, ((float)il2cpp_codegen_multiply(L_12, L_13)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_14, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_15, NULL);
		// if (transform.position == waypoints[waypointIndex].transform.position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_18 = __this->___waypoints_5;
		int32_t L_19 = __this->___waypointIndex_7;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		bool L_24;
		L_24 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_17, L_23, NULL);
		if (!L_24)
		{
			goto IL_008a;
		}
	}
	{
		// waypointIndex += 1;
		int32_t L_25 = __this->___waypointIndex_7;
		__this->___waypointIndex_7 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_008a:
	{
		// if (waypointIndex == waypoints.Length)
		int32_t L_26 = __this->___waypointIndex_7;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_27 = __this->___waypoints_5;
		NullCheck(L_27);
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_00a1;
		}
	}
	{
		// waypointIndex = 0;
		__this->___waypointIndex_7 = 0;
	}

IL_00a1:
	{
		// check = false;
		((waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3_StaticFields*)il2cpp_codegen_static_fields_for(waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3_il2cpp_TypeInfo_var))->___check_8 = (bool)0;
		return;
	}

IL_00a8:
	{
		//  transform.position = Vector2.MoveTowards(
		// transform.position, waypoints[waypointIndex].transform.position, movespeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_30, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = __this->___waypoints_5;
		int32_t L_33 = __this->___waypointIndex_7;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_37, NULL);
		float L_39 = __this->___movespeed_6;
		float L_40;
		L_40 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline(L_31, L_38, ((float)il2cpp_codegen_multiply(L_39, L_40)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_41, NULL);
		NullCheck(L_28);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_28, L_42, NULL);
		// if (transform.position == waypoints[waypointIndex].transform.position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_45 = __this->___waypoints_5;
		int32_t L_46 = __this->___waypointIndex_7;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		bool L_51;
		L_51 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_44, L_50, NULL);
		if (!L_51)
		{
			goto IL_012a;
		}
	}
	{
		// waypointIndex += 0;
		int32_t L_52 = __this->___waypointIndex_7;
		__this->___waypointIndex_7 = L_52;
	}

IL_012a:
	{
		// if (waypointIndex == waypoints.Length)
		int32_t L_53 = __this->___waypointIndex_7;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_54 = __this->___waypoints_5;
		NullCheck(L_54);
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
		{
			goto IL_0141;
		}
	}
	{
		// waypointIndex = 0;
		__this->___waypointIndex_7 = 0;
	}

IL_0141:
	{
		// check = false;
		((waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3_StaticFields*)il2cpp_codegen_static_fields_for(waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3_il2cpp_TypeInfo_var))->___check_8 = (bool)0;
		// }
		return;
	}
}
// System.Void waypoint_start::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void waypoint_start__ctor_m47264A2E4D894E3CAA4477FF048A13F2FB947BD7 (waypoint_start_t28284494E47397DAEA8438B9E9B72498240841F3* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float movespeed = 2f;
		__this->___movespeed_6 = (2.0f);
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
// System.Void sign::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sign_OnTriggerEnter2D_m73A42626A94FE8C479086866B151393C18B0AE09 (sign_tD8A0242AD4EB066EBB48A23C2DF8C96AC9EC57C7* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var player=collision.gameObject.GetComponent<PlayerController>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2;
		L_2 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_1, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		// if(player != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// guide.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___guide_4;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void sign::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sign_OnTriggerExit2D_m73C8900619C6AFE2624BC7CBBE18776D14025859 (sign_tD8A0242AD4EB066EBB48A23C2DF8C96AC9EC57C7* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var player = collision.gameObject.GetComponent<PlayerController>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2;
		L_2 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_1, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		// if (player != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// guide.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___guide_4;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void sign::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sign__ctor_m69BF0F6D9944EAD27ED0188879C80E1C32BD0C59 (sign_tD8A0242AD4EB066EBB48A23C2DF8C96AC9EC57C7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___target1;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___current0;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___target1;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___current0;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))));
		float L_12 = V_2;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}
	{
		float L_13 = ___maxDistanceDelta2;
		if ((!(((float)L_13) >= ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		float L_14 = V_2;
		float L_15 = ___maxDistanceDelta2;
		float L_16 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_14) <= ((float)((float)il2cpp_codegen_multiply(L_15, L_16)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		G_B6_0 = G_B4_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 1;
	}

IL_0044:
	{
		V_4 = (bool)G_B6_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_004f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___target1;
		V_5 = L_18;
		goto IL_0079;
	}

IL_004f:
	{
		float L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = sqrt(((double)L_19));
		V_3 = ((float)L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___current0;
		float L_22 = L_21.___x_0;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___current0;
		float L_27 = L_26.___y_1;
		float L_28 = V_1;
		float L_29 = V_3;
		float L_30 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)(L_23/L_24)), L_25)))), ((float)il2cpp_codegen_add(L_27, ((float)il2cpp_codegen_multiply(((float)(L_28/L_29)), L_30)))), /*hidden argument*/NULL);
		V_5 = L_31;
		goto IL_0079;
	}

IL_0079:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_5;
		return L_32;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
