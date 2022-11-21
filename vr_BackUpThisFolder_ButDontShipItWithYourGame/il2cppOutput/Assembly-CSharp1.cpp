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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.ObjectModel.Collection`1<System.String>
struct Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Diagnostics.AsyncStreamReader
struct AsyncStreamReader_tAC4F4C9FDA0C1A8D21F2B1C838C08C0E83AE871B;
// SojaExiles.BRGlassDoor
struct BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// SojaExiles.ClosetopencloseDoor
struct ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933;
// RockVR.Common.CmdProcess
struct CmdProcess_t7FCD9378DE95A393300CC2D3043727F032F25207;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// SojaExiles.Drawer_Pull_X
struct Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2;
// SojaExiles.Drawer_Pull_Z
struct Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542;
// SojaExiles.Drawer_Pull_Zopp
struct Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// RockVR.Common.EventDelegate
struct EventDelegate_tC71DE20BCF2429DD02515F600623D398EF2D41E2;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// RockVR.Common.FPSDisplay
struct FPSDisplay_tBDEFBA13574BDB1FA0A51D564581B760559021D8;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t94542FC52B3B1FCA7BC4D8CC518FC2EF9870861F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// SojaExiles.MouseLook
struct MouseLook_tC23F7E839420EA476CD0FD1194A98C3304860D16;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// SojaExiles.OvenFlip
struct OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7;
// RockVR.Common.Platform
struct Platform_t771BD36F6075EF34CC89ED29AB94DD356D5BF9C1;
// SojaExiles.PlayerMovement
struct PlayerMovement_tDE6A0E9E0CC3347F30021417F6ED4FA6A533734D;
// System.Diagnostics.Process
struct Process_tF74794C64BCE464912BF158980B347CE66AF203B;
// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_tB2EBC893262A796A0182EDF0022F0B08E30461EE;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C;
// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t9E9F6B3EB7E8031736898D77DD88F2BD29740971;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t5AEE89AB4B4A54EAC5B66A72A0D7D2EF8C82EC86;
// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_tA260D4420C5F481A5DA030FFB19D038BBF8A63CB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SojaExiles.SceneSwitchGen
struct SceneSwitchGen_tA7C5751FB40D835ECBBC648C7DCF329367578B6D;
// System.Security.SecureString
struct SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
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
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// SojaExiles.opencloseDoor
struct opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815;
// SojaExiles.opencloseDoor1
struct opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C;
// SojaExiles.opencloseSlide
struct opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775;
// SojaExiles.opencloseWindow
struct opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F;
// SojaExiles.opencloseWindow1
struct opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12;
// SojaExiles.opencloseWindowApt
struct opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A;
// SojaExiles.BRGlassDoor/<closing>d__6
struct U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598;
// SojaExiles.BRGlassDoor/<opening>d__5
struct U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657;
// SojaExiles.ClosetopencloseDoor/<closing>d__6
struct U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0;
// SojaExiles.ClosetopencloseDoor/<opening>d__5
struct U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461;
// SojaExiles.Drawer_Pull_X/<closing>d__6
struct U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2;
// SojaExiles.Drawer_Pull_X/<opening>d__5
struct U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F;
// SojaExiles.Drawer_Pull_Z/<closing>d__6
struct U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A;
// SojaExiles.Drawer_Pull_Z/<opening>d__5
struct U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD;
// SojaExiles.Drawer_Pull_Zopp/<closing>d__6
struct U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6;
// SojaExiles.Drawer_Pull_Zopp/<opening>d__5
struct U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114;
// RockVR.Common.EventDelegate/CompleteDelegate
struct CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794;
// RockVR.Common.EventDelegate/ErrorDelegate
struct ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// SojaExiles.OvenFlip/<closing>d__6
struct U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04;
// SojaExiles.OvenFlip/<opening>d__5
struct U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E;
// SojaExiles.opencloseDoor/<closing>d__6
struct U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA;
// SojaExiles.opencloseDoor/<opening>d__5
struct U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450;
// SojaExiles.opencloseDoor1/<closing>d__6
struct U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81;
// SojaExiles.opencloseDoor1/<opening>d__5
struct U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B;
// SojaExiles.opencloseSlide/<closing>d__6
struct U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488;
// SojaExiles.opencloseSlide/<opening>d__5
struct U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11;
// SojaExiles.opencloseWindow/<closing>d__6
struct U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD;
// SojaExiles.opencloseWindow/<opening>d__5
struct U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11;
// SojaExiles.opencloseWindow1/<closing>d__6
struct U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614;
// SojaExiles.opencloseWindow1/<opening>d__5
struct U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04;
// SojaExiles.opencloseWindowApt/<closing>d__6
struct U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828;
// SojaExiles.opencloseWindowApt/<opening>d__5
struct U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Process_tF74794C64BCE464912BF158980B347CE66AF203B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0561A578F08EC273CC9F9E211D782DC093FD62B1;
IL2CPP_EXTERN_C String_t* _stringLiteral0A59932C5138929B51C1C18758A3203B905A4E50;
IL2CPP_EXTERN_C String_t* _stringLiteral0C805D7E3DFDE2DEB55FAC78B382FAD3A7B38B9B;
IL2CPP_EXTERN_C String_t* _stringLiteral109F5A6B52D92F2F8FF0B5B430CB41B73B99B119;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE;
IL2CPP_EXTERN_C String_t* _stringLiteral23BC23743CA78CCF7AA374847689BBDC815DD7B2;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5;
IL2CPP_EXTERN_C String_t* _stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC87920B1442F3D7F9BCF13099BFFCAC6A70535;
IL2CPP_EXTERN_C String_t* _stringLiteral437D4B096877A1450EC9D7A7C4C35431EA2B2FC8;
IL2CPP_EXTERN_C String_t* _stringLiteral47FAEBE5EC379397CF8B55738A695B6AC8818808;
IL2CPP_EXTERN_C String_t* _stringLiteral4847371B759FDF692A434C86CB9CFEE40508E781;
IL2CPP_EXTERN_C String_t* _stringLiteral59EFA2332155424C07015805E9D5F807DD21B3E1;
IL2CPP_EXTERN_C String_t* _stringLiteral5B1CC9D75C46F3CE861C1A12EC0A39C3E5433142;
IL2CPP_EXTERN_C String_t* _stringLiteral66D6A148312038979105AD3EA93817F9E0F747CD;
IL2CPP_EXTERN_C String_t* _stringLiteral6CADD907942F3914D6A7E949952BB1C42CE6C391;
IL2CPP_EXTERN_C String_t* _stringLiteral6F3D9BE4D9B1B08BF5AFE1CA9BCD257AF0EA166D;
IL2CPP_EXTERN_C String_t* _stringLiteral7200D5866E871F59E7DA92E1BD52300F5C0CDD03;
IL2CPP_EXTERN_C String_t* _stringLiteral7A7828FB78B3C4D82B5446606B01D969319FB2EA;
IL2CPP_EXTERN_C String_t* _stringLiteral7B2AC819D685C53DB85CB6CAE6716753B4BBC6CA;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3F3886383FDEDF8965C8E930CA0DE3CA08E32C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral892592B1C2CE8A81762451C62622E4CD5FEA587B;
IL2CPP_EXTERN_C String_t* _stringLiteral8DB46F804A221B05881E2D7D919F77DB08A24B32;
IL2CPP_EXTERN_C String_t* _stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F;
IL2CPP_EXTERN_C String_t* _stringLiteralA860EF323F0B7701FB8C8E4116345741D4FFA0D7;
IL2CPP_EXTERN_C String_t* _stringLiteralB121005DC90DD3C413CC8D629A257458F59C6CB0;
IL2CPP_EXTERN_C String_t* _stringLiteralC2AB32CC9B83B9D140DB6263F664E20DF3DB0082;
IL2CPP_EXTERN_C String_t* _stringLiteralCA865455948A6585C99F08AAE4C564A0F4992F78;
IL2CPP_EXTERN_C String_t* _stringLiteralCEC6EACB0EC6BEF0C62E54C19D8F90E01DE0C908;
IL2CPP_EXTERN_C String_t* _stringLiteralD14233E7783951F635FA33EC66C4039886C0C5FD;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F4565D879A5EE081D0C86E94468CA47F45179F;
IL2CPP_EXTERN_C String_t* _stringLiteralDAB2EF6A513D0DA1F97A043466EEE33AC438423E;
IL2CPP_EXTERN_C String_t* _stringLiteralDEA5DAB9D21EFA1911E11B56ED81850A27AC9237;
IL2CPP_EXTERN_C String_t* _stringLiteralDF8AA25C085A64ACFDAE1B7E484722F06A782742;
IL2CPP_EXTERN_C String_t* _stringLiteralF3A75D921A32532B9A0A2F8A4018127ABD2C0687;
IL2CPP_EXTERN_C String_t* _stringLiteralF91D27828858E0E934FC7DADAF6886D7611EF3E8;
IL2CPP_EXTERN_C String_t* _stringLiteralFB6A7C80E1017EC35DBFE2CF7268C25730B94A7F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m0DAFF4556E1EE512D96E1AFB2A60F4B9308EF53D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m1CF7C289DF87B534BA5FB5C6A4A9B0C94C797677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m31C3AE5A139C3C7C67115720F2ADC7A8D8EA7AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m53ABE4EF226D2D0F19F388E7CFD1C1DDF11D82A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m9A62DF96621F7D40E2CC7B827A2D8D3F2D8F529F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mA9A68B4C592F955D54C7C21457234107AE6B9B5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mAB0C23610C406D3AD6F34CDAAC18CDEEDB8C80F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mABF6E9F31D654229EF462C3B9C6B6A3108E16333_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mCD5D6F2064E4B2D85B86CF138AE68EE891962390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mCE61C75F93991C0B66FA1B60A8EE32B02C828474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mD30975A8C4205DEFD6B3E90F6E3323714AA8D615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mF61208B891A997E6A73B16273AC4FE6C9BE18FEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m012A9CBE69059A1EE21B0EB45D3CB59675CC4A0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m11E7AD90FC73C8ADF5BD97168F770620FBED8AFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m2ADFAF116A418924AA6A5F95464CA8E3126C0B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m32B10BD387958767CADF558C026070CC17F315C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m7B303F20E2062A906064DF392A6FD4F9A2BA7A80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m92F3A640FB35F9CAE67200AC68BCAC34178F3D20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m94177105AF9597696ABEFDAEC612A96F40E35B6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mC3402E24902781283F53834B88C0837CB2610D26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mC9D552A1F31691A3BA354F9269AA6C349BC741C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mE20CB6CC97F692A15040D4285B0C2500F8F54B04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mEF1E94F83DA516ECFD272ADF2276CA0924A4954D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mFFFAFF2555FC8785260F4E6430EF6BA4B08B8D13_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// RockVR.Common.CmdProcess
struct CmdProcess_t7FCD9378DE95A393300CC2D3043727F032F25207  : public RuntimeObject
{
};

// RockVR.Common.EventDelegate
struct EventDelegate_tC71DE20BCF2429DD02515F600623D398EF2D41E2  : public RuntimeObject
{
	// RockVR.Common.EventDelegate/ErrorDelegate RockVR.Common.EventDelegate::OnError
	ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626* ___OnError_0;
	// RockVR.Common.EventDelegate/CompleteDelegate RockVR.Common.EventDelegate::OnComplete
	CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794* ___OnComplete_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// RockVR.Common.Platform
struct Platform_t771BD36F6075EF34CC89ED29AB94DD356D5BF9C1  : public RuntimeObject
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

// SojaExiles.BRGlassDoor/<closing>d__6
struct U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598  : public RuntimeObject
{
	// System.Int32 SojaExiles.BRGlassDoor/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.BRGlassDoor/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.BRGlassDoor SojaExiles.BRGlassDoor/<closing>d__6::<>4__this
	BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* ___U3CU3E4__this_2;
};

// SojaExiles.BRGlassDoor/<opening>d__5
struct U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657  : public RuntimeObject
{
	// System.Int32 SojaExiles.BRGlassDoor/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.BRGlassDoor/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.BRGlassDoor SojaExiles.BRGlassDoor/<opening>d__5::<>4__this
	BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* ___U3CU3E4__this_2;
};

// SojaExiles.ClosetopencloseDoor/<closing>d__6
struct U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0  : public RuntimeObject
{
	// System.Int32 SojaExiles.ClosetopencloseDoor/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.ClosetopencloseDoor/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.ClosetopencloseDoor SojaExiles.ClosetopencloseDoor/<closing>d__6::<>4__this
	ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* ___U3CU3E4__this_2;
};

// SojaExiles.ClosetopencloseDoor/<opening>d__5
struct U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461  : public RuntimeObject
{
	// System.Int32 SojaExiles.ClosetopencloseDoor/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.ClosetopencloseDoor/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.ClosetopencloseDoor SojaExiles.ClosetopencloseDoor/<opening>d__5::<>4__this
	ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* ___U3CU3E4__this_2;
};

// SojaExiles.Drawer_Pull_X/<closing>d__6
struct U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2  : public RuntimeObject
{
	// System.Int32 SojaExiles.Drawer_Pull_X/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.Drawer_Pull_X/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.Drawer_Pull_X SojaExiles.Drawer_Pull_X/<closing>d__6::<>4__this
	Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* ___U3CU3E4__this_2;
};

// SojaExiles.Drawer_Pull_X/<opening>d__5
struct U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F  : public RuntimeObject
{
	// System.Int32 SojaExiles.Drawer_Pull_X/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.Drawer_Pull_X/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.Drawer_Pull_X SojaExiles.Drawer_Pull_X/<opening>d__5::<>4__this
	Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* ___U3CU3E4__this_2;
};

// SojaExiles.Drawer_Pull_Z/<closing>d__6
struct U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A  : public RuntimeObject
{
	// System.Int32 SojaExiles.Drawer_Pull_Z/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.Drawer_Pull_Z/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.Drawer_Pull_Z SojaExiles.Drawer_Pull_Z/<closing>d__6::<>4__this
	Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* ___U3CU3E4__this_2;
};

// SojaExiles.Drawer_Pull_Z/<opening>d__5
struct U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD  : public RuntimeObject
{
	// System.Int32 SojaExiles.Drawer_Pull_Z/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.Drawer_Pull_Z/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.Drawer_Pull_Z SojaExiles.Drawer_Pull_Z/<opening>d__5::<>4__this
	Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* ___U3CU3E4__this_2;
};

// SojaExiles.Drawer_Pull_Zopp/<closing>d__6
struct U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6  : public RuntimeObject
{
	// System.Int32 SojaExiles.Drawer_Pull_Zopp/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.Drawer_Pull_Zopp/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.Drawer_Pull_Zopp SojaExiles.Drawer_Pull_Zopp/<closing>d__6::<>4__this
	Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* ___U3CU3E4__this_2;
};

// SojaExiles.Drawer_Pull_Zopp/<opening>d__5
struct U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114  : public RuntimeObject
{
	// System.Int32 SojaExiles.Drawer_Pull_Zopp/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.Drawer_Pull_Zopp/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.Drawer_Pull_Zopp SojaExiles.Drawer_Pull_Zopp/<opening>d__5::<>4__this
	Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* ___U3CU3E4__this_2;
};

// SojaExiles.OvenFlip/<closing>d__6
struct U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04  : public RuntimeObject
{
	// System.Int32 SojaExiles.OvenFlip/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.OvenFlip/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.OvenFlip SojaExiles.OvenFlip/<closing>d__6::<>4__this
	OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* ___U3CU3E4__this_2;
};

// SojaExiles.OvenFlip/<opening>d__5
struct U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E  : public RuntimeObject
{
	// System.Int32 SojaExiles.OvenFlip/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.OvenFlip/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.OvenFlip SojaExiles.OvenFlip/<opening>d__5::<>4__this
	OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseDoor/<closing>d__6
struct U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseDoor/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseDoor/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseDoor SojaExiles.opencloseDoor/<closing>d__6::<>4__this
	opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseDoor/<opening>d__5
struct U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseDoor/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseDoor/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseDoor SojaExiles.opencloseDoor/<opening>d__5::<>4__this
	opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseDoor1/<closing>d__6
struct U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseDoor1/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseDoor1/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseDoor1 SojaExiles.opencloseDoor1/<closing>d__6::<>4__this
	opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseDoor1/<opening>d__5
struct U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseDoor1/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseDoor1/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseDoor1 SojaExiles.opencloseDoor1/<opening>d__5::<>4__this
	opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseSlide/<closing>d__6
struct U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseSlide/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseSlide/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseSlide SojaExiles.opencloseSlide/<closing>d__6::<>4__this
	opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseSlide/<opening>d__5
struct U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseSlide/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseSlide/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseSlide SojaExiles.opencloseSlide/<opening>d__5::<>4__this
	opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseWindow/<closing>d__6
struct U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseWindow/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseWindow/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseWindow SojaExiles.opencloseWindow/<closing>d__6::<>4__this
	opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseWindow/<opening>d__5
struct U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseWindow/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseWindow/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseWindow SojaExiles.opencloseWindow/<opening>d__5::<>4__this
	opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseWindow1/<closing>d__6
struct U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseWindow1/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseWindow1/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseWindow1 SojaExiles.opencloseWindow1/<closing>d__6::<>4__this
	opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseWindow1/<opening>d__5
struct U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseWindow1/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseWindow1/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseWindow1 SojaExiles.opencloseWindow1/<opening>d__5::<>4__this
	opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseWindowApt/<closing>d__6
struct U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseWindowApt/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseWindowApt/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseWindowApt SojaExiles.opencloseWindowApt/<closing>d__6::<>4__this
	opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseWindowApt/<opening>d__5
struct U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseWindowApt/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseWindowApt/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseWindowApt SojaExiles.opencloseWindowApt/<opening>d__5::<>4__this
	opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* ___U3CU3E4__this_2;
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

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events_3;
};

struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject* ___EventDisposed_1;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D_0;
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

// System.Diagnostics.Process
struct Process_tF74794C64BCE464912BF158980B347CE66AF203B  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	// System.Boolean System.Diagnostics.Process::haveProcessId
	bool ___haveProcessId_4;
	// System.Int32 System.Diagnostics.Process::processId
	int32_t ___processId_5;
	// System.Boolean System.Diagnostics.Process::haveProcessHandle
	bool ___haveProcessHandle_6;
	// Microsoft.Win32.SafeHandles.SafeProcessHandle System.Diagnostics.Process::m_processHandle
	SafeProcessHandle_tA260D4420C5F481A5DA030FFB19D038BBF8A63CB* ___m_processHandle_7;
	// System.Boolean System.Diagnostics.Process::isRemoteMachine
	bool ___isRemoteMachine_8;
	// System.String System.Diagnostics.Process::machineName
	String_t* ___machineName_9;
	// System.Int32 System.Diagnostics.Process::m_processAccess
	int32_t ___m_processAccess_10;
	// System.Diagnostics.ProcessThreadCollection System.Diagnostics.Process::threads
	ProcessThreadCollection_t9E9F6B3EB7E8031736898D77DD88F2BD29740971* ___threads_11;
	// System.Diagnostics.ProcessModuleCollection System.Diagnostics.Process::modules
	ProcessModuleCollection_tB2EBC893262A796A0182EDF0022F0B08E30461EE* ___modules_12;
	// System.Boolean System.Diagnostics.Process::haveWorkingSetLimits
	bool ___haveWorkingSetLimits_13;
	// System.Boolean System.Diagnostics.Process::havePriorityClass
	bool ___havePriorityClass_14;
	// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::startInfo
	ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* ___startInfo_15;
	// System.Boolean System.Diagnostics.Process::watchForExit
	bool ___watchForExit_16;
	// System.Boolean System.Diagnostics.Process::watchingForExit
	bool ___watchingForExit_17;
	// System.EventHandler System.Diagnostics.Process::onExited
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___onExited_18;
	// System.Boolean System.Diagnostics.Process::exited
	bool ___exited_19;
	// System.Int32 System.Diagnostics.Process::exitCode
	int32_t ___exitCode_20;
	// System.Boolean System.Diagnostics.Process::signaled
	bool ___signaled_21;
	// System.Boolean System.Diagnostics.Process::haveExitTime
	bool ___haveExitTime_22;
	// System.Boolean System.Diagnostics.Process::raisedOnExited
	bool ___raisedOnExited_23;
	// System.Threading.RegisteredWaitHandle System.Diagnostics.Process::registeredWaitHandle
	RegisteredWaitHandle_t5AEE89AB4B4A54EAC5B66A72A0D7D2EF8C82EC86* ___registeredWaitHandle_24;
	// System.Threading.WaitHandle System.Diagnostics.Process::waitHandle
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* ___waitHandle_25;
	// System.ComponentModel.ISynchronizeInvoke System.Diagnostics.Process::synchronizingObject
	RuntimeObject* ___synchronizingObject_26;
	// System.IO.StreamReader System.Diagnostics.Process::standardOutput
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___standardOutput_27;
	// System.IO.StreamWriter System.Diagnostics.Process::standardInput
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___standardInput_28;
	// System.IO.StreamReader System.Diagnostics.Process::standardError
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___standardError_29;
	// System.Boolean System.Diagnostics.Process::disposed
	bool ___disposed_30;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::outputStreamReadMode
	int32_t ___outputStreamReadMode_31;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::errorStreamReadMode
	int32_t ___errorStreamReadMode_32;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::inputStreamReadMode
	int32_t ___inputStreamReadMode_33;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::output
	AsyncStreamReader_tAC4F4C9FDA0C1A8D21F2B1C838C08C0E83AE871B* ___output_34;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::error
	AsyncStreamReader_tAC4F4C9FDA0C1A8D21F2B1C838C08C0E83AE871B* ___error_35;
	// System.String System.Diagnostics.Process::process_name
	String_t* ___process_name_36;
};

// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C  : public RuntimeObject
{
	// System.String System.Diagnostics.ProcessStartInfo::fileName
	String_t* ___fileName_0;
	// System.String System.Diagnostics.ProcessStartInfo::arguments
	String_t* ___arguments_1;
	// System.String System.Diagnostics.ProcessStartInfo::directory
	String_t* ___directory_2;
	// System.String System.Diagnostics.ProcessStartInfo::verb
	String_t* ___verb_3;
	// System.Diagnostics.ProcessWindowStyle System.Diagnostics.ProcessStartInfo::windowStyle
	int32_t ___windowStyle_4;
	// System.Boolean System.Diagnostics.ProcessStartInfo::errorDialog
	bool ___errorDialog_5;
	// System.IntPtr System.Diagnostics.ProcessStartInfo::errorDialogParentHandle
	intptr_t ___errorDialogParentHandle_6;
	// System.Boolean System.Diagnostics.ProcessStartInfo::useShellExecute
	bool ___useShellExecute_7;
	// System.String System.Diagnostics.ProcessStartInfo::userName
	String_t* ___userName_8;
	// System.String System.Diagnostics.ProcessStartInfo::domain
	String_t* ___domain_9;
	// System.Security.SecureString System.Diagnostics.ProcessStartInfo::password
	SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C* ___password_10;
	// System.String System.Diagnostics.ProcessStartInfo::passwordInClearText
	String_t* ___passwordInClearText_11;
	// System.Boolean System.Diagnostics.ProcessStartInfo::loadUserProfile
	bool ___loadUserProfile_12;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirectStandardInput
	bool ___redirectStandardInput_13;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirectStandardOutput
	bool ___redirectStandardOutput_14;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirectStandardError
	bool ___redirectStandardError_15;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::standardOutputEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardOutputEncoding_16;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::standardErrorEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardErrorEncoding_17;
	// System.Boolean System.Diagnostics.ProcessStartInfo::createNoWindow
	bool ___createNoWindow_18;
	// System.WeakReference System.Diagnostics.ProcessStartInfo::weakParentProcess
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___weakParentProcess_19;
	// System.Collections.Specialized.StringDictionary System.Diagnostics.ProcessStartInfo::environmentVariables
	StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* ___environmentVariables_20;
	// System.Collections.ObjectModel.Collection`1<System.String> System.Diagnostics.ProcessStartInfo::_argumentList
	Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* ____argumentList_22;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> System.Diagnostics.ProcessStartInfo::environment
	RuntimeObject* ___environment_23;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::<StandardInputEncoding>k__BackingField
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CStandardInputEncodingU3Ek__BackingField_24;
};

struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_StaticFields
{
	// System.String[] System.Diagnostics.ProcessStartInfo::empty
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___empty_21;
};
// Native definition for P/Invoke marshalling of System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshaled_pinvoke
{
	char* ___fileName_0;
	char* ___arguments_1;
	char* ___directory_2;
	char* ___verb_3;
	int32_t ___windowStyle_4;
	int32_t ___errorDialog_5;
	intptr_t ___errorDialogParentHandle_6;
	int32_t ___useShellExecute_7;
	char* ___userName_8;
	char* ___domain_9;
	SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C* ___password_10;
	char* ___passwordInClearText_11;
	int32_t ___loadUserProfile_12;
	int32_t ___redirectStandardInput_13;
	int32_t ___redirectStandardOutput_14;
	int32_t ___redirectStandardError_15;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardOutputEncoding_16;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardErrorEncoding_17;
	int32_t ___createNoWindow_18;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___weakParentProcess_19;
	StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* ___environmentVariables_20;
	Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* ____argumentList_22;
	RuntimeObject* ___environment_23;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CStandardInputEncodingU3Ek__BackingField_24;
};
// Native definition for COM marshalling of System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshaled_com
{
	Il2CppChar* ___fileName_0;
	Il2CppChar* ___arguments_1;
	Il2CppChar* ___directory_2;
	Il2CppChar* ___verb_3;
	int32_t ___windowStyle_4;
	int32_t ___errorDialog_5;
	intptr_t ___errorDialogParentHandle_6;
	int32_t ___useShellExecute_7;
	Il2CppChar* ___userName_8;
	Il2CppChar* ___domain_9;
	SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C* ___password_10;
	Il2CppChar* ___passwordInClearText_11;
	int32_t ___loadUserProfile_12;
	int32_t ___redirectStandardInput_13;
	int32_t ___redirectStandardOutput_14;
	int32_t ___redirectStandardError_15;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardOutputEncoding_16;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardErrorEncoding_17;
	int32_t ___createNoWindow_18;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___weakParentProcess_19;
	StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* ___environmentVariables_20;
	Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* ____argumentList_22;
	RuntimeObject* ___environment_23;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CStandardInputEncodingU3Ek__BackingField_24;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// RockVR.Common.EventDelegate/CompleteDelegate
struct CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794  : public MulticastDelegate_t
{
};

// RockVR.Common.EventDelegate/ErrorDelegate
struct ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// SojaExiles.BRGlassDoor
struct BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.BRGlassDoor::openandclose
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___openandclose_4;
	// System.Boolean SojaExiles.BRGlassDoor::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.BRGlassDoor::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.ClosetopencloseDoor
struct ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.ClosetopencloseDoor::Closetopenandclose
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___Closetopenandclose_4;
	// System.Boolean SojaExiles.ClosetopencloseDoor::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.ClosetopencloseDoor::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.Drawer_Pull_X
struct Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.Drawer_Pull_X::pull_01
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___pull_01_4;
	// System.Boolean SojaExiles.Drawer_Pull_X::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.Drawer_Pull_X::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.Drawer_Pull_Z
struct Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.Drawer_Pull_Z::pull
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___pull_4;
	// System.Boolean SojaExiles.Drawer_Pull_Z::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.Drawer_Pull_Z::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.Drawer_Pull_Zopp
struct Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.Drawer_Pull_Zopp::pull
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___pull_4;
	// System.Boolean SojaExiles.Drawer_Pull_Zopp::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.Drawer_Pull_Zopp::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// RockVR.Common.FPSDisplay
struct FPSDisplay_tBDEFBA13574BDB1FA0A51D564581B760559021D8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RockVR.Common.FPSDisplay::deltaTime
	float ___deltaTime_4;
	// UnityEngine.UI.Text RockVR.Common.FPSDisplay::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_5;
};

