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
#   File: shttpcgicatch.pri
#
# Author: $author$
#   Date: 11/16/2022
#
# generic QtCreator project .pri file for framework tatalas executable shttpcgicatch
########################################################################

########################################################################
# shttpcgicatch

# shttpcgicatch TARGET
#
shttpcgicatch_TARGET = shttpcgicatch

# shttpcgicatch INCLUDEPATH
#
shttpcgicatch_INCLUDEPATH += \
$${tatalas_INCLUDEPATH} \

# shttpcgicatch DEFINES
#
shttpcgicatch_DEFINES += \
$${tatalas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# shttpcgicatch OBJECTIVE_HEADERS
#
#shttpcgicatch_OBJECTIVE_HEADERS += \
#$${TATALAS_SRC}/xos/app/console/network/protocol/shttp/cgi/catcher/main.hh \

# shttpcgicatch OBJECTIVE_SOURCES
#
#shttpcgicatch_OBJECTIVE_SOURCES += \
#$${TATALAS_SRC}/xos/app/console/network/protocol/shttp/cgi/catcher/main.mm \

########################################################################
# shttpcgicatch HEADERS
#
shttpcgicatch_HEADERS += \
$${TATALAS_SRC}/xos/app/console/network/protocol/shttp/cgi/catcher/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/network/protocol/shttp/cgi/catcher/main.hpp \

# shttpcgicatch SOURCES
#
shttpcgicatch_SOURCES += \
$${TATALAS_SRC}/xos/app/console/network/protocol/shttp/cgi/catcher/main_opt.cpp \
$${TATALAS_SRC}/xos/app/console/network/protocol/shttp/cgi/catcher/main.cpp \

########################################################################
# shttpcgicatch FRAMEWORKS
#
shttpcgicatch_FRAMEWORKS += \
$${tatalas_FRAMEWORKS} \

# shttpcgicatch LIBS
#
shttpcgicatch_LIBS += \
$${tatalas_LIBS} \

########################################################################
# NO Qt
QT -= gui core

