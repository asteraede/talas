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
///   File: main.hpp
///
/// Author: $author$
///   Date: 11/10/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_CLIENT_MAIN_HPP

#include "xos/app/console/network/sockets/protocol/shttp/client/main_opt.hpp"
#include "xos/protocol/sttp/client/output.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace protocol {
namespace shttp {
namespace client {

/// class maint
template 
<class TExtends = xos::app::console::network::sockets::protocol::shttp::client::main_optt<>, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint(): run_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef typename extends::output_t output_t;
    typedef typename extends::output_to_t output_to_t;

    typedef typename extends::string_output_t string_output_t;
    typedef typename string_output_t::string_t string_output_string__t;

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

    ///////////////////////////////////////////////////////////////////////

    /// ...content_run
    virtual int this_content_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::content_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_content_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_content_run;
        return err;
    }
    /// ...content_type_run
    virtual int this_content_type_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::content_type_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_content_type_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_content_type_run;
        return err;
    }
    /// ...content_encoding_run
    virtual int this_content_encoding_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::content_encoding_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_content_encoding_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_content_encoding_run;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...request_run
    virtual int this_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::request_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_request_run;
        return err;
    }
    /// ...method_run
    virtual int this_method_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::method_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_method_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_method_run;
        return err;
    }
    /// ...parameter_run
    virtual int this_parameter_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::parameter_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_parameter_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_parameter_run;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...sockets_run
    virtual int this_sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::sockets_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_sockets_run;
        return err;
    }
    /// ...host_run
    virtual int this_host_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::host_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_host_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_host_run;
        return err;
    }
    /// ...port_run
    virtual int this_port_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::port_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_port_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_port_run;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...client_output_generate_hello_run
    virtual int client_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->content_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int client_output_generate_hello_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        const bool verbose_output = this->verbose_output();
        string_t& content_string = this->content_string();
        string_output_t string_output(content_string);
        const bool old_verbose_output = output.verbose_output();
        output_to_t* old_output = output.set_output_to(&string_output);

        content_string.clear();
        output.set_verbose_output(verbose_output);
        LOGGER_IS_LOGGED_INFO("output.output_generate_client_hello()...");
        if (!(err = output.output_generate_client_hello())) {
            const char_t* chars = 0; size_t length = 0;
            
            if ((chars = content_string.has_chars(length))) {
                LOGGER_IS_LOGGED_INFO("this->set_content(chars = \"" << chars << "\", length = " << unsigned_to_string(length) << ")...");
                this->set_request_content(chars, length);
                if (!(err = this->set_content_run(argc, argv, env))) {
                    if (!(err = this->content_run_set(argc, argv, env))) {
                    } else {
                    }
                } else {
                }
            } else {
                LOGGER_IS_LOGGED_ERROR("...failed on (chars = content_string.has_chars(length))");
            }
        } else {
            LOGGER_IS_LOGGED_ERROR("...failed on output.output_generate_client_hello()");
        }
        output.set_verbose_output(old_verbose_output);
        output.set_output_to(old_output);
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
protected:
}; /// class maint
typedef maint<> main;

} /// namespace client
} /// namespace shttp
} /// namespace protocol
} /// namespace sockets
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_CLIENT_MAIN_HPP
