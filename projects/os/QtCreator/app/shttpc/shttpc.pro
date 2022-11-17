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
#   File: shttpc.pro
#
# Author: $author$
#   Date: 11/17/2022
#
# os specific QtCreator project .pro file for framework tatalas executable shttpc
########################################################################
#
# Debug: tatalas/build/os/QtCreator/Debug/bin/shttpc
# Release: tatalas/build/os/QtCreator/Release/bin/shttpc
# Profile: tatalas/build/os/QtCreator/Profile/bin/shttpc
#
include(../../../../../build/QtCreator/tatalas.pri)
include(../../../../QtCreator/tatalas.pri)
include(../../tatalas.pri)
include(../../../../QtCreator/app/shttpc/shttpc.pri)

TARGET = $${shttpc_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${shttpc_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${shttpc_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${shttpc_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${shttpc_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${shttpc_HEADERS} \
$${shttpc_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${shttpc_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${shttpc_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${shttpc_LIBS} \
$${FRAMEWORKS} \

########################################################################

