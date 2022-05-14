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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// PointTime[]
struct PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// SManager/DanRetsu[]
struct DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// Dentaku
struct Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// Memo
struct Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// RecordManager
struct RecordManager_tD845BE58BE701C8473A8083ADB459C67C08FED7A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// ResultManager
struct ResultManager_tEF8FA76C9A0E26F975E734EFBE1CB7E057FEF0EE;
// SManager
struct SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C;
// SaveData
struct SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A;
// SaveManager
struct SaveManager_tFCE7930FC081EEE88E12994B53512095F258CBCE;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TitleManager
struct TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral09587B390B58B05D9A69B1C7EC137E636002771D;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral25D74BC981E6316A5E3CAEEA0BAF3C438F5C94DA;
IL2CPP_EXTERN_C String_t* _stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14;
IL2CPP_EXTERN_C String_t* _stringLiteral2F7234099CCD07F9C0939ACCC13D7F7F6E95DBAD;
IL2CPP_EXTERN_C String_t* _stringLiteral3E538D25AD88E153C305B95581F14918239F2431;
IL2CPP_EXTERN_C String_t* _stringLiteral5490ED6D16A9F8A2A50C56874DE80E67E8F72383;
IL2CPP_EXTERN_C String_t* _stringLiteral6DA200A24D3459144FF1C798C613973C697B36C5;
IL2CPP_EXTERN_C String_t* _stringLiteral7402F76B2D6078A455F77607AF6E7350B6DE019E;
IL2CPP_EXTERN_C String_t* _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral7652F294AE4AD750CED5D88C057B4B261F67F50B;
IL2CPP_EXTERN_C String_t* _stringLiteral7841BC5C1587A0C7E4A648334E3C33F52655193E;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9576C0DE515CD3F6A31DC37015C545AB1EA46893;
IL2CPP_EXTERN_C String_t* _stringLiteralA2961F2BD9BC2511337C4C08069DF47ECA24C24D;
IL2CPP_EXTERN_C String_t* _stringLiteralB16CF3324CA15FF0851B0F99DD86AC638C3E0CAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBC2FA24EBD69DC273624DC3D8A1FC0FCA8048B20;
IL2CPP_EXTERN_C String_t* _stringLiteralC03BC28C5D9F57A86806240A7B527D91033F8534;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDEB2E497D72A2A181D0667A344B31D69BC3CE6EF;
IL2CPP_EXTERN_C String_t* _stringLiteralE077CC0B119D1346E096B7B754FEF38CBA042E51;
IL2CPP_EXTERN_C String_t* _stringLiteralE57FF06035F380376BAB64E623996394E9F50EEC;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3;
IL2CPP_EXTERN_C String_t* _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSaveData_t7184650809321D6AAD08FE57453C100D09D4A89A_m55AF8340E85FF91870D255ADE4C9A1E867A7C82E_RuntimeMethod_var;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F;
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
struct DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
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

// Memo
struct Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF  : public RuntimeObject
{
public:

public:
};

struct Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields
{
public:
	// System.Int32 Memo::dan
	int32_t ___dan_0;
	// System.Int32 Memo::point
	int32_t ___point_1;
	// System.Single Memo::elapsedTime
	float ___elapsedTime_2;

public:
	inline static int32_t get_offset_of_dan_0() { return static_cast<int32_t>(offsetof(Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields, ___dan_0)); }
	inline int32_t get_dan_0() const { return ___dan_0; }
	inline int32_t* get_address_of_dan_0() { return &___dan_0; }
	inline void set_dan_0(int32_t value)
	{
		___dan_0 = value;
	}

	inline static int32_t get_offset_of_point_1() { return static_cast<int32_t>(offsetof(Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields, ___point_1)); }
	inline int32_t get_point_1() const { return ___point_1; }
	inline int32_t* get_address_of_point_1() { return &___point_1; }
	inline void set_point_1(int32_t value)
	{
		___point_1 = value;
	}

	inline static int32_t get_offset_of_elapsedTime_2() { return static_cast<int32_t>(offsetof(Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields, ___elapsedTime_2)); }
	inline float get_elapsedTime_2() const { return ___elapsedTime_2; }
	inline float* get_address_of_elapsedTime_2() { return &___elapsedTime_2; }
	inline void set_elapsedTime_2(float value)
	{
		___elapsedTime_2 = value;
	}
};


// SaveData
struct SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A  : public RuntimeObject
{
public:
	// System.String SaveData::Name
	String_t* ___Name_0;
	// PointTime[] SaveData::PtTimeArr
	PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* ___PtTimeArr_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_PtTimeArr_1() { return static_cast<int32_t>(offsetof(SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A, ___PtTimeArr_1)); }
	inline PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* get_PtTimeArr_1() const { return ___PtTimeArr_1; }
	inline PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F** get_address_of_PtTimeArr_1() { return &___PtTimeArr_1; }
	inline void set_PtTimeArr_1(PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* value)
	{
		___PtTimeArr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PtTimeArr_1), (void*)value);
	}
};


// SaveManager
struct SaveManager_tFCE7930FC081EEE88E12994B53512095F258CBCE  : public RuntimeObject
{
public:

public:
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
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

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// PointTime
struct PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96 
{
public:
	// System.Int32 PointTime::point
	int32_t ___point_0;
	// System.Single PointTime::time
	float ___time_1;

public:
	inline static int32_t get_offset_of_point_0() { return static_cast<int32_t>(offsetof(PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96, ___point_0)); }
	inline int32_t get_point_0() const { return ___point_0; }
	inline int32_t* get_address_of_point_0() { return &___point_0; }
	inline void set_point_0(int32_t value)
	{
		___point_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// SManager/DanRetsu
struct DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762 
{
public:
	// System.Int32 SManager/DanRetsu::dan
	int32_t ___dan_0;
	// System.Int32 SManager/DanRetsu::retsu
	int32_t ___retsu_1;

public:
	inline static int32_t get_offset_of_dan_0() { return static_cast<int32_t>(offsetof(DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762, ___dan_0)); }
	inline int32_t get_dan_0() const { return ___dan_0; }
	inline int32_t* get_address_of_dan_0() { return &___dan_0; }
	inline void set_dan_0(int32_t value)
	{
		___dan_0 = value;
	}

	inline static int32_t get_offset_of_retsu_1() { return static_cast<int32_t>(offsetof(DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762, ___retsu_1)); }
	inline int32_t get_retsu_1() const { return ___retsu_1; }
	inline int32_t* get_address_of_retsu_1() { return &___retsu_1; }
	inline void set_retsu_1(int32_t value)
	{
		___retsu_1 = value;
	}
};


// System.MidpointRounding
struct MidpointRounding_t537B4F5F001B1EBBD05CFF4474ED852D74C6179F 
{
public:
	// System.Int32 System.MidpointRounding::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MidpointRounding_t537B4F5F001B1EBBD05CFF4474ED852D74C6179F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___encoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___decoder_7)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteBuffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charBuffer_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____preamble_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____asyncReadTask_20)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields, ___Null_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_12;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_13;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ___encoder_14;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_15;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_16;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_17;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_18;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_19;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_20;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncWriteTask_22;

public:
	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___stream_12)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_12() const { return ___stream_12; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_12), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoding_13)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_13() const { return ___encoding_13; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_13), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_14() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoder_14)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get_encoder_14() const { return ___encoder_14; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of_encoder_14() { return &___encoder_14; }
	inline void set_encoder_14(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		___encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_15() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___byteBuffer_15)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_15() const { return ___byteBuffer_15; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_15() { return &___byteBuffer_15; }
	inline void set_byteBuffer_15(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_16() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charBuffer_16)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_16() const { return ___charBuffer_16; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_16() { return &___charBuffer_16; }
	inline void set_charBuffer_16(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_17() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charPos_17)); }
	inline int32_t get_charPos_17() const { return ___charPos_17; }
	inline int32_t* get_address_of_charPos_17() { return &___charPos_17; }
	inline void set_charPos_17(int32_t value)
	{
		___charPos_17 = value;
	}

	inline static int32_t get_offset_of_charLen_18() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charLen_18)); }
	inline int32_t get_charLen_18() const { return ___charLen_18; }
	inline int32_t* get_address_of_charLen_18() { return &___charLen_18; }
	inline void set_charLen_18(int32_t value)
	{
		___charLen_18 = value;
	}

	inline static int32_t get_offset_of_autoFlush_19() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___autoFlush_19)); }
	inline bool get_autoFlush_19() const { return ___autoFlush_19; }
	inline bool* get_address_of_autoFlush_19() { return &___autoFlush_19; }
	inline void set_autoFlush_19(bool value)
	{
		___autoFlush_19 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_20() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___haveWrittenPreamble_20)); }
	inline bool get_haveWrittenPreamble_20() const { return ___haveWrittenPreamble_20; }
	inline bool* get_address_of_haveWrittenPreamble_20() { return &___haveWrittenPreamble_20; }
	inline void set_haveWrittenPreamble_20(bool value)
	{
		___haveWrittenPreamble_20 = value;
	}

	inline static int32_t get_offset_of_closable_21() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___closable_21)); }
	inline bool get_closable_21() const { return ___closable_21; }
	inline bool* get_address_of_closable_21() { return &___closable_21; }
	inline void set_closable_21(bool value)
	{
		___closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_22() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ____asyncWriteTask_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncWriteTask_22() const { return ____asyncWriteTask_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncWriteTask_22() { return &____asyncWriteTask_22; }
	inline void set__asyncWriteTask_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncWriteTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_22), (void*)value);
	}
};

struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___Null_11;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____UTF8NoBOM_23;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ___Null_11)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_11), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_23() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ____UTF8NoBOM_23)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__UTF8NoBOM_23() const { return ____UTF8NoBOM_23; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__UTF8NoBOM_23() { return &____UTF8NoBOM_23; }
	inline void set__UTF8NoBOM_23(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____UTF8NoBOM_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_23), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Dentaku
struct Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Dentaku::SolutionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___SolutionText_4;

public:
	inline static int32_t get_offset_of_SolutionText_4() { return static_cast<int32_t>(offsetof(Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64, ___SolutionText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_SolutionText_4() const { return ___SolutionText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_SolutionText_4() { return &___SolutionText_4; }
	inline void set_SolutionText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___SolutionText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SolutionText_4), (void*)value);
	}
};


// RecordManager
struct RecordManager_tD845BE58BE701C8473A8083ADB459C67C08FED7A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text[] RecordManager::PointText
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___PointText_4;
	// UnityEngine.UI.Text[] RecordManager::TimeText
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___TimeText_5;
	// System.Int32 RecordManager::dan
	int32_t ___dan_6;
	// System.Int32 RecordManager::point
	int32_t ___point_7;

public:
	inline static int32_t get_offset_of_PointText_4() { return static_cast<int32_t>(offsetof(RecordManager_tD845BE58BE701C8473A8083ADB459C67C08FED7A, ___PointText_4)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_PointText_4() const { return ___PointText_4; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_PointText_4() { return &___PointText_4; }
	inline void set_PointText_4(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___PointText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointText_4), (void*)value);
	}

	inline static int32_t get_offset_of_TimeText_5() { return static_cast<int32_t>(offsetof(RecordManager_tD845BE58BE701C8473A8083ADB459C67C08FED7A, ___TimeText_5)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_TimeText_5() const { return ___TimeText_5; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_TimeText_5() { return &___TimeText_5; }
	inline void set_TimeText_5(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___TimeText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeText_5), (void*)value);
	}

	inline static int32_t get_offset_of_dan_6() { return static_cast<int32_t>(offsetof(RecordManager_tD845BE58BE701C8473A8083ADB459C67C08FED7A, ___dan_6)); }
	inline int32_t get_dan_6() const { return ___dan_6; }
	inline int32_t* get_address_of_dan_6() { return &___dan_6; }
	inline void set_dan_6(int32_t value)
	{
		___dan_6 = value;
	}

	inline static int32_t get_offset_of_point_7() { return static_cast<int32_t>(offsetof(RecordManager_tD845BE58BE701C8473A8083ADB459C67C08FED7A, ___point_7)); }
	inline int32_t get_point_7() const { return ___point_7; }
	inline int32_t* get_address_of_point_7() { return &___point_7; }
	inline void set_point_7(int32_t value)
	{
		___point_7 = value;
	}
};


// ResultManager
struct ResultManager_tEF8FA76C9A0E26F975E734EFBE1CB7E057FEF0EE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ResultManager::PointText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___PointText_4;
	// UnityEngine.UI.Text ResultManager::TimeText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TimeText_5;
	// UnityEngine.UI.Text ResultManager::NewRecord
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___NewRecord_6;
	// System.Int32 ResultManager::dan
	int32_t ___dan_7;
	// System.Int32 ResultManager::point
	int32_t ___point_8;

public:
	inline static int32_t get_offset_of_PointText_4() { return static_cast<int32_t>(offsetof(ResultManager_tEF8FA76C9A0E26F975E734EFBE1CB7E057FEF0EE, ___PointText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_PointText_4() const { return ___PointText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_PointText_4() { return &___PointText_4; }
	inline void set_PointText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___PointText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointText_4), (void*)value);
	}

	inline static int32_t get_offset_of_TimeText_5() { return static_cast<int32_t>(offsetof(ResultManager_tEF8FA76C9A0E26F975E734EFBE1CB7E057FEF0EE, ___TimeText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TimeText_5() const { return ___TimeText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TimeText_5() { return &___TimeText_5; }
	inline void set_TimeText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TimeText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeText_5), (void*)value);
	}

	inline static int32_t get_offset_of_NewRecord_6() { return static_cast<int32_t>(offsetof(ResultManager_tEF8FA76C9A0E26F975E734EFBE1CB7E057FEF0EE, ___NewRecord_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_NewRecord_6() const { return ___NewRecord_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_NewRecord_6() { return &___NewRecord_6; }
	inline void set_NewRecord_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___NewRecord_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewRecord_6), (void*)value);
	}

	inline static int32_t get_offset_of_dan_7() { return static_cast<int32_t>(offsetof(ResultManager_tEF8FA76C9A0E26F975E734EFBE1CB7E057FEF0EE, ___dan_7)); }
	inline int32_t get_dan_7() const { return ___dan_7; }
	inline int32_t* get_address_of_dan_7() { return &___dan_7; }
	inline void set_dan_7(int32_t value)
	{
		___dan_7 = value;
	}

	inline static int32_t get_offset_of_point_8() { return static_cast<int32_t>(offsetof(ResultManager_tEF8FA76C9A0E26F975E734EFBE1CB7E057FEF0EE, ___point_8)); }
	inline int32_t get_point_8() const { return ___point_8; }
	inline int32_t* get_address_of_point_8() { return &___point_8; }
	inline void set_point_8(int32_t value)
	{
		___point_8 = value;
	}
};


// SManager
struct SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 SManager::dan
	int32_t ___dan_4;
	// System.Int32 SManager::retsu
	int32_t ___retsu_5;
	// System.Int32 SManager::EqualNumber
	int32_t ___EqualNumber_6;
	// UnityEngine.UI.Text SManager::EqualNumberText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___EqualNumberText_7;
	// UnityEngine.UI.Text SManager::ProblemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ProblemText_8;
	// UnityEngine.UI.Text SManager::InputText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___InputText_9;
	// UnityEngine.UI.Text SManager::TitleText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TitleText_10;
	// System.Single SManager::elapsedTime
	float ___elapsedTime_11;
	// SManager/DanRetsu[] SManager::ProbArr
	DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7* ___ProbArr_12;
	// System.Int32 SManager::RetsuCounter
	int32_t ___RetsuCounter_13;

public:
	inline static int32_t get_offset_of_dan_4() { return static_cast<int32_t>(offsetof(SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C, ___dan_4)); }
	inline int32_t get_dan_4() const { return ___dan_4; }
	inline int32_t* get_address_of_dan_4() { return &___dan_4; }
	inline void set_dan_4(int32_t value)
	{
		___dan_4 = value;
	}

	inline static int32_t get_offset_of_retsu_5() { return static_cast<int32_t>(offsetof(SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C, ___retsu_5)); }
	inline int32_t get_retsu_5() const { return ___retsu_5; }
	inline int32_t* get_address_of_retsu_5() { return &___retsu_5; }
	inline void set_retsu_5(int32_t value)
	{
		___retsu_5 = value;
	}

	inline static int32_t get_offset_of_EqualNumber_6() { return static_cast<int32_t>(offsetof(SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C, ___EqualNumber_6)); }
	inline int32_t get_EqualNumber_6() const { return ___EqualNumber_6; }
	inline int32_t* get_address_of_EqualNumber_6() { return &___EqualNumber_6; }
	inline void set_EqualNumber_6(int32_t value)
	{
		___EqualNumber_6 = value;
	}

	inline static int32_t get_offset_of_EqualNumberText_7() { return static_cast<int32_t>(offsetof(SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C, ___EqualNumberText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_EqualNumberText_7() const { return ___EqualNumberText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_EqualNumberText_7() { return &___EqualNumberText_7; }
	inline void set_EqualNumberText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___EqualNumberText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EqualNumberText_7), (void*)value);
	}

	inline static int32_t get_offset_of_ProblemText_8() { return static_cast<int32_t>(offsetof(SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C, ___ProblemText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ProblemText_8() const { return ___ProblemText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ProblemText_8() { return &___ProblemText_8; }
	inline void set_ProblemText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ProblemText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProblemText_8), (void*)value);
	}

	inline static int32_t get_offset_of_InputText_9() { return static_cast<int32_t>(offsetof(SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C, ___InputText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_InputText_9() const { return ___InputText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_InputText_9() { return &___InputText_9; }
	inline void set_InputText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___InputText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputText_9), (void*)value);
	}

	inline static int32_t get_offset_of_TitleText_10() { return static_cast<int32_t>(offsetof(SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C, ___TitleText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TitleText_10() const { return ___TitleText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TitleText_10() { return &___TitleText_10; }
	inline void set_TitleText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TitleText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TitleText_10), (void*)value);
	}

	inline static int32_t get_offset_of_elapsedTime_11() { return static_cast<int32_t>(offsetof(SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C, ___elapsedTime_11)); }
	inline float get_elapsedTime_11() const { return ___elapsedTime_11; }
	inline float* get_address_of_elapsedTime_11() { return &___elapsedTime_11; }
	inline void set_elapsedTime_11(float value)
	{
		___elapsedTime_11 = value;
	}

	inline static int32_t get_offset_of_ProbArr_12() { return static_cast<int32_t>(offsetof(SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C, ___ProbArr_12)); }
	inline DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7* get_ProbArr_12() const { return ___ProbArr_12; }
	inline DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7** get_address_of_ProbArr_12() { return &___ProbArr_12; }
	inline void set_ProbArr_12(DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7* value)
	{
		___ProbArr_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProbArr_12), (void*)value);
	}

	inline static int32_t get_offset_of_RetsuCounter_13() { return static_cast<int32_t>(offsetof(SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C, ___RetsuCounter_13)); }
	inline int32_t get_RetsuCounter_13() const { return ___RetsuCounter_13; }
	inline int32_t* get_address_of_RetsuCounter_13() { return &___RetsuCounter_13; }
	inline void set_RetsuCounter_13(int32_t value)
	{
		___RetsuCounter_13 = value;
	}
};


// TitleManager
struct TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// PointTime[]
struct PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96  m_Items[1];

public:
	inline PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * m_Items[1];

public:
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// SManager/DanRetsu[]
struct DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762  m_Items[1];

public:
	inline DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762  value)
	{
		m_Items[index] = value;
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


// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);

// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void PointTime::.ctor(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointTime__ctor_m3833BB8887055613446715A06031D6D2D0063A7D (PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96 * __this, int32_t ____point0, float ____time1, const RuntimeMethod* method);
// System.Void SaveData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_mBDF4096F6F1E6534B7FEBD083BCE948A2B3718B0 (SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * __this, const RuntimeMethod* method);
// System.String SaveManager::GetApplicationFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SaveManager_GetApplicationFilePath_m698BFB8B825531F6653C380723587CD85730BE42 (String_t* ___filename0, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// SaveData SaveManager::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * SaveManager_Load_mBFDF8F98FC86F548D6F498BCC808BEC4451ED095 (String_t* ___FileName0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Double System.Math::Round(System.Double,System.Int32,System.MidpointRounding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_mAD6D310A22A9CDF20746AF9717BCB3F1AB0E542A (double ___value0, int32_t ___digits1, int32_t ___mode2, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.Boolean ResultManager::UpdateRecord(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResultManager_UpdateRecord_mDCB66458162D1E3CB9F03A4AAE4B52D9C8993F4D (ResultManager_tEF8FA76C9A0E26F975E734EFBE1CB7E057FEF0EE * __this, double ___Time20, const RuntimeMethod* method);
// System.Void SaveManager::Save(System.String,SaveData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_Save_m2D9E8C680FF9FF9032E7572B756E74B829CF549E (String_t* ___FileName0, SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * ___saveData1, const RuntimeMethod* method);
// System.Void SManager::Problem(SManager/DanRetsu)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SManager_Problem_m26AD2AF6FE4C6EEA07D52D1563129EFD66B17BBC (SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C * __this, DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762  ___danretsu0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.IO.StreamWriter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_mE341C28EFA3FE0484823233273DBE251A11BD4FC (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m1F07D64A9881F3A6B755881210B4E88F8E63849B (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * __this, String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<SaveData>(System.String)
inline SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * JsonUtility_FromJson_TisSaveData_t7184650809321D6AAD08FE57453C100D09D4A89A_m55AF8340E85FF91870D255ADE4C9A1E867A7C82E (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void SManager/DanRetsu::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DanRetsu__ctor_m7F0532D0B09465658576D208F8CBC7675F592211 (DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762 * __this, int32_t ____dan0, int32_t ____retsu1, const RuntimeMethod* method);
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
// System.Void Dentaku::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku_Start_mC83CA9767DBEF9E1B29786F5503AE84A26A1E699 (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Dentaku::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku_Update_m54DA09C3C3701EEC0F130A5B1037AD0C397F0817 (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Dentaku::Push7Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku_Push7Key_mA401C3D5667A4194AD06E1017424DF26992031F9 (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7402F76B2D6078A455F77607AF6E7350B6DE019E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolutionText.text == "0")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_SolutionText_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// SolutionText.text = "7";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_SolutionText_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral7402F76B2D6078A455F77607AF6E7350B6DE019E);
		// } else
		return;
	}

IL_0028:
	{
		// SolutionText.text = SolutionText.text + "7";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_SolutionText_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_SolutionText_4();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteral7402F76B2D6078A455F77607AF6E7350B6DE019E, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void Dentaku::Push8Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku_Push8Key_mE63441C84086562B9AF33E55465E7984B25D8C84 (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB16CF3324CA15FF0851B0F99DD86AC638C3E0CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolutionText.text == "0")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_SolutionText_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// SolutionText.text = "8";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_SolutionText_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralB16CF3324CA15FF0851B0F99DD86AC638C3E0CAE);
		// }
		return;
	}

IL_0028:
	{
		// SolutionText.text = SolutionText.text + "8";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_SolutionText_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_SolutionText_4();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteralB16CF3324CA15FF0851B0F99DD86AC638C3E0CAE, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void Dentaku::Push9Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku_Push9Key_m104E98DE2958AB03962BD5BAD33574F658270552 (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D74BC981E6316A5E3CAEEA0BAF3C438F5C94DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolutionText.text == "0")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_SolutionText_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// SolutionText.text = "9";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_SolutionText_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral25D74BC981E6316A5E3CAEEA0BAF3C438F5C94DA);
		// }
		return;
	}

IL_0028:
	{
		// SolutionText.text = SolutionText.text + "9";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_SolutionText_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_SolutionText_4();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteral25D74BC981E6316A5E3CAEEA0BAF3C438F5C94DA, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void Dentaku::Push4Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku_Push4Key_mF4330CE257C6C8A08404D07500379594D7B2129F (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolutionText.text == "0")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_SolutionText_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// SolutionText.text = "4";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_SolutionText_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9);
		// }
		return;
	}

IL_0028:
	{
		// SolutionText.text = SolutionText.text + "4";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_SolutionText_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_SolutionText_4();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void Dentaku::Push5Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku_Push5Key_m4D863044B0F57EB3115513FD7B7A6E9AB13C2A6A (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolutionText.text == "0")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_SolutionText_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// SolutionText.text = "5";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_SolutionText_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE);
		// }
		return;
	}

IL_0028:
	{
		// SolutionText.text = SolutionText.text + "5";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_SolutionText_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_SolutionText_4();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void Dentaku::Push6Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku_Push6Key_m6227CFEDACB276077A6CEB1F0DCA3B1C064DB3BD (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F7234099CCD07F9C0939ACCC13D7F7F6E95DBAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolutionText.text == "0")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_SolutionText_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// SolutionText.text = "6";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_SolutionText_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral2F7234099CCD07F9C0939ACCC13D7F7F6E95DBAD);
		// }
		return;
	}

IL_0028:
	{
		// SolutionText.text = SolutionText.text + "6";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_SolutionText_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_SolutionText_4();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteral2F7234099CCD07F9C0939ACCC13D7F7F6E95DBAD, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void Dentaku::Push1Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku_Push1Key_mEAD11B17F2F6B71FC48FCCFA228717585B07DFAB (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolutionText.text == "0")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_SolutionText_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// SolutionText.text = "1";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_SolutionText_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		// }
		return;
	}

IL_0028:
	{
		// SolutionText.text = SolutionText.text + "1";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_SolutionText_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_SolutionText_4();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void Dentaku::Push2Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku_Push2Key_m98A0897871D157954DE69C0751EEACD38864B47F (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolutionText.text == "0")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_SolutionText_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// SolutionText.text = "2";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_SolutionText_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		// }
		return;
	}

IL_0028:
	{
		// SolutionText.text = SolutionText.text + "2";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_SolutionText_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_SolutionText_4();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void Dentaku::Push3Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku_Push3Key_m2B80C422B80D370B4126A55F0937A83FBF6119C9 (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolutionText.text == "0")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_SolutionText_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// SolutionText.text = "3";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_SolutionText_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		// }
		return;
	}

IL_0028:
	{
		// SolutionText.text = SolutionText.text + "3";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_SolutionText_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_SolutionText_4();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void Dentaku::Push0Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku_Push0Key_m96C339483F47203E4EFEB93600461D317B45D1E2 (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolutionText.text == "0")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_SolutionText_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// SolutionText.text = "0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_SolutionText_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// }
		return;
	}

IL_0028:
	{
		// SolutionText.text = SolutionText.text + "0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_SolutionText_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_SolutionText_4();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void Dentaku::PushDELKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku_PushDELKey_m8FA40B3D10250942E87745F73D5795DC7B0AC934 (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SolutionText.text = "0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_SolutionText_4();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// }
		return;
	}
}
// System.Void Dentaku::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dentaku__ctor_mA198B56DF82EF15599F171E472086A8D6F54F23B (Dentaku_tD156E08F9D2357794FCE0C0969331322C2674E64 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Memo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memo__ctor_m51D0826B20C2CFCBAA55EFD7BAFD2DCF49BBBFCB (Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF * __this, const RuntimeMethod* method)
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
// System.Void PointTime::.ctor(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointTime__ctor_m3833BB8887055613446715A06031D6D2D0063A7D (PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96 * __this, int32_t ____point0, float ____time1, const RuntimeMethod* method)
{
	{
		// point = _point;
		int32_t L_0 = ____point0;
		__this->set_point_0(L_0);
		// time = _time;
		float L_1 = ____time1;
		__this->set_time_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PointTime__ctor_m3833BB8887055613446715A06031D6D2D0063A7D_AdjustorThunk (RuntimeObject * __this, int32_t ____point0, float ____time1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96 * _thisAdjusted = reinterpret_cast<PointTime_t416C31485218C669F3AC298C9EE481AB699E1C96 *>(__this + _offset);
	PointTime__ctor_m3833BB8887055613446715A06031D6D2D0063A7D(_thisAdjusted, ____point0, ____time1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RecordManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordManager_Start_mE1096F83EF68A29176BE8261271C21D68E3139DE (RecordManager_tD845BE58BE701C8473A8083ADB459C67C08FED7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA200A24D3459144FF1C798C613973C697B36C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7652F294AE4AD750CED5D88C057B4B261F67F50B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9576C0DE515CD3F6A31DC37015C545AB1EA46893);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE57FF06035F380376BAB64E623996394E9F50EEC);
		s_Il2CppMethodInitialized = true;
	}
	SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// dan = Memo.dan;
		int32_t L_0 = ((Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields*)il2cpp_codegen_static_fields_for(Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var))->get_dan_0();
		__this->set_dan_6(L_0);
		// point = Memo.point;
		int32_t L_1 = ((Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields*)il2cpp_codegen_static_fields_for(Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var))->get_point_1();
		__this->set_point_7(L_1);
		// SaveData SV = new SaveData();
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_2 = (SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A *)il2cpp_codegen_object_new(SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A_il2cpp_TypeInfo_var);
		SaveData__ctor_mBDF4096F6F1E6534B7FEBD083BCE948A2B3718B0(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		// string saveFilePath = SaveManager.GetApplicationFilePath("Save.json");
		String_t* L_3;
		L_3 = SaveManager_GetApplicationFilePath_m698BFB8B825531F6653C380723587CD85730BE42(_stringLiteral9576C0DE515CD3F6A31DC37015C545AB1EA46893, /*hidden argument*/NULL);
		// if (File.Exists(saveFilePath))
		bool L_4;
		L_4 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// SV = SaveManager.Load("Save.json");
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_5;
		L_5 = SaveManager_Load_mBFDF8F98FC86F548D6F498BCC808BEC4451ED095(_stringLiteral9576C0DE515CD3F6A31DC37015C545AB1EA46893, /*hidden argument*/NULL);
		V_0 = L_5;
		// }
		goto IL_0044;
	}

IL_003a:
	{
		// Debug.Log("�Z�[�u�f�[�^���j�����Ă��܂��D");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6DA200A24D3459144FF1C798C613973C697B36C5, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// for (int i = 0; i < 10; i++)
		V_1 = 0;
		goto IL_00d2;
	}

IL_004b:
	{
		// if (SV.PtTimeArr[i].point != 18)
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_6 = V_0;
		NullCheck(L_6);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_7 = L_6->get_PtTimeArr_1();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_point_0();
		if ((((int32_t)L_9) == ((int32_t)((int32_t)18))))
		{
			goto IL_0074;
		}
	}
	{
		// TimeText[i].text = "N/A";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_10 = __this->get_TimeText_5();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14);
		// }
		goto IL_00a1;
	}

IL_0074:
	{
		// TimeText[i].text = SV.PtTimeArr[i].time.ToString() + " sec.";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_14 = __this->get_TimeText_5();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_18 = V_0;
		NullCheck(L_18);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_19 = L_18->get_PtTimeArr_1();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		float* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_address_of_time_1();
		String_t* L_22;
		L_22 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_22, _stringLiteral7652F294AE4AD750CED5D88C057B4B261F67F50B, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_23);
	}

IL_00a1:
	{
		// PointText[i].text = SV.PtTimeArr[i].point.ToString() + " pt.";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_24 = __this->get_PointText_4();
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_28 = V_0;
		NullCheck(L_28);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_29 = L_28->get_PtTimeArr_1();
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->get_address_of_point_0();
		String_t* L_32;
		L_32 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_31, /*hidden argument*/NULL);
		String_t* L_33;
		L_33 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_32, _stringLiteralE57FF06035F380376BAB64E623996394E9F50EEC, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_33);
		// for (int i = 0; i < 10; i++)
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00d2:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)((int32_t)10))))
		{
			goto IL_004b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RecordManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordManager_Update_mE63DF9E742B834427E651FEB7CE0A4BD40049201 (RecordManager_tD845BE58BE701C8473A8083ADB459C67C08FED7A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RecordManager::PushReturnButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordManager_PushReturnButton_mCBA1E157DBFD5159578E18417B3CF25B24FB2147 (RecordManager_tD845BE58BE701C8473A8083ADB459C67C08FED7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TitleScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RecordManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordManager__ctor_m45495AA312F5028560CC58DD64FF9DB8275E6170 (RecordManager_tD845BE58BE701C8473A8083ADB459C67C08FED7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Text[] PointText = new Text[10];
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_0 = (TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F*)(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F*)SZArrayNew(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_PointText_4(L_0);
		// public Text[] TimeText = new Text[10];
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_1 = (TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F*)(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F*)SZArrayNew(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_TimeText_5(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ResultManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultManager_Start_m3748F846C33657907504C43092E1E679621B39E1 (ResultManager_tEF8FA76C9A0E26F975E734EFBE1CB7E057FEF0EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7652F294AE4AD750CED5D88C057B4B261F67F50B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB2E497D72A2A181D0667A344B31D69BC3CE6EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE57FF06035F380376BAB64E623996394E9F50EEC);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// PointText.text = Memo.point.ToString() + " pt.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_PointText_4();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields*)il2cpp_codegen_static_fields_for(Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var))->get_address_of_point_1()), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, _stringLiteralE57FF06035F380376BAB64E623996394E9F50EEC, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// Time1 = (double)Memo.elapsedTime;
		float L_3 = ((Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields*)il2cpp_codegen_static_fields_for(Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var))->get_elapsedTime_2();
		// Time2 = Math.Round(Time1, 2, MidpointRounding.AwayFromZero);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = Math_Round_mAD6D310A22A9CDF20746AF9717BCB3F1AB0E542A(((double)((double)L_3)), 2, 1, /*hidden argument*/NULL);
		V_0 = L_4;
		// TimeText.text = Time2.ToString() + " sec.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_TimeText_5();
		String_t* L_6;
		L_6 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&V_0), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteral7652F294AE4AD750CED5D88C057B4B261F67F50B, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// UpTime = UpdateRecord(Time2);
		double L_8 = V_0;
		bool L_9;
		L_9 = ResultManager_UpdateRecord_mDCB66458162D1E3CB9F03A4AAE4B52D9C8993F4D(__this, L_8, /*hidden argument*/NULL);
		// if (UpTime)
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		// NewRecord.text = "New Record!";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_NewRecord_6();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteralDEB2E497D72A2A181D0667A344B31D69BC3CE6EF);
		// }
		return;
	}

IL_0063:
	{
		// NewRecord.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_NewRecord_6();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void ResultManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultManager_Update_mA51A8AC9CD3724AB03893981CA48657E4D7CE42B (ResultManager_tEF8FA76C9A0E26F975E734EFBE1CB7E057FEF0EE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean ResultManager::UpdateRecord(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResultManager_UpdateRecord_mDCB66458162D1E3CB9F03A4AAE4B52D9C8993F4D (ResultManager_tEF8FA76C9A0E26F975E734EFBE1CB7E057FEF0EE * __this, double ___Time20, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA200A24D3459144FF1C798C613973C697B36C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9576C0DE515CD3F6A31DC37015C545AB1EA46893);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * V_0 = NULL;
	{
		// dan = Memo.dan;
		int32_t L_0 = ((Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields*)il2cpp_codegen_static_fields_for(Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var))->get_dan_0();
		__this->set_dan_7(L_0);
		// point = Memo.point;
		int32_t L_1 = ((Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields*)il2cpp_codegen_static_fields_for(Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var))->get_point_1();
		__this->set_point_8(L_1);
		// SaveData SV = new SaveData();
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_2 = (SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A *)il2cpp_codegen_object_new(SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A_il2cpp_TypeInfo_var);
		SaveData__ctor_mBDF4096F6F1E6534B7FEBD083BCE948A2B3718B0(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		// string saveFilePath = SaveManager.GetApplicationFilePath("Save.json");
		String_t* L_3;
		L_3 = SaveManager_GetApplicationFilePath_m698BFB8B825531F6653C380723587CD85730BE42(_stringLiteral9576C0DE515CD3F6A31DC37015C545AB1EA46893, /*hidden argument*/NULL);
		// if (File.Exists(saveFilePath))
		bool L_4;
		L_4 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// SV = SaveManager.Load("Save.json");
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_5;
		L_5 = SaveManager_Load_mBFDF8F98FC86F548D6F498BCC808BEC4451ED095(_stringLiteral9576C0DE515CD3F6A31DC37015C545AB1EA46893, /*hidden argument*/NULL);
		V_0 = L_5;
		// }
		goto IL_0044;
	}

IL_003a:
	{
		// Debug.Log("�Z�[�u�f�[�^���j�����Ă��܂��D");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6DA200A24D3459144FF1C798C613973C697B36C5, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_6 = V_0;
		NullCheck(L_6);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_7 = L_6->get_PtTimeArr_1();
		int32_t L_8 = __this->get_dan_7();
		NullCheck(L_7);
		float* L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)11))))))->get_address_of_time_1();
		String_t* L_10;
		L_10 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00d4;
		}
	}
	{
		// SV.PtTimeArr[dan - 11].time = (float)Time2;
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_12 = V_0;
		NullCheck(L_12);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_13 = L_12->get_PtTimeArr_1();
		int32_t L_14 = __this->get_dan_7();
		NullCheck(L_13);
		double L_15 = ___Time20;
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)11))))))->set_time_1(((float)((float)L_15)));
		// SV.PtTimeArr[dan - 11].point = point;
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_16 = V_0;
		NullCheck(L_16);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_17 = L_16->get_PtTimeArr_1();
		int32_t L_18 = __this->get_dan_7();
		NullCheck(L_17);
		int32_t L_19 = __this->get_point_8();
		((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)11))))))->set_point_0(L_19);
		// SaveManager.Save("Save.json", SV);
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_20 = V_0;
		SaveManager_Save_m2D9E8C680FF9FF9032E7572B756E74B829CF549E(_stringLiteral9576C0DE515CD3F6A31DC37015C545AB1EA46893, L_20, /*hidden argument*/NULL);
		// if (SV.PtTimeArr[dan - 11].point == 18)
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_21 = V_0;
		NullCheck(L_21);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_22 = L_21->get_PtTimeArr_1();
		int32_t L_23 = __this->get_dan_7();
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)((int32_t)11))))))->get_point_0();
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_00d2;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00d2:
	{
		// return false;
		return (bool)0;
	}

