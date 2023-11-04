--TEST--
test1() Basic test
--EXTENSIONS--
php_hello
--FILE--
<?php
$ret = test1();

var_dump($ret);
?>
--EXPECT--
The extension php_hello is loaded and working!
NULL
