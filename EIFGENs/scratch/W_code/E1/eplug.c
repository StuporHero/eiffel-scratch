/*
 * Generated by ISE 19.05.10.3187 GPL Edition - win64
 */

#include "eif_eiffel.h"
#include "eif_project.h"
#include "egc_include.h"

#ifdef __cplusplus
extern "C" {
#endif
extern void F1_23();
extern EIF_REFERENCE F1_14();
extern void F231_6605();
extern void F233_6779();
extern void F238_6847();
extern void F239_6986();
extern void F249_3187();
extern void F255_6486();
extern void F53_1233();
extern EIF_REFERENCE F53_1220();
extern EIF_BOOLEAN F53_1232();
extern EIF_BOOLEAN F53_1240();
extern void F53_1242();
extern void F53_1243();
extern void F53_1244();
extern void F46_1146();
extern EIF_TYPED_VALUE F46_1147();

long *eif_area_table = (long *)0;
long *eif_lower_table = (long *)0;


extern void egc_init_plug (void); 
void egc_init_plug (void)
{
	egc_prof_enabled = (EIF_INTEGER) 0;
	egc_correct_mismatch = (void (*)(EIF_REFERENCE)) F1_23;
	egc_twin = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F1_14;
	egc_strmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F231_6605;
	egc_str32make = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F238_6847;
	egc_arrmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F249_3187;
	egc_strset = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F233_6779;
	egc_str32set = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F239_6986;
	egc_routdisp_wb = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F255_6486;
	egc_is_scoop_capable = 1;
	egc_set_exception_data = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F53_1233;
	egc_set_last_exception = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F53_1232;
	egc_last_exception = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F53_1220;
	egc_is_code_ignored = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F53_1240;
	egc_once_raise = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F53_1242;
	egc_init_exception_manager = (void (*)(EIF_REFERENCE)) F53_1243;
	egc_free_preallocated_trace = (void (*)(EIF_REFERENCE)) F53_1244;

	egc_str_dtype = 232;

	egc_str32_dtype = 238;
	egc_arr_dtype = 248;
	egc_tup_dtype = 186;
	egc_disp_rout_id = 3246;
	egc_copy_rout_id = 18;
	egc_is_equal_rout_id = 11;

	egc_sp_char = 0x01FA;
	egc_sp_wchar = 0x0392;
	egc_sp_bool = 0x030E;
	egc_sp_uint8 = 0x01D9;
	egc_sp_uint16 = 0x0147;
	egc_sp_uint32 = 0x02D3;
	egc_sp_uint64 = 0x0351;
	egc_sp_int8 = 0x028B;
	egc_sp_int16 = 0x02AF;
	egc_sp_int32 = 0x0219;
	egc_sp_int64 = 0x02E9;
	egc_sp_real32 = 0x01B5;
	egc_sp_real64 = 0x0267;
	egc_sp_pointer = 0x0177;
	egc_sp_ref = 0x0114;

	egc_uint8_dtype = 209;
	egc_uint16_dtype = 215;
	egc_uint32_dtype = 212;
	egc_uint64_dtype = 224;
	egc_int8_dtype = 188;
	egc_int16_dtype = 221;
	egc_int32_dtype = 218;
	egc_int64_dtype = 200;
	egc_bool_dtype = 203;
	egc_real32_dtype = 191;
	egc_char_dtype = 197;
	egc_wchar_dtype = 194;
	egc_real64_dtype = 206;
	egc_point_dtype = 227;

	egc_exception_dtype = 64;
	egc_except_emnger_dtype = 52;

	egc_ce_type = egc_ce_type_init;

	egc_ce_exp_type = egc_ce_exp_type_init;
	egc_fsystem = egc_fsystem_init;
	egc_system_mod_init = egc_system_mod_init_init;
	egc_partab = egc_partab_init;
	egc_partab_size = egc_partab_size_init;
	egc_foption = egc_foption_init;
	egc_frozen = egc_frozen_init;
	egc_fpatidtab = egc_fpatidtab_init;
	egc_address_table = egc_address_table_init;
	egc_fpattern = egc_fpattern_init;

	egc_einit = egc_einit_init;
	egc_tabinit = egc_tabinit_init;
	egc_forg_table = egc_forg_table_init;

	egc_system_name = "scratch";
	egc_system_location = "C:\\Users\\neilp\\Development\\eiffel\\EIFGENs\\scratch\\W_code";
	egc_compiler_tag = 38;
	egc_project_version = 1601267633;
	egc_has_old_special_semantic = 0;
	scount = 1045;

	egc_rcount = 3;
	egc_ridx = 0;
	egc_rlist = (char**) eif_malloc (sizeof(char*)*egc_rcount);
	egc_rcdt = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcrid = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcarg = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rlist[0] = "APPLICATION.make";
	egc_rcdt[0] = 0;
	egc_rcrid[0] = 4999;
	egc_rcarg[0] = 0;
	
	egc_rlist[1] = "EQA_EVALUATOR.make";
	egc_rcdt[1] = 0;
	egc_rcrid[1] = 5581;
	egc_rcarg[1] = 0;
	
	egc_rlist[2] = "ITP_INTERPRETER.execute";
	egc_rcdt[2] = 0;
	egc_rcrid[2] = 6014;
	egc_rcarg[2] = 0;
	
	
	egc_platform_level = 0x00000D00;
	egc_rt_extension_dt = 45;
	egc_rt_extension_notify = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F46_1146;
	egc_rt_extension_notify_argument = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F46_1147;
}

void egc_rcdt_init (void)
{
	if (egc_rcdt[0] == 0) {
		egc_rcdt[0] = 959; /* APPLICATION */
	}if (egc_rcdt[1] == 0) {
		egc_rcdt[1] = 1018; /* EQA_EVALUATOR */
	}if (egc_rcdt[2] == 0) {
		egc_rcdt[2] = 1042; /* ITP_INTERPRETER */
	}
}

#ifdef __cplusplus
}
#endif