IL_00d4:
	{
		// else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_25 = V_0;
		NullCheck(L_25);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_26 = L_25->get_PtTimeArr_1();
		int32_t L_27 = __this->get_dan_7();
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)((int32_t)11))))))->get_point_0();
		int32_t L_29 = __this->get_point_8();
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0112;
		}
	}
	{
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_30 = V_0;
		NullCheck(L_30);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_31 = L_30->get_PtTimeArr_1();
		int32_t L_32 = __this->get_dan_7();
		NullCheck(L_31);
		float L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)((int32_t)11))))))->get_time_1();
		double L_34 = ___Time20;
		if ((((double)((double)((double)L_33))) > ((double)L_34)))
		{
			goto IL_0133;
		}
	}

IL_0112:
	{
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_35 = V_0;
		NullCheck(L_35);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_36 = L_35->get_PtTimeArr_1();
		int32_t L_37 = __this->get_dan_7();
		NullCheck(L_36);
		int32_t L_38 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)((int32_t)11))))))->get_point_0();
		int32_t L_39 = __this->get_point_8();
		if ((((int32_t)L_38) >= ((int32_t)L_39)))
		{
			goto IL_0199;
		}
	}

IL_0133:
	{
		// SV.PtTimeArr[dan - 11].time = (float)Time2;
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_40 = V_0;
		NullCheck(L_40);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_41 = L_40->get_PtTimeArr_1();
		int32_t L_42 = __this->get_dan_7();
		NullCheck(L_41);
		double L_43 = ___Time20;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)((int32_t)11))))))->set_time_1(((float)((float)L_43)));
		// SV.PtTimeArr[dan - 11].point = point;
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_44 = V_0;
		NullCheck(L_44);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_45 = L_44->get_PtTimeArr_1();
		int32_t L_46 = __this->get_dan_7();
		NullCheck(L_45);
		int32_t L_47 = __this->get_point_8();
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)((int32_t)11))))))->set_point_0(L_47);
		// SaveManager.Save("Save.json", SV);
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_48 = V_0;
		SaveManager_Save_m2D9E8C680FF9FF9032E7572B756E74B829CF549E(_stringLiteral9576C0DE515CD3F6A31DC37015C545AB1EA46893, L_48, /*hidden argument*/NULL);
		// if (SV.PtTimeArr[dan - 11].point == 18)
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_49 = V_0;
		NullCheck(L_49);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_50 = L_49->get_PtTimeArr_1();
		int32_t L_51 = __this->get_dan_7();
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)((int32_t)11))))))->get_point_0();
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0197;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0197:
	{
		// return false;
		return (bool)0;
	}

