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
///   Date: 11/11/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_HPP

#include "xos/app/console/network/sockets/protocol/shttp/server/main_opt.hpp"
#include "xos/protocol/sttp/server/output.hpp"
#include "xos/protocol/http/text/sttp/content/type.hpp"
#include "xos/protocol/http/text/content.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace protocol {
namespace shttp {
namespace server {

/// class maint
template 
<class TExtends = xos::app::console::network::sockets::protocol::shttp::server::main_optt<>, 
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

    typedef typename extends::request_method_t request_method_t;
    typedef typename extends::request_t request_t;

    typedef typename extends::response_status_t response_status_t;
    typedef typename extends::response_t response_t;

    typedef typename extends::content_t content_t;
    typedef xos::protocol::http::text::content text_content_t;
    typedef xos::protocol::http::text::sttp::content::type sttp_content_type_t;

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

    /// ...respond_run
    virtual int this_respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::respond_run(argc, argv, env))) {
        } else {
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...process_response_to_any...
    virtual int process_response_to_any
    (writer_t& writer, response_t& response, request_t& request, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool processed_response_to_any = false;
        size_t length = 0;
        const char_t* chars = 0;

        if ((chars = request.content_type_chars(length))) {
            const string_t content_type(chars, length);
            const sttp_content_type_t sttp_content_type;

            LOGGER_IS_LOGGED_INFO("...(chars = request.content_type_chars(length = " << unsigned_to_string(length) << "))");
            LOGGER_IS_LOGGED_INFO("sttp_content_type.is_equal(\"" << content_type << "\")...");
            if ((sttp_content_type.is_equal(content_type))) {
                const content_t& request_content = this->request_content();

                LOGGER_IS_LOGGED_INFO("...sttp_content_type.is_equal(\"" << content_type << "\")");
                LOGGER_IS_LOGGED_INFO("(chars = request_content.has_chars(length))...");
                if ((chars = request_content.has_chars(length))) {
                    output_t& output = this->output();
                    const bool old_verbose_output = output.verbose_output(), 
                               verbose_output = this->verbose_output();

                    LOGGER_IS_LOGGED_INFO("...(chars = request_content.has_chars(length = " << unsigned_to_string(length) << "))");
                    output.set_verbose_output(verbose_output);
                    LOGGER_IS_LOGGED_INFO("!(err = output.on_set_client_hello_option(chars, length))...");
                    if (!(err = output.on_set_client_hello_option(chars, length))) {
                        string_t& content_string = this->content_string();
                        string_output_t string_output(content_string);
                        output_to_t* old_output = output.set_output_to(&string_output);

                        LOGGER_IS_LOGGED_INFO("...!(err = output.on_set_client_hello_option(chars, length))");
                        content_string.clear();
                        LOGGER_IS_LOGGED_INFO("!(err = output.output_client_hello_messages())...");
                        if (!(err = output.output_client_hello_messages())) {
                            LOGGER_IS_LOGGED_INFO("...!(err = output.output_client_hello_messages())");
                            LOGGER_IS_LOGGED_INFO("(chars = content_string.has_chars(length))...");
                            if ((chars = content_string.has_chars(length))) {
                                LOGGER_IS_LOGGED_INFO("...(chars = content_string.has_chars(length = " << unsigned_to_string(length) << "))");
                                this->set_response_content_type(sttp_content_type);
                                this->set_response_content(chars, length);
                                processed_response_to_any = true;
                            } else {
                                LOGGER_IS_LOGGED_ERROR("...failed on (chars = content_string.has_chars(length))");
                            }
                        } else {
                            LOGGER_IS_LOGGED_ERROR("...failed on !(" << signed_to_string(err) << " = output.output_client_hello_messages())");
                        }
                        output.set_output_to(old_output);
                    } else {
                        LOGGER_IS_LOGGED_ERROR("...failed on !(" << signed_to_string(err) << " = output.on_set_client_hello_option(chars, length))");
                    }
                    output.set_verbose_output(old_verbose_output);
                } else {
                    LOGGER_IS_LOGGED_ERROR("...failed on (chars = request_content.has_chars(length))");
                }
            }
        }
        if (!(processed_response_to_any)) {
            LOGGER_IS_LOGGED_INFO("extends::process_response_to_any(writer, response, request, reader, argc, argv, env)...");
            if (!(err = extends::process_response_to_any(writer, response, request, reader, argc, argv, env))) {
            } else {
            }
            LOGGER_IS_LOGGED_INFO("...extends::process_response_to_any(writer, response, request, reader, argc, argv, env)");
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
protected:
}; /// class maint
typedef maint<> main;

} /// namespace server
} /// namespace shttp
} /// namespace protocol
} /// namespace sockets
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_HPP
