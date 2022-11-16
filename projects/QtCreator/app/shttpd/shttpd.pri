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
#   File: shttpd.pri
#
# Author: $author$
#   Date: 11/10/2022
#
# generic QtCreator project .pri file for framework tatalas executable shttpd
########################################################################

########################################################################
# shttpd

# shttpd TARGET
#
shttpd_TARGET = shttpd

# shttpd INCLUDEPATH
#
shttpd_INCLUDEPATH += \
$${tatalas_INCLUDEPATH} \

# shttpd DEFINES
#
shttpd_DEFINES += \
$${tatalas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# shttpd OBJECTIVE_HEADERS
#
#shttpd_OBJECTIVE_HEADERS += \
#$${TATALAS_SRC}/xos/app/console/protocol/shttp/main.hh \

# shttpd OBJECTIVE_SOURCES
#
#shttpd_OBJECTIVE_SOURCES += \
#$${TATALAS_SRC}/xos/app/console/protocol/shttp/main.mm \

########################################################################
# shttpd HEADERS
#
shttpd_HEADERS += \
$${RETE_SRC}/xos/app/console/network/sockets/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main.hpp \
\
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/base/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/client/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/server/main.hpp \
\
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/base/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/client/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/server/main.hpp \
\
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/shttp/base/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/shttp/base/main.hpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/shttp/client/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/shttp/client/main.hpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/shttp/server/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/shttp/server/main.hpp \

# shttpd SOURCES
#
shttpd_SOURCES += \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/shttp/server/main_opt.cpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/shttp/server/main.cpp \

########################################################################
# shttpd FRAMEWORKS
#
shttpd_FRAMEWORKS += \
$${tatalas_rsa_FRAMEWORKS} \

# shttpd LIBS
#
shttpd_LIBS += \
$${tatalas_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core

