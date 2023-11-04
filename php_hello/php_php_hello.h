/* php_hello extension for PHP */

#ifndef PHP_PHP_HELLO_H
# define PHP_PHP_HELLO_H

extern zend_module_entry php_hello_module_entry;
# define phpext_php_hello_ptr &php_hello_module_entry

# define PHP_PHP_HELLO_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_PHP_HELLO)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_PHP_HELLO_H */