// SojaExiles.MouseLook
struct MouseLook_tC23F7E839420EA476CD0FD1194A98C3304860D16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SojaExiles.MouseLook::mouseXSensitivity
	float ___mouseXSensitivity_4;
	// UnityEngine.Transform SojaExiles.MouseLook::playerBody
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerBody_5;
	// System.Single SojaExiles.MouseLook::xRotation
	float ___xRotation_6;
};

// SojaExiles.OvenFlip
struct OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.OvenFlip::openandcloseoven
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___openandcloseoven_4;
	// System.Boolean SojaExiles.OvenFlip::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.OvenFlip::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.PlayerMovement
struct PlayerMovement_tDE6A0E9E0CC3347F30021417F6ED4FA6A533734D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController SojaExiles.PlayerMovement::controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___controller_4;
	// System.Single SojaExiles.PlayerMovement::speed
	float ___speed_5;
	// System.Single SojaExiles.PlayerMovement::gravity
	float ___gravity_6;
	// UnityEngine.Vector3 SojaExiles.PlayerMovement::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_7;
	// System.Boolean SojaExiles.PlayerMovement::isGrounded
	bool ___isGrounded_8;
};

// SojaExiles.SceneSwitchGen
struct SceneSwitchGen_tA7C5751FB40D835ECBBC648C7DCF329367578B6D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SojaExiles.opencloseDoor
struct opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.opencloseDoor::openandclose
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___openandclose_4;
	// System.Boolean SojaExiles.opencloseDoor::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.opencloseDoor::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.opencloseDoor1
struct opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.opencloseDoor1::openandclose1
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___openandclose1_4;
	// System.Boolean SojaExiles.opencloseDoor1::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.opencloseDoor1::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.opencloseSlide
struct opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.opencloseSlide::openandclosewindow
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___openandclosewindow_4;
	// System.Boolean SojaExiles.opencloseSlide::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.opencloseSlide::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.opencloseWindow
struct opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.opencloseWindow::openandclosewindow
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___openandclosewindow_4;
	// System.Boolean SojaExiles.opencloseWindow::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.opencloseWindow::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.opencloseWindow1
struct opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.opencloseWindow1::openandclosewindow1
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___openandclosewindow1_4;
	// System.Boolean SojaExiles.opencloseWindow1::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.opencloseWindow1::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.opencloseWindowApt
