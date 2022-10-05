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
///   File: public_key.cpp
///
/// Author: $author$
///   Date: 2/10/2022
///////////////////////////////////////////////////////////////////////
#include "xos/protocol/tls/rsa/bn/public_key.hpp"

#if !defined(XOS_PROTOCOL_TLS_RSA_BN_PUBLIC_KEY_INSTANCE)
///#define XOS_PROTOCOL_TLS_RSA_BN_PUBLIC_KEY_INSTANCE
#endif /// !defined(XOS_PROTOCOL_TLS_RSA_BN_PUBLIC_KEY_INSTANCE)

namespace xos {
namespace protocol {
namespace tls {
namespace rsa {
namespace bn {

///  Class: public_keyt
#if defined(XOS_PROTOCOL_TLS_RSA_BN_PUBLIC_KEY_INSTANCE)
static public_key the_public_key;
#endif /// defined(XOS_PROTOCOL_TLS_RSA_BN_PUBLIC_KEY_INSTANCE)


} /// namespace bn
} /// namespace rsa
} /// namespace tls
} /// namespace protocol
} /// namespace xos
