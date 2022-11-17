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
///   Date: 11/16/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_SHTTP_SERVER_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_SHTTP_SERVER_MAIN_HPP

#include "xos/app/console/protocol/shttp/server/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace shttp {
namespace server {

/// class maint
template 
<class TExtends = xos::app::console::protocol::shttp::server::main_optt<>, 
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

    typedef typename extends::string_output_t string_output_t;
    typedef typename string_output_t::string_t string_output_string__t;

    typedef typename extends::output_t output_t;
    typedef typename output_t::output_to_t output_to_t;

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
    int (derives::*this_content_run_)(int argc, char_t** argv, char_t** env);
    virtual int this_content_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (this_content_run_) {
            err = (this->*this_content_run_)(argc, argv, env);
        } else {
            err = default_extends_content_run(argc, argv, env);
        }
        return err;
    }
    int (derives::*extends_content_run_)(int argc, char_t** argv, char_t** env);
    virtual int extends_content_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (extends_content_run_) {
            err = (this->*extends_content_run_)(argc, argv, env);
        } else {
            err = default_extends_content_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_extends_content_run(int argc, char_t** argv, char_t** env) {
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
    virtual int output_client_hello_content_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::output_client_hello_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_output_client_hello_content_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        this_content_run_ = &derives::output_client_hello_content_run;
        return err;
    }
    virtual int output_client_hello_content_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...respond_run
    int (derives::*this_respond_run_)(int argc, char_t** argv, char_t** env);
    virtual int this_respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (this_respond_run_) {
            err = (this->*this_respond_run_)(argc, argv, env);
        } else {
            err = default_extends_respond_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_extends_respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::respond_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_respond_run;
        return err;
    }
    virtual int output_client_hello_respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::output_client_hello_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_output_client_hello_respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        extends_content_run_ = &derives::default_extends_respond_run;
        this_respond_run_ = &derives::output_client_hello_respond_run;
        return err;
    }
    virtual int output_client_hello_respond_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...server_output_client_hello_run
    int (derives::*server_output_client_hello_run_)(int argc, char_t** argv, char_t** env);
    virtual int server_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (server_output_client_hello_run_) {
            err = (this->*server_output_client_hello_run_)(argc, argv, env);
        } else {
            err = default_server_output_client_hello_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_server_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_client_hello_messages();
        return err;
    }
    virtual int content_server_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        const bool verbose_output = this->verbose_output();
        string_t& content_string = this->content_string();
        string_output_t string_output(content_string);
        const bool old_verbose_output = output.verbose_output();
        output_to_t* old_output = output.set_output_to(&string_output);

        content_string.clear();
        output.set_verbose_output(verbose_output);
        LOGGER_IS_LOGGED_INFO("output.output_client_hello_messages()...");
        if (!(err = output.output_client_hello_messages())) {
            const char_t* chars = 0; size_t length = 0;
            
            if ((chars = content_string.has_chars(length))) {
                LOGGER_IS_LOGGED_INFO("this->set_response_content(chars = \"" << chars << "\", length = " << unsigned_to_string(length) << ")...");
                this->set_response_content(chars, length);
                if (!(err = extends_content_run(argc, argv, env))) {
                } else {
                }
            } else {
                LOGGER_IS_LOGGED_ERROR("...failed on (chars = content_string.has_chars(length))");
            }
        } else {
            LOGGER_IS_LOGGED_ERROR("...failed on output.output_client_hello_messages()");
        }
        output.set_verbose_output(old_verbose_output);
        output.set_output_to(old_output);
        return err;
    }
    virtual int set_content_server_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        server_output_client_hello_run_ = &derives::content_server_output_client_hello_run;
        return err;
    }
    virtual int content_server_output_client_hello_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...server_output_server_hello_run
    int (derives::*server_output_server_hello_run_)(int argc, char_t** argv, char_t** env);
    virtual int server_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (server_output_server_hello_run_) {
            err = (this->*server_output_server_hello_run_)(argc, argv, env);
        } else {
            err = default_server_output_server_hello_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_server_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_server_hello_messages();
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...server_client_hello_option...
    virtual int on_set_server_client_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            output_t& output = this->output(); 
            LOGGER_IS_LOGGED_INFO("output.on_set_client_hello_option(optarg)...");
            if (!(err = output.on_set_client_hello_option(optarg))) {
                if (!(err = set_content_server_output_client_hello_run(argc, argv, env))) {
                    if (!(err = content_server_output_client_hello_run_set(argc, argv, env))) {
                        if (!(err = set_output_client_hello_respond_run(argc, argv, env))) {
                            if (!(err = output_client_hello_respond_run_set(argc, argv, env))) {
                                if (!(err = set_output_client_hello_content_run(argc, argv, env))) {
                                    if (!(err = output_client_hello_content_run_set(argc, argv, env))) {
                                    } else {
                                    }
                                } else {
                                }
                            } else {
                            }
                        } else {
                        }
                    } else {
                    }
                } else {
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on output.on_set_client_hello_option(optarg)");
            }
        } else {
        }
        return err;
    }

protected:
}; /// class maint
typedef maint<> main;

} /// namespace server
} /// namespace shttp
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_SHTTP_SERVER_MAIN_HPP
