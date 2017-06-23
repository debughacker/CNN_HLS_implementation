; ModuleID = 'D:/venky/workdir/designs/convolution/convolution/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@conv.str = internal unnamed_addr constant [5 x i8] c"conv\00" ; [#uses=1 type=[5 x i8]*]

; [#uses=6]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @conv([11 x [11 x i32]]* %a, [11 x [11 x i32]]* %b, i32* %c) nounwind {
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @conv.str) nounwind
  call void @llvm.dbg.value(metadata !{[11 x [11 x i32]]* %a}, i64 0, metadata !47), !dbg !48 ; [debug line = 3:20] [debug variable = a]
  call void @llvm.dbg.value(metadata !{[11 x [11 x i32]]* %b}, i64 0, metadata !49), !dbg !50 ; [debug line = 3:41] [debug variable = b]
  call void @llvm.dbg.value(metadata !{i32* %c}, i64 0, metadata !51), !dbg !52 ; [debug line = 3:61] [debug variable = c]
  br label %1, !dbg !53                           ; [debug line = 7:13]

; <label>:1                                       ; preds = %3, %0
  %sum = phi i32 [ 0, %0 ], [ %sum.1.lcssa, %3 ]  ; [#uses=2 type=i32]
  %i = phi i32 [ 0, %0 ], [ %i.1, %3 ]            ; [#uses=4 type=i32]
  %exitcond1 = icmp eq i32 %i, 11, !dbg !53       ; [#uses=1 type=i1] [debug line = 7:13]
  br i1 %exitcond1, label %4, label %.preheader.preheader, !dbg !53 ; [debug line = 7:13]

.preheader.preheader:                             ; preds = %1
  br label %.preheader, !dbg !56                  ; [debug line = 10:14]

.preheader:                                       ; preds = %2, %.preheader.preheader
  %sum.1 = phi i32 [ %sum.2, %2 ], [ %sum, %.preheader.preheader ] ; [#uses=2 type=i32]
  %j = phi i32 [ %j.1, %2 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i32]
  %exitcond = icmp eq i32 %j, 11, !dbg !56        ; [#uses=1 type=i1] [debug line = 10:14]
  br i1 %exitcond, label %3, label %2, !dbg !56   ; [debug line = 10:14]

; <label>:2                                       ; preds = %.preheader
  %a.addr = getelementptr inbounds [11 x [11 x i32]]* %a, i32 0, i32 %i, i32 %j, !dbg !59 ; [#uses=1 type=i32*] [debug line = 13:4]
  %a.load = load i32* %a.addr, align 4, !dbg !59  ; [#uses=2 type=i32] [debug line = 13:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %a.load) nounwind
  %b.addr = getelementptr inbounds [11 x [11 x i32]]* %b, i32 0, i32 %i, i32 %j, !dbg !59 ; [#uses=1 type=i32*] [debug line = 13:4]
  %b.load = load i32* %b.addr, align 4, !dbg !59  ; [#uses=2 type=i32] [debug line = 13:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %b.load) nounwind
  %tmp = mul nsw i32 %b.load, %a.load, !dbg !59   ; [#uses=1 type=i32] [debug line = 13:4]
  %sum.2 = add nsw i32 %tmp, %sum.1, !dbg !59     ; [#uses=1 type=i32] [debug line = 13:4]
  call void @llvm.dbg.value(metadata !{i32 %sum.2}, i64 0, metadata !61), !dbg !59 ; [debug line = 13:4] [debug variable = sum]
  %j.1 = add nsw i32 %j, 1, !dbg !62              ; [#uses=1 type=i32] [debug line = 10:22]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !63), !dbg !62 ; [debug line = 10:22] [debug variable = j]
  br label %.preheader, !dbg !62                  ; [debug line = 10:22]

; <label>:3                                       ; preds = %.preheader
  %sum.1.lcssa = phi i32 [ %sum.1, %.preheader ]  ; [#uses=1 type=i32]
  %i.1 = add nsw i32 %i, 1, !dbg !64              ; [#uses=1 type=i32] [debug line = 7:21]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !65), !dbg !64 ; [debug line = 7:21] [debug variable = i]
  br label %1, !dbg !64                           ; [debug line = 7:21]

; <label>:4                                       ; preds = %1
  %sum.0.lcssa = phi i32 [ %sum, %1 ]             ; [#uses=1 type=i32]
  store i32 %sum.0.lcssa, i32* %c, align 4, !dbg !66 ; [debug line = 23:2]
  ret void, !dbg !67                              ; [debug line = 24:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=2]
declare void @_ssdm_SpecKeepArrayLoad(...)

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!34, !41}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"D:/venky/workdir/designs/convolution/convolution/solution1/.autopilot/db/conv.pragma.2.cpp", metadata !"D:\5Cvenky\5Cworkdir\5Cdesigns\5Cconvolution", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !18}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"conv", metadata !"conv", metadata !"_Z4convRA11_A11_iS1_Pi", metadata !6, i32 3, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ([11 x [11 x i32]]*, [11 x [11 x i32]]*, i32*)* @conv, null, null, metadata !16, i32 4} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"conv.cpp", metadata !"D:\5Cvenky\5Cworkdir\5Cdesigns\5Cconvolution", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !9, metadata !15}
!9 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !10} ; [ DW_TAG_reference_type ]
!10 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3872, i64 32, i32 0, i32 0, metadata !11, metadata !13, i32 0, i32 0} ; [ DW_TAG_array_type ]
!11 = metadata !{i32 786454, null, metadata !"data_t", metadata !6, i32 1, i64 0, i64 0, i64 0, i32 0, metadata !12} ; [ DW_TAG_typedef ]
!12 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!13 = metadata !{metadata !14, metadata !14}
!14 = metadata !{i32 786465, i64 0, i64 10}       ; [ DW_TAG_subrange_type ]
!15 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !11} ; [ DW_TAG_pointer_type ]
!16 = metadata !{metadata !17}
!17 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!18 = metadata !{i32 786478, i32 0, metadata !6, metadata !"conv_layer1", metadata !"conv_layer1", metadata !"_Z11conv_layer1PA227_A3_iPA11_A3_A96_iPiPA55_S2_", metadata !6, i32 29, metadata !19, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !16, i32 30} ; [ DW_TAG_subprogram ]
!19 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !20, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!20 = metadata !{null, metadata !21, metadata !26, metadata !15, metadata !30}
!21 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !22} ; [ DW_TAG_pointer_type ]
!22 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 21792, i64 32, i32 0, i32 0, metadata !11, metadata !23, i32 0, i32 0} ; [ DW_TAG_array_type ]
!23 = metadata !{metadata !24, metadata !25}
!24 = metadata !{i32 786465, i64 0, i64 226}      ; [ DW_TAG_subrange_type ]
!25 = metadata !{i32 786465, i64 0, i64 2}        ; [ DW_TAG_subrange_type ]
!26 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !27} ; [ DW_TAG_pointer_type ]
!27 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 101376, i64 32, i32 0, i32 0, metadata !11, metadata !28, i32 0, i32 0} ; [ DW_TAG_array_type ]
!28 = metadata !{metadata !14, metadata !25, metadata !29}
!29 = metadata !{i32 786465, i64 0, i64 95}       ; [ DW_TAG_subrange_type ]
!30 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !31} ; [ DW_TAG_pointer_type ]
!31 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 168960, i64 32, i32 0, i32 0, metadata !11, metadata !32, i32 0, i32 0} ; [ DW_TAG_array_type ]
!32 = metadata !{metadata !33, metadata !29}
!33 = metadata !{i32 786465, i64 0, i64 54}       ; [ DW_TAG_subrange_type ]
!34 = metadata !{void ([11 x [11 x i32]]*, [11 x [11 x i32]]*, i32*)* @conv, metadata !35, metadata !36, metadata !37, metadata !38, metadata !39, metadata !40}
!35 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 1}
!36 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!37 = metadata !{metadata !"kernel_arg_type", metadata !"data_t (&)[11][11]", metadata !"data_t (&)[11][11]", metadata !"data_t*"}
!38 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!39 = metadata !{metadata !"kernel_arg_name", metadata !"a", metadata !"b", metadata !"c"}
!40 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!41 = metadata !{null, metadata !42, metadata !43, metadata !44, metadata !45, metadata !46, metadata !40}
!42 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1}
!43 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!44 = metadata !{metadata !"kernel_arg_type", metadata !"data_t [227][3]*", metadata !"data_t [11][3][96]*", metadata !"data_t*", metadata !"data_t [55][96]*"}
!45 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!46 = metadata !{metadata !"kernel_arg_name", metadata !"image", metadata !"convKernels1", metadata !"bias1", metadata !"FMap1"}
!47 = metadata !{i32 786689, metadata !5, metadata !"a", metadata !6, i32 16777219, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!48 = metadata !{i32 3, i32 20, metadata !5, null}
!49 = metadata !{i32 786689, metadata !5, metadata !"b", metadata !6, i32 33554435, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!50 = metadata !{i32 3, i32 41, metadata !5, null}
!51 = metadata !{i32 786689, metadata !5, metadata !"c", metadata !6, i32 50331651, metadata !15, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!52 = metadata !{i32 3, i32 61, metadata !5, null}
!53 = metadata !{i32 7, i32 13, metadata !54, null}
!54 = metadata !{i32 786443, metadata !55, i32 7, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!55 = metadata !{i32 786443, metadata !5, i32 4, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!56 = metadata !{i32 10, i32 14, metadata !57, null}
!57 = metadata !{i32 786443, metadata !58, i32 10, i32 3, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!58 = metadata !{i32 786443, metadata !54, i32 8, i32 2, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!59 = metadata !{i32 13, i32 4, metadata !60, null}
!60 = metadata !{i32 786443, metadata !57, i32 11, i32 3, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!61 = metadata !{i32 786688, metadata !55, metadata !"sum", metadata !6, i32 5, metadata !11, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!62 = metadata !{i32 10, i32 22, metadata !57, null}
!63 = metadata !{i32 786688, metadata !57, metadata !"j", metadata !6, i32 10, metadata !12, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!64 = metadata !{i32 7, i32 21, metadata !54, null}
!65 = metadata !{i32 786688, metadata !54, metadata !"i", metadata !6, i32 7, metadata !12, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!66 = metadata !{i32 23, i32 2, metadata !55, null}
!67 = metadata !{i32 24, i32 1, metadata !55, null}
