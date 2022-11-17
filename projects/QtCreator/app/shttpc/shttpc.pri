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
#   File: shttpc.pri
#
# Author: $author$
#   Date: 11/17/2022
#
# generic QtCreator project .pri file for framework tatalas executable shttpc
########################################################################

########################################################################
# shttpc

# shttpc TARGET
#
shttpc_TARGET = shttpc

# shttpc INCLUDEPATH
#
shttpc_INCLUDEPATH += \
$${tatalas_INCLUDEPATH} \

# shttpc DEFINES
#
shttpc_DEFINES += \
$${tatalas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# shttpc OBJECTIVE_HEADERS
#
#shttpc_OBJECTIVE_HEADERS += \
#$${TATALAS_SRC}/xos/app/console/shttpc/main.hh \

# shttpc OBJECTIVE_SOURCES
#
#shttpc_OBJECTIVE_SOURCES += \
#$${TATALAS_SRC}/xos/app/console/shttpc/main.mm \

########################################################################
# shttpc HEADERS
#
shttpc_HEADERS += \
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/client/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/server/main.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/http/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/base/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/client/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/server/main.hpp \
\
$${TATALAS_SRC}/xos/app/console/protocol/shttp/base/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/shttp/base/main.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/shttp/client/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/shttp/client/main.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/shttp/server/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/shttp/server/main.hpp \

# shttpc SOURCES
#
shttpc_SOURCES += \
$${TATALAS_SRC}/xos/app/console/protocol/shttp/client/main_opt.cpp \
$${TATALAS_SRC}/xos/app/console/protocol/shttp/client/main.cpp \

########################################################################
# shttpc FRAMEWORKS
#
shttpc_FRAMEWORKS += \
$${tatalas_rsa_FRAMEWORKS} \

# shttpc LIBS
#
shttpc_LIBS += \
$${tatalas_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core

