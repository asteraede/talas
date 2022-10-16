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
# generic Makefile for framework tatalas executable rsa
########################################################################
# Depends: rostra;nadir;fila;crono;cifra;bn;mp;rete;stara

#
# target
#
rsa_EXETARGET = rsa

########################################################################

#
# user c++ flags
#
rsa_USRCXXFLAGS += \
${tatalas_USRCXXFLAGS} \

#
# user defines
#
rsa_USRDEFINES += \
${tatalas_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_CONSOLE_MAIN_MAIN \


#
# user includes
#
rsa_USRINCLUDES += \
${tatalas_USRINCLUDES} \

#
# user libdirs
#
rsa_USRLIBDIRS += \
${tatalas_USRLIBDIRS} \

########################################################################

#
# executable .c sources
#
#rsa_EXE_C_SOURCES += \
#${TATALAS_SRC}/xos/app/console/rsa/main.c \

#
# executable .cc sources
#
#rsa_EXE_CC_SOURCES += \
#${TATALAS_SRC}/xos/app/console/rsa/main.cc \

#
# executable .cxx sources
#
#rsa_EXE_CXX_SOURCES += \
#${TATALAS_SRC}/xos/app/console/rsa/main.cxx \

#
# executable .cpp sources
#
rsa_EXE_CPP_SOURCES += \
${CIFRA_SRC}/xos/crypto/random/prime/small_primes.cpp \
\
${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/key_pair.cpp \
${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/private_key.cpp \
${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/public_key.cpp \
${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/public_exponent_const.cpp \
\
${TATALAS_SRC}/xos/app/console/rsa/main_opt.cpp \
${TATALAS_SRC}/xos/app/console/rsa/main.cpp \

#
# executable .m sources
#
#rsa_EXE_M_SOURCES += \
#${TATALAS_SRC}/xos/app/console/rsa/main.m \

#
# executable .mm sources
#
#rsa_EXE_MM_SOURCES += \
#${TATALAS_SRC}/xos/app/console/rsa/main.mm \


########################################################################

#
# executable libraries
#
rsa_LIBS += \
${tatalas_LIBS}