struct opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.opencloseWindowApt::openandclosewindow
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___openandclosewindow_4;
	// System.Boolean SojaExiles.opencloseWindowApt::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.opencloseWindowApt::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
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
// System.Delegate[]
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Process::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Process__ctor_m0FC7997861C052C396D53CBEDE53D2DDA388FDA0 (Process_tF74794C64BCE464912BF158980B347CE66AF203B* __this, const RuntimeMethod* method) ;
// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::get_StartInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* Process_get_StartInfo_m5CF742569E93D773509E27125BB14581C02B3FE5 (Process_tF74794C64BCE464912BF158980B347CE66AF203B* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.ProcessStartInfo::set_FileName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_FileName_m5D2654AE8AFFAD35C3C5441385ACF49316165A1C_inline (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.ProcessStartInfo::set_Arguments(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_Arguments_mB0FD15AAE263A0BE623B23A0FCB2E8091B73335E_inline (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.ProcessStartInfo::set_RedirectStandardError(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_RedirectStandardError_m12767166B563337AB52287A480DB1A7583A64568_inline (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.ProcessStartInfo::set_RedirectStandardOutput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_RedirectStandardOutput_m7A82B37FC5572A8D24816504B452A70C191B4DF3_inline (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.ProcessStartInfo::set_CreateNoWindow(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_CreateNoWindow_mDA0868FB830E7D0F299D1E0C6C9FB97EE233537E_inline (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.ProcessStartInfo::set_UseShellExecute(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_UseShellExecute_mB0BA9715560DC389FF2D3B3506E1A149808753CE_inline (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Diagnostics.Process::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Process_Start_m1255D653552F95A3D7FEEA60DA9201E946AC2921 (Process_tF74794C64BCE464912BF158980B347CE66AF203B* __this, const RuntimeMethod* method) ;
// System.IO.StreamReader System.Diagnostics.Process::get_StandardOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* Process_get_StandardOutput_m71E748845E37016F854C156CC4D195C8496DEC07 (Process_tF74794C64BCE464912BF158980B347CE66AF203B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Process::WaitForExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Process_WaitForExit_mC66A5CCA8270F66340769EF241FFC5BF987AA1AE (Process_tF74794C64BCE464912BF158980B347CE66AF203B* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Process::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Process_Close_m1319814A5C51B6B53330B294CD961D7221630CAB (Process_tF74794C64BCE464912BF158980B347CE66AF203B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.ClosetopencloseDoor::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClosetopencloseDoor_opening_mCCB59361E9B9BE64C31F83B5538ABEC467E2EBED (ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.ClosetopencloseDoor::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClosetopencloseDoor_closing_m693CA9189EA4752DF4D0FC1B0ECC8B98371469DC (ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.ClosetopencloseDoor/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m9C55463BA32967EE04B10D3D450B95B65F6BF9C5 (U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SojaExiles.ClosetopencloseDoor/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_mF031D197E478F27BD550CCDDCAF87A5D97723B8C (U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.OvenFlip::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OvenFlip_opening_m4D63EB404C03DE4BCF46B423100562B5D01A7284 (OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.OvenFlip::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OvenFlip_closing_mFFFAC2E79979871EFF5A3A333261EE7096C00A7B (OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.OvenFlip/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m4549A3256E9D6A501409E9BD0FA71DF690A7BBFE (U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SojaExiles.OvenFlip/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m98C2F1E9CAB35F73DA4DB5CCC3255FD1016BF7AD (U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.BRGlassDoor::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BRGlassDoor_opening_mB0A21B09E90B78200ACAEC42098B070DE61135CB (BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.BRGlassDoor::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BRGlassDoor_closing_mB78DDF10217FB25263CC472E46E20FDE0A43FB7E (BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.BRGlassDoor/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m9A91DBEC9AE38ECFCFEFE848E9BCCCDDE984EBBC (U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SojaExiles.BRGlassDoor/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m7A2296381199B11893EB62F419CDA6C3015A4554 (U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseSlide::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseSlide_opening_m47FC8493081996B0E48ED96DB3F562696AA93614 (opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseSlide::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseSlide_closing_m8DEE923721DC4625E4357A6359EAB1402AFD6774 (opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseSlide/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m31FE550591AEC36986D4E2A136D0CB9E7A8E26A8 (U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseSlide/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m3444068EAD3D5E7195932635017C12C34FA05E28 (U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseWindowApt::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindowApt_opening_m85E23C40A14EFC0CAD211FDD78258BCFF6DB7DA3 (opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseWindowApt::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindowApt_closing_m4E9D018834298C311630432B7925727564712739 (opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseWindowApt/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_mE973B548CA738B4796495D69F8C68B8F4F242689 (U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseWindowApt/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_mE13EFFA9F101642331BEB3BB992561CD77745E85 (U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_Zopp::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_Zopp_opening_m5DC756C7B89FEC9BD23F027F0B2556E0F97B0637 (Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_Zopp::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_Zopp_closing_m811B6637FD1011F2AC8801F985969221D93230CD (Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.Drawer_Pull_Zopp/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m0A37D87F0FD1D00598CC3230365C0B6ABD4A4F99 (U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SojaExiles.Drawer_Pull_Zopp/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m18FBDADB7054F71B990EAB5502D80941C38B30A2 (U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseDoor::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor_opening_m3A88F6A82AAC2A74846C8BCE81DC78490FD7A120 (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseDoor::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor_closing_m2AFC0C1FD7625F4E3AD981284E6E16857ECF19DD (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseDoor/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_mCDF0A79CB5510376A1A2FD8F924BC6194D0F7496 (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseDoor/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m96DC57FE7A932BE7344E42FC98D81E1A7A9E450B (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseDoor1::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor1_opening_m1D810DEB61DC5E0F497D98F129F2D7E6C698780B (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseDoor1::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor1_closing_m508AF39CB92E6A3C670EF38A854FE66B8D294FC5 (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseDoor1/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_mC92AC40C55474F732A07EB4186D06FD241EE849A (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseDoor1/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m7F32E33676159DDCCA16833C58560F9DD124A1AE (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_X::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_X_opening_m0879ADF27877BE167FAA597539B2BE51ECEAE48C (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_X::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_X_closing_m1C1FAF2F11F44618EC24E1024DB7FEA352615095 (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.Drawer_Pull_X/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m4C85BD4C1EBDC9109D9D777B251A474B393C0F84 (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SojaExiles.Drawer_Pull_X/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m063A0DBFF58FE57440316F5E1D215FD9CCF14D16 (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_Z::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_Z_opening_m04374C1EE8736ED27E0666AC852A5573547AF8B0 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_Z::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_Z_closing_mD2B8593C2497D480C5B61373D12FC70C0635A4F2 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.Drawer_Pull_Z/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m824B17F8CD1ADB27AFECB99A9D405F4E631C89BE (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SojaExiles.Drawer_Pull_Z/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m33301F56B392CBB60438C6241C9D16BE17C87B5A (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseWindow::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow_opening_m09B5901E2E515EC387DA7FAF3F28D3D839CC408A (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseWindow::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow_closing_mD4F8D977E411902A11F26EC5544D0EAB0C89531E (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseWindow/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m6AD388059C7731018ACD71A794B9DC43E5CDC409 (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseWindow/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m93C7D4E9A1D08BBF2843D92401E99E6AB836C89F (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseWindow1::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow1_opening_m3A409887BE45E31A4F4778BFB781D2BA33A0E3A3 (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseWindow1::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow1_closing_m5D7A2FCD93A4B4B81E7F86C943570F8ABA40205E (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseWindow1/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m467901284533702DBAB445C2634BD9C099777316 (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseWindow1/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m7EA2A71415F1399115F925A87AD229B03DFB793B (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RockVR.Common.EventDelegate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDelegate__ctor_mBC982CA49183278DE9C6927C5B261C58EB9C5625 (EventDelegate_tC71DE20BCF2429DD02515F600623D398EF2D41E2* __this, const RuntimeMethod* method) 
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
void ErrorDelegate_Invoke_m93AE726202C6A70B566A88CF888DF50FBB703DA5_Multicast(ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626* __this, int32_t ___error0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626* currentDelegate = reinterpret_cast<ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___error0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ErrorDelegate_Invoke_m93AE726202C6A70B566A88CF888DF50FBB703DA5_OpenInst(ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626* __this, int32_t ___error0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___error0, method);
}
void ErrorDelegate_Invoke_m93AE726202C6A70B566A88CF888DF50FBB703DA5_OpenStatic(ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626* __this, int32_t ___error0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___error0, method);
}
void ErrorDelegate_Invoke_m93AE726202C6A70B566A88CF888DF50FBB703DA5_OpenStaticInvoker(ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626* __this, int32_t ___error0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___error0);
}
void ErrorDelegate_Invoke_m93AE726202C6A70B566A88CF888DF50FBB703DA5_ClosedStaticInvoker(ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626* __this, int32_t ___error0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___error0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626 (ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626* __this, int32_t ___error0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___error0);

}
// System.Void RockVR.Common.EventDelegate/ErrorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorDelegate__ctor_mD99B83E7246BE964DF9C0B09E956D42E6D976DC7 (ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorDelegate_Invoke_m93AE726202C6A70B566A88CF888DF50FBB703DA5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ErrorDelegate_Invoke_m93AE726202C6A70B566A88CF888DF50FBB703DA5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorDelegate_Invoke_m93AE726202C6A70B566A88CF888DF50FBB703DA5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ErrorDelegate_Invoke_m93AE726202C6A70B566A88CF888DF50FBB703DA5_Multicast;
}
// System.Void RockVR.Common.EventDelegate/ErrorDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorDelegate_Invoke_m93AE726202C6A70B566A88CF888DF50FBB703DA5 (ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626* __this, int32_t ___error0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___error0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult RockVR.Common.EventDelegate/ErrorDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorDelegate_BeginInvoke_mDCA83DA85FD749B96EB47A977B70DE2A7A559BEA (ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626* __this, int32_t ___error0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___error0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void RockVR.Common.EventDelegate/ErrorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorDelegate_EndInvoke_m0915899FE6C55F68B0FD40454727229D94E5561F (ErrorDelegate_t598DC4B8339826415C063F4B22A8CDB524612626* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void CompleteDelegate_Invoke_m275C48BFC59034303E95BEFD381CA60DDF1C8C0C_Multicast(CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794* currentDelegate = reinterpret_cast<CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CompleteDelegate_Invoke_m275C48BFC59034303E95BEFD381CA60DDF1C8C0C_OpenInst(CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void CompleteDelegate_Invoke_m275C48BFC59034303E95BEFD381CA60DDF1C8C0C_OpenStatic(CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void CompleteDelegate_Invoke_m275C48BFC59034303E95BEFD381CA60DDF1C8C0C_OpenStaticInvoker(CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void CompleteDelegate_Invoke_m275C48BFC59034303E95BEFD381CA60DDF1C8C0C_ClosedStaticInvoker(CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794 (CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void RockVR.Common.EventDelegate/CompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompleteDelegate__ctor_mF07389E261093E22F492249B023C5BD82136119F (CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CompleteDelegate_Invoke_m275C48BFC59034303E95BEFD381CA60DDF1C8C0C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CompleteDelegate_Invoke_m275C48BFC59034303E95BEFD381CA60DDF1C8C0C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CompleteDelegate_Invoke_m275C48BFC59034303E95BEFD381CA60DDF1C8C0C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CompleteDelegate_Invoke_m275C48BFC59034303E95BEFD381CA60DDF1C8C0C_Multicast;
}
// System.Void RockVR.Common.EventDelegate/CompleteDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompleteDelegate_Invoke_m275C48BFC59034303E95BEFD381CA60DDF1C8C0C (CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult RockVR.Common.EventDelegate/CompleteDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompleteDelegate_BeginInvoke_mBA7F0B796EB165BCBE220FCD93F19F542E099DBF (CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void RockVR.Common.EventDelegate/CompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompleteDelegate_EndInvoke_m4A079A310EFB5E893A401D0CE796AA04D63CB95E (CompleteDelegate_t681329DED6382710B36EC968F1A10BAD6CBE1794* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void RockVR.Common.FPSDisplay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSDisplay_Start_mC276DD3E3DC606229516C2A18220904AF47300AB (FPSDisplay_tBDEFBA13574BDB1FA0A51D564581B760559021D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___text_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void RockVR.Common.FPSDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSDisplay_Update_mB21129F48799352ACAF9A602E1FD12F8F00CF205 (FPSDisplay_tBDEFBA13574BDB1FA0A51D564581B760559021D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA865455948A6585C99F08AAE4C564A0F4992F78);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// deltaTime += (Time.deltaTime - deltaTime) * 0.1f;
		float L_0 = __this->___deltaTime_4;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2 = __this->___deltaTime_4;
		__this->___deltaTime_4 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), (0.100000001f)))));
		// float msec = deltaTime * 1000.0f;
		float L_3 = __this->___deltaTime_4;
		V_0 = ((float)il2cpp_codegen_multiply(L_3, (1000.0f)));
		// float fps = 1.0f / deltaTime;
		float L_4 = __this->___deltaTime_4;
		V_1 = ((float)((1.0f)/L_4));
		// text.text = string.Format("{0:0.0} ms ({1:0.} fps)", msec, fps);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___text_5;
		float L_6 = V_0;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		float L_9 = V_1;
		float L_10 = L_9;
		RuntimeObject* L_11 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralCA865455948A6585C99F08AAE4C564A0F4992F78, L_8, L_11, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_12);
		// }
		return;
	}
}
// System.Void RockVR.Common.FPSDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSDisplay__ctor_mC9300B7ACBFEA43FCE32069FD6CF948C7D4F55E1 (FPSDisplay_tBDEFBA13574BDB1FA0A51D564581B760559021D8* __this, const RuntimeMethod* method) 
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
// System.Boolean RockVR.Common.Platform::IsSupported(RockVR.Common.PlatformType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_IsSupported_m3DB9A2F5DACA0C0E36854F700B3593916D51041A (int32_t ___platform0, const RuntimeMethod* method) 
{
	{
		// if (platform == PlatformType.EDITOR ||
		//     platform == PlatformType.ANDROID ||
		//     platform == PlatformType.IOS ||
		//     platform == PlatformType.WINDOWS ||
		//     platform == PlatformType.OSX)
		int32_t L_0 = ___platform0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___platform0;
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___platform0;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = ___platform0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_4 = ___platform0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}

IL_0013:
	{
		// return true;
		return (bool)1;
	}

IL_0015:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void RockVR.Common.Platform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m6290FCB1248C887DD715D2F1071645608FA11950 (Platform_t771BD36F6075EF34CC89ED29AB94DD356D5BF9C1* __this, const RuntimeMethod* method) 
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
// System.Void RockVR.Common.CmdProcess::Run(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmdProcess_Run_mEA887A976E7B3C61A65FD8C5F1AE281A161AE544 (String_t* ___procName0, String_t* ___arguments1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Process_tF74794C64BCE464912BF158980B347CE66AF203B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// Process process = new Process();
		Process_tF74794C64BCE464912BF158980B347CE66AF203B* L_0 = (Process_tF74794C64BCE464912BF158980B347CE66AF203B*)il2cpp_codegen_object_new(Process_tF74794C64BCE464912BF158980B347CE66AF203B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Process__ctor_m0FC7997861C052C396D53CBEDE53D2DDA388FDA0(L_0, NULL);
		// process.StartInfo.FileName = procName;
		Process_tF74794C64BCE464912BF158980B347CE66AF203B* L_1 = L_0;
		NullCheck(L_1);
		ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* L_2;
		L_2 = Process_get_StartInfo_m5CF742569E93D773509E27125BB14581C02B3FE5(L_1, NULL);
		String_t* L_3 = ___procName0;
		NullCheck(L_2);
		ProcessStartInfo_set_FileName_m5D2654AE8AFFAD35C3C5441385ACF49316165A1C_inline(L_2, L_3, NULL);
		// process.StartInfo.Arguments = arguments;
		Process_tF74794C64BCE464912BF158980B347CE66AF203B* L_4 = L_1;
		NullCheck(L_4);
		ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* L_5;
		L_5 = Process_get_StartInfo_m5CF742569E93D773509E27125BB14581C02B3FE5(L_4, NULL);
		String_t* L_6 = ___arguments1;
		NullCheck(L_5);
		ProcessStartInfo_set_Arguments_mB0FD15AAE263A0BE623B23A0FCB2E8091B73335E_inline(L_5, L_6, NULL);
		// process.StartInfo.RedirectStandardError = true;
		Process_tF74794C64BCE464912BF158980B347CE66AF203B* L_7 = L_4;
		NullCheck(L_7);
		ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* L_8;
		L_8 = Process_get_StartInfo_m5CF742569E93D773509E27125BB14581C02B3FE5(L_7, NULL);
		NullCheck(L_8);
		ProcessStartInfo_set_RedirectStandardError_m12767166B563337AB52287A480DB1A7583A64568_inline(L_8, (bool)1, NULL);
		// process.StartInfo.RedirectStandardOutput = true;
		Process_tF74794C64BCE464912BF158980B347CE66AF203B* L_9 = L_7;
		NullCheck(L_9);
		ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* L_10;
		L_10 = Process_get_StartInfo_m5CF742569E93D773509E27125BB14581C02B3FE5(L_9, NULL);
		NullCheck(L_10);
		ProcessStartInfo_set_RedirectStandardOutput_m7A82B37FC5572A8D24816504B452A70C191B4DF3_inline(L_10, (bool)1, NULL);
		// process.StartInfo.CreateNoWindow = true;
		Process_tF74794C64BCE464912BF158980B347CE66AF203B* L_11 = L_9;
		NullCheck(L_11);
		ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* L_12;
		L_12 = Process_get_StartInfo_m5CF742569E93D773509E27125BB14581C02B3FE5(L_11, NULL);
		NullCheck(L_12);
		ProcessStartInfo_set_CreateNoWindow_mDA0868FB830E7D0F299D1E0C6C9FB97EE233537E_inline(L_12, (bool)1, NULL);
		// process.StartInfo.UseShellExecute = false;
		Process_tF74794C64BCE464912BF158980B347CE66AF203B* L_13 = L_11;
		NullCheck(L_13);
		ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* L_14;
		L_14 = Process_get_StartInfo_m5CF742569E93D773509E27125BB14581C02B3FE5(L_13, NULL);
		NullCheck(L_14);
		ProcessStartInfo_set_UseShellExecute_mB0BA9715560DC389FF2D3B3506E1A149808753CE_inline(L_14, (bool)0, NULL);
		// process.Start();
		Process_tF74794C64BCE464912BF158980B347CE66AF203B* L_15 = L_13;
		NullCheck(L_15);
		bool L_16;
		L_16 = Process_Start_m1255D653552F95A3D7FEEA60DA9201E946AC2921(L_15, NULL);
		// UnityEngine.Debug.Log(process.StandardOutput.ReadToEnd());
		Process_tF74794C64BCE464912BF158980B347CE66AF203B* L_17 = L_15;
		NullCheck(L_17);
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_18;
		L_18 = Process_get_StandardOutput_m71E748845E37016F854C156CC4D195C8496DEC07(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_18);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
		// process.WaitForExit();
		Process_tF74794C64BCE464912BF158980B347CE66AF203B* L_20 = L_17;
		NullCheck(L_20);
		Process_WaitForExit_mC66A5CCA8270F66340769EF241FFC5BF987AA1AE(L_20, NULL);
		// process.Close();
		NullCheck(L_20);
		Process_Close_m1319814A5C51B6B53330B294CD961D7221630CAB(L_20, NULL);
		// }
		goto IL_007d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{// begin catch(System.Exception)
		// UnityEngine.Debug.LogError(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_21, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007d;
	}// end catch (depth: 1)

IL_007d:
	{
		// }
		return;
	}
}
// System.Void RockVR.Common.CmdProcess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmdProcess__ctor_m36B358570B5E1E91E6FF92242CF70699B9E344E2 (CmdProcess_t7FCD9378DE95A393300CC2D3043727F032F25207* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.ClosetopencloseDoor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClosetopencloseDoor_Start_mA2F0D9A67524E1E3B8A692CEB7141CF60F9E28DD (ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.ClosetopencloseDoor::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClosetopencloseDoor_OnMouseOver_mA90BDB1B09EC0BFE1CF58A4DEC03774387766137 (ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = ClosetopencloseDoor_opening_mCCB59361E9B9BE64C31F83B5538ABEC467E2EBED(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = ClosetopencloseDoor_closing_m693CA9189EA4752DF4D0FC1B0ECC8B98371469DC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.ClosetopencloseDoor::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClosetopencloseDoor_opening_mCCB59361E9B9BE64C31F83B5538ABEC467E2EBED (ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461* L_0 = (U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m9C55463BA32967EE04B10D3D450B95B65F6BF9C5(L_0, 0, NULL);
		U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.ClosetopencloseDoor::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClosetopencloseDoor_closing_m693CA9189EA4752DF4D0FC1B0ECC8B98371469DC (ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0* L_0 = (U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_mF031D197E478F27BD550CCDDCAF87A5D97723B8C(L_0, 0, NULL);
		U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.ClosetopencloseDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClosetopencloseDoor__ctor_mA8A05329D50B75331545175F96A663E5C0A409D8 (ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.ClosetopencloseDoor/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m9C55463BA32967EE04B10D3D450B95B65F6BF9C5 (U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.ClosetopencloseDoor/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_m083D16767A8F523B77E57F90362D6A54C4E59E6C (U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.ClosetopencloseDoor/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_mE1D67BAB412117D3CFB71E27F5AAFE65908E26A3 (U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEA5DAB9D21EFA1911E11B56ED81850A27AC9237);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE, NULL);
		// Closetopenandclose.Play("ClosetOpening");
		ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___Closetopenandclose_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralDEA5DAB9D21EFA1911E11B56ED81850A27AC9237, NULL);
		// open = true;
		ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.ClosetopencloseDoor/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBE2022A5A1CCBC0CFD2D4C54B959DF7FC25EE83A (U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.ClosetopencloseDoor/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m94177105AF9597696ABEFDAEC612A96F40E35B6D (U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m94177105AF9597696ABEFDAEC612A96F40E35B6D_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.ClosetopencloseDoor/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_mAC9BDF2BB89116E173AA37D383D96D6642DEAF7F (U3CopeningU3Ed__5_t8D1FB73497F0CC086D824E735129D35B4F0BC461* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.ClosetopencloseDoor/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_mF031D197E478F27BD550CCDDCAF87A5D97723B8C (U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.ClosetopencloseDoor/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_m6D3E8763004DB73555521AD825F51E514C274EE7 (U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.ClosetopencloseDoor/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_m8AF87E846FE9AA57721473921FBC9EC35AA47511 (U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD14233E7783951F635FA33EC66C4039886C0C5FD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5, NULL);
		// Closetopenandclose.Play("ClosetClosing");
		ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___Closetopenandclose_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralD14233E7783951F635FA33EC66C4039886C0C5FD, NULL);
		// open = false;
		ClosetopencloseDoor_tB0EDA1832C32D2132A6B6D454754400C6D3FA933* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.ClosetopencloseDoor/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6EB8FC2C70DDECB917509AA28A8C661C0ABDE066 (U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.ClosetopencloseDoor/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m31C3AE5A139C3C7C67115720F2ADC7A8D8EA7AE0 (U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m31C3AE5A139C3C7C67115720F2ADC7A8D8EA7AE0_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.ClosetopencloseDoor/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_m96853EA0B0D2E63442FC988292110895A2D0A726 (U3CclosingU3Ed__6_t4A69CAE73B3853983C9C0459AA33E22EC88344E0* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.OvenFlip::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OvenFlip_Start_mAC836D7DC3811DEBAD95FEF85FA6A84379DADB1C (OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.OvenFlip::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OvenFlip_OnMouseOver_m99AD2C8221290AB8D197FCAF31EC944C4C498BC8 (OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = OvenFlip_opening_m4D63EB404C03DE4BCF46B423100562B5D01A7284(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = OvenFlip_closing_mFFFAC2E79979871EFF5A3A333261EE7096C00A7B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.OvenFlip::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OvenFlip_opening_m4D63EB404C03DE4BCF46B423100562B5D01A7284 (OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E* L_0 = (U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m4549A3256E9D6A501409E9BD0FA71DF690A7BBFE(L_0, 0, NULL);
		U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.OvenFlip::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OvenFlip_closing_mFFFAC2E79979871EFF5A3A333261EE7096C00A7B (OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04* L_0 = (U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m98C2F1E9CAB35F73DA4DB5CCC3255FD1016BF7AD(L_0, 0, NULL);
		U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.OvenFlip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OvenFlip__ctor_m5DE5EC8EF9736FDD59E0B401834982687B853704 (OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.OvenFlip/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m4549A3256E9D6A501409E9BD0FA71DF690A7BBFE (U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.OvenFlip/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_mFB6CBDFB0DB44FBFF3AFA73E8273819ACD1DA7F0 (U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.OvenFlip/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_m42CFA014B20FE1F53403E07513A51747D57102A7 (U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B1CC9D75C46F3CE861C1A12EC0A39C3E5433142);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58, NULL);
		// openandcloseoven.Play("OpenOven");
		OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandcloseoven_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral5B1CC9D75C46F3CE861C1A12EC0A39C3E5433142, NULL);
		// open = true;
		OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.OvenFlip/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD7C8C7ED76291DA7E0A860D412A7F2E8BD04BE8F (U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.OvenFlip/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m32B10BD387958767CADF558C026070CC17F315C6 (U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m32B10BD387958767CADF558C026070CC17F315C6_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.OvenFlip/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_mBE51856006F3D3EF6E1DEB92E1957C63B263627C (U3CopeningU3Ed__5_tD77B91056776467F0749490EA1923D4169059D8E* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.OvenFlip/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m98C2F1E9CAB35F73DA4DB5CCC3255FD1016BF7AD (U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.OvenFlip/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_mBE68E8082F7FDC85289E5DCABAB3256A90CC3A90 (U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.OvenFlip/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_m4EFB3C000F51AC0722848B3806149A2C9DCEB3F7 (U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B2AC819D685C53DB85CB6CAE6716753B4BBC6CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F, NULL);
		// openandcloseoven.Play("ClosingOven");
		OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandcloseoven_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral7B2AC819D685C53DB85CB6CAE6716753B4BBC6CA, NULL);
		// open = false;
		OvenFlip_t67426D82AE7AF86EC4B1F45014E578678E4D06F7* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.OvenFlip/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA25D85E93B177A273F1F61AFE306D06A867201A9 (U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.OvenFlip/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mAB0C23610C406D3AD6F34CDAAC18CDEEDB8C80F9 (U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mAB0C23610C406D3AD6F34CDAAC18CDEEDB8C80F9_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.OvenFlip/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_m25480345B2DB03142ACCD26AAD7013439BDF33F1 (U3CclosingU3Ed__6_tB966F7834B3F3A0C7A9DFD48961B0423AD539C04* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.BRGlassDoor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BRGlassDoor_Start_mE2BD8AFD640A2131F4744180FC3D8439A3C52D87 (BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.BRGlassDoor::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BRGlassDoor_OnMouseOver_m12C9CD156694569523445DCB6C30D63EB80A9669 (BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = BRGlassDoor_opening_mB0A21B09E90B78200ACAEC42098B070DE61135CB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = BRGlassDoor_closing_mB78DDF10217FB25263CC472E46E20FDE0A43FB7E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.BRGlassDoor::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BRGlassDoor_opening_mB0A21B09E90B78200ACAEC42098B070DE61135CB (BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657* L_0 = (U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m9A91DBEC9AE38ECFCFEFE848E9BCCCDDE984EBBC(L_0, 0, NULL);
		U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.BRGlassDoor::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BRGlassDoor_closing_mB78DDF10217FB25263CC472E46E20FDE0A43FB7E (BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598* L_0 = (U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m7A2296381199B11893EB62F419CDA6C3015A4554(L_0, 0, NULL);
		U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.BRGlassDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BRGlassDoor__ctor_m730BBA2B0B35B018E232B24AD321C416219B5BBC (BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.BRGlassDoor/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m9A91DBEC9AE38ECFCFEFE848E9BCCCDDE984EBBC (U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.BRGlassDoor/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_mEDB05978827289F85ED5E0CBE436D7D6D132F5C0 (U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.BRGlassDoor/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_m0D0C370892F8ADB7B5319A7DE97FA656E5D03A0F (U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7200D5866E871F59E7DA92E1BD52300F5C0CDD03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF8AA25C085A64ACFDAE1B7E484722F06A782742);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralDF8AA25C085A64ACFDAE1B7E484722F06A782742, NULL);
		// openandclose.Play("BRGlassDoorOpen");
		BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclose_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral7200D5866E871F59E7DA92E1BD52300F5C0CDD03, NULL);
		// open = true;
		BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.BRGlassDoor/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAE751719089E1B3747C87D569CE6B6DBF5D898C7 (U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.BRGlassDoor/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mC9D552A1F31691A3BA354F9269AA6C349BC741C6 (U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mC9D552A1F31691A3BA354F9269AA6C349BC741C6_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.BRGlassDoor/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_mA6975A46BBCA6104B471DC3B61AF9B051019B76B (U3CopeningU3Ed__5_t302F88DA503BBE501A0C55697143D5609AB3F657* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.BRGlassDoor/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m7A2296381199B11893EB62F419CDA6C3015A4554 (U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.BRGlassDoor/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_mA3D9BDBF906B73F438D1417E2143F8CBE41B8634 (U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.BRGlassDoor/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_mBA213787986625B1BA80C7544D80415A4FE077B3 (U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C805D7E3DFDE2DEB55FAC78B382FAD3A7B38B9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC87920B1442F3D7F9BCF13099BFFCAC6A70535);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral3BC87920B1442F3D7F9BCF13099BFFCAC6A70535, NULL);
		// openandclose.Play("BRGlassDoorClose");
		BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclose_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral0C805D7E3DFDE2DEB55FAC78B382FAD3A7B38B9B, NULL);
		// open = false;
		BRGlassDoor_t939D0022018D59178678FE7F0E0F47927B698FD4* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.BRGlassDoor/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7DD9BC9A28B905CB479E99EC65698B9A2B5F0F3F (U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.BRGlassDoor/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m53ABE4EF226D2D0F19F388E7CFD1C1DDF11D82A1 (U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m53ABE4EF226D2D0F19F388E7CFD1C1DDF11D82A1_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.BRGlassDoor/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_m31A320B53E488E3073ED7FDB3D2406F0ED791E4C (U3CclosingU3Ed__6_t55959F56485CED2CFEEEB645E270F5A5E0647598* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseSlide::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseSlide_Start_mC228D6FB02D720A704215BBD49784CEEDF7C71A3 (opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.opencloseSlide::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseSlide_OnMouseOver_mD1B47BFD08C22DE4BB6185E7E5A1BE5E7F13964B (opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = opencloseSlide_opening_m47FC8493081996B0E48ED96DB3F562696AA93614(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = opencloseSlide_closing_m8DEE923721DC4625E4357A6359EAB1402AFD6774(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseSlide::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseSlide_opening_m47FC8493081996B0E48ED96DB3F562696AA93614 (opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11* L_0 = (U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m31FE550591AEC36986D4E2A136D0CB9E7A8E26A8(L_0, 0, NULL);
		U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseSlide::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseSlide_closing_m8DEE923721DC4625E4357A6359EAB1402AFD6774 (opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488* L_0 = (U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m3444068EAD3D5E7195932635017C12C34FA05E28(L_0, 0, NULL);
		U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.opencloseSlide::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseSlide__ctor_m52C9D34F2EFF457BA5DF0C8BBAAB5B00129C68C0 (opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseSlide/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m31FE550591AEC36986D4E2A136D0CB9E7A8E26A8 (U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseSlide/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_mA3E07C2B6926F97A3CD81AAD627B4B748CA2A37B (U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseSlide/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_m6244B302C033B0CA66FF6D64F6884162A87C9A67 (U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CADD907942F3914D6A7E949952BB1C42CE6C391);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58, NULL);
		// openandclosewindow.Play("OpeningSlide");
		opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclosewindow_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral6CADD907942F3914D6A7E949952BB1C42CE6C391, NULL);
		// open = true;
		opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseSlide/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m373A594F26868FDEE0A64E00A46B28D9BEE3CA99 (U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseSlide/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m7B303F20E2062A906064DF392A6FD4F9A2BA7A80 (U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m7B303F20E2062A906064DF392A6FD4F9A2BA7A80_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseSlide/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_m9AA5850EB20415474AE58C32A7A98C3E72FEA450 (U3CopeningU3Ed__5_tB2BCC9662279E1BBBC5C3B68BB5AA2FDA5CEEE11* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseSlide/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m3444068EAD3D5E7195932635017C12C34FA05E28 (U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseSlide/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_mCE55FEF3DEF3053EA43A4B02441D79CBB8FAC7E4 (U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseSlide/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_m7C44A3E30227C047A97A72840589F9D3815302F6 (U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A59932C5138929B51C1C18758A3203B905A4E50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F, NULL);
		// openandclosewindow.Play("ClosingSlide");
		opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclosewindow_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral0A59932C5138929B51C1C18758A3203B905A4E50, NULL);
		// open = false;
		opencloseSlide_t5130C6A9B632F1AC3BFDCABCB72582A1031D4775* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseSlide/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD3EA00412DBB2D39F91137CBF9824B80C3426BCD (U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseSlide/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mCE61C75F93991C0B66FA1B60A8EE32B02C828474 (U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mCE61C75F93991C0B66FA1B60A8EE32B02C828474_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseSlide/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_m43357B528FDF4D2BBADD4DB9CD01599099D66450 (U3CclosingU3Ed__6_tD2BEA359A3CE7341973C94828EB27FC051D0D488* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseWindowApt::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindowApt_Start_m711E0C71C984C1CFBEA9CEFFE1DD44CC3F4E4BFA (opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.opencloseWindowApt::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindowApt_OnMouseOver_m7E1995888E1497179C7632CC1C27E3ADBF6AF1C5 (opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = opencloseWindowApt_opening_m85E23C40A14EFC0CAD211FDD78258BCFF6DB7DA3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = opencloseWindowApt_closing_m4E9D018834298C311630432B7925727564712739(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseWindowApt::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindowApt_opening_m85E23C40A14EFC0CAD211FDD78258BCFF6DB7DA3 (opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8* L_0 = (U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_mE973B548CA738B4796495D69F8C68B8F4F242689(L_0, 0, NULL);
		U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseWindowApt::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindowApt_closing_m4E9D018834298C311630432B7925727564712739 (opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828* L_0 = (U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_mE13EFFA9F101642331BEB3BB992561CD77745E85(L_0, 0, NULL);
		U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.opencloseWindowApt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindowApt__ctor_m48B57EEA9D569E7355130E35698EC7F44DD1090B (opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseWindowApt/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_mE973B548CA738B4796495D69F8C68B8F4F242689 (U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseWindowApt/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_m5F8080DBD8FCF2E7606A13AF330D3ED37C619431 (U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseWindowApt/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_m80589764E8CA6CD1C9DF1AB3C1D2737D7740E32A (U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F4565D879A5EE081D0C86E94468CA47F45179F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58, NULL);
		// openandclosewindow.Play("Openingwindow");
		opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclosewindow_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralD5F4565D879A5EE081D0C86E94468CA47F45179F, NULL);
		// open = true;
		opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseWindowApt/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0A39466408B86F4AC24DD479B9329E12AB19D4F4 (U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseWindowApt/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mE20CB6CC97F692A15040D4285B0C2500F8F54B04 (U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mE20CB6CC97F692A15040D4285B0C2500F8F54B04_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseWindowApt/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_m3DE01436935C448D77071449C638932F859F4E05 (U3CopeningU3Ed__5_tA75FFA6CF7B97040BB90C810AA19A330C63A1CF8* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseWindowApt/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_mE13EFFA9F101642331BEB3BB992561CD77745E85 (U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseWindowApt/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_mCC8718BD2320ADCB069B322B2AF898728CD7E098 (U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseWindowApt/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_mB2D9372C13E5C1B376378B14E3B5D9DE6E21D717 (U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral437D4B096877A1450EC9D7A7C4C35431EA2B2FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F, NULL);
		// openandclosewindow.Play("Closingwindow");
		opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclosewindow_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral437D4B096877A1450EC9D7A7C4C35431EA2B2FC8, NULL);
		// open = false;
		opencloseWindowApt_tB25D3962522C58D3E3C030BE8E4680A2A85BD58A* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseWindowApt/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m20B70DF415DC989A0772C1C32F22E9029381A187 (U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseWindowApt/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mF61208B891A997E6A73B16273AC4FE6C9BE18FEB (U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mF61208B891A997E6A73B16273AC4FE6C9BE18FEB_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseWindowApt/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_m285288DF2308E1E6D3F97F5C760D9BCBA10CE5A4 (U3CclosingU3Ed__6_t930F3B3B7CAD6B31B1A4DA7E4AC91C133772B828* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.Drawer_Pull_Zopp::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_Zopp_Start_mD3E864FCFB7B448A7C5C507C784D4CE12E7ACC8B (Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_Zopp::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_Zopp_OnMouseOver_mE11FE3E15CE0E91153631ACBF47827468F7CDCD1 (Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3A75D921A32532B9A0A2F8A4018127ABD2C0687);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0074;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 10)
		if ((!(((float)L_6) < ((float)(10.0f)))))
		{
			goto IL_0074;
		}
	}
	{
		// print("object name");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralF3A75D921A32532B9A0A2F8A4018127ABD2C0687, NULL);
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_0057;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = Drawer_Pull_Zopp_opening_m5DC756C7B89FEC9BD23F027F0B2556E0F97B0637(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_0057:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = Drawer_Pull_Zopp_closing_m811B6637FD1011F2AC8801F985969221D93230CD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_Zopp::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_Zopp_opening_m5DC756C7B89FEC9BD23F027F0B2556E0F97B0637 (Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114* L_0 = (U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m0A37D87F0FD1D00598CC3230365C0B6ABD4A4F99(L_0, 0, NULL);
		U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_Zopp::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_Zopp_closing_m811B6637FD1011F2AC8801F985969221D93230CD (Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6* L_0 = (U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m18FBDADB7054F71B990EAB5502D80941C38B30A2(L_0, 0, NULL);
		U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.Drawer_Pull_Zopp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_Zopp__ctor_m57562FED1B2CF09BED1C1ADA9985BE784D09CDAC (Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.Drawer_Pull_Zopp/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m0A37D87F0FD1D00598CC3230365C0B6ABD4A4F99 (U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_Zopp/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_m7DD90BB099D3A459C674AF6208FFB56D267E00BE (U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.Drawer_Pull_Zopp/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_mC275C73ACFE5CF9E1161EB6F42038A6FBB374020 (U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A7828FB78B3C4D82B5446606B01D969319FB2EA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE, NULL);
		// pull.Play("openpullopp");
		Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___pull_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral7A7828FB78B3C4D82B5446606B01D969319FB2EA, NULL);
		// open = true;
		Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.Drawer_Pull_Zopp/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF572BE2105D77273F4B5ACEB7460119F526B3E4E (U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.Drawer_Pull_Zopp/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m11E7AD90FC73C8ADF5BD97168F770620FBED8AFF (U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m11E7AD90FC73C8ADF5BD97168F770620FBED8AFF_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.Drawer_Pull_Zopp/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_mD53393D32A7F2A2D153587A8F94D4816ED6C3969 (U3CopeningU3Ed__5_t5EF115BA1E76136E9C2196F1B0AE8616F560B114* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.Drawer_Pull_Zopp/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m18FBDADB7054F71B990EAB5502D80941C38B30A2 (U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_Zopp/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_m687392E531496829AF3E34F4A782D89BBC1BF804 (U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.Drawer_Pull_Zopp/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_m32DFE1732CEB88593C1BDADC989C87BFE9A5947A (U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66D6A148312038979105AD3EA93817F9E0F747CD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5, NULL);
		// pull.Play("closepushopp");
		Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___pull_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral66D6A148312038979105AD3EA93817F9E0F747CD, NULL);
		// open = false;
		Drawer_Pull_Zopp_tB885E768171C32D47369DBEE8FDF764391F7BAB5* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.Drawer_Pull_Zopp/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3F648A860A28DE1F8A46B61252B30665D0226916 (U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.Drawer_Pull_Zopp/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m9A62DF96621F7D40E2CC7B827A2D8D3F2D8F529F (U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m9A62DF96621F7D40E2CC7B827A2D8D3F2D8F529F_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.Drawer_Pull_Zopp/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_m379F4864DC183CF6E6A023A7749E32F2817D3C1F (U3CclosingU3Ed__6_tA541BCCD9C537A983DCB9FE54F696F0E9E42D4B6* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseDoor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseDoor_Start_m349DEB469468E5A3EFB077B4D219D68BA31123C6 (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.opencloseDoor::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseDoor_OnMouseOver_m2FBD1B18AA7E1464C02B73002681BD340EC5A12D (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = opencloseDoor_opening_m3A88F6A82AAC2A74846C8BCE81DC78490FD7A120(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = opencloseDoor_closing_m2AFC0C1FD7625F4E3AD981284E6E16857ECF19DD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseDoor::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor_opening_m3A88F6A82AAC2A74846C8BCE81DC78490FD7A120 (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* L_0 = (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_mCDF0A79CB5510376A1A2FD8F924BC6194D0F7496(L_0, 0, NULL);
		U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseDoor::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor_closing_m2AFC0C1FD7625F4E3AD981284E6E16857ECF19DD (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* L_0 = (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m96DC57FE7A932BE7344E42FC98D81E1A7A9E450B(L_0, 0, NULL);
		U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.opencloseDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseDoor__ctor_m67478D0D4DE4F58EEF9B4B3E322E950D5A13815E (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseDoor/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_mCDF0A79CB5510376A1A2FD8F924BC6194D0F7496 (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseDoor/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_m25537565BBE1085EB1A607F0D2C8175A4E6AD422 (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseDoor/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_mB1C9B1D6DF1CC96B61FF8FEED8B58C317924510E (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF91D27828858E0E934FC7DADAF6886D7611EF3E8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE, NULL);
		// openandclose.Play("Opening");
		opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclose_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralF91D27828858E0E934FC7DADAF6886D7611EF3E8, NULL);
		// open = true;
		opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseDoor/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDBE073C0BF7823C303720F0B804054C33356FF75 (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseDoor/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m2ADFAF116A418924AA6A5F95464CA8E3126C0B1E (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m2ADFAF116A418924AA6A5F95464CA8E3126C0B1E_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseDoor/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_m965915D3E8D1F5321F4F5938FD14AEF1EBA75936 (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseDoor/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m96DC57FE7A932BE7344E42FC98D81E1A7A9E450B (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseDoor/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_m94450355214F74315ADB59A329552C8A69B354F5 (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseDoor/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_m7CC5B7CFF89B7BE297796E7A2F35F4B1DF85B322 (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAB2EF6A513D0DA1F97A043466EEE33AC438423E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5, NULL);
		// openandclose.Play("Closing");
		opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclose_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralDAB2EF6A513D0DA1F97A043466EEE33AC438423E, NULL);
		// open = false;
		opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseDoor/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9D21AFC66443347D46ADDC2972BC41B1B5EC1BB0 (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseDoor/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mABF6E9F31D654229EF462C3B9C6B6A3108E16333 (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mABF6E9F31D654229EF462C3B9C6B6A3108E16333_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseDoor/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_m98909D7087F09121D4DCF6D278443A75A616C12B (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseDoor1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseDoor1_Start_mAFB666FAC59494ACF95C237114328042C4B46F14 (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.opencloseDoor1::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseDoor1_OnMouseOver_mE19BF4DA9E2BDCEC7566B525B662C267785705D8 (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = opencloseDoor1_opening_m1D810DEB61DC5E0F497D98F129F2D7E6C698780B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = opencloseDoor1_closing_m508AF39CB92E6A3C670EF38A854FE66B8D294FC5(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseDoor1::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor1_opening_m1D810DEB61DC5E0F497D98F129F2D7E6C698780B (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* L_0 = (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_mC92AC40C55474F732A07EB4186D06FD241EE849A(L_0, 0, NULL);
		U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseDoor1::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor1_closing_m508AF39CB92E6A3C670EF38A854FE66B8D294FC5 (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* L_0 = (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m7F32E33676159DDCCA16833C58560F9DD124A1AE(L_0, 0, NULL);
		U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.opencloseDoor1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseDoor1__ctor_m3617C6EE154EBB86425D61F84ED1C85276E44465 (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseDoor1/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_mC92AC40C55474F732A07EB4186D06FD241EE849A (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseDoor1/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_m67AE37A63FCB34D71B9D01102444E664EC510387 (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseDoor1/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_mC873FD48B125776E73DEC1F233B4EFC6C91714F1 (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral109F5A6B52D92F2F8FF0B5B430CB41B73B99B119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE, NULL);
		// openandclose1.Play("Opening 1");
		opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclose1_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral109F5A6B52D92F2F8FF0B5B430CB41B73B99B119, NULL);
		// open = true;
		opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseDoor1/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6D44FECFB00308D54AB2CC1D1001AFE8C65BB498 (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseDoor1/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mC3402E24902781283F53834B88C0837CB2610D26 (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mC3402E24902781283F53834B88C0837CB2610D26_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseDoor1/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_m4A6FA172066BC71DAAC4C7714CB6F19C0FECA04B (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseDoor1/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m7F32E33676159DDCCA16833C58560F9DD124A1AE (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseDoor1/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_m211E98CCA27EF443A78AF2185BE35CE23B64A443 (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseDoor1/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_m80349AAA0F5131C878CA7FA58E6DDA7F6E6CD1EE (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3F3886383FDEDF8965C8E930CA0DE3CA08E32C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5, NULL);
		// openandclose1.Play("Closing 1");
		opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclose1_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral7F3F3886383FDEDF8965C8E930CA0DE3CA08E32C, NULL);
		// open = false;
		opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseDoor1/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6C93C7C4C95774A2BB8F0EDAB991FC76705BE63C (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseDoor1/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m1CF7C289DF87B534BA5FB5C6A4A9B0C94C797677 (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m1CF7C289DF87B534BA5FB5C6A4A9B0C94C797677_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseDoor1/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_mE7B4B02045C067CA36A439A8EE6D453BA434F626 (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.Drawer_Pull_X::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_X_Start_mF3043644D731DDE8F820531426E9632BE967C3C7 (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_X::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_X_OnMouseOver_m818AA4C15C25E4AC79336607D4B4798DC6946D01 (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3A75D921A32532B9A0A2F8A4018127ABD2C0687);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0074;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 10)
		if ((!(((float)L_6) < ((float)(10.0f)))))
		{
			goto IL_0074;
		}
	}
	{
		// print("object name");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralF3A75D921A32532B9A0A2F8A4018127ABD2C0687, NULL);
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_0057;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = Drawer_Pull_X_opening_m0879ADF27877BE167FAA597539B2BE51ECEAE48C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_0057:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = Drawer_Pull_X_closing_m1C1FAF2F11F44618EC24E1024DB7FEA352615095(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_X::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_X_opening_m0879ADF27877BE167FAA597539B2BE51ECEAE48C (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* L_0 = (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m4C85BD4C1EBDC9109D9D777B251A474B393C0F84(L_0, 0, NULL);
		U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_X::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_X_closing_m1C1FAF2F11F44618EC24E1024DB7FEA352615095 (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* L_0 = (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m063A0DBFF58FE57440316F5E1D215FD9CCF14D16(L_0, 0, NULL);
		U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.Drawer_Pull_X::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_X__ctor_mF607B4A1F1E12DDCB5E233DE1142C495F42A7AA1 (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.Drawer_Pull_X/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m4C85BD4C1EBDC9109D9D777B251A474B393C0F84 (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_X/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_mA0EFA7409A06DBF4D93E734DB9D8637225D07935 (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.Drawer_Pull_X/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_m8A5D07E697B5A1D84A9037BC22D52BD22AFB5C39 (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB6A7C80E1017EC35DBFE2CF7268C25730B94A7F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE, NULL);
		// pull_01.Play("openpull_01");
		Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___pull_01_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralFB6A7C80E1017EC35DBFE2CF7268C25730B94A7F, NULL);
		// open = true;
		Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.Drawer_Pull_X/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAB8710A7F23969A9BF9B1D75F63DB16702799A5A (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.Drawer_Pull_X/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mFFFAFF2555FC8785260F4E6430EF6BA4B08B8D13 (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mFFFAFF2555FC8785260F4E6430EF6BA4B08B8D13_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.Drawer_Pull_X/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_m4CB6C7B2E2B41B84B7E3793EF5881515890857DC (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.Drawer_Pull_X/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m063A0DBFF58FE57440316F5E1D215FD9CCF14D16 (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_X/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_m1C84E01B0523CE46845557788CB8CC3B6191743D (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.Drawer_Pull_X/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_m6B37AABC2159D233231F0E4245D9203C38CA077A (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DB46F804A221B05881E2D7D919F77DB08A24B32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5, NULL);
		// pull_01.Play("closepush_01");
		Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___pull_01_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral8DB46F804A221B05881E2D7D919F77DB08A24B32, NULL);
		// open = false;
		Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.Drawer_Pull_X/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m394695C55D02DCF1208D7AC71FF607F604B3BFD0 (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.Drawer_Pull_X/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m0DAFF4556E1EE512D96E1AFB2A60F4B9308EF53D (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m0DAFF4556E1EE512D96E1AFB2A60F4B9308EF53D_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.Drawer_Pull_X/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_m58401076106CACE9D5F1B27AD8CBD69B6137AA23 (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.Drawer_Pull_Z::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_Z_Start_mA6C0EAE04DBDB6E34800E414FF0F7C10D440A3A3 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_Z::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_Z_OnMouseOver_m3BF1C8EA19E57ABA59523128557C2AC77C0B89B1 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3A75D921A32532B9A0A2F8A4018127ABD2C0687);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0074;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 10)
		if ((!(((float)L_6) < ((float)(10.0f)))))
		{
			goto IL_0074;
		}
	}
	{
		// print("object name");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralF3A75D921A32532B9A0A2F8A4018127ABD2C0687, NULL);
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_0057;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = Drawer_Pull_Z_opening_m04374C1EE8736ED27E0666AC852A5573547AF8B0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_0057:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = Drawer_Pull_Z_closing_mD2B8593C2497D480C5B61373D12FC70C0635A4F2(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_Z::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_Z_opening_m04374C1EE8736ED27E0666AC852A5573547AF8B0 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* L_0 = (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m824B17F8CD1ADB27AFECB99A9D405F4E631C89BE(L_0, 0, NULL);
		U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_Z::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_Z_closing_mD2B8593C2497D480C5B61373D12FC70C0635A4F2 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* L_0 = (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m33301F56B392CBB60438C6241C9D16BE17C87B5A(L_0, 0, NULL);
		U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.Drawer_Pull_Z::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_Z__ctor_m02FB80A25F100FB3C0C4103F929547A990E84CA8 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.Drawer_Pull_Z/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m824B17F8CD1ADB27AFECB99A9D405F4E631C89BE (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_Z/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_mB18EB3444E1488B0C61E0107EEFAD22BAE2C57EA (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.Drawer_Pull_Z/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_m480DE56B34EB87E0FD1D9EC6BAE797E4F426C273 (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEC6EACB0EC6BEF0C62E54C19D8F90E01DE0C908);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE, NULL);
		// pull.Play("openpull");
		Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___pull_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralCEC6EACB0EC6BEF0C62E54C19D8F90E01DE0C908, NULL);
		// open = true;
		Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.Drawer_Pull_Z/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m807A6AC6DD3C8E95D8FBAD329E9358A5487BFE6E (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.Drawer_Pull_Z/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m92F3A640FB35F9CAE67200AC68BCAC34178F3D20 (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m92F3A640FB35F9CAE67200AC68BCAC34178F3D20_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.Drawer_Pull_Z/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_mBB801F09FCD6A3BF46D511ABA6FED06E2733784F (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.Drawer_Pull_Z/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m33301F56B392CBB60438C6241C9D16BE17C87B5A (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_Z/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_m6AD9244B8BBD3E5639D7121BC36C805E13C46680 (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.Drawer_Pull_Z/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_mFC0B84DCE0CDC1CA224BDAD2913054A8BAD6A494 (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23BC23743CA78CCF7AA374847689BBDC815DD7B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5, NULL);
		// pull.Play("closepush");
		Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___pull_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral23BC23743CA78CCF7AA374847689BBDC815DD7B2, NULL);
		// open = false;
		Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.Drawer_Pull_Z/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF50C3E517FC06BFA8B0459464D55B7C6F7D7C423 (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.Drawer_Pull_Z/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mA9A68B4C592F955D54C7C21457234107AE6B9B5A (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mA9A68B4C592F955D54C7C21457234107AE6B9B5A_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.Drawer_Pull_Z/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_mB44A3B97720ACEEAE3C8964CB14240DB60728FDA (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.MouseLook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Start_mAED465021CC67B5CA5918EE9849F646078CE0DFC (MouseLook_tC23F7E839420EA476CD0FD1194A98C3304860D16* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// }
		return;
	}
}
// System.Void SojaExiles.MouseLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Update_m507B72FBDDEDBA9B71068C583A0BEF25613EE5EE (MouseLook_tC23F7E839420EA476CD0FD1194A98C3304860D16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float mouseX = Input.GetAxis("Mouse X") * mouseXSensitivity * Time.deltaTime;
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1 = __this->___mouseXSensitivity_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		// float mouseY = Input.GetAxis("Mouse Y") * mouseXSensitivity * Time.deltaTime;
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_4 = __this->___mouseXSensitivity_4;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		// xRotation -= mouseY;
		float L_6 = __this->___xRotation_6;
		float L_7 = V_1;
		__this->___xRotation_6 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// xRotation = Mathf.Clamp(xRotation, -90f, 90f);
		float L_8 = __this->___xRotation_6;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_8, (-90.0f), (90.0f), NULL);
		__this->___xRotation_6 = L_9;
		// transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_11 = __this->___xRotation_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_11, (0.0f), (0.0f), NULL);
		NullCheck(L_10);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_12, NULL);
		// playerBody.Rotate(Vector3.up * mouseX);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___playerBody_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		NullCheck(L_13);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_13, L_16, NULL);
		// }
		return;
	}
}
// System.Void SojaExiles.MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_mE4D9E506B0A6A47171F0458801A624CD97109A52 (MouseLook_tC23F7E839420EA476CD0FD1194A98C3304860D16* __this, const RuntimeMethod* method) 
{
	{
		// public float mouseXSensitivity = 100f;
		__this->___mouseXSensitivity_4 = (100.0f);
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
// System.Void SojaExiles.PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mD9D3F70D4433B230EF6027FE013AAF00A46FECE7 (PlayerMovement_tDE6A0E9E0CC3347F30021417F6ED4FA6A533734D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float x = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float z = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// Vector3 move = transform.right * x + transform.forward * z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_2, NULL);
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		float L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_9, NULL);
		V_2 = L_10;
		// controller.Move(move * speed * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_11 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		float L_13 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		NullCheck(L_11);
		int32_t L_17;
		L_17 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_11, L_16, NULL);
		// velocity.y += gravity * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->___velocity_7);
		float* L_19 = (&L_18->___y_3);
		float* L_20 = L_19;
		float L_21 = *((float*)L_20);
		float L_22 = __this->___gravity_6;
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		*((float*)L_20) = (float)((float)il2cpp_codegen_add(L_21, ((float)il2cpp_codegen_multiply(L_22, L_23))));
		// controller.Move(velocity * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_24 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___velocity_7;
		float L_26;
		L_26 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		NullCheck(L_24);
		int32_t L_28;
		L_28 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_24, L_27, NULL);
		// }
		return;
	}
}
// System.Void SojaExiles.PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mC4896AC8FE448922AEAB330410FD5A274CA773C7 (PlayerMovement_tDE6A0E9E0CC3347F30021417F6ED4FA6A533734D* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5f;
		__this->___speed_5 = (5.0f);
		// public float gravity = -15f;
		__this->___gravity_6 = (-15.0f);
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
// System.Void SojaExiles.SceneSwitchGen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchGen_Start_mF3DEFB1E92605C73566A7A6E9EDD6A4C41EEAA9F (SceneSwitchGen_tA7C5751FB40D835ECBBC648C7DCF329367578B6D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SojaExiles.SceneSwitchGen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchGen_Update_m282E48D9A535163007A59B926BB85B88B65CAAE1 (SceneSwitchGen_tA7C5751FB40D835ECBBC648C7DCF329367578B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0561A578F08EC273CC9F9E211D782DC093FD62B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47FAEBE5EC379397CF8B55738A695B6AC8818808);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4847371B759FDF692A434C86CB9CFEE40508E781);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F3D9BE4D9B1B08BF5AFE1CA9BCD257AF0EA166D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral892592B1C2CE8A81762451C62622E4CD5FEA587B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB121005DC90DD3C413CC8D629A257458F59C6CB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2AB32CC9B83B9D140DB6263F664E20DF3DB0082);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)49), NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SceneManager.LoadScene("Structure_01");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral47FAEBE5EC379397CF8B55738A695B6AC8818808, NULL);
	}

IL_0013:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha2))
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)50), NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// SceneManager.LoadScene("Structure_02");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0561A578F08EC273CC9F9E211D782DC093FD62B1, NULL);
	}

IL_0026:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha3))
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)51), NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// SceneManager.LoadScene("Structure_03");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral892592B1C2CE8A81762451C62622E4CD5FEA587B, NULL);
	}

IL_0039:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha4))
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)52), NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// SceneManager.LoadScene("Structure_04");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral4847371B759FDF692A434C86CB9CFEE40508E781, NULL);
	}

IL_004c:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha5))
		bool L_4;
		L_4 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)53), NULL);
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		// SceneManager.LoadScene("Structure_05");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralB121005DC90DD3C413CC8D629A257458F59C6CB0, NULL);
	}

IL_005f:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha6))
		bool L_5;
		L_5 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)54), NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}
	{
		// SceneManager.LoadScene("Structure_06");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC2AB32CC9B83B9D140DB6263F664E20DF3DB0082, NULL);
	}

IL_0072:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha7))
		bool L_6;
		L_6 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)55), NULL);
		if (!L_6)
		{
			goto IL_0085;
		}
	}
	{
		// SceneManager.LoadScene("Props Furniture Showcase");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral6F3D9BE4D9B1B08BF5AFE1CA9BCD257AF0EA166D, NULL);
	}

IL_0085:
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_7;
		L_7 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_7)
		{
			goto IL_0093;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void SojaExiles.SceneSwitchGen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchGen__ctor_m01A00DF094F9009CD95A838E9D3D897D604D7E32 (SceneSwitchGen_tA7C5751FB40D835ECBBC648C7DCF329367578B6D* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseWindow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindow_Start_mE0041090CAF590E34DBF3039E7A5706C593E3B1D (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.opencloseWindow::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindow_OnMouseOver_m2A473179FC1A28651D1B69752C8EFD295DDD749E (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = opencloseWindow_opening_m09B5901E2E515EC387DA7FAF3F28D3D839CC408A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = opencloseWindow_closing_mD4F8D977E411902A11F26EC5544D0EAB0C89531E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseWindow::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow_opening_m09B5901E2E515EC387DA7FAF3F28D3D839CC408A (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* L_0 = (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m6AD388059C7731018ACD71A794B9DC43E5CDC409(L_0, 0, NULL);
		U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseWindow::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow_closing_mD4F8D977E411902A11F26EC5544D0EAB0C89531E (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* L_0 = (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m93C7D4E9A1D08BBF2843D92401E99E6AB836C89F(L_0, 0, NULL);
		U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.opencloseWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindow__ctor_m6E91630386003EC29946265DE4D4E571538589D8 (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseWindow/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m6AD388059C7731018ACD71A794B9DC43E5CDC409 (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseWindow/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_m09A131D0BE1464D78C6C35D6C419769DA9E898C0 (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseWindow/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_m1820D887C42B22E549AF0439C06C0D75F2FC21A1 (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F4565D879A5EE081D0C86E94468CA47F45179F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58, NULL);
		// openandclosewindow.Play("Openingwindow");
		opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclosewindow_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralD5F4565D879A5EE081D0C86E94468CA47F45179F, NULL);
		// open = true;
		opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseWindow/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6569F0A91C04390ED72BF318D792A1EB757CB2F5 (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseWindow/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mEF1E94F83DA516ECFD272ADF2276CA0924A4954D (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mEF1E94F83DA516ECFD272ADF2276CA0924A4954D_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseWindow/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_m11A20B22C0BB3B4645DDBC20440158139FDF3953 (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseWindow/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m93C7D4E9A1D08BBF2843D92401E99E6AB836C89F (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseWindow/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_m92E86AD6BE64671523FEA6C85C4AA75DC7A496F5 (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseWindow/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_mA48FA813DA2D55C43E505A7809DADD3A0A2C58C5 (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral437D4B096877A1450EC9D7A7C4C35431EA2B2FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F, NULL);
		// openandclosewindow.Play("Closingwindow");
		opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclosewindow_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral437D4B096877A1450EC9D7A7C4C35431EA2B2FC8, NULL);
		// open = false;
		opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseWindow/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7A03D9EE0273C34A7ABA1314DED3682BB0D27A61 (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseWindow/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mD30975A8C4205DEFD6B3E90F6E3323714AA8D615 (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mD30975A8C4205DEFD6B3E90F6E3323714AA8D615_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseWindow/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_m514F4211197478BAF907812E5CACBD4FB83085E7 (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseWindow1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindow1_Start_m2418A549F71923514DE00ACEF62A64AADC30D22C (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.opencloseWindow1::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindow1_OnMouseOver_mC1DC9DA7F674AD3FA92AA49F028D05FD99BEA041 (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = opencloseWindow1_opening_m3A409887BE45E31A4F4778BFB781D2BA33A0E3A3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = opencloseWindow1_closing_m5D7A2FCD93A4B4B81E7F86C943570F8ABA40205E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseWindow1::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow1_opening_m3A409887BE45E31A4F4778BFB781D2BA33A0E3A3 (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* L_0 = (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m467901284533702DBAB445C2634BD9C099777316(L_0, 0, NULL);
		U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseWindow1::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow1_closing_m5D7A2FCD93A4B4B81E7F86C943570F8ABA40205E (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* L_0 = (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m7EA2A71415F1399115F925A87AD229B03DFB793B(L_0, 0, NULL);
		U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.opencloseWindow1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindow1__ctor_m9C7C1028A7A8ED4B59AE6A57D178550500ECA941 (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseWindow1/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m467901284533702DBAB445C2634BD9C099777316 (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseWindow1/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_m74CC1ADDDCF854ABC5AC7F13F50E379F4E5E8B85 (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseWindow1/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_mC64117C143618A9F2A35D3A610856CCE23CD577A (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59EFA2332155424C07015805E9D5F807DD21B3E1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58, NULL);
		// openandclosewindow1.Play("Openingwindow 1");
		opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclosewindow1_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral59EFA2332155424C07015805E9D5F807DD21B3E1, NULL);
		// open = true;
		opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseWindow1/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6BF49B13B3AEA89BDE8C06A39C64F52CDDA6770B (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseWindow1/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m012A9CBE69059A1EE21B0EB45D3CB59675CC4A0E (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m012A9CBE69059A1EE21B0EB45D3CB59675CC4A0E_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseWindow1/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_m7DE53FEB321C4930699C6DD1990874E90E1CDA82 (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, const RuntimeMethod* method) 
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
// System.Void SojaExiles.opencloseWindow1/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m7EA2A71415F1399115F925A87AD229B03DFB793B (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseWindow1/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_mA150505CC489CBB502B17F9CEB21F8A897E5CBCF (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseWindow1/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_mACB071C14C84D164C29F58BE7FD6789C1B97F121 (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA860EF323F0B7701FB8C8E4116345741D4FFA0D7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F, NULL);
		// openandclosewindow1.Play("Closingwindow 1");
		opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclosewindow1_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralA860EF323F0B7701FB8C8E4116345741D4FFA0D7, NULL);
		// open = false;
		opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseWindow1/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF6C14E666284433C92F65A2C95BEE6F290A1E21B (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseWindow1/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mCD5D6F2064E4B2D85B86CF138AE68EE891962390 (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mCD5D6F2064E4B2D85B86CF138AE68EE891962390_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseWindow1/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_mC74E615B67D4D11BA760CC1EAAE1AEB52294A908 (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_FileName_m5D2654AE8AFFAD35C3C5441385ACF49316165A1C_inline (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___fileName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileName_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_Arguments_mB0FD15AAE263A0BE623B23A0FCB2E8091B73335E_inline (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___arguments_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arguments_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_RedirectStandardError_m12767166B563337AB52287A480DB1A7583A64568_inline (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___redirectStandardError_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_RedirectStandardOutput_m7A82B37FC5572A8D24816504B452A70C191B4DF3_inline (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___redirectStandardOutput_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_CreateNoWindow_mDA0868FB830E7D0F299D1E0C6C9FB97EE233537E_inline (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___createNoWindow_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_UseShellExecute_mB0BA9715560DC389FF2D3B3506E1A149808753CE_inline (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___useShellExecute_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
