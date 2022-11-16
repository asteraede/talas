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
#   File: shttpb.pri
#
# Author: $author$
#   Date: 11/12/2022
#
# generic QtCreator project .pri file for framework tatalas executable shttpb
########################################################################

########################################################################
# shttpb

# shttpb TARGET
#
shttpb_TARGET = shttpb

# shttpb INCLUDEPATH
#
shttpb_INCLUDEPATH += \
$${tatalas_INCLUDEPATH} \

# shttpb DEFINES
#
shttpb_DEFINES += \
$${tatalas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# shttpb OBJECTIVE_HEADERS
#
#shttpb_OBJECTIVE_HEADERS += \
#$${TATALAS_SRC}/xos/app/console/shttpb/main.hh \

# shttpb OBJECTIVE_SOURCES
#
#shttpb_OBJECTIVE_SOURCES += \
#$${TATALAS_SRC}/xos/app/console/shttpb/main.mm \

########################################################################
# shttpb HEADERS
#
shttpb_HEADERS += \
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

# shttpb SOURCES
#
shttpb_SOURCES += \
$${TATALAS_SRC}/xos/app/console/protocol/shttp/client/main_opt.cpp \
$${TATALAS_SRC}/xos/app/console/protocol/shttp/client/main.cpp \

########################################################################
# shttpb FRAMEWORKS
#
shttpb_FRAMEWORKS += \
$${tatalas_rsa_FRAMEWORKS} \

# shttpb LIBS
#
shttpb_LIBS += \
$${tatalas_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core

