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
#   File: shttpb.pro
#
# Author: $author$
#   Date: 11/12/2022
#
# os specific QtCreator project .pro file for framework tatalas executable shttpb
########################################################################
#
# Debug: tatalas/build/os/QtCreator/Debug/bin/shttpb
# Release: tatalas/build/os/QtCreator/Release/bin/shttpb
# Profile: tatalas/build/os/QtCreator/Profile/bin/shttpb
#
include(../../../../../build/QtCreator/tatalas.pri)
include(../../../../QtCreator/tatalas.pri)
include(../../tatalas.pri)
include(../../../../QtCreator/app/shttpb/shttpb.pri)

TARGET = $${shttpb_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${shttpb_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${shttpb_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${shttpb_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${shttpb_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${shttpb_HEADERS} \
$${shttpb_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${shttpb_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${shttpb_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${shttpb_LIBS} \
$${FRAMEWORKS} \

########################################################################

