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
#   File: shttpcgi.pri
#
# Author: $author$
#   Date: 11/16/2022
#
# generic QtCreator project .pri file for framework tatalas executable shttpcgi
########################################################################

########################################################################
# shttpcgi

# shttpcgi TARGET
#
shttpcgi_TARGET = shttpcgi

# shttpcgi INCLUDEPATH
#
shttpcgi_INCLUDEPATH += \
$${tatalas_INCLUDEPATH} \

# shttpcgi DEFINES
#
shttpcgi_DEFINES += \
$${tatalas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# shttpcgi OBJECTIVE_HEADERS
#
#shttpcgi_OBJECTIVE_HEADERS += \
#$${TATALAS_SRC}/xos/app/console/network/protocol/shttp/cgi/main.hh \

# shttpcgi OBJECTIVE_SOURCES
#
#shttpcgi_OBJECTIVE_SOURCES += \
#$${TATALAS_SRC}/xos/app/console/network/protocol/shttp/cgi/main.mm \

########################################################################
# shttpcgi HEADERS
#
shttpcgi_HEADERS += \
$${TATALAS_SRC}/xos/protocol/http/text/sttp/content/type.hpp \
\
$${TATALAS_SRC}/xos/app/console/network/protocol/shttp/cgi/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/network/protocol/shttp/cgi/main.hpp \

# shttpcgi SOURCES
#
shttpcgi_SOURCES += \
$${TATALAS_SRC}/xos/protocol/http/text/sttp/content/type.cpp \
\
$${TATALAS_SRC}/xos/app/console/network/protocol/shttp/cgi/main_opt.cpp \
$${TATALAS_SRC}/xos/app/console/network/protocol/shttp/cgi/main.cpp \

########################################################################
# shttpcgi FRAMEWORKS
#
shttpcgi_FRAMEWORKS += \
$${tatalas_rsa_FRAMEWORKS} \

# shttpcgi LIBS
#
shttpcgi_LIBS += \
$${tatalas_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core

