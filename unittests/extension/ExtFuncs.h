#ifndef ZAPI_UNITTEST_BRIDGE_DUMMYEXT_FUNCS_H
#define ZAPI_UNITTEST_BRIDGE_DUMMYEXT_FUNCS_H
#include "zapi/ZendApi.h"

class Person;

namespace dummyext
{

using zapi::lang::Variant;
using zapi::lang::Parameters;
using zapi::lang::Extension;
using zapi::lang::Namespace;
using zapi::ds::StringVariant;
using zapi::ds::NumericVariant;

ZAPI_DECL_EXPORT Variant return_arg(Variant &value);
ZAPI_DECL_EXPORT void show_something();
ZAPI_DECL_EXPORT Variant get_name();
ZAPI_DECL_EXPORT void get_value_ref(NumericVariant &number);
ZAPI_DECL_EXPORT void passby_value(NumericVariant &number);
ZAPI_DECL_EXPORT void print_sum(NumericVariant argQuantity, ...);
ZAPI_DECL_EXPORT void print_name(const StringVariant &name);
ZAPI_DECL_EXPORT void print_name_and_age(const StringVariant &name, const NumericVariant &age);
ZAPI_DECL_EXPORT Variant calculate_sum(NumericVariant argQuantity, ...);
ZAPI_DECL_EXPORT Variant add_two_number(const NumericVariant &num1, const NumericVariant &num2);
ZAPI_DECL_EXPORT void say_hello(StringVariant &name);
ZAPI_DECL_EXPORT void register_funcs(Extension &extension);
ZAPI_DECL_EXPORT void register_ns_io(Namespace &io);
ZAPI_DECL_EXPORT void register_ns_zapi(Namespace &zapi);
ZAPI_DECL_EXPORT void register_const(Extension &extension);
ZAPI_DECL_EXPORT void register_cls(Extension &extension);
ZAPI_DECL_EXPORT void register_interfaces(Extension &extension);
ZAPI_DECL_EXPORT void register_ini(Extension &extension);

ZAPI_DECL_EXPORT void startup_handler();
ZAPI_DECL_EXPORT void shutdown_handler();
ZAPI_DECL_EXPORT void request_startup_handler();
ZAPI_DECL_EXPORT void request_shutdown_handler();
ZAPI_DECL_EXPORT void module_info_handler();
ZAPI_DECL_EXPORT void add_mhandler_info(const std::string &msg);
ZAPI_DECL_EXPORT Variant get_ext_handler_msgs();

} // dummyext

#endif // ZAPI_UNITTEST_BRIDGE_DUMMYEXT_FUNCS_H
