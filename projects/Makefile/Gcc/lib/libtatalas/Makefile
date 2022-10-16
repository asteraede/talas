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
# generic Makefile for framework tatalas library libtatalas
########################################################################
# Depends: rostra;nadir;fila;crono;cifra;bn;mp;rete;stara

#
# target
#
libtatalas_LIBTARGET = libtatalas.${LIBEXT}

########################################################################

#
# user c++ flags
#
libtatalas_USRCXXFLAGS += \
${tatalas_USRCXXFLAGS} \

#
# user defines
#
libtatalas_USRDEFINES += \
${tatalas_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_LIB_TATALAS_VERSION_BUILD_DATE=10/16/2022 #${shell tdate} \


#
# user includes
#
libtatalas_USRINCLUDES += \
${tatalas_USRINCLUDES} \

#
# user libdirs
#
libtatalas_USRLIBDIRS += \
${tatalas_USRLIBDIRS} \

########################################################################

#
# library .c sources
#
#libtatalas_LIB_C_SOURCES += \
#${TATALAS_SRC}/xos/lib/tatalas/version.c \

#
# library .cc sources
#
#libtatalas_LIB_CC_SOURCES += \
#${TATALAS_SRC}/xos/lib/tatalas/version.cc \

#
# library .cxx sources
#
#libtatalas_LIB_CXX_SOURCES += \
#${TATALAS_SRC}/xos/lib/tatalas/version.cxx \

#
# library .cpp sources
#
libtatalas_LIB_CPP_SOURCES += \
${TATALAS_SRC}/xos/lib/tatalas/version.cpp \

#
# library .m sources
#
#libtatalas_LIB_M_SOURCES += \
#${TATALAS_SRC}/xos/lib/tatalas/version.m \

#
# library .mm sources
#
#libtatalas_LIB_MM_SOURCES += \
#${TATALAS_SRC}/xos/lib/tatalas/version.mm \


########################################################################


