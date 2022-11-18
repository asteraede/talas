///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2022 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 11/10/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_BASE_MAIN_OPT_HPP

#include "xos/app/console/network/sockets/protocol/http/base/main.hpp"
#include "xos/app/console/network/sockets/protocol/http/client/main.hpp"
#include "xos/app/console/network/sockets/protocol/http/server/main.hpp"

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPT "hello-message"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTARG "[string]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTUSE "hello message"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTVAL_S "H::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTVAL_C 'H'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPT "client-hello"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTARG "[string]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTUSE "client hello"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTVAL_S "C::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTVAL_C 'C'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPT "server-hello"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTARG "[string]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTUSE "server hello"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTVAL_S "S::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPT "client-key-exchange-only"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTARG ""
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTUSE "expect client key exchange only"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTVAL_S "Y"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTVAL_C 'Y'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPT "server-rsa-key-pair"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTARG "[string]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTUSE "server rsa key pair"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTVAL_S "K::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTVAL_C 'K'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPT "client-rsa-key-pair"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTARG "[string]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTUSE "client rsa key pair"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTVAL_S "N::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTVAL_C 'N'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPT "pseudo-random-secret"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTARG "[string]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTUSE "pseudo random secret"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTVAL_S "R::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPT "pseudo-random-seed"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTARG "[string]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTUSE "pseudo random seed"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTVAL_S "E::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTVAL_C 'E'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPT "master-secret-seed"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTARG "[string]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTUSE "master secret seed"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTVAL_S "M::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTVAL_C 'M'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPT "key-expansion-seed"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTARG "[string]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTUSE "key expansion seed"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTVAL_S "X::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTVAL_C 'X'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////

#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPT "verbose"
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTUSE "verbose output"
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTVAL_S "v"
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTVAL_C 'v'
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPT "quiet"
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTUSE "quiet output"
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTVAL_S "q"
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTVAL_C 'q'
#define XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTVAL_S \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTION \

