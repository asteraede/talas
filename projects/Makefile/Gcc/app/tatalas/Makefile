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
# generic Makefile for framework tatalas executable tatalas
########################################################################
# Depends: rostra;nadir;fila;crono;cifra;bn;mp;rete;stara

#
# target
#
tatalas_exe_EXETARGET = tatalas

########################################################################

#
# user c++ flags
#
tatalas_exe_USRCXXFLAGS += \
${tatalas_USRCXXFLAGS} \

#
# user defines
#
tatalas_exe_USRDEFINES += \
${tatalas_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_CONSOLE_MAIN_MAIN \


#
# user includes
#
tatalas_exe_USRINCLUDES += \
${tatalas_USRINCLUDES} \

#
# user libdirs
#
tatalas_exe_USRLIBDIRS += \
${tatalas_USRLIBDIRS} \

########################################################################

#
# executable .c sources
#
#tatalas_exe_EXE_C_SOURCES += \
#${TATALAS_SRC}/xos/app/console/tatalas/main.c \

#
# executable .cc sources
#
#tatalas_exe_EXE_CC_SOURCES += \
#${TATALAS_SRC}/xos/app/console/tatalas/main.cc \

#
# executable .cxx sources
#
#tatalas_exe_EXE_CXX_SOURCES += \
#${TATALAS_SRC}/xos/app/console/tatalas/main.cxx \

#
# executable .cpp sources
#
tatalas_exe_EXE_CPP_SOURCES += \
${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/client/main_opt.cpp \
${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/client/main.cpp \

#
# executable .m sources
#
#tatalas_exe_EXE_M_SOURCES += \
#${TATALAS_SRC}/xos/app/console/tatalas/main.m \

#
# executable .mm sources
#
#tatalas_exe_EXE_MM_SOURCES += \
#${TATALAS_SRC}/xos/app/console/tatalas/main.mm \


########################################################################

#
# executable libraries
#
tatalas_exe_LIBS += \
${tatalas_LIBS}

