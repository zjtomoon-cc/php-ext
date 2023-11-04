--TEST--
Check if php_hello is loaded
--EXTENSIONS--
php_hello
--FILE--
<?php
echo 'The extension "php_hello" is available';
?>
--EXPECT--
The extension "php_hello" is available
