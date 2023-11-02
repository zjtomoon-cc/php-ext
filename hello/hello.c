/**
*
 * https://blog.csdn.net/caohao0591/article/details/82191283
*/
#include<main/php.h>

PHP_FUNCTION(hello_world) {
    RETURN_STRING("Hello, world!", 1);
}

ZEND_BEGIN_ARG_INFO(arginfo_hello_world, 0)
ZEND_END_ARG_INFO()

const zend_function_entry php_extension_functions[] = {
        PHP_FE(hello_world, arginfo_hello_world)
        PHP_FE_END
};

ZEND_GET_MODULE(php_extension)