IL_0199:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void ResultManager::PushReturnButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultManager_PushReturnButton_m1301EF289A8CB5B01A0B7E9C384D2928FB418EA4 (ResultManager_tEF8FA76C9A0E26F975E734EFBE1CB7E057FEF0EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TitleScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ResultManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultManager__ctor_m0B90AD9833592CF45CA2C8C93807CD18436AF29D (ResultManager_tEF8FA76C9A0E26F975E734EFBE1CB7E057FEF0EE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SManager_Start_m794EFF8601B6E6BA095E1CCE41E8158FFADAC265 (SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5490ED6D16A9F8A2A50C56874DE80E67E8F72383);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2961F2BD9BC2511337C4C08069DF47ECA24C24D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC2FA24EBD69DC273624DC3D8A1FC0FCA8048B20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dan = Memo.dan;
		int32_t L_0 = ((Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields*)il2cpp_codegen_static_fields_for(Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var))->get_dan_0();
		__this->set_dan_4(L_0);
		// EqualNumberText.text = "0pt.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_EqualNumberText_7();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralBC2FA24EBD69DC273624DC3D8A1FC0FCA8048B20);
		// if (dan <= 19)
		int32_t L_2 = __this->get_dan_4();
		if ((((int32_t)L_2) > ((int32_t)((int32_t)19))))
		{
			goto IL_00c8;
		}
	}
	{
		// TitleText.text = dan.ToString() + "�̒i";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_TitleText_10();
		int32_t* L_4 = __this->get_address_of_dan_4();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, _stringLiteral5490ED6D16A9F8A2A50C56874DE80E67E8F72383, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// InputText.text = "0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_InputText_9();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// for (retsu = 2; retsu < 20; retsu++)
		__this->set_retsu_5(2);
		goto IL_00ab;
	}

IL_0061:
	{
		// ProbArr[retsu - 2].dan = dan;
		DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7* L_8 = __this->get_ProbArr_12();
		int32_t L_9 = __this->get_retsu_5();
		NullCheck(L_8);
		int32_t L_10 = __this->get_dan_4();
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)2)))))->set_dan_0(L_10);
		// ProbArr[retsu - 2].retsu = retsu;
		DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7* L_11 = __this->get_ProbArr_12();
		int32_t L_12 = __this->get_retsu_5();
		NullCheck(L_11);
		int32_t L_13 = __this->get_retsu_5();
		((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)2)))))->set_retsu_1(L_13);
		// for (retsu = 2; retsu < 20; retsu++)
		int32_t L_14 = __this->get_retsu_5();
		__this->set_retsu_5(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
	}

