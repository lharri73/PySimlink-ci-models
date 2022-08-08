######################################################################
# CMakeLists.txt generated for component HevP4ReferenceApplication
# Product type: executable
######################################################################
cmake_minimum_required(VERSION 3.12)
project(HevP4ReferenceApplication)

######################################################################
## Path variables
######################################################################
get_filename_component(START_DIR .. ABSOLUTE)
set(MATLAB_ROOT /home/landon/Documents/MATLAB_20201_INSTALL CACHE PATH "Root of MATLAB installation")

######################################################################
## Target definition and commands
######################################################################
if(APPLE)
   set(MW_ARCH maci64)
elseif(UNIX)
   set(MW_ARCH glnxa64)
else()
   set(MW_ARCH win64)
endif()
link_directories(${MATLAB_ROOT}/bin/${MW_ARCH} ${MATLAB_ROOT}/lib/${MW_ARCH})
add_executable(HevP4ReferenceApplication  ${MATLAB_ROOT}/rtw/c/src/rt_logging.c ${START_DIR}/HevP4ReferenceApplication_rsim_rtw/HevP4ReferenceApplication.c ${START_DIR}/HevP4ReferenceApplication_rsim_rtw/HevP4ReferenceApplication_capi.c ${START_DIR}/HevP4ReferenceApplication_rsim_rtw/HevP4ReferenceApplication_data.c ${MATLAB_ROOT}/rtw/c/src/rt_logging_mmi.c ${MATLAB_ROOT}/rtw/c/src/rtw_modelmap_utils.c ${MATLAB_ROOT}/rtw/c/rsim/rsim_main.c ${MATLAB_ROOT}/rtw/c/rsim/rsim_sup.c ${MATLAB_ROOT}/rtw/c/rsim/rsim_mat.c ${MATLAB_ROOT}/simulink/include/simulink_solver_api.c ${MATLAB_ROOT}/rtw/c/src/rapid/rsim_utils.c ${MATLAB_ROOT}/rtw/c/src/rapid/common_utils.c)
set_target_properties(HevP4ReferenceApplication PROPERTIES PREFIX "" RUNTIME_OUTPUT_DIRECTORY "../$<0:>" LIBRARY_OUTPUT_DIRECTORY "../$<0:>" ARCHIVE_OUTPUT_DIRECTORY "../$<0:>")
target_compile_definitions(HevP4ReferenceApplication PRIVATE -DNRT -DRSIM_WITH_SL_SOLVER -DRSIM_PARAMETER_LOADING -DMODEL=HevP4ReferenceApplication -DNUMST=6 -DNCSTATES=63 -DHAVESTDIO -DCLASSIC_INTERFACE=1 -DALLOCATIONFCN=0 -DTID01EQ=0 -DONESTEPFCN=0 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0)
target_compile_options(HevP4ReferenceApplication PRIVATE -Wno-cast-function-type)
target_link_libraries(HevP4ReferenceApplication PRIVATE -Wl,--allow-shlib-undefined)
target_include_directories(HevP4ReferenceApplication PRIVATE ${START_DIR}/slprj/rsim/SiMappedEngine ${START_DIR}/slprj/rsim/SiEngineController ${START_DIR}/slprj/rsim/MotMappedP4 ${START_DIR}/slprj/rsim/HevP4TransmissionController ${START_DIR}/slprj/rsim/HevP4OptimalController ${START_DIR}/slprj/rsim/DrivetrainHevP4 ${START_DIR}/slprj/rsim/BattHevP4 ${START_DIR} ${START_DIR}/HevP4ReferenceApplication_rsim_rtw ${MATLAB_ROOT}/rtw/c/src/rapid ${MATLAB_ROOT}/rtw/c/rsim ${MATLAB_ROOT}/rtw/c/src/ext_mode/common ${MATLAB_ROOT}/extern/include ${MATLAB_ROOT}/simulink/include ${MATLAB_ROOT}/rtw/c/src ${START_DIR}/slprj/rsim/_sharedutils)
add_subdirectory(../slprj/rsim/BattHevP4 ${START_DIR}/slprj/rsim/BattHevP4)
add_subdirectory(../slprj/rsim/DrivetrainHevP4 ${START_DIR}/slprj/rsim/DrivetrainHevP4)
add_subdirectory(../slprj/rsim/HevP4OptimalController ${START_DIR}/slprj/rsim/HevP4OptimalController)
add_subdirectory(../slprj/rsim/HevP4TransmissionController ${START_DIR}/slprj/rsim/HevP4TransmissionController)
add_subdirectory(../slprj/rsim/MotMappedP4 ${START_DIR}/slprj/rsim/MotMappedP4)
add_subdirectory(../slprj/rsim/SiEngineController ${START_DIR}/slprj/rsim/SiEngineController)
add_subdirectory(../slprj/rsim/SiMappedEngine ${START_DIR}/slprj/rsim/SiMappedEngine)
add_subdirectory(../slprj/rsim/_sharedutils ${START_DIR}/slprj/rsim/_sharedutils)
target_link_libraries(HevP4ReferenceApplication PRIVATE BattHevP4_rtwlib DrivetrainHevP4_rtwlib HevP4OptimalController_rtwlib HevP4TransmissionController_rtwlib MotMappedP4_rtwlib SiEngineController_rtwlib SiMappedEngine_rtwlib rtwshared)
if(NOT MSVC)
   target_link_libraries(HevP4ReferenceApplication PRIVATE m)
endif()
set(syslibs mat mwi18n mwsf_runtime mwsigstream mwsl_AsyncioQueue mwsl_fileio mwsl_simtarget_instrumentation mwsl_solver_rtw mx ut)
if(MW_ARCH STREQUAL win64 AND NOT MINGW)
   list(TRANSFORM syslibs PREPEND lib)
endif()
target_link_libraries(HevP4ReferenceApplication PRIVATE ${syslibs})

######################################################################
## Build success message
######################################################################
add_custom_command(TARGET HevP4ReferenceApplication POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --cyan "\\#\\#\\# Created executable: $<TARGET_FILE:HevP4ReferenceApplication>")

######################################################################
## Call toolchain hook function if defined
######################################################################
if(COMMAND toolchain_target_hook)
   toolchain_target_hook(HevP4ReferenceApplication)
endif()