///////////////////////////////////////////////////////////////////////
#if defined(XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_CLIENT_MAIN_OPT_HPP)
///
/// client
/// ... 
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_MAIN_OPTIONS_CHARS_EXTEND \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_MAIN_OPTIONS_OPTIONS_EXTEND \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_CHARS \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_CLIENT_MAIN_LOGGING_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_OPTIONS \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_CLIENT_MAIN_LOGGING_OPTIONS_OPTIONS \
/// ...
/// client
/// 
#else /// defined(XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_CLIENT_MAIN_OPT_HPP)
#if defined(XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPT_HPP)
///
/// server
/// ... 
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_MAIN_OPTIONS_CHARS_EXTEND \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_MAIN_OPTIONS_OPTIONS_EXTEND \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_CHARS \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_SERVER_MAIN_LOGGING_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_OPTIONS \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_SERVER_MAIN_LOGGING_OPTIONS_OPTIONS \
/// ...
/// server
/// 
#else /// defined(XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPT_HPP)
///
/// base
/// ...
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_MAIN_OPTIONS_CHARS_EXTEND \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_MAIN_OPTIONS_OPTIONS_EXTEND \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_CHARS \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_BASE_MAIN_LOGGING_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_OPTIONS \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_BASE_MAIN_LOGGING_OPTIONS_OPTIONS \
/// ...
/// base
/// 
#endif /// defined(XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPT_HPP)
#endif /// defined(XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_CLIENT_MAIN_OPT_HPP)

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_WHICH_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_BASE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_BASE_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace protocol {
namespace shttp {
namespace base {

/// class main_optt
template 
<class TExtends = xos::app::console::network::sockets::protocol::http::base::maint
 <xos::app::console::network::sockets::protocol::http::base::main_optt
 <xos::app::console::network::sockets::protocol::xttp::base::maint
 <xos::app::console::network::sockets::protocol::xttp::base::main_optt
 <xos::app::console::protocol::http::base::maint<xos::app::console::protocol::http::base::main_optt
 <xos::app::console::protocol::xttp::base::maint<xos::app::console::protocol::xttp::base::main_optt
 <xos::app::console::network::sockets::base::maint
 <xos::app::console::network::sockets::base::main_optt<> > > > > > > > > >, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// ...client_output_generate_hello_run
    virtual int client_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_client_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_client_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_client_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_client_output_generate_hello_run(argc, argv, env))) {
            int err2 = 0;
            err = client_output_generate_hello_run(argc, argv, env);
            if ((err2 = after_client_output_generate_hello_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...server_output_generate_hello_run
    virtual int server_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_server_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_server_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_server_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_server_output_generate_hello_run(argc, argv, env))) {
            int err2 = 0;
            err = server_output_generate_hello_run(argc, argv, env);
            if ((err2 = after_server_output_generate_hello_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...output_generate_hello_run
    virtual int output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_client_output_generate_hello_run(argc, argv, env);
        return err;
    }
    virtual int before_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_generate_hello_run(argc, argv, env))) {
            int err2 = 0;
            err = output_generate_hello_run(argc, argv, env);
            if ((err2 = after_output_generate_hello_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_generate_hello_run;
        return err;
    }
    virtual int on_set_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int output_generate_hello_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...client_output_client_hello_run
    virtual int client_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_client_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_client_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_client_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_client_output_client_hello_run(argc, argv, env))) {
            int err2 = 0;
            err = client_output_client_hello_run(argc, argv, env);
            if ((err2 = after_client_output_client_hello_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...server_output_client_hello_run
    virtual int server_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_server_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_server_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_server_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_server_output_client_hello_run(argc, argv, env))) {
            int err2 = 0;
            err = server_output_client_hello_run(argc, argv, env);
            if ((err2 = after_server_output_client_hello_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...output_client_hello_run
    virtual int output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_client_output_client_hello_run(argc, argv, env);
        return err;
    }
    virtual int before_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_client_hello_run(argc, argv, env))) {
            int err2 = 0;
            err = output_client_hello_run(argc, argv, env);
            if ((err2 = after_output_client_hello_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_client_hello_run;
        return err;
    }
    virtual int on_set_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    
    /// ...client_output_server_hello_run
    virtual int client_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_client_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_client_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_client_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_client_output_server_hello_run(argc, argv, env))) {
            int err2 = 0;
            err = client_output_server_hello_run(argc, argv, env);
            if ((err2 = after_client_output_server_hello_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...server_output_server_hello_run
    virtual int server_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_server_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_server_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_server_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_server_output_server_hello_run(argc, argv, env))) {
            int err2 = 0;
            err = server_output_server_hello_run(argc, argv, env);
            if ((err2 = after_server_output_server_hello_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...output_server_hello_run
    virtual int output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_client_output_server_hello_run(argc, argv, env);
        return err;
    }
    virtual int before_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_server_hello_run(argc, argv, env))) {
            int err2 = 0;
            err = output_server_hello_run(argc, argv, env);
            if ((err2 = after_output_server_hello_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_server_hello_run;
        return err;
    }
    virtual int on_set_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...client_output_hello_message_run
    virtual int client_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_client_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_client_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_client_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_client_output_hello_message_run(argc, argv, env))) {
            int err2 = 0;
            err = client_output_hello_message_run(argc, argv, env);
            if ((err2 = after_client_output_hello_message_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...server_output_hello_message_run
    virtual int server_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_server_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_server_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_server_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_server_output_hello_message_run(argc, argv, env))) {
            int err2 = 0;
            err = server_output_hello_message_run(argc, argv, env);
            if ((err2 = after_server_output_hello_message_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...output_hello_message_run
    virtual int output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_client_output_hello_message_run(argc, argv, env);
        return err;
    }
    virtual int before_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_hello_message_run(argc, argv, env))) {
            int err2 = 0;
            err = output_hello_message_run(argc, argv, env);
            if ((err2 = after_output_hello_message_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_hello_message_run;
        return err;
    }
    virtual int on_set_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int output_hello_message_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...output_client_key_pair_run
    int (derives::*output_client_key_pair_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_client_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_client_key_pair_run_) {
            err = (this->*output_client_key_pair_run_)(argc, argv, env);
        } else {
            err = default_output_client_key_pair_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_client_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_client_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_client_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_client_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_client_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = output_client_key_pair_run(argc, argv, env);
            if ((err2 = after_output_client_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_client_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_client_key_pair_run;
        return err;
    }

    /// ...output_server_key_pair_run
    int (derives::*output_server_key_pair_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_server_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_server_key_pair_run_) {
            err = (this->*output_server_key_pair_run_)(argc, argv, env);
        } else {
            err = default_output_server_key_pair_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_server_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_server_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_server_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_server_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_server_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = output_server_key_pair_run(argc, argv, env);
            if ((err2 = after_output_server_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_server_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_server_key_pair_run;
        return err;
    }

    /// ...output_pseudo_random_secret_run
    int (derives::*output_pseudo_random_secret_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_pseudo_random_secret_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_pseudo_random_secret_run_) {
            err = (this->*output_pseudo_random_secret_run_)(argc, argv, env);
        } else {
            err = default_output_pseudo_random_secret_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_pseudo_random_secret_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_pseudo_random_secret_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_pseudo_random_secret_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_pseudo_random_secret_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_pseudo_random_secret_run(argc, argv, env))) {
            int err2 = 0;
            err = output_pseudo_random_secret_run(argc, argv, env);
            if ((err2 = after_output_pseudo_random_secret_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_pseudo_random_secret_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_pseudo_random_secret_run;
        return err;
    }

    /// ...output_pseudo_random_seed_run
    int (derives::*output_pseudo_random_seed_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_pseudo_random_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_pseudo_random_seed_run_) {
            err = (this->*output_pseudo_random_seed_run_)(argc, argv, env);
        } else {
            err = default_output_pseudo_random_seed_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_pseudo_random_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_pseudo_random_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_pseudo_random_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_pseudo_random_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_pseudo_random_seed_run(argc, argv, env))) {
            int err2 = 0;
            err = output_pseudo_random_seed_run(argc, argv, env);
            if ((err2 = after_output_pseudo_random_seed_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_pseudo_random_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_pseudo_random_seed_run;
        return err;
    }

    /// ...output_master_secret_seed_run
    int (derives::*output_master_secret_seed_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_master_secret_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_master_secret_seed_run_) {
            err = (this->*output_master_secret_seed_run_)(argc, argv, env);
        } else {
            err = default_output_master_secret_seed_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_master_secret_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_master_secret_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_master_secret_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_master_secret_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_master_secret_seed_run(argc, argv, env))) {
            int err2 = 0;
            err = output_master_secret_seed_run(argc, argv, env);
            if ((err2 = after_output_master_secret_seed_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_master_secret_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_master_secret_seed_run;
        return err;
    }

    /// ...output_key_expansion_seed_run
    int (derives::*output_key_expansion_seed_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_key_expansion_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_key_expansion_seed_run_) {
            err = (this->*output_key_expansion_seed_run_)(argc, argv, env);
        } else {
            err = default_output_key_expansion_seed_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_key_expansion_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_key_expansion_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_key_expansion_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_key_expansion_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_key_expansion_seed_run(argc, argv, env))) {
            int err2 = 0;
            err = output_key_expansion_seed_run(argc, argv, env);
            if ((err2 = after_output_key_expansion_seed_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_key_expansion_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_key_expansion_seed_run;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...hello_message_option...
    virtual int on_set_hello_message_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_hello_message_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_hello_message_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_hello_message_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_hello_message_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_hello_message_run(argc, argv, env))) {
                        if (!(err = on_set_output_hello_message_run(argc, argv, env))) {
                            if (!(err = output_hello_message_run_set(argc, argv, env))) {
                            }
                        }
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = set_output_generate_hello_run(argc, argv, env))) {
                if (!(err = on_set_output_generate_hello_run(argc, argv, env))) {
                    if (!(err = output_generate_hello_run_set(argc, argv, env))) {
                    }
                }
            }
        }
        return err;
    }
    virtual const char_t* hello_message_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTARG;
        return chars;
    }

    /// ...client_hello_option...
    virtual int on_set_client_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_client_hello_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_client_hello_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_client_hello_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_client_hello_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_client_hello_run(argc, argv, env))) {
                        if (!(err = on_set_output_client_hello_run(argc, argv, env))) {
                        }
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = set_output_client_hello_run(argc, argv, env))) {
                if (!(err = on_set_output_client_hello_run(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual const char_t* client_hello_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTARG;
        return chars;
    }

    /// ...server_hello_option...
    virtual int on_set_server_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_server_hello_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_server_hello_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_server_hello_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_server_hello_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_server_hello_run(argc, argv, env))) {
                        if (!(err = on_set_output_server_hello_run(argc, argv, env))) {
                        }
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = set_output_server_hello_run(argc, argv, env))) {
                if (!(err = on_set_output_server_hello_run(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual const char_t* server_hello_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTARG;
        return chars;
    }

    /// ...client_key_exchange_only_option...
    virtual int on_set_client_key_exchange_only_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_client_key_exchange_only_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_client_key_exchange_only_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_client_key_exchange_only_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_client_key_exchange_only_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* client_key_exchange_only_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTARG;
        return chars;
    }

    /// ...server_rsa_key_pair_option...
    virtual int on_set_server_rsa_key_pair_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_server_rsa_key_pair_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_server_rsa_key_pair_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_server_rsa_key_pair_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_server_rsa_key_pair_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_server_key_pair_run(argc, argv, env))) {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = set_output_server_key_pair_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* server_rsa_key_pair_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTARG;
        return chars;
    }

    /// ...client_rsa_key_pair_option...
    virtual int on_set_client_rsa_key_pair_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_client_rsa_key_pair_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_client_rsa_key_pair_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_client_rsa_key_pair_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_client_rsa_key_pair_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_client_key_pair_run(argc, argv, env))) {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = set_output_client_key_pair_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* client_rsa_key_pair_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTARG;
        return chars;
    }

    /// ...pseudo_random_secret_option...
    virtual int on_set_pseudo_random_secret_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_pseudo_random_secret_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_pseudo_random_secret_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_pseudo_random_secret_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_pseudo_random_secret_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_pseudo_random_secret_run(argc, argv, env))) {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = set_output_pseudo_random_secret_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* pseudo_random_secret_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTARG;
        return chars;
    }

    /// ...pseudo_random_seed_option...
    virtual int on_set_pseudo_random_seed_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_pseudo_random_seed_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_pseudo_random_seed_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_pseudo_random_seed_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_pseudo_random_seed_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_pseudo_random_seed_run(argc, argv, env))) {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = set_output_pseudo_random_seed_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* pseudo_random_seed_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTARG;
        return chars;
    }

    /// ...master_secret_seed_option...
    virtual int on_set_master_secret_seed_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_master_secret_seed_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_master_secret_seed_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_master_secret_seed_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_master_secret_seed_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_master_secret_seed_run(argc, argv, env))) {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = set_output_master_secret_seed_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* master_secret_seed_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTARG;
        return chars;
    }

    /// ...key_expansion_seed_option...
    virtual int on_set_key_expansion_seed_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_key_expansion_seed_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_key_expansion_seed_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_key_expansion_seed_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_key_expansion_seed_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_key_expansion_seed_run(argc, argv, env))) {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = set_output_key_expansion_seed_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* key_expansion_seed_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_set_verbose_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_verbose_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_verbose_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_verbose_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_verbose_option_set(optarg, optind, argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* verbose_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_set_quiet_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_quiet_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_quiet_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_quiet_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_quiet_option_set(optarg, optind, argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* quiet_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTVAL_C:
            err = this->on_hello_message_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTVAL_C:
            err = this->on_client_hello_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTVAL_C:
            err = this->on_server_hello_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTVAL_C:
            err = this->on_client_key_exchange_only_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTVAL_C:
            err = this->on_server_rsa_key_pair_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTVAL_C:
            err = this->on_client_rsa_key_pair_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTVAL_C:
            err = this->on_pseudo_random_secret_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTVAL_C:
            err = this->on_pseudo_random_seed_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTVAL_C:
            err = this->on_master_secret_seed_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTVAL_C:
            err = this->on_key_expansion_seed_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTVAL_C:
            err = this->on_verbose_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTVAL_C:
            err = this->on_quiet_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HELLO_MESSAGE_OPTVAL_C:
            chars = this->hello_message_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_HELLO_OPTVAL_C:
            chars = this->client_hello_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_SERVER_HELLO_OPTVAL_C:
            chars = this->server_hello_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTVAL_C:
            chars = this->client_key_exchange_only_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_SERVER_RSA_KEY_PAIR_OPTVAL_C:
            chars = this->server_rsa_key_pair_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_CLIENT_RSA_KEY_PAIR_OPTVAL_C:
            chars = this->client_rsa_key_pair_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SECRET_OPTVAL_C:
            chars = this->pseudo_random_secret_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_PSEUDO_RANDOM_SEED_OPTVAL_C:
            chars = this->pseudo_random_seed_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_MASTER_SECRET_SEED_OPTVAL_C:
            chars = this->master_secret_seed_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_BASE_MAIN_KEY_EXPANSION_SEED_OPTVAL_C:
            chars = this->key_expansion_seed_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_VERBOSE_OPTVAL_C:
            chars = this->verbose_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_TEXT_BASE_MAIN_QUIET_OPTVAL_C:
            chars = this->quiet_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_BASE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace base
} /// namespace shttp
} /// namespace protocol
} /// namespace sockets
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_BASE_MAIN_OPT_HPP