IL_00ab:
	{
		// for (retsu = 2; retsu < 20; retsu++)
		int32_t L_15 = __this->get_retsu_5();
		if ((((int32_t)L_15) < ((int32_t)((int32_t)20))))
		{
			goto IL_0061;
		}
	}
	{
		// Problem(ProbArr[0]);
		DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7* L_16 = __this->get_ProbArr_12();
		NullCheck(L_16);
		int32_t L_17 = 0;
		DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762  L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		SManager_Problem_m26AD2AF6FE4C6EEA07D52D1563129EFD66B17BBC(__this, L_18, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00c8:
	{
		// TitleText.text = "�����_��18";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_TitleText_10();
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteralA2961F2BD9BC2511337C4C08069DF47ECA24C24D);
		// InputText.text = "0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_InputText_9();
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// for (retsu = 2; retsu <20; retsu++)
		__this->set_retsu_5(2);
		goto IL_0140;
	}

IL_00f1:
	{
		// ProbArr[retsu - 2].dan = (int)UnityEngine.Random.Range(11, 20);
		DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7* L_21 = __this->get_ProbArr_12();
		int32_t L_22 = __this->get_retsu_5();
		NullCheck(L_21);
		int32_t L_23;
		L_23 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)11), ((int32_t)20), /*hidden argument*/NULL);
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)2)))))->set_dan_0(L_23);
		// ProbArr[retsu - 2].retsu = (int)UnityEngine.Random.Range(2, 20);
		DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7* L_24 = __this->get_ProbArr_12();
		int32_t L_25 = __this->get_retsu_5();
		NullCheck(L_24);
		int32_t L_26;
		L_26 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(2, ((int32_t)20), /*hidden argument*/NULL);
		((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)2)))))->set_retsu_1(L_26);
		// for (retsu = 2; retsu <20; retsu++)
		int32_t L_27 = __this->get_retsu_5();
		__this->set_retsu_5(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
	}

