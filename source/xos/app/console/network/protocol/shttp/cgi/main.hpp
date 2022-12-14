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
#ifndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_SHTTP_CGI_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_PROTOCOL_SHTTP_CGI_MAIN_HPP

#include "xos/app/console/network/protocol/shttp/cgi/main_opt.hpp"
#include "xos/protocol/sttp/server/output.hpp"
#include "xos/io/string/output.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace protocol {
namespace shttp {
namespace cgi {

/// class maint
template 
<class TOutput = xos::protocol::sttp::server::output, 
 class TStringOutput = xos::io::string::output,
 class TExtends = xos::app::console::network::protocol::shttp::cgi::main_opt, 
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
    maint()
    : run_(0), 
      client_key_exchange_only_(false), 
      verbose_output_(false) {
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

    typedef typename extends::file_reader_t file_reader_t;
    typedef typename extends::file_writer_t file_writer_t;

    typedef typename extends::this_reader_t this_reader_t;
    typedef typename extends::this_writer_t this_writer_t;

    typedef typename extends::text_content_t text_content_t;
    typedef typename extends::text_content_type_t text_content_type_t;
    typedef typename extends::sttp_content_type_t sttp_content_type_t;
    typedef typename extends::content_reader_t content_reader_t;
    typedef typename extends::environment_value_t environment_value_t;
    enum {
        CONTENT_LENGTH = extends::CONTENT_LENGTH,
        CONTENT_TYPE = extends::CONTENT_TYPE
    };

    typedef TOutput output_t;
    typedef typename output_t::output_to_t output_to_t;
    typedef TStringOutput string_output_t;
    typedef typename string_output_t::string_t output_string_t;

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

    /// ...console_gateway_out_run
    int (derives::*console_gateway_out_run_)(int argc, char_t** argv, char_t** env);
    virtual int console_gateway_out_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (console_gateway_out_run_) {
            err = (this->*console_gateway_out_run_)(argc, argv, env);
        } else {
            err = default_console_gateway_out_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_console_gateway_out_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = extends::console_gateway_out_run(argc, argv, env);
        return err;
    }
    virtual int failed_text_content_console_gateway_out_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        this->outln("failed_text_content_console_gateway_out_run()...");
        err = default_console_gateway_out_run(argc, argv, env);
        return err;
    }
    virtual int text_content_console_gateway_out_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        text_content_t& text_content = this->text_content();
        const char_t* chars = 0; size_t length = 0;

