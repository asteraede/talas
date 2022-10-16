########################################################################
# Copyright (c) 1988-2022 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: Makefile
#
# Author: $author$
#   Date: 10/16/2022
#
# os specific Makefile for framework tatalas library libtatalas
########################################################################
# Depends: rostra;nadir;fila;crono;cifra;bn;mp;rete;stara

PKG = ../../../../../..

BMK = build/Makefile/Gcc
MAK = projects/Makefile/Gcc
PRJ = projects/os/Makefile/Gcc
SRC = source

include $(PKG)/$(BMK)/Makedefines
include $(PKG)/$(MAK)/Makedefines
include $(PKG)/$(MAK)/Makefile
include $(PKG)/$(BMK)/Makefile
include $(PKG)/$(MAK)/lib/libtatalas/Makefile

#
# target
#
LIBTARGET = ${libtatalas_LIBTARGET}

########################################################################

#
# user defines
#
USRDEFINES += \
${libtatalas_USRDEFINES}

#
# user includes
#
USRINCLUDES += \
${libtatalas_USRINCLUDES}

#
# user libdirs
#
USRLIBDIRS += \
${libtatalas_USRLIBDIRS}

#
# user c++ flags
#
USRCXXFLAGS += \
${libtatalas_USRCXXFLAGS}

#
# user c flags
#
USRCFLAGS += \
${libtatalas_USRCFLAGS}

#
# user ld flags
#
USRLDFLAGS += \
${libtatalas_USRLDFLAGS}

########################################################################

#
# library C sources
#
LIB_C_SOURCES += \
${libtatalas_LIB_C_SOURCES}

#
# library C++ .cc sources
#
LIB_CC_SOURCES += \
${libtatalas_LIB_CC_SOURCES}

#
# library C++ .cxx sources
#
LIB_CXX_SOURCES += \
${libtatalas_LIB_CXX_SOURCES}

#
# library C++ .cpp sources
#
LIB_CPP_SOURCES += \
${libtatalas_LIB_CPP_SOURCES}

#
# library Objective C .m sources
#
LIB_M_SOURCES += \
${libtatalas_LIB_M_SOURCES}

#
# library Objective C++ .mm sources
#
LIB_MM_SOURCES += \
${libtatalas_LIB_MM_SOURCES}

########################################################################

#
# library depends
#
#LIBDEP += \
#$(PKG)/$(BLD)/libsomelib \
#
LIBDEP += \

#
# library depend dirs
#
#LIBDEP_DIRS += \
#../libsomelib
#
LIBDEP_DIRS += \

include $(PKG)/$(MAK)/Makerules

#
# library depend rules
#
#$(PKG)/$(BLD)/libsomelib.a:
#	@(echo Building libsomelib.a ...;\
#	  pushd ../libsomelib;\
#	  ((make) || (exit 1));\
#	  popd)
#