IL_0140:
	{
		// for (retsu = 2; retsu <20; retsu++)
		int32_t L_28 = __this->get_retsu_5();
		if ((((int32_t)L_28) < ((int32_t)((int32_t)20))))
		{
			goto IL_00f1;
		}
	}
	{
		// Problem(ProbArr[0]);
		DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7* L_29 = __this->get_ProbArr_12();
		NullCheck(L_29);
		int32_t L_30 = 0;
		DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762  L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		SManager_Problem_m26AD2AF6FE4C6EEA07D52D1563129EFD66B17BBC(__this, L_31, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SManager_Update_mFFAA0596B255E69A71688C2BA0CFE828FD636D7E (SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C * __this, const RuntimeMethod* method)
{
	{
		// elapsedTime += Time.deltaTime;
		float L_0 = __this->get_elapsedTime_11();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_elapsedTime_11(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
// System.Void SManager::Problem(SManager/DanRetsu)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SManager_Problem_m26AD2AF6FE4C6EEA07D52D1563129EFD66B17BBC (SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C * __this, DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762  ___danretsu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string NumberText = danretsu.retsu.ToString();
		int32_t* L_0 = (&___danretsu0)->get_address_of_retsu_1();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// ProblemText.text = danretsu.dan.ToString() + "x" + NumberText + "=";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_ProblemText_8();
		int32_t* L_3 = (&___danretsu0)->get_address_of_dan_0();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_4, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_5, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
		// }
		return;
	}
}
// System.Void SManager::PushRETKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SManager_PushRETKey_mCE29CE63794F166A35E9C2661901D7E91AB207C8 (SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7841BC5C1587A0C7E4A648334E3C33F52655193E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE077CC0B119D1346E096B7B754FEF38CBA042E51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// sol = ProbArr[RetsuCounter].dan * ProbArr[RetsuCounter].retsu;
		DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7* L_0 = __this->get_ProbArr_12();
		int32_t L_1 = __this->get_RetsuCounter_13();
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_dan_0();
		DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7* L_3 = __this->get_ProbArr_12();
		int32_t L_4 = __this->get_RetsuCounter_13();
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_retsu_1();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_5));
		// if(sol.ToString() == InputText.text)
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_InputText_9();
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		// EqualNumber += 1;
		int32_t L_10 = __this->get_EqualNumber_6();
		__this->set_EqualNumber_6(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		// EqualNumberText.text = EqualNumber.ToString() + "pt.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_EqualNumberText_7();
		int32_t* L_12 = __this->get_address_of_EqualNumber_6();
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_13, _stringLiteral7841BC5C1587A0C7E4A648334E3C33F52655193E, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
	}

IL_0075:
	{
		// InputText.text = "0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_InputText_9();
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// RetsuCounter++;
		int32_t L_16 = __this->get_RetsuCounter_13();
		__this->set_RetsuCounter_13(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		// if (RetsuCounter >= 18)
		int32_t L_17 = __this->get_RetsuCounter_13();
		if ((((int32_t)L_17) < ((int32_t)((int32_t)18))))
		{
			goto IL_00be;
		}
	}
	{
		// Memo.point = EqualNumber;
		int32_t L_18 = __this->get_EqualNumber_6();
		((Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields*)il2cpp_codegen_static_fields_for(Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var))->set_point_1(L_18);
		// Memo.elapsedTime = elapsedTime;
		float L_19 = __this->get_elapsedTime_11();
		((Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields*)il2cpp_codegen_static_fields_for(Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var))->set_elapsedTime_2(L_19);
		// SceneManager.LoadScene("ResultScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralE077CC0B119D1346E096B7B754FEF38CBA042E51, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00be:
	{
		// Problem(ProbArr[RetsuCounter]);
		DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7* L_20 = __this->get_ProbArr_12();
		int32_t L_21 = __this->get_RetsuCounter_13();
		NullCheck(L_20);
		int32_t L_22 = L_21;
		DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		SManager_Problem_m26AD2AF6FE4C6EEA07D52D1563129EFD66B17BBC(__this, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SManager__ctor_m0F8AA6FE8C8023B08BAA88E71C640A3434DC6DE4 (SManager_tA40C08730B7C2C3C6ACF8D7C2AB6199DED236C2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DanRetsu[] ProbArr = new DanRetsu[18];
		DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7* L_0 = (DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7*)(DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7*)SZArrayNew(DanRetsuU5BU5D_tCFAF36BCF552832B048A07541F0D977E7B8704D7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		__this->set_ProbArr_12(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SaveData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_mBDF4096F6F1E6534B7FEBD083BCE948A2B3718B0 (SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09587B390B58B05D9A69B1C7EC137E636002771D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Name = "Save1";
		__this->set_Name_0(_stringLiteral09587B390B58B05D9A69B1C7EC137E636002771D);
		// public PointTime[] PtTimeArr = new PointTime[10];
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_0 = (PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F*)(PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F*)SZArrayNew(PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_PtTimeArr_1(L_0);
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
// System.Void SaveManager::Save(System.String,SaveData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_Save_m2D9E8C680FF9FF9032E7572B756E74B829CF549E (String_t* ___FileName0, SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * ___saveData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string json = JsonUtility.ToJson(saveData);//JSON �`���̃f�[�^�ɂ���
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_0 = ___saveData1;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// string saveFilePath = GetApplicationFilePath(FileName);
		String_t* L_2 = ___FileName0;
		String_t* L_3;
		L_3 = SaveManager_GetApplicationFilePath_m698BFB8B825531F6653C380723587CD85730BE42(L_2, /*hidden argument*/NULL);
		// StreamWriter streamWriter = new StreamWriter(saveFilePath);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_4 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)il2cpp_codegen_object_new(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		StreamWriter__ctor_mE341C28EFA3FE0484823233273DBE251A11BD4FC(L_4, L_3, /*hidden argument*/NULL);
		// streamWriter.Write(json);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_5 = L_4;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, L_6);
		// streamWriter.Flush();
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_7 = L_5;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(10 /* System.Void System.IO.TextWriter::Flush() */, L_7);
		// streamWriter.Close();
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(8 /* System.Void System.IO.TextWriter::Close() */, L_7);
		// }
		return;
	}
}
// SaveData SaveManager::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * SaveManager_Load_mBFDF8F98FC86F548D6F498BCC808BEC4451ED095 (String_t* ___FileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSaveData_t7184650809321D6AAD08FE57453C100D09D4A89A_m55AF8340E85FF91870D255ADE4C9A1E867A7C82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string saveFilePath = GetApplicationFilePath(FileName);
		String_t* L_0 = ___FileName0;
		String_t* L_1;
		L_1 = SaveManager_GetApplicationFilePath_m698BFB8B825531F6653C380723587CD85730BE42(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (File.Exists(saveFilePath))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// streamReader = new StreamReader(saveFilePath);
		String_t* L_4 = V_0;
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_5 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		StreamReader__ctor_m1F07D64A9881F3A6B755881210B4E88F8E63849B(L_5, L_4, /*hidden argument*/NULL);
		// string data = streamReader.ReadToEnd();
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_6 = L_5;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_6);
		V_1 = L_7;
		// streamReader.Close();
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_6);
		// saveData = JsonUtility.FromJson<SaveData>(data);
		String_t* L_8 = V_1;
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_9;
		L_9 = JsonUtility_FromJson_TisSaveData_t7184650809321D6AAD08FE57453C100D09D4A89A_m55AF8340E85FF91870D255ADE4C9A1E867A7C82E(L_8, /*hidden argument*/JsonUtility_FromJson_TisSaveData_t7184650809321D6AAD08FE57453C100D09D4A89A_m55AF8340E85FF91870D255ADE4C9A1E867A7C82E_RuntimeMethod_var);
		// return saveData;
		return L_9;
	}

IL_0028:
	{
		// return null;
		return (SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A *)NULL;
	}
}
// System.String SaveManager::GetApplicationFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SaveManager_GetApplicationFilePath_m698BFB8B825531F6653C380723587CD85730BE42 (String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string path = Application.persistentDataPath.TrimEnd('\\');
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		NullCheck(L_0);
		String_t* L_3;
		L_3 = String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E(L_0, L_2, /*hidden argument*/NULL);
		// string absoluteFilePath = path + "/" + filename;
		String_t* L_4 = ___filename0;
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_3, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_4, /*hidden argument*/NULL);
		// return absoluteFilePath;
		return L_5;
	}
}
// System.Void SaveManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager__ctor_mB7AB326D2EA77388E750706DEABFB056A6E1C356 (SaveManager_tFCE7930FC081EEE88E12994B53512095F258CBCE * __this, const RuntimeMethod* method)
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
// System.Void TitleManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_Start_mB1BDED26067331336418D8C8F760161E62F96224 (TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9576C0DE515CD3F6A31DC37015C545AB1EA46893);
		s_Il2CppMethodInitialized = true;
	}
	SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string saveFilePath = SaveManager.GetApplicationFilePath("Save.json");
		String_t* L_0;
		L_0 = SaveManager_GetApplicationFilePath_m698BFB8B825531F6653C380723587CD85730BE42(_stringLiteral9576C0DE515CD3F6A31DC37015C545AB1EA46893, /*hidden argument*/NULL);
		// if (!File.Exists(saveFilePath))
		bool L_1;
		L_1 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0057;
		}
	}
	{
		// SaveData SV = new SaveData();
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_2 = (SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A *)il2cpp_codegen_object_new(SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A_il2cpp_TypeInfo_var);
		SaveData__ctor_mBDF4096F6F1E6534B7FEBD083BCE948A2B3718B0(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		// for (int i = 0; i < 10; i++)
		V_1 = 0;
		goto IL_0052;
	}

IL_001b:
	{
		// SV.PtTimeArr[i].point = 0;
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_3 = V_0;
		NullCheck(L_3);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_4 = L_3->get_PtTimeArr_1();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->set_point_0(0);
		// SV.PtTimeArr[i].time = 0.0f;
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_6 = V_0;
		NullCheck(L_6);
		PointTimeU5BU5D_tB4D448B4FAF288AA5B8EC67FBFA37C48832F6E5F* L_7 = L_6->get_PtTimeArr_1();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->set_time_1((0.0f));
		// SaveManager.Save("Save.json", SV);
		SaveData_t7184650809321D6AAD08FE57453C100D09D4A89A * L_9 = V_0;
		SaveManager_Save_m2D9E8C680FF9FF9032E7572B756E74B829CF549E(_stringLiteral9576C0DE515CD3F6A31DC37015C545AB1EA46893, L_9, /*hidden argument*/NULL);
		// for (int i = 0; i < 10; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0052:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)10))))
		{
			goto IL_001b;
		}
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void TitleManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_Update_m3D4B2483A33278FCFEB981AA66D621FDF1A652C7 (TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TitleManager::PushStartButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_PushStartButton_m81279C3A4349C07A5067A5A0803D452A5B4E82FD (TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4 * __this, int32_t ___dan0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC03BC28C5D9F57A86806240A7B527D91033F8534);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Memo.dan = dan;
		int32_t L_0 = ___dan0;
		((Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_StaticFields*)il2cpp_codegen_static_fields_for(Memo_tE06CF864584A517F74E183C581ED6F4CEBE6C6FF_il2cpp_TypeInfo_var))->set_dan_0(L_0);
		// if (dan == 10)
		int32_t L_1 = ___dan0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0016;
		}
	}
	{
		// SceneManager.LoadScene("RecordScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralC03BC28C5D9F57A86806240A7B527D91033F8534, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0016:
	{
		// SceneManager.LoadScene("GameScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TitleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager__ctor_m0D14731249E3B6D0846A587A421CAE4FAD2056D0 (TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SManager/DanRetsu::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DanRetsu__ctor_m7F0532D0B09465658576D208F8CBC7675F592211 (DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762 * __this, int32_t ____dan0, int32_t ____retsu1, const RuntimeMethod* method)
{
	{
		// dan = _dan;
		int32_t L_0 = ____dan0;
		__this->set_dan_0(L_0);
		// retsu = _retsu;
		int32_t L_1 = ____retsu1;
		__this->set_retsu_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DanRetsu__ctor_m7F0532D0B09465658576D208F8CBC7675F592211_AdjustorThunk (RuntimeObject * __this, int32_t ____dan0, int32_t ____retsu1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762 * _thisAdjusted = reinterpret_cast<DanRetsu_t33483A2866AB762B124B3F9670B50F9B61C12762 *>(__this + _offset);
	DanRetsu__ctor_m7F0532D0B09465658576D208F8CBC7675F592211(_thisAdjusted, ____dan0, ____retsu1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