        if ((chars = text_content.has_chars(length))) {
            output_t& output = this->output();
            const bool old_verbose_output = output.verbose_output(), 
                       verbose_output = this->verbose_output();

            output.set_verbose_output(verbose_output);
            if (!(err = output.on_set_client_hello_option(chars, length))) {
                output_string_t& output_string = this->output_string();
                string_output_t string_output(output_string);
                output_to_t* old_output = output.set_output_to(&string_output);

                err = output.output_client_hello_messages();
                output.set_output_to(old_output);
                if (!(err)) {
                    if ((chars = output_string.has_chars(length))) {
                        const string_t& matched_content_type = this->matched_content_type_form_field_value();
                        const char_t* matched_chars = 0;

                        if ((matched_chars = matched_content_type.has_chars())) {
                            this->set_content_type(matched_chars);
                        }
                        this->out(chars, length);
                    } else {
                        err = failed_text_content_console_gateway_out_run(argc, argv, env);
                    }
                }
            } else {
            }
            output.set_verbose_output(old_verbose_output);
        }
        return err;
    }
    virtual int set_text_content_console_gateway_out_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        console_gateway_out_run_ = &derives::text_content_console_gateway_out_run;
        return err;
    }

    /// get_form_fields
    virtual int get_form_fields(int argc, char_t** argv, char_t** env) {
        int err = 0;

        if (!(err = extends::get_form_fields(argc, argv, env))) {

            if (!(err = set_output_from_query_form_fields(argc, argv, env))) {
                output_t& output = this->output();
                size_t content_length = 0;
                const char_t *setting = 0;
                environment_value_t *value = 0;
                
                if ((setting = (this->environment_.setting_of(value, CONTENT_LENGTH))) && (setting[0])) {
                    content_length = value->to_unsigned();
                }
                if ((setting = (this->environment_.setting_of(value, CONTENT_TYPE))) && (setting[0])) {

                    if ((matches_content_type_form_field_value(setting))) {
                        this_reader_t this_reader(*this);
                        content_reader_t content_reader(this_reader, content_length);
                        
                        if (!(err = all_read_text_content(content_reader, argc, argv, env))) {
                            text_content_t& text_content = this->text_content();
                            const char_t* chars = 0; size_t length = 0;
                            
                            if ((chars = text_content.has_chars(length)) && (content_length <= length)) {
                                if (!(err = set_text_content_console_gateway_out_run(argc, argv, env))) {
                                }
                            }
                        }
                    }
                }
            }
        }
        return err;
    }

    /// read_form_fields
    virtual int read_form_fields(int argc, char_t** argv, char_t** env) {
        int err = 0;

        if (!(err = extends::read_form_fields(argc, argv, env))) {

            if (!(err = set_output_from_query_form_fields(argc, argv, env))) {
                output_t& output = this->output();
                size_t content_length = 0;
                const char_t *setting = 0;
                environment_value_t *value = 0;

                if ((setting = (this->environment_.setting_of(value, CONTENT_LENGTH))) && (setting[0])) {
                    content_length = value->to_unsigned();
                }
                if ((setting = (this->environment_.setting_of(value, CONTENT_TYPE))) && (setting[0])) {

                    if ((matches_content_type_form_field_value(setting))) {
                        const char_t *name = 0, *pattern = 0;
                        
                        if ((name = this->input_file_name_.has_chars()) 
                            && (pattern = this->input_file_pattern_.has_chars())) {
                            file_reader_t file;
                            
                            if ((file.open_safe(name, pattern))) {
                                content_reader_t content_reader(file, content_length);
                                
                                err = all_read_text_content(content_reader, argc, argv, env);
                                file.close();
                                if (!(err)) {
                                    text_content_t& text_content = this->text_content();
                                    const char_t* chars = 0; size_t length = 0;
                                    
                                    if ((chars = text_content.has_chars(length)) && (content_length <= length)) {
                                        if (!(err = set_text_content_console_gateway_out_run(argc, argv, env))) {
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return err;
    }

    /// set_output_from_query_form_fields
    virtual int set_output_from_query_form_fields(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        const char_t *setting = 0;
        environment_value_t *value = 0;
        int unequal = 0;

        if ((setting = this->first_query_field_named_chars("only"))) {
            string_t only_setting(setting);
            if ((unequal = only_setting.compare("no"))) {
                bool& client_key_exchange_only = this->client_key_exchange_only();
                client_key_exchange_only = true;
            }
        }
        if ((setting = this->first_query_field_named_chars("verbose"))) {
            string_t verbose_setting(setting);
            if ((unequal = verbose_setting.compare("no"))) {
                bool& verbose_output = this->verbose_output();
                verbose_output = true;
            }
        }
        if ((setting = this->first_query_field_named_chars("file"))) {
            string_t file_setting(setting);
            if ((unequal = file_setting.compare("no"))) {
                output.set_file_on_set_literals();
            }
        }
        if ((setting = this->first_query_field_named_chars("pair"))) {
            output.on_set_server_rsa_key_pair_option(setting);
        }
        if ((setting = this->first_query_field_named_chars("hello"))) {
            output.on_set_server_hello_message_option(setting);
        }
        return err;
    }

    /// ...read_text_content
    virtual int read_text_content(reader_t &reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        text_content_t& text_content = this->text_content();
        ssize_t count = 0;
        count = text_content.read(reader);
        return err;
    }
    virtual int before_read_text_content(reader_t &reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_read_text_content(reader_t &reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_read_text_content(reader_t &reader, int argc, char_t** argv, char_t** env) {
        int err = 0, err2 = 0;
        if (!(err = before_read_text_content(reader, argc, argv, env))) {
            err = read_text_content(reader, argc, argv, env);
            if ((err2 = after_read_text_content(reader, argc, argv, env))) {
                if ((!err)) err = err2;
            }
        }
        return err;
    }

    /// matches_content_type_form_field_value
    virtual bool matches_content_type_form_field_value(const char_t *setting) const {
        bool matches = false;
        if ((setting) && (setting[0])) {
            sttp_content_type_t sttp_content_type;
            if ((matches = sttp_content_type.is_equal(setting))) {
                matched_content_type_form_field_value().assign(setting);
            } else {
            }
        }
        return matches;
    }
    virtual string_t& matched_content_type_form_field_value() const {
        return (string_t&)matched_content_type_form_field_value_;
    }

    /// ...output / ...content
    virtual bool& client_key_exchange_only() const {
        return (bool&)client_key_exchange_only_;
    }
    virtual bool& verbose_output() const {
        return (bool&)verbose_output_;
    }
    virtual output_t& output() const {
        return (output_t&)output_;
    }
    virtual output_string_t& output_string() const {
        return (output_string_t&)output_string_;
    }
    virtual text_content_t& text_content() const {
        return (text_content_t&)text_content_;
    }

protected:
    bool client_key_exchange_only_, verbose_output_;
    output_t output_;
    output_string_t output_string_;
    text_content_t text_content_;
    string_t matched_content_type_form_field_value_;
}; /// class maint
typedef maint<> main;

} /// namespace cgi
} /// namespace shttp
} /// namespace protocol
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_SHTTP_CGI_MAIN_HPP
