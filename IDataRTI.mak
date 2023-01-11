# (c) 2022 Copyright, Real-Time Innovations, Inc. (RTI) All rights reserved.
# 
# RTI grants Licensee a license to use, modify, compile, and create derivative
# works of the software solely for use with RTI Connext DDS.  Licensee may
# redistribute copies of the software provided that all such copies are
# subject to this license. The software is provided "as is", with no warranty
# of any type, including any warranty for fitness for any purpose. RTI is
# under no obligation to maintain or support the software.  RTI shall not be
# liable for any incidental or consequential damages arising out of the use or
# inability to use the software.

# ****************************************************************************
# This makefile was designed for use with Microsoft Visual C++ compiler and
# the Microsoft NMAKE program.
# 
# If you use a different compiler or make tool, reference the filelist below:
#   makefile.vc - makefile for Microsoft Visual C++ nmake.exe
#   makefile.mgd - makefile for Minimalist Win32 GNU compiler make.exe
# ****************************************************************************

# ****************************************************************************
# TARGET SETTINGS
# These settings specify the makefile filename, the target .DLL filename,
# the source modules to compile and the extra libraries to include in the
# link.  This section should be changed as necessary.
# ****************************************************************************


MAKEFILE = IDataRTI.mak

TARGET = IDataRTI.dll

CONNEXT_GEN_FILES  = \
  gen/Orientation_DataPlugin.c \
  gen/Orientation_Data.c \
  gen/Orientation_DataSupport.c \
  gen/Orientation_Data.h \
  gen/Orientation_DataPlugin.h \
  gen/Orientation_DataSupport.h 


# $begin IDATA_TEMPLATE_OBJFILES_BLOCK
OBJECTFILES = \
	IDataRTI.obj \
  gen/Orientation_Data.obj \
  gen/Orientation_DataPlugin.obj \
  gen/Orientation_DataSupport.obj

# $end IDATA_TEMPLATE_OBJFILES_BLOCK

# $begin IDATA_TEMPLATE_LIBFILES_BLOCK
LIBRARYFILES = \
  nddscored.lib  \
  nddscd.lib     \
  netapi32.lib   \
  advapi32.lib   \
  user32.lib     \
  WS2_32.lib     \
# $end IDATA_TEMPLATE_LIBFILES_BLOCK

# $begin IDATA_TEMPLATE_INCLUDEPATH_BLOCK
INCLUDEPATHS = \
	-I$(IDATA_SDK) \
  -I./gen \
  -I$(NDDSHOME)/include \
  -I$(NDDSHOME)/include/ndds

# $end IDATA_TEMPLATE_INCLUDEPATH_BLOCK

# $begin IDATA_TEMPLATE_LIBPATH_BLOCK
LIBPATHS = /LIBPATH:$(NDDSHOME)\lib\x64Win64VS2017\
# $end IDATA_TEMPLATE_LIBPATH_BLOCK


# ****************************************************************************
# COMPILER/LINKER SETTINGS
# Release mode is the default; to build debug, use this command:
# nmake -f filename.mak cfg=debug
# ****************************************************************************

!IF "$(CFG)" == "debug" || "$(CFG)" == "DEBUG"
!MESSAGE ************************
!MESSAGE Building debug version
!MESSAGE ************************
COMPILERFLAGS = -DIDATAOS_WIN -DPLUGIN_EXPORTS /ZI /Od /MDd
LINKERFLAGS = /DLL /DEBUG /PDB:"IDataRTI.pdb" /pdbtype:sept /MACHINE:X64
!ELSE
!MESSAGE ************************
!MESSAGE Building release version
!MESSAGE ************************
COMPILERFLAGS = -DIDATAOS_WIN -DPLUGIN_EXPORTS /Ox /MD
LINKERFLAGS = /DLL /MACHINE:X64
!ENDIF

# ****************************************************************************
# DEPENDENCIES
# ****************************************************************************

DEFAULT : ALL

CLEAN : 
	@if exist "IDataRTI.obj" del IDataRTI.obj
  @if exist "gen" rmdir /S /Q gen
	@if exist $(TARGET) del $(TARGET)

ALL : $(CONNEXT_GEN_FILES) $(TARGET)

$(TARGET) : $(OBJECTFILES) $(MAKEFILE)
	link.exe /OUT:$(TARGET) $(LINKERFLAGS) $(LIBPATHS) $(OBJECTFILES) $(LIBRARYFILES) $(IDATA_SDK)\IData.lib
	@del IDataRTI.obj "gen\*.obj"
	@del $*.exp
	@del $*.lib
	@echo Removed intermediate files

$(OBJECTFILES) : $(MAKEFILE)

.c.obj:
	cl.exe -c /Fo$@ $< $(COMPILERFLAGS) $(INCLUDEPATHS)

.cpp.obj:
	cl.exe -c /Fo$@ $< $(COMPILERFLAGS) $(INCLUDEPATHS)
  
$(CONNEXT_GEN_FILES) : GENDIR RTIDDSGEN
  :

RTIDDSGEN : Orientation_Data.idl
	rtiddsgen Orientation_Data.idl -replace -d gen -language C

GENDIR: 
  @if not exist "gen"  mkdir gen

