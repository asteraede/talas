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
# generic Makefile for framework tatalas executable tatalasd
########################################################################
# Depends: rostra;nadir;fila;crono;cifra;bn;mp;rete;stara

#
# target
#
tatalasd_EXETARGET = tatalasd

########################################################################

#
# user c++ flags
#
tatalasd_USRCXXFLAGS += \
${tatalas_USRCXXFLAGS} \

#
# user defines
#
tatalasd_USRDEFINES += \
${tatalas_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_CONSOLE_MAIN_MAIN \


#
# user includes
#
tatalasd_USRINCLUDES += \
${tatalas_USRINCLUDES} \

#
# user libdirs
#
tatalasd_USRLIBDIRS += \
${tatalas_USRLIBDIRS} \

########################################################################

#
# executable .c sources
#
#tatalasd_EXE_C_SOURCES += \
#${TATALAS_SRC}/xos/app/console/tatalasd/main.c \

#
# executable .cc sources
#
#tatalasd_EXE_CC_SOURCES += \
#${TATALAS_SRC}/xos/app/console/tatalasd/main.cc \

#
# executable .cxx sources
#
#tatalasd_EXE_CXX_SOURCES += \
#${TATALAS_SRC}/xos/app/console/tatalasd/main.cxx \

#
# executable .cpp sources
#
tatalasd_EXE_CPP_SOURCES += \
${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/server/main_opt.cpp \
${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/server/main.cpp \

#
# executable .m sources
#
#tatalasd_EXE_M_SOURCES += \
#${TATALAS_SRC}/xos/app/console/tatalasd/main.m \

#
# executable .mm sources
#
#tatalasd_EXE_MM_SOURCES += \
#${TATALAS_SRC}/xos/app/console/tatalasd/main.mm \


########################################################################

#
# executable libraries
#
tatalasd_LIBS += \
${tatalas_LIBS}

