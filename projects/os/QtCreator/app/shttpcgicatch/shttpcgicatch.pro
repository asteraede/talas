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
#   File: shttpcgicatch.pro
#
# Author: $author$
#   Date: 11/16/2022
#
# os specific QtCreator project .pro file for framework tatalas executable shttpcgicatch
########################################################################
#
# Debug: tatalas/build/os/QtCreator/Debug/bin/shttpcgicatch
# Release: tatalas/build/os/QtCreator/Release/bin/shttpcgicatch
# Profile: tatalas/build/os/QtCreator/Profile/bin/shttpcgicatch
#
include(../../../../../build/QtCreator/tatalas.pri)
include(../../../../QtCreator/tatalas.pri)
include(../../tatalas.pri)
include(../../../../QtCreator/app/shttpcgicatch/shttpcgicatch.pri)

TARGET = $${shttpcgicatch_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${shttpcgicatch_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${shttpcgicatch_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${shttpcgicatch_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${shttpcgicatch_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${shttpcgicatch_HEADERS} \
$${shttpcgicatch_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${shttpcgicatch_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${shttpcgicatch_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${shttpcgicatch_LIBS} \
$${FRAMEWORKS} \

########################################################################

