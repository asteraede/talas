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
///   Date: 11/13/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_SHTTP_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_SHTTP_BASE_MAIN_HPP

#include "xos/app/console/protocol/shttp/base/main_opt.hpp"
#include "xos/protocol/sttp/base/output.hpp"
#include "xos/io/string/output.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace shttp {
namespace base {

/// class maint
template 
<class TOutput = xos::protocol::sttp::base::output, 
 class TStringOutput = xos::io::string::output,
 class TExtends = xos::app::console::protocol::shttp::base::main_opt, 
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

    typedef TStringOutput string_output_t;
    typedef typename string_output_t::string_t string_output_string__t;

    typedef TOutput output_t;
    typedef typename output_t::output_to_t output_to_t;

    ///////////////////////////////////////////////////////////////////////

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

    /// ...client_output_generate_hello_run
    virtual int client_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        return err;
    }
    /// ...client_output_client_hello_run
    virtual int client_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        return err;
    }
    /// ...client_output_server_hello_run
    virtual int client_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        return err;
    }

    /// ...server_output_generate_hello_run
    virtual int server_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        return err;
    }
    /// ...server_output_client_hello_run
    virtual int server_output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        return err;
    }
    /// ...server_output_server_hello_run
    virtual int server_output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        return err;
    }

    /// ...output_..._hello_message_run
    virtual int client_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        return err;
    }
    virtual int server_output_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        return err;
    }

    /// ...output_..._key_pair_run
    virtual int default_output_server_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_server_key_pair();
        return err;
    }
    virtual int default_output_client_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_client_key_pair();
        return err;
    }

    /// ...output_..._secret_run / ...output_..._seed_run
    virtual int default_output_pseudo_random_secret_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_pseudo_random_secret();
        return err;
    }
    virtual int default_output_pseudo_random_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_pseudo_random_seed();
        return err;
    }
    virtual int default_output_master_secret_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_master_secret_seed();
        return err;
    }
    virtual int default_output_key_expansion_seed_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_key_expansion_seed();
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...client_generate_hello_option...
    virtual int on_set_client_generate_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    /// ...client_client_hello_option...
    virtual int on_set_client_client_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            output_t& output = this->output(); 
        } else {
        }
        return err;
    }
    /// ...client_server_hello_option...
    virtual int on_set_client_server_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            output_t& output = this->output(); 
        } else {
        }
        return err;
    }

    /// ...server_generate_hello_option...
    virtual int on_set_server_generate_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    /// ...server_client_hello_option...
    virtual int on_set_server_client_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            output_t& output = this->output(); 
        } else {
        }
        return err;
    }
    /// ...server_server_hello_option...
    virtual int on_set_server_server_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            output_t& output = this->output(); 
        } else {
        }
        return err;
    }

    /// on...option...
    virtual int on_quiet_option_set(const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = extends::on_quiet_option_set(optarg, optind, argc, argv, env))) {
            output_t& output = this->output(); 
            output.set_verbose_output(false);
        } else {
        }
        return err;
    }
    virtual int on_verbose_option_set(const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = extends::on_verbose_option_set(optarg, optind, argc, argv, env))) {
            output_t& output = this->output(); 
            output.set_verbose_output(true);
        } else {
        }
        return err;
    }

    /// ...file_input_option...
    virtual int on_file_input_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = extends::on_file_input_option_set(optarg, optind, argc, argv, env))) {
            output_t& output = this->output(); 
            output.set_file_on_set_literals();
        }
        return err;
    }

    /// ...string_input_option...
    virtual int on_string_input_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = extends::on_string_input_option_set(optarg, optind, argc, argv, env))) {
            output_t& output = this->output(); 
            output.set_string_on_set_literals();
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...output
    virtual output_t& output() const {
        return (output_t&)output_;
    }
    virtual bool& set_verbose_output(const bool& to) {
        verbose_output_ = to;
        return verbose_output_;
    }
    virtual bool& verbose_output() const {
        return (bool&)verbose_output_;
    }

    /// ...content...
    virtual string_t& content_string() const {
        return (string_t&)content_string_;
    }
    
protected:
    bool verbose_output_;
    output_t output_;
    string_t content_string_;
}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace shttp
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_SHTTP_BASE_MAIN_HPP